def binary_srch(t,num):
    beg=0
    end=len(t)-1
    while(beg<=end):
        mid=(beg+end)//2
        if(num==t[mid]):
          return print(f"The Element is found at index {mid}.")
        elif(num<t[mid]):
            end=mid-1
        elif(num>t[mid]):
            beg=mid+1

    return print("Element not found in tuple.")
t=()
n=int(input("Enter the element you want to add in tuple: "))
for i in range(n):
    num=int(input("Enter the Element: "))
    t+=(num,)
t=sorted(t)  #return list
num=int(input("Enter the number to search: "))
binary_srch(t,num)





