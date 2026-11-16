import tkinter as tk
from tkinter import Menu


    # Create the main window
w = tk.Tk()
w.title("Menu Bar Example")

# Create a menu bar
menubar = Menu(w)
w.config(menu=menubar)

# Create File menu
file_menu = Menu(menubar, tearoff=0)
file_menu.add_command(label="New")
file_menu.add_command(label="Save")
file_menu.add_command(label="Exit", command=w.quit)
menubar.add_cascade(label="File", menu=file_menu)

# Create Edit menu
edit_menu = Menu(menubar, tearoff=0)
edit_menu.add_command(label="Cut")
edit_menu.add_command(label="Edit")
edit_menu.add_command(label="Paste")
edit_menu.add_command(label="Undo")
menubar.add_cascade(label="Edit", menu=edit_menu)

# Create Help menu
help_menu = Menu(menubar, tearoff=0)
help_menu.add_command(label="Help")
menubar.add_cascade(label="Help", menu=help_menu)

w.mainloop()
