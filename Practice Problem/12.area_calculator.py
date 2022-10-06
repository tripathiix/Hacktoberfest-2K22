#Find area using python
import math

while True:

	print("\n")
	print("FInd area of Square , Ractangle , Circle , Triangle, Pythagorean theorem.")
	print("\n")
	print("Enter 1 if you find area of Square")
	print("Enter 2 if you find area of Ractangle")
	print("Enter 3 if you find area of Circle")
	print("Enter 4 if you find area of Triangle")
	print("Enter 5 if you find area of Pythagorean theorem")
	print("Enter 0 if you want to exit the pogramm")
	print("\n")
	n = int(input("Enter number :- "))

	if n == 1:
		n1 = int(input("Enter side of Square :- "))
		print(n1**2)
		continue

	else:	

		if n == 2:
			n2 = int(input("Enter side a :- "))
			n22 = int(input("Enter side b :- "))
			print(n2**2 + n22**2)

		else:

			if n == 3:
				n3 = int(input("Please enter radius of circle :- "))
				a = 3.14 #pi = 22/7 = 3.14
				b = n3**2
				print(a*b)

			else:
				
				if n == 4:
					a = int(input("Enter side a :- "))
					b = int(input("Enter side b :- "))
					c = int(input("Enter side c :- "))

					s = (a+b+c)/2

					p = s-a
					q = s-b 
					r = s-c

					print(f"Area of Triangle is {(s*(p*q*r))**0.5}")
	      			else:
	      				if n==5:
						print("Enter side AB & BC for find hypotenuse lenth")
						a = int(input("Enter side AB :- "))
						b = int(input("Enter side BC :- "))	 
						c = math.sqrt(a ** 2 + b ** 2)
						print(f"Hypotenuse of triangle is {c}")

	      					

					else:
						if n == 0:
							print("Have a nice day")	
							break
