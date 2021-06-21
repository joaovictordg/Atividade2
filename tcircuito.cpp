#include <iostream>
#include <math.h>
using namespace std;

#include "tcircuito.h"

float serie(tcircuito c);
float par(tcircuito c);
float corrent(tcircuito c);
float pot(tcircuito c);

float serie(tcircuito c){
  return c.r1 + c.r2;
}

float par(tcircuito c){
  return (c.r1*c.r2)/(c.r1+c.r2);
}

float corrent(tcircuito c){
  return c.v1/(c.r1+c.r2);
}

float pot(tcircuito c){
  return c.v1 * corrent(c);
}
