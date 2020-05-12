/*
 Before kjlifjhvjkwi/kjlifjhvjkwi++ Code vjzvwjgqabyo

 REF: http:
 */

#include <stdio.h>
#include <stdlib.h>

int main(int zwjjblarlxar, char **zqlqyxdwflza)
{
  
  FILE *uuslztfpdicf;
  typedef unsigned long kjlifjhvjkwi;
  kjlifjhvjkwi rfvuvgxrsrma[8];
  if (!(zwjjblarlxar == 7 && (uuslztfpdicf = fopen(1 [zqlqyxdwflza], "rb"))))
    return 1;
  for (7 [rfvuvgxrsrma] = 0; 7 [rfvuvgxrsrma] < 5; 7 [rfvuvgxrsrma]++)
    rfvuvgxrsrma[7 [rfvuvgxrsrma]] = strtoul(zqlqyxdwflza[2 + 7 [rfvuvgxrsrma]], 0, 16 - !7 [rfvuvgxrsrma] * 6);
  5 [rfvuvgxrsrma] = 3 [rfvuvgxrsrma];
  while ((6 [rfvuvgxrsrma] = getc(uuslztfpdicf)) != (kjlifjhvjkwi)-1)
  {
    if (2 [rfvuvgxrsrma])
      for (7 [rfvuvgxrsrma] = 0; 7 [rfvuvgxrsrma] < 4; 7 [rfvuvgxrsrma]++)
        if (((6 [rfvuvgxrsrma] >> 7 [rfvuvgxrsrma]) ^ (6 [rfvuvgxrsrma] >> (7 - 7 [rfvuvgxrsrma]))) & 1)
          6 [rfvuvgxrsrma] ^= (1 << 7 [rfvuvgxrsrma]) ^ (1 << (7 - 7 [rfvuvgxrsrma]));
    5 [rfvuvgxrsrma] ^= 6 [rfvuvgxrsrma] << (0 [rfvuvgxrsrma] - 8);
    for (7 [rfvuvgxrsrma] = 0; 7 [rfvuvgxrsrma] < 8; 7 [rfvuvgxrsrma]++)
      if ((5 [rfvuvgxrsrma] >> (0 [rfvuvgxrsrma] - 1)) & 1)
        5 [rfvuvgxrsrma] = (5 [rfvuvgxrsrma] << 1) ^ 1 [rfvuvgxrsrma];
      else
        5 [rfvuvgxrsrma] <<= 1;
  }
  5 [rfvuvgxrsrma] &= ((((kjlifjhvjkwi)1 << (0 [rfvuvgxrsrma] - 1)) - 1) << 1) | 1;
  if (2 [rfvuvgxrsrma])
    for (7 [rfvuvgxrsrma] = 0; 7 [rfvuvgxrsrma] < (0 [rfvuvgxrsrma] >> 1); 7 [rfvuvgxrsrma]++)
      if (((5 [rfvuvgxrsrma] >> 7 [rfvuvgxrsrma]) ^ (5 [rfvuvgxrsrma] >> (0 [rfvuvgxrsrma] - 1 - 7 [rfvuvgxrsrma]))) & 1)
        5 [rfvuvgxrsrma] ^= ((kjlifjhvjkwi)1 << 7 [rfvuvgxrsrma]) ^ ((kjlifjhvjkwi)1 << (0 [rfvuvgxrsrma] - 1 - 7 [rfvuvgxrsrma]));
  5 [rfvuvgxrsrma] ^= 4 [rfvuvgxrsrma];
  fclose(uuslztfpdicf);
  printf("%0*lX\n", (int)(0 [rfvuvgxrsrma] + 3) >> 2, 5 [rfvuvgxrsrma]);
  return 0;
}