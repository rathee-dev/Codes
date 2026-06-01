
import tkinter

def press0():
    num1.set(num1.get() + "0")

def press1():
    num1.set(num1.get() + "1")

def press2():
    num1.set(num1.get() + "2")

def press3():
    num1.set(num1.get() + "3")

def press4():
    num1.set(num1.get() + "4")

def press5():
    num1.set(num1.get() + "5")

def press6():
    num1.set(num1.get() + "6")

def press7():
    num1.set(num1.get() + "7")

def press8():
    num1.set(num1.get() + "8")

def press9():
    num1.set(num1.get() + "9")

def add():
    # read strings, convert to ints
    a = int(num1.get())
    b = int(num2.get())
    # compute and display
    result.set(str(a + b))

def subtract():
    a = int(num1.get())
    b = int(num2.get())
    result.set(str(a - b))

def multiply():
    a = int(num1.get())
    b = int(num2.get())
    result.set(str(a * b))

def divide():
    a = int(num1.get())
    b = int(num2.get())
    result.set(str(a // b))  # integer division is fine for exams

w = tkinter.Tk()
w.geometry('250x300')
w.title('Calculator')

num1 = tkinter.StringVar()
num2 = tkinter.StringVar()
result = tkinter.StringVar()

tkinter.Label(w, text="First Number:").place(x=20, y=0)
tkinter.Entry(w, textvariable=num1).place(x=20, y=20)

tkinter.Label(w, text="Second Number:").place(x=20, y=40)
tkinter.Entry(w, textvariable=num2).place(x=20, y=60)

tkinter.Label(w, text="Result:").place(x=20, y=80)
tkinter.Entry(w, textvariable=result).place(x=20, y=100)

tkinter.Button(w, text="0", command=press0).place(x=20, y=150)
tkinter.Button(w, text="1", command=press1).place(x=50, y=150)
tkinter.Button(w, text="2", command=press2).place(x=80, y=150)
tkinter.Button(w, text="3", command=press3).place(x=20, y=180)
tkinter.Button(w, text="4", command=press4).place(x=50, y=180)
tkinter.Button(w, text="5", command=press5).place(x=80, y=180)
tkinter.Button(w, text="6", command=press6).place(x=20, y=210)
tkinter.Button(w, text="7", command=press7).place(x=50, y=210)
tkinter.Button(w, text="8", command=press8).place(x=80, y=210)
tkinter.Button(w, text="9", command=press9).place(x=50, y=240)

tkinter.Button(w, text='+', command=add).place(x=150, y=150)
tkinter.Button(w, text='-', command=subtract).place(x=150, y=180)
tkinter.Button(w, text='*', command=multiply).place(x=150, y=210)
tkinter.Button(w, text='/', command=divide).place(x=150, y=240)

w.mainloop()
