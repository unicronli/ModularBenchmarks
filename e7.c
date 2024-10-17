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
  int size = 100;
  int i;
  int y = 0;
  for (i = 0; i <= size;) {
    y += (i % 3) + (i % 5) + 1 ;
    i++;
    assert(y <= 3*i); 
    assert(y >= 3*i - 4);
    //printf("%d %d %d\n",i%3,i%5,i%3+i%5);   
  }
  return 0;
}
