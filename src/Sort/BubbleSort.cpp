// MIT License
<<<<<<< HEAD
// Copyright 2017 zhaochenyou16@gmail.com
=======

// Copyright (c) 2017 zhaochenyou16@gmail.com

>>>>>>> 5a180f667c2426bd94784296480bffc3f18f8479

#include "BubbleSort.hpp"
#include <iostream>
#include <cassert>
#include <cstdlib>
using namespace std;

#define TEST_MAX 1024
#define MAX 64

auto AssertNotAscendingOrder(const vector<int> &s,
                             int n) -> void {
  bool res = true;
  for (int i = 0; i < n-1; ++i) {
    if (s[i] > s[i+1]) {
      res = false;
      break;
    }
  }
  assert(!res);
}
auto AssertAscendingOrder(const vector<int> &s,
                          int n) -> void {
  bool res = true;
  for (int i = 0; i < n-1; ++i) {
    if (s[i] > s[i+1]) {
      res = false;
      break;
    }
  }
  assert(res);
}

auto AssertBubbleSort(const vector<int> &s,
                      int n) -> void {
  AssertNotAscendingOrder(s, n);
  BubbleSort(s, 0, n);
  AssertAscendingOrder(s, n);
}

auto main(void) -> int {
  vector<int> s(MAX, 0);
  for (int i = 0; i < TEST_MAX; ++i) {
    for (int j = 0; j < MAX; ++j) {
      s[j] = rand() % TEST_MAX;
    }
    AssertBubbleSort(s, MAX);
  }
  return 0;
}
