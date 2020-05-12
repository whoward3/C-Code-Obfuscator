/*
 Before sgxpbcvrpqgi/sgxpbcvrpqgi++ Code ucthrbqwjskf

 REF: http://www.sourceformat.com/obfuscate-code-cpp.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main(int sjruibxxkuko, char **itvpbvjdxgqo)
{
  FILE *ygsrojlabrur;
  typedef unsigned long sgxpbcvrpqgi;
  sgxpbcvrpqgi nvsinwmgnczn[8];
  if (!(sjruibxxkuko == 7 && (ygsrojlabrur = fopen(1 [itvpbvjdxgqo], "rb"))))
    return 1;
  for (7 [nvsinwmgnczn] = 0; 7 [nvsinwmgnczn] < 5; 7 [nvsinwmgnczn]++)
    nvsinwmgnczn[7 [nvsinwmgnczn]] = strtoul(itvpbvjdxgqo[2 + 7 [nvsinwmgnczn]], 0, 16 - !7 [nvsinwmgnczn] * 6);
  5 [nvsinwmgnczn] = 3 [nvsinwmgnczn];
  while ((6 [nvsinwmgnczn] = getc(ygsrojlabrur)) != (sgxpbcvrpqgi)-1)
  {
    if (2 [nvsinwmgnczn])
      for (7 [nvsinwmgnczn] = 0; 7 [nvsinwmgnczn] < 4; 7 [nvsinwmgnczn]++)
        if (((6 [nvsinwmgnczn] >> 7 [nvsinwmgnczn]) ^ (6 [nvsinwmgnczn] >> (7 - 7 [nvsinwmgnczn]))) & 1)
          6 [nvsinwmgnczn] ^= (1 << 7 [nvsinwmgnczn]) ^ (1 << (7 - 7 [nvsinwmgnczn]));
    5 [nvsinwmgnczn] ^= 6 [nvsinwmgnczn] << (0 [nvsinwmgnczn] - 8);
    for (7 [nvsinwmgnczn] = 0; 7 [nvsinwmgnczn] < 8; 7 [nvsinwmgnczn]++)
      if ((5 [nvsinwmgnczn] >> (0 [nvsinwmgnczn] - 1)) & 1)
        5 [nvsinwmgnczn] = (5 [nvsinwmgnczn] << 1) ^ 1 [nvsinwmgnczn];
      else
        5 [nvsinwmgnczn] <<= 1;
  }
  5 [nvsinwmgnczn] &= ((((sgxpbcvrpqgi)1 << (0 [nvsinwmgnczn] - 1)) - 1) << 1) | 1;
  if (2 [nvsinwmgnczn])
    for (7 [nvsinwmgnczn] = 0; 7 [nvsinwmgnczn] < (0 [nvsinwmgnczn] >> 1); 7 [nvsinwmgnczn]++)
      if (((5 [nvsinwmgnczn] >> 7 [nvsinwmgnczn]) ^ (5 [nvsinwmgnczn] >> (0 [nvsinwmgnczn] - 1 - 7 [nvsinwmgnczn]))) & 1)
        5 [nvsinwmgnczn] ^= ((sgxpbcvrpqgi)1 << 7 [nvsinwmgnczn]) ^ ((sgxpbcvrpqgi)1 << (0 [nvsinwmgnczn] - 1 - 7 [nvsinwmgnczn]));
  5 [nvsinwmgnczn] ^= 4 [nvsinwmgnczn];
  fclose(ygsrojlabrur);
  printf("%0*lX\n", (int)(0 [nvsinwmgnczn] + 3) >> 2, 5 [nvsinwmgnczn]);
  return 0;
}