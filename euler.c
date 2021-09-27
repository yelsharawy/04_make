int problem1_brute_force() {
  unsigned int sum = 0;
  unsigned int i;
  for (i = 1; i < 1000; i++) {
    if (!(i % 3) || !(i % 5)) {
      sum += i;
    }
  }
  return sum;
}

int problem1_smarter() {
  unsigned int sum = 0;
  unsigned int i;
  for (i = 3; i < 1000; i += 3) sum += i;
  for (i = 5; i < 1000; i += 5) sum += i;
  for (i = 15; i < 1000; i += 15) sum -= i;
  return sum;
}

unsigned int sum_of_natural(unsigned int n) {
  return n*(n+1)/2;
}

int problem1_best() {
  return 3*sum_of_natural(999/3) + 5*sum_of_natural(999/5)
    - 15*sum_of_natural(999/15);
}

int problem5() {
  unsigned int result = 1;
  unsigned int i;
  for (i = 2; i <= 20; i++) {
    unsigned int r = result;
    while (result % i) result += r;
  }
  return result;
}

int problem6_brute_force() {
  unsigned int sum_of_squares = 0;
  unsigned int sum = 0;
  unsigned int i;
  for (i = 1; i <= 100; i++) {
    sum_of_squares += i*i;
    sum += i;
  }
  return sum*sum - sum_of_squares;
}
