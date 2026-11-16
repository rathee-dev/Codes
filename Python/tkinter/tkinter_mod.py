import tkinter

w=tkinter.Tk()
w.title("Himanshu")

w.geometry("700x700")
# w.minsize("200,200")
# w.maxsize("700,700")

w.configure(bg="cyan")
#b=tkinter.Button(w,text="Submit",bd=10,bg="yellow",activebackground="white")
#b.grid(row=0,column=0)
#b.place(x=100,y=100)
#L=tkinter.Label(w,text="Name",bg="pink")
#L.grid(row=0,column=0)
c=tkinter.Entry(w)
c.grid(row=0,column=0)

w.mainloop()


