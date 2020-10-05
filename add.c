#include "header.h"

int add(struct node *ll, int x) {
  int previous, current;

  int indexFree=get_node(ll);         // runs get node to find the next free node index value

    previous=0;                       // sets previous to index 0
    current=ll[previous].next;        // and current to where index 0 points next
                                      // this is used to increment through the list
  if (indexFree != 0) {               // if the first free index is not the 0 index then
    if (ll[0].next == MYNULL) {       // and the 0 index equal MYNULL then - therefore an EMPTY LIST CASE
      ll[0].next=indexFree;           // make index 0 next equal to the next free value
      ll[indexFree].data=x;           // setting the data to the number entered, the next value to MYNULL
      ll[indexFree].next=MYNULL;      // and valid to 1
      ll[indexFree].valid=1;
    }
    else {                            
      while (x > ll[current].data) {  // if it is not an EMPTY LIST CASE
        previous=current;             // increment through the list
        current=ll[current].next;     // till number is not greater than the data value
          if (current == MYNULL) {    // if it is greater than the value and the current
            break;                    // node being checked is the last node
          }                           // then break the while loop
      }  
    ll[previous].next=indexFree;      // print off the values
    ll[indexFree].next=current;
    ll[indexFree].data=x;
    ll[indexFree].valid=1;
    }
  return 1;                           // return success
  }
  else {
    return 0;
  }
}

