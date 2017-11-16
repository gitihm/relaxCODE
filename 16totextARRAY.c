#include<stdio.h>
#include<string.h>
#include<math.h>

int find(char u,char v){
  int i=0,sum=0,result=0,cout=1;
  char hex[]={v,u,0};
  while(i<2){
    if((hex[i]>='0'&&hex[i]<='9')){
      hex[i]=hex[i]-'0';
      sum=hex[i]*pow(16,cout) ;
      cout--; result+=sum;
    }else if((hex[i]>='A'&&hex[i]<='F')){
      hex[i]=hex[i]-'7';
      sum=hex[i]*pow(16,cout);
      cout--; result+=sum;
    }
    i++;
  }
  return result;
}

void print(char data[128]){
  int i=0; while(i<strlen(data)){
    printf("%c",data[i]);
    i++;
  }
}

int main(){
  char hex[128];
  //char data[] = "48656C6C6F23";
  char data[128];
  gets(data);
  int i=0,j=0,k=0;
  while(k<strlen(data)){
    if(k%2==0){
      hex[i]=find(data[k],data[k++]);
    }
    i++;k++;
  }
  hex[i]='\0';
  print(hex);
  return 0;
}
