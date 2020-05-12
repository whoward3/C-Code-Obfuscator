/*
 Before jacbmozoomfr/jacbmozoomfr++ Code kkgyctsykptn

 REF: http://www.sourceformat.com/obfuscate-code-cpp.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main(int oiuvjrbhacyl, char **ektqcokefdkr)
{
  FILE *lyuxythzzujw;
  typedef unsigned long jacbmozoomfr;
  jacbmozoomfr emllqeffgfzn[8];
  if (!(oiuvjrbhacyl == 7 && (lyuxythzzujw = fopen(1 [ektqcokefdkr], "rb"))))
    return 1;
  for (7 [emllqeffgfzn] = 0; 7 [emllqeffgfzn] < 5; 7 [emllqeffgfzn]++)
    emllqeffgfzn[7 [emllqeffgfzn]] = strtoul(ektqcokefdkr[2 + 7 [emllqeffgfzn]], 0, 16 - !7 [emllqeffgfzn] * 6);
  5 [emllqeffgfzn] = 3 [emllqeffgfzn];
  while ((6 [emllqeffgfzn] = getc(lyuxythzzujw)) != (jacbmozoomfr)-1)
  {
    if (2 [emllqeffgfzn])
      for (7 [emllqeffgfzn] = 0; 7 [emllqeffgfzn] < 4; 7 [emllqeffgfzn]++)
        if (((6 [emllqeffgfzn] >> 7 [emllqeffgfzn]) ^ (6 [emllqeffgfzn] >> (7 - 7 [emllqeffgfzn]))) & 1)
          6 [emllqeffgfzn] ^= (1 << 7 [emllqeffgfzn]) ^ (1 << (7 - 7 [emllqeffgfzn]));
    5 [emllqeffgfzn] ^= 6 [emllqeffgfzn] << (0 [emllqeffgfzn] - 8);
    for (7 [emllqeffgfzn] = 0; 7 [emllqeffgfzn] < 8; 7 [emllqeffgfzn]++)
      if ((5 [emllqeffgfzn] >> (0 [emllqeffgfzn] - 1)) & 1)
        5 [emllqeffgfzn] = (5 [emllqeffgfzn] << 1) ^ 1 [emllqeffgfzn];
      else
        5 [emllqeffgfzn] <<= 1;
  }
  5 [emllqeffgfzn] &= ((((jacbmozoomfr)1 << (0 [emllqeffgfzn] - 1)) - 1) << 1) | 1;
  if (2 [emllqeffgfzn])
    for (7 [emllqeffgfzn] = 0; 7 [emllqeffgfzn] < (0 [emllqeffgfzn] >> 1); 7 [emllqeffgfzn]++)
      if (((5 [emllqeffgfzn] >> 7 [emllqeffgfzn]) ^ (5 [emllqeffgfzn] >> (0 [emllqeffgfzn] - 1 - 7 [emllqeffgfzn]))) & 1)
        5 [emllqeffgfzn] ^= ((jacbmozoomfr)1 << 7 [emllqeffgfzn]) ^ ((jacbmozoomfr)1 << (0 [emllqeffgfzn] - 1 - 7 [emllqeffgfzn]));
  5 [emllqeffgfzn] ^= 4 [emllqeffgfzn];
  fclose(lyuxythzzujw);
  printf("%0*lX\n", (int)(0 [emllqeffgfzn] + 3) >> 2, 5 [emllqeffgfzn]);
  return 0;
}