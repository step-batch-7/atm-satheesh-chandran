#include <stdio.h>
#include <math.h>

unsigned int get_money(unsigned short int amount)
{
  unsigned int notes = 0;
  if (amount > 31999) return notes;
  unsigned short int left_amound = amount;
  int denominations[8] = {1, 5, 10, 20, 50, 100, 500, 2000};
  for (int i = 7; i >=0 ; i--)
  {
    notes += pow(16, i) * (left_amound / denominations[i]);
    left_amound %= denominations[i];
  }
  return notes;
}
