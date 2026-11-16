import tkinter as tk

def say_hello():
    # This function will be called when the button is clicked
    greeting_label.config(text="Hello, Himanshu!", fg="blue")

# Create the main window
root = tk.Tk()
root.title("Widget Attributes Demo")
root.geometry("300x150")  # Width x Height in pixels

# Create a Label with attributes
greeting_label = tk.Label(
    root,
    text="Click the button below",
    font=("Arial", 12, "italic"),
    bg="lightyellow",
    fg="darkgreen",
    width=25,
    height=2,
    relief="groove",
    pady=5
)
greeting_label.pack(pady=10)

# Create a Button with attributes
hello_button = tk.Button(
    root,
    text="Say Hello",
    font=("Helvetica", 10, "bold"),
    bg="lightblue",
    fg="black",
    width=12,
    height=1,
    command=say_hello,   # callback on click
    relief="raised",
    pady=3
)
hello_button.pack()

# Start the GUI event loop
root.mainloop()
