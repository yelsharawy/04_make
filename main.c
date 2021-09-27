#include <stdio.h>
#include "euler.h"

int main() {
  printf("1:\t%u\t%u\t%u\n", problem1_brute_force(),
	 problem1_smarter(), problem1_best());
  printf("5:\t%u\n", problem5());
  printf("6:\t%u\n", problem6_brute_force());
}