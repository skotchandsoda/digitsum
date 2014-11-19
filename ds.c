#include <stdio.h>
#include <stdlib.h>

/* ds -- digit sum

   Computes and prints the sum of the digits of the input n,
   which should be an unsigned integer less than 2^64.  */

/* Program name  */
#define PROG "ds"

void
usage()
{
  printf("usage: %s n\n" \
         "  n -- positive integer less than 2^64\n", PROG);
  exit(1);
}

unsigned long long
compute_digit_sum(unsigned long long n)
{
  unsigned long long sum = 0;
  while (n != 0) {
    sum = sum + n % 10;
    n = n / 10;
  }

  return sum;
}

int
main(int argc, char **argv)
{
  /* There should only be one argument to ds.  */
  if (argc != 2) {
    fprintf(stderr, "%s: bad argument count %d\n", PROG, argc);
    usage();
  }

  /* Convert input string to integer.  */
  char **endptr;
  unsigned long long n = strtoull(argv[1], endptr, 10);

  unsigned long long sum = compute_digit_sum(n);
  printf("%llu\n", sum);

  return 0;
}
