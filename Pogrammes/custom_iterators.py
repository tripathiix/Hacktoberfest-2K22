class multipleOf4:
  def __iter__(self):
    self.count = 0
    return self

  def __next__(self):
    if self.count <= 24:
      x = self.count
      self.count += 4
      return x
    else:
      raise StopIteration

obj1 = multipleOf4()
number = iter(obj1)

for x in number:
  print(x)
