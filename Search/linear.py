def linear_search(arr, element):
    for i in range(len(arr)):
        if arr[i] == element:
            return i
    return -1

arr = [ 2, 4, 6, 10, 30 ]
x = 6

result = linear_search(arr, x)

if result != -1:
    print("Element is present at index", str(result))
else:
    print("Element is not present in array")