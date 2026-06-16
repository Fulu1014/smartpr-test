def calculate_average(total, count):
    return total / count

def process_user_input():
    user_input = input("请输入一个数学表达式: ")
    result = eval(user_input)
    print(f"计算结果是: {result}")

if __name__ == "__main__":
    process_user_input()
