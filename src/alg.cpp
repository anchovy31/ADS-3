// Copyright 2021 NNTU-CS

int cbinsearch(int* arr, int size, int value) {
  int k = 0, i = size / 2, beg = 0, left, right;
  while (beg <= size) {
    if (arr[i] == value) {
      k++;
      left = i - 1;
      right = i + 1;
      while (arr[left] == value or arr[right] == value) {
        if (arr[left] == value) {
          k++;
          left--;
        }
        if (arr[right] == value) {
          k++;
          right++;
        }
      }
      return k;
    }
    else if (value > arr[i]) {
      beg = i + 1;
      size -= beg;
      i = size / 2 + beg;
    }
    else {
      beg = i + 1;
      size /= 2;
      i = size / 2 + beg;
    }
  }
  return 0;
}
