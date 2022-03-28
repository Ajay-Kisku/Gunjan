from tkinter import *
from time import sleep
def reminder():
    root = Tk()
    root.title("Blink Reminder")
    # root.overrideredirect(True)
    root.attributes("-topmost", True)
    root.attributes("-fullscreen", True)
    root.configure(background='black',borderwidth=0)

    Label(root,text="Blink Please!",font=('Guardians Regular',20), bg = 'black',fg='white',pady=300).pack(fill='both') #pady=300
    root.bind("<Escape>", lambda x: root.destroy())
    root.after(5000, lambda: root.destroy())

    root.mainloop()

while True:
    sleep(5*60)
    reminder()
