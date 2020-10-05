#include "header.h"

void init(struct node*ll) {
int i =1;

  ll[0].data = 999;            // initializes the sentinal node
  ll[0].next = MYNULL;         // setting next value to -1
  ll[0].valid = 1;             // and valid to 1

  while(i < 100) {             // then incements through
    ll[i].data = 999;          // the remaining elements
    ll[i].next = -99999;       // setting the value, next, and
    ll[i].valid = 0;           // valid values
    i++;
  }
}
