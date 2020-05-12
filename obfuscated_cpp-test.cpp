/*
 Before tmdpeefjukyt/tmdpeefjukyt++ Code hvlzfmucpgye

 REF: http:
 */

#include <stdio.h>
#include <stdlib.h>

int main(int kfjygotnjogy, char **mtepbzirivpb)
{
  
  FILE *mhisjpiflhuy;
  typedef unsigned long tmdpeefjukyt;
  tmdpeefjukyt gdlzyhgapwgw[8];
  if (!(kfjygotnjogy == 7 && (mhisjpiflhuy = fopen(1 [mtepbzirivpb], "rb"))))
    return 1;
  for (7 [gdlzyhgapwgw] = 0; 7 [gdlzyhgapwgw] < 5; 7 [gdlzyhgapwgw]++)
    gdlzyhgapwgw[7 [gdlzyhgapwgw]] = strtoul(mtepbzirivpb[2 + 7 [gdlzyhgapwgw]], 0, 16 - !7 [gdlzyhgapwgw] * 6);
  5 [gdlzyhgapwgw] = 3 [gdlzyhgapwgw];
  while ((6 [gdlzyhgapwgw] = getc(mhisjpiflhuy)) != (tmdpeefjukyt)-1)
  {
    if (2 [gdlzyhgapwgw])
      for (7 [gdlzyhgapwgw] = 0; 7 [gdlzyhgapwgw] < 4; 7 [gdlzyhgapwgw]++)
        if (((6 [gdlzyhgapwgw] >> 7 [gdlzyhgapwgw]) ^ (6 [gdlzyhgapwgw] >> (7 - 7 [gdlzyhgapwgw]))) & 1)
          6 [gdlzyhgapwgw] ^= (1 << 7 [gdlzyhgapwgw]) ^ (1 << (7 - 7 [gdlzyhgapwgw]));
    5 [gdlzyhgapwgw] ^= 6 [gdlzyhgapwgw] << (0 [gdlzyhgapwgw] - 8);
    for (7 [gdlzyhgapwgw] = 0; 7 [gdlzyhgapwgw] < 8; 7 [gdlzyhgapwgw]++)
      if ((5 [gdlzyhgapwgw] >> (0 [gdlzyhgapwgw] - 1)) & 1)
        5 [gdlzyhgapwgw] = (5 [gdlzyhgapwgw] << 1) ^ 1 [gdlzyhgapwgw];
      else
        5 [gdlzyhgapwgw] <<= 1;
  }
  5 [gdlzyhgapwgw] &= ((((tmdpeefjukyt)1 << (0 [gdlzyhgapwgw] - 1)) - 1) << 1) | 1;
  if (2 [gdlzyhgapwgw])
    for (7 [gdlzyhgapwgw] = 0; 7 [gdlzyhgapwgw] < (0 [gdlzyhgapwgw] >> 1); 7 [gdlzyhgapwgw]++)
      if (((5 [gdlzyhgapwgw] >> 7 [gdlzyhgapwgw]) ^ (5 [gdlzyhgapwgw] >> (0 [gdlzyhgapwgw] - 1 - 7 [gdlzyhgapwgw]))) & 1)
        5 [gdlzyhgapwgw] ^= ((tmdpeefjukyt)1 << 7 [gdlzyhgapwgw]) ^ ((tmdpeefjukyt)1 << (0 [gdlzyhgapwgw] - 1 - 7 [gdlzyhgapwgw]));
  5 [gdlzyhgapwgw] ^= 4 [gdlzyhgapwgw];
  fclose(mhisjpiflhuy);
  printf("%0*lX\n", (int)(0 [gdlzyhgapwgw] + 3) >> 2, 5 [gdlzyhgapwgw]);
  return 0;
}