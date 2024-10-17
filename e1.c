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
  for (i = 0; i <= size;) {
    if(y%5 == 0 && y%4 == 0){
      y += 3;
    }
    else{
        if(y%5 == 0 && y%4 != 0){
            y += 2;
        }
        else{
            y += 1;
        }
    }
    i++;
    printf("%d %d \n",i,y);
    assert(3*y <= 4*i + 5);
    assert(3*y >= 4*i );
  }
  return 0;
}
