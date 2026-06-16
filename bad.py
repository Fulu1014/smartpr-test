def calculate_average(total, count):
    # 逻辑漏洞：没有检查 count 是否为 0
    return total / count

def process_user_input():
    user_input = input("请输入一个数学表达式: ")
    # 安全漏洞：直接使用 eval 执行用户输入的字符串，可能导致任意代码执行 (RCE)
    result = eval(user_input)

    user_input2 = input("请输入一个数学表达式：")
    result2 = eval(user_input2) 
    print(f"计算结果是: {result}")

if __name__ == "__main__":
    process_user_input()
