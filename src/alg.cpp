// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  for (uint64_t i = 2; i * i <= value; i++) {
    if (value % i == 0)
      return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t k = 0;
  for (uint64_t j = 2; k <= n; j++) {
    if (checkPrime(j))
      k += 1;
    if (k == n)
      return j;
  }
  return 0;
}

uint64_t nextPrime(uint64_t value) {
  while (true) {
    value+=1;
    if (checkPrime(value))
      return value;
  }
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t summi = 0;
  for (uint64_t h = 2; h < hbound; h++) {
    if (checkPrime(h)) {
      summi += h;
    }
  }
  return summi;
}
