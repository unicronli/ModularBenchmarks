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
  int a = 0;
  int b = 0;
  for (int i = 0; i <= size;) {
    if(a%5 != 0 && b%3 != 0){
      a = a + 2;
      b = b + 2;
    }
    else{
      if(a%5 != 0 && b%3 == 0){
        a = a + 2;
        b = b + 1;
      }
      else{
        if(a%5 == 0 && b%3 == 0){
          a = a + 1;
          b = b + 1;
        }
        else{
            if(a%5 == 0 && b%3 != 0){
                a = a + 1;
                b = b + 2;
            }
        }
      }
    }
    i++;
    assert(3*a <= 5*i);
  }
  return 0;
}

