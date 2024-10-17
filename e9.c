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
  int y_;
  int b = 0;
  for (i = 0; i <= size;) {
    y_ = y + (b+i) % 3 + 1;
    b += (y+i) % 3 + 1;
    y = y_;
    i++;
    assert(y <= 2*i); 
    printf("%d %d %d \n",y%3,b%3,i%3);   
  }
  return 0;
}
