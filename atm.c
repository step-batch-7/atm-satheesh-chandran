#include <stdio.h>

unsigned int get_money(unsigned short int amount)
{
  unsigned int notes = 0;
  if (amount > 31999) return notes;
  unsigned short int left_amound = amount;
  int denominations[8] = {1, 5, 10, 20, 50, 100, 500, 2000};
  for (int index = 7; index >=0 ; index--)
  {
    notes |= (1 << index * 4) * (left_amound / denominations[index]);
    left_amound %= denominations[index];
  }
  return notes;
}
