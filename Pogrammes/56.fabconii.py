print("**************************************")
print("**       FABCONII SERIES            **")
print("**************************************")

number1 = int(input("Enter the First Number : "))
number2 = int(input("Enter the Second Number : "))
# Fabconii series is a series in which there is the sum of the previous numbers
sum1 = number1 + number2
sum2 = number2 + sum1
sum3 = sum2 + sum1
sum4 = sum3 + sum2
sum5 = sum4 + sum3

print(number1, ",", number2, ",", sum1, ",",
      sum2, ",", sum3, ",", sum4, ",", sum5)
