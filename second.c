#include <stdio.h>

void mian(){
  int a[5] = {12,8,6,18,9};
  int i,j,temp;
  for(i=0;i<5;i++){
    for(j=4;j>0;j--){
      if(a[j]>a[j-1]){
        temp = a[j];
        a[j] = a[j-1];
        a[j-1] = temp;
      }
    }
  }
}
