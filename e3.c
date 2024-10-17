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
    i++;
    if(y%4 == 0 && y%6 == 0){
      y += 2;
    }
    else{
        if(y%4 != 0 && y%6 == 0){
            y += 3;
        }
        else{
            y += 5;
        }
    }
    //printf("%d %d \n",i,y);
    assert(y <= 4*i );
    assert(y >= 4*i - 2 );
  }
  return 0;
}
