#include<stdio.h>
#include<string.h>
#include<math.h>
//A10b11c12d13e14f15
int main(){
  char hex[] = "6A";
  int i=0,j=0,size,x,sum=0;
  size = strlen(hex); size--;
  while(i<strlen(hex)){
    if((hex[i]>='0'&&hex[i]<='9')){
      hex[i]=hex[i]-'0';
      x=hex[i]*pow(16,size);
      printf("%d\n",x);
      size--;
      sum+=x;
    }else if((hex[i]>='A'&&hex[i]<='F')){
      hex[i]=hex[i]-'7';
      x=hex[i]*pow(16,size);
      printf("%d\n",x);
      size--;
      sum+=x;
    }
    i++;
  }
  printf("%d\n",sum);
  printf("%c\n",sum);

  return 0;
}
