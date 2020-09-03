#include<iostream>
using namespace std;
const int N = 100, LOGN = 8;
int total = 0;

bool is_bit_on(int x, int pos) {
  return ((x & (1 << pos)) != 0);
}

void flip_bit(int &x, int pos) {
  x ^= (1 << pos);
}

void increment(int &x) {
  for(int i = 0; i < LOGN; i++) {
  	total++;
    if(is_bit_on(x, i) == 1) {
      flip_bit(x, i);
    } else {
      flip_bit(x, i);
      break;
    }
  }
}

int main() {
  int counter = 0;
  for(int i = 1; i < N; i++) {
    increment(counter);
  }
  // how slow?
}
