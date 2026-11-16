

a=[2,4,1,0,6,9,6,4,0,1,3,8]
print(f"Unsorted list is: {a}")
n=len(a)
for i in range(0,n-1):
    min=i
    for j in range(i+1,n):
        if a[min]>a[j]:
            min=j
    a[i],a[min]=a[min],a[i]
print(f"Sorted list is: {a}")

# def selection_sort(a):
#     n=len(a)
#     for i in range(1,n-1):
#         min=i
#         for j in range(i+1,n):
#             if a[min]>a[j]:
#                 min=j
#         a[i],a[min]=a[min],a[i]

# a=[]
# n=int(input("Enter the number of elements in the list: "))
# for i in range(n):
#     num=int (input("Enter the Element: "))
#     a=a+[num]
# print(f"Unsorted list is: {a}")
# selection_sort(a)
# print(f"Sorted list is: {a}")

