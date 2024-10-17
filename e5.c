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
    if(y%2 == 0){
      y += i + 1;
    }
    else{
      y += i + 3;
    }
    assert(2*y >= 3*i + 1);
    
  }
  return 0;
}
