#include <stdio.h>
#include <math.h>

unsigned int get_money(unsigned short int amount)
{
  unsigned int notes = 0;
  if (amount > 31999) return notes;
  unsigned short int left_amound = amount;
  int denominations[8] = {2000, 500, 100, 50, 20, 10, 5, 1};
  for (int i = 0; i < 8; i++)
  {
    notes += pow(16, (7 - i)) * (left_amound / denominations[i]);
    left_amound %= denominations[i];
  }
  return notes;
}
