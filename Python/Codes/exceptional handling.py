#WAP to implement Exception Handling Concept 

print("Himanshu")
print("27074")
def divide_numbers(a, b):
    try:
        result = a / b
    except ZeroDivisionError:
        print("Error: Cannot divide by zero.")
    else:
        print("Result :",result)
num1 = int(input("Enter numerator: "))
num2 = int(input("Enter denominator: "))
divide_numbers(num1, num2)