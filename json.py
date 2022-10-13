import json

# JSON String:
colors =  '["Red", "Yellow", "Green", "Blue"]'

# JSON string to python dictionary:
lst1 = json.loads(colors)
print(lst1)
