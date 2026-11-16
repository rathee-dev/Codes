def bubble_sort(t):
    t_list=list(t)
    n=len(t_list)
    for i in range(n-1):
        for j in range(0,n-i-1):
            if t_list[j]>t_list[j+1]:
                temp=t_list[j]
                t_list[j],t_list[j+1]=t_list[j+1],temp
    return tuple(t_list)

t=()
n=int (input("Enter the number of elments you want to add in tuple: "))
for i in range(n):
    num=int(input(""))
    t+=(num,)
print(f"Unsorted tuple is: {t}")
t=bubble_sort(t)#assigning the function to variable as tuple is immutable
print(f"Sorted tuple is: {t}")
