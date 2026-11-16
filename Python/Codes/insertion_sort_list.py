

a=[0,1,1,9,56,4,0,7,6,5,65,5,6,44,5]
print(f"Unsorted list: {a}")
n=len(a)
for i in range(1,n):
    for j in range(i,0,-1):
        temp=a[j]
        if(temp<a[j-1]):
            a[j]=a[j-1]
            a[j-1]=temp
        else:
            break
print(f"sorted list {a}")



# def insertion_sort(a):
#     n=len(a)
#     for i in range(1,n):
#         for j in range(i,0,-1):
#             temp=a[j]
#             if(temp<a[j-1]):
#                 a[j]=a[j-1]
#                 a[j-1]=temp
#             else:
#                 break

# a=[]
# n=int(input("Enter the number of elements you want to add in list: "))

# for i in range(n):
#     num=int(input(""))
#     a+=[num]
# print(f"Unsorted list: {a}")
# insertion_sort(a)
# print(f"sorted list {a}")




