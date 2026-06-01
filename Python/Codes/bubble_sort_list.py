

arr=[2,3,0,1,8,5,7,6]
print(f"Unsorted list is: {arr}")
n=len(arr)
for i in range(n-1):
     for j in range(0,n-i-1):
        if arr[j]>arr[j+1]:
            temp=arr[j]
            arr[j]=arr[j+1]
            arr[j+1]=temp
print(f"Sorted list is: {arr}")


# print(f"Sorted list is: {bubble_sort(arr)}")
# def bubble_sort(arr):
#     n=len(arr)
#     for i in range(n-1):
#         for j in range(0,n-i-1):
#             if arr[j]>arr[j+1]:
#                 temp=arr[j]
#                 arr[j]=arr[j+1]
#                 arr[j+1]=temp

# arr=[]
# n=int (input("Enter the number of elments you want to add in list: "))
# for i in range(n):
#     num=int(input(""))
#     arr+=[num]
# print(f"Unsorted list is: {arr}")
# bubble_sort(arr)
# print(f"Sorted list is: {arr}")
# # print(f"Sorted list is: {bubble_sort(arr)}")