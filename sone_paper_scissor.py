# from concurrent.futures.process import _ThreadWakeup
import random



def gamewin( comp, you):
    
    if comp == you:
        return None
    
    elif comp == "r":
        if you == "p":
            return False
        elif you == "s":
            return True

    elif comp == "p":
        if you == "s":
            return False
        elif you == "r":
            return True

    elif comp == "s":
        if you == "r":
            return False
        elif you == "p":
            return True
    


print("comp choose r, p, s:     ")
randno = random.randint(1, 3)

if randno == 1:
    comp = "r"
elif randno == 2:
    comp = "p"
elif randno == 3:
    comp = "s"




you = input("chose btw r, p, s: ")
a = gamewin(comp, you)

print(f"comp chose{comp}")
print(f"you choose {you} ")

if a== None:
    print("match tie")
elif a:
    print("you wm")
else:
    print("you lose")


