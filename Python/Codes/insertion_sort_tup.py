def insertion_sort(a):
    a_list=list(a)
    n=len(a_list)
    for i in range(1,n):
        for j in range(i,0,-1):
            temp=a_list[j]
            if(temp<a_list[j-1]):
                a_list[j]=a_list[j-1]
                a_list[j-1]=temp
            else:
                break
    return tuple(a_list)
    
a=()
n=int(input("Enter the number of elements you want to add in list: "))
for i in range(n):
    num=int(input(""))
    a+=(num,)
print(f"Unsorted list: {a}")
a=insertion_sort(a)
print(f"sorted list {a}")




