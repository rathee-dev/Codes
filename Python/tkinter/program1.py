import tkinter

w=tkinter.Tk()

w.title("Himanshu")
w.geometry("700x700")
w.configure()
first_no=tkinter.Label(w,text="First Number")
first_no.grid(row=0,column=0)
second_no=tkinter.Label(w,text="second number")
second_no.grid(row=1,column=0)
result=tkinter.Label(w,text="Result")
result.grid(row=2,column=0)
entry1=tkinter.Entry(w)
entry2=tkinter.Entry(w)
entry3=tkinter.Entry(w)

entry1.grid(row=0,column=1)
entry2.grid(row=1,column=1)
entry3.grid(row=2,column=1)

add=tkinter.Button(w,text="Add",bd=10,bg="yellow",activebackground="white")
add.grid(row=3,column=1)

myname=tkinter.Label(w,text="Himanshu 27074")
myname.grid(row=4,column=0)
w.mainloop()