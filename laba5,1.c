#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <string.h>
int main(){
setlocale(LC_ALL, "Rus");
char str[20],s,s2;
int n,c;
c=0;
scanf("%s\n",&str);
n=strlen(str);
for (int i=0;i<n;i++){
s=str[i];
s2=str[i+1];
if(s==s2){
c=c+1;
printf("%3c%3c\n",s,s2);
}
}
printf("%d",c);
return 0;
}