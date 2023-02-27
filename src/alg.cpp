// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  for (int i = 2; i * i <= value; i++) {
    if (value % i == 0)
      return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  int k = 0;
  for (int j = 1; j <= n; j++) {
    if (checkPrime(j))
      k += 1;
  }
  return k;
}

uint64_t nextPrime(uint64_t value) {
  for (int g = value + 1; g < (value * value); g++) {
    if (checkPrime(g))
      return g;
  }
  return 0;
}

uint64_t sumPrime(uint64_t hbound) {
  int summi = 0;
  for (int h = 2; h <= hbound; h++) {
    if (checkPrime(h)) {
      summi += h;
    }
  }
  return summi;
}
