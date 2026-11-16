t=()
n=int(input("Enter the number of elements you want to take in tuple: "))
for i in range(n):
    num=int(input("Enter the element: "))
    t=t+(num,)
num=int(input("Enter the Element you want to search: "))
for i in range(len(t)):
    if(num==t[i]):
        print(f"The element is found at index {i}")
else:
    print(f"{num} not found in the tuple.")

