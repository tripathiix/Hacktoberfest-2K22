const bubbleSort = (a) => {
  let swaps;
  let n = a.length - 1;
  let x = a;

  do {
    swaps = false;
    for (var i = 0; i < n; i++) {
      if (x[i] < x[i + 1]) {
        var temp = x[i];
        x[i] = x[i + 1];
        x[i + 1] = temp;
        swaps = true;
      }
    }
    n--;
  } while (swaps);

  return x;
};

console.log(
  bubbleSort([12, 345, 4, 546, 122, 84, 98, 64, 9, 1, 3223, 455, 23, 234, 213])
);
