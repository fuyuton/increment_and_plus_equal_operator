#include <stdio.h>
#include <stdlib.h>

void main(){
  int s = 6;
  int val = 3;

  s += val + ++s;
  printf("s = 6; s += val(%d) + ++s => %d\n", val, s);

  s = 6;
  val = 3;
  s += val + s++;
  printf("s = 6; s += val(%d) + s++ => %d\n", val, s);

  int a = 2;
  a++;
  printf("a = 2; a++ => %d\n", a);

  int b = 2;
  ++b;
  printf("b = 2; ++b => %d\n", b);

  int c = 2;
  c+= c;
  printf("c = 2; c += c => %d\n", c);

  int d = 2;
  d += d++;
  printf("d = 2; d += d++ => %d\n", d);

  int e = 2;
  e += ++e;
  printf("e = 2; e += ++e => %d\n", e);

  int f = 2;
  f += val + ++f;
  printf("f = 2; f += val(%d) + ++f => %d\n", val, f);

  int g = 2;
  g += val + g++;
  printf("g = 2; g += val(%d) + g++ => %d\n", val, g);


}
