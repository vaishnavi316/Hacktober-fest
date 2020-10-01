from tkinter import *
root =None
frame2=None
weight=0
height=0
w_entry=0
h_entry=0
mybmi=None
mytxt=None
from tkinter import messagebox
def showbmi():
     global weight
     global height
     global w_entry
     global h_entry
     global frame2
     global mybmi
     global mytxt
     wt1=0
     wt2=0
     weight=int(w_entry.get())
     height=(float(h_entry.get())/100)
     bmi=DoubleVar()
     bmi=float(weight/(height**2))
     wt1=18.5*(height**2)
     wt2=24.9*(height**2)
     mybmi.set("Your BMI is : %.1f"%bmi)
     if(bmi<18.5):        
         mytxt.set("Underweight")
     elif(bmi>=18.5 and bmi<=24.9): 
         mytxt.set("Normalweight")
     elif (bmi>=25 and bmi<=29.9):
         mytxt.set("Overweight")
     elif(bmi>30):
        mytxt.set("Obesity")

def addtxtlable():
     global frame2
     global mybmi
     mybmi=StringVar()
     mybmi.set("")
     b=Label(frame2,textvariable=mybmi,font=("Microsoft Sans Serif",16,"bold"),bg="white")
     b.grid(row=4,column=1)

def addtxtlable1():
     global frame2
     global mytxt
     mytxt=StringVar()
     mytxt.set("")
     r=Label(frame2,textvariable=mytxt,font=("Goudy Old Style",22,"bold"),width=18,bg='white')
     r.grid(row=5,column=1)

def main() :
    global root
    global weight
    global height
    global w_entry
    global h_entry
    global frame2
    global mybmi
    global mytxt
    root=Tk()
    root.title("BMI")
    root.geometry("550x380+0+0")
    mainframe=Frame(root,bd=8,width=550,height=380,bg='white',relief=RIDGE)
    mainframe.pack()
    frame1=Frame(mainframe,bd=5,width=534,height=30,bg='white',relief=RIDGE)
    frame1.pack(side=TOP)  
    T=Label(frame1,text="BODY MASS INDEX",fg="purple",padx=100,pady=3,font=("Lucida Bright",25,"bold"),bg='white')   
    T.pack()
    frame2=Frame(mainframe,bd=3,width=534,height=345,bg='white',relief=RIDGE)
    frame2.pack(side=BOTTOM)
    weight=IntVar()
    height=IntVar()
    w_lable=Label(frame2,text=" Weight ( in kgs ) :",width=14,bd=5,font=("Lucida Bright",14),bg='white')
    w_lable.grid(row=2,column=0,pady=6) 
    w_entry=Entry(frame2,textvariable=w_lable,width=29,bd=5,font='bold')
    w_entry.grid(row=2,column=1,pady=6)
    h_lable=Label(frame2,text=" Height ( in cm ) :",width=14,bd=4,font=("Lucida Bright",15),bg='white')
    h_lable.grid(row=3,column=0,pady=8)
    h_entry=Entry(frame2,textvariable=h_lable,width=29,bd=5,font='bold')
    h_entry.grid(row=3,column=1,pady=8)
    myButton1=Button(frame2,text="Compute BMI",bd=3,width=11,height=1,font=("Palatino Linotype",12,"bold"),command=showbmi)
    myButton1.grid(row=4,column=0,pady=15)
    myButton1.configure(foreground="green")
    addtxtlable()
    r=Label(frame2,text=mytxt,width=30,height=6,bg='white')
    r.grid(row=5,column=1)
    myButton=Button(frame2,text="EXIT",command=exit)
    myButton.grid(row=6,column=0,pady=3)
    myButton.configure(foreground="red")  
    addtxtlable()
    addtxtlable1()
    root.mainloop()  
main()  
