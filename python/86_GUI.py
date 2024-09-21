import tkinter as tk
mw=tk.Tk()                                                  #creates a main window
mw.geometry('400x400')
def add():
    a = e1.get()
    b = e2.get()
    try:
        c=""
        c = int(a) + int(b)
    except ValueError:
        c = "Invalid input. Please enter numbers only."
    e3.delete(0, tk.END)                                    # clears the previous output
    e3.insert(0, str(c))
l1=tk.Label(mw,text="number 1")
l2=tk.Label(mw,text="number 2")
l3=tk.Label(mw,text="Result")
e1=tk.Entry(mw)
e2=tk.Entry(mw)
e3=tk.Entry(mw)
l1.grid(row=0,column=0)
e1.grid(row=0,column=1)
l2.grid(row=1,column=0)
e2.grid(row=1,column=1)
l3.grid(row=2,column=0)
e3.grid(row=2,column=1)
b=tk.Button(mw,text="Add",command=add,bg='blue',width="17")
b.grid(row=3,column=1)

ll=tk.Checkbutton(mw,text="walking ")
ll1=tk.Checkbutton(mw,text="running")

gender_var = tk.IntVar(value=None)
l7 = tk.Radiobutton(mw, text="Male", variable=gender_var, value=1)  
l8 = tk.Radiobutton(mw, text="Female", variable=gender_var, value=2)  

ll.grid(row=4,column=0)
ll1.grid(row=4,column=1)
l7.grid(row=5,column=0)
l8.grid(row=5,column=1)
mw.mainloop()