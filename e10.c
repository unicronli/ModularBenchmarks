// This file is part of CPAchecker,
// a tool for configurable software verification:
// https://cpachecker.sosy-lab.org
//
// SPDX-FileCopyrightText: 2024 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0

#include <assert.h>
#include <stdlib.h>
int main() {
  int size = 1000;
  int i;
  int y = 0;
  int b = 0;
  for (i = 0; i <= size;) {
    if(y % 2 == 0){
        y += b+i % 4 + 1;
        b += i % 3 + 1;
    }
    else{
        y += b+i % 3 + 1;
        b += i % 4 + 1;
    }   
    i++;
    assert(6*b <= 13*i); 
    //printf("%d %d %d %d \n",y%2,b%2,i%3,i%4);   
  }
  return 0;
}
