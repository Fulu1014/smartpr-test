#include <iostream>
#include <string>
#include <vector>
#include <thread>


using std::cout;
using std::cin;
using std::endl;


void test01(){
    int n = 5;
    int* a = new int[n]{1,2,3};
    for(int i = 0; i< n ;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    
    delete a;

}

int count = 0;

void unsafe_increment() {
    for (int i = 0; i < 100000; ++i) {
        count++;
    }
}
void test02() {
    const int thread_num = 10;
    std::vector<std::thread> threads;

    for (int i = 0; i < thread_num; ++i) {
        threads.emplace_back(unsafe_increment);
    }

    for (auto& t : threads) {
        t.join();
    }
    cout << "最终 count = " << count << endl;
}

void test03(){

    int* data = new int[100];

    data[0] = 123;
    cout << data[0] << endl;
    delete[] data;

    data[0] = 456;
    cout << data[0] << endl;

    int* ptr = nullptr;
    cout << *ptr << endl;
}

int main(){
    test01();
    test02();
    test03();
}
