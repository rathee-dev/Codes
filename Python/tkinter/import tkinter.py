import tkinter


# Function Definitions
def add():
    try:
        result = float(e1.get()) + float(e2.get())
        textv.set(result)
    except ValueError:
        textv.set("Invalid input")


def subtract():
    try:
        result = float(e1.get()) - float(e2.get())
        textv.set(result)
    except ValueError:
        textv.set("Invalid input")


def multiply():
    try:
        result = float(e1.get()) * float(e2.get())
        textv.set(result)
    except ValueError:
        textv.set("Invalid input")


def divide():
    try:
        result = float(e1.get()) / float(e2.get())
        textv.set(result)
    except ZeroDivisionError:
        textv.set("Error: Division by Zero")
    except ValueError:
        textv.set("Invalid input")


def append_number(number):
    # Insert number only into the focused entry field (either e1 or e2)
    if e1.focus_get():  # Check if e1 is focused
        e1.insert(tkinter.END, number)
    elif e2.focus_get():  # Check if e2 is focused
        e2.insert(tkinter.END, number)


def append_decimal():
    # Check if there is a decimal in the current focused entry field
    current_value = e1.get() if e1.focus_get() else e2.get()
    if '.' not in current_value:
        if e1.focus_get():
            e1.insert(tkinter.END, '.')
        elif e2.focus_get():
            e2.insert(tkinter.END, '.')


def clear():
    e1.delete(0, tkinter.END)
    e2.delete(0, tkinter.END)


# Window setup
w = tkinter.Tk()
w.title("Basic Calculator")
w.geometry("550x700")
w.configure(bg="light blue")

textv = tkinter.StringVar()

# Labels
l1 = tkinter.Label(w, text="Enter First Number:", bg='light blue', fg='black')
l1.place(x=50, y=50)

l2 = tkinter.Label(w, text="Enter Second Number:", bg='light blue', fg='black')
l2.place(x=50, y=110)

l3 = tkinter.Label(w, text="Result:", bg='light blue', fg='black')
l3.place(x=50, y=170)

# Entry fields
e1 = tkinter.Entry(w, bg='white', fg='black', insertbackground='black', bd=3, font=('Arial', 16), width=20)
e1.place(x=200, y=50)

e2 = tkinter.Entry(w, bg='white', fg='black', insertbackground='black', bd=3, font=('Arial', 16), width=20)
e2.place(x=200, y=110)

e3 = tkinter.Entry(w, bg='white', fg='black', insertbackground='black', bd=3, font=('Arial', 16), width=20,
                   textvariable=textv)
e3.place(x=200, y=170)

# Buttons
btn_width = 8
btn_height = 2

# Number Buttons (1 to 9) and Decimal Point
numbers = [
    ('1', 80, 250), ('2', 160, 250), ('3', 240, 250),
    ('4', 80, 320), ('5', 160, 320), ('6', 240, 320),
    ('7', 80, 390), ('8', 160, 390), ('9', 240, 390),
    ('.', 160, 460)  # Decimal Point
]

# Create number buttons
for number, x, y in numbers:
    if number == '.':
        b = tkinter.Button(w, text=number, width=btn_width, height=btn_height, bg="white", command=append_decimal)
    else:
        b = tkinter.Button(w, text=number, width=btn_width, height=btn_height, bg="white",
                           command=lambda num=number: append_number(num))
    b.place(x=x, y=y)

# Operation Buttons (+, -, *, /)
b_add = tkinter.Button(w, text="+", width=btn_width, height=btn_height, bg="white", command=add)
b_add.place(x=80, y=460)

b_sub = tkinter.Button(w, text="-", width=btn_width, height=btn_height, bg="white", command=subtract)
b_sub.place(x=240, y=460)

b_mul = tkinter.Button(w, text="*", width=btn_width, height=btn_height, bg="white", command=multiply)
b_mul.place(x=80, y=530)

b_div = tkinter.Button(w, text="/", width=btn_width, height=btn_height, bg="white", command=divide)
b_div.place(x=160, y=530)

# Clear Button
b_clear = tkinter.Button(w, text="C", width=btn_width, height=btn_height, bg="lightgray", command=clear)
b_clear.place(x=240, y=530)

# Label for footer
l4 = tkinter.Label(w, text="Himanshu\n27074", fg='black')
l4.place(x=240, y=650)

w.mainloop()