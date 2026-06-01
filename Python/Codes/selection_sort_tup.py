def selection_sort(t):
    t_list=list(t)
    n=len(t_list)
    for i in range(1,n-1):
        min=i
        for j in range(i+1,n):
            if t_list[min]>t_list[j]:
                min=j
        t_list[i],t_list[min]=t_list[min],t_list[i]
    return tuple(t_list)

t=()
n=int(input("Enter the number of elements in the tuple: "))
for i in range(n):
    num=int (input("Enter the Element: "))
    t=t+(num,)
print(f"Unsorted tuple is: {t}")
t=selection_sort(t)
print(f"Sorted tuple is: {t}")

