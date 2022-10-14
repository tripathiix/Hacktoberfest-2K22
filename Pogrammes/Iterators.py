string = 'Hello World'
iterObj = iter(string)

while True:
    try:
        char1 = next(iterObj)
        print(char1)
    except StopIteration:
        break
