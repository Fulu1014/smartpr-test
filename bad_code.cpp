#include <iostream>

// 漏洞 1：没有做除数为 0 的检查
int divide(int a, int b) {
    return a / b;
}

int main() {
    // 漏洞 2：动态分配了内存，但是最后没有 delete，导致内存泄漏
    int* data = new int[100];

    for(int i = 0; i < 100; i++) {
        data[i] = i;
    }

    std::cout << "10 divided by 2 is: " << divide(10, 2) << std::endl;

    return 0;
}
