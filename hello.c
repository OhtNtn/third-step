#include <stdio.h>
#include <math.h>
int main(){
 double science[20]={65,80,67,35,58,60,72,75,68,92,36,50,2,58.5,46,42,78,62,84,70};
 double english[20]={44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84};
 double ave_s=0.0,ave_e=0.0;
 double dev_s=0.0,dev_e=0.0;
 double sum_s=0.0,sum_e=0.0;
 double dev0_s[20]={0.0},dev0_e[20]={0.0};
 double devsum_s=0.0,devsum_e=0.0;
 double tmp;
 double devv_s[20]={0.0};
 double devv_e[20]={0.0};

 for(int i=0;i<20;i++){
   sum_s+=science[i];
   sum_e+=english[i];
 }
 ave_s=sum_s/20;
 ave_e=sum_e/20;
 for(int j=0;j<20;j++){
  dev0_s[j]=science[j]-ave_s;
  dev0_e[j]=english[j]-ave_e;
 }
 for(int k=0;k<20;k++){
  devsum_s=dev0_s[k]*dev0_s[k];
  devsum_e=dev0_e[k]*dev0_e[k];
 }
 dev_s=sqrt((devsum_s/20.0));
 dev_e=sqrt((devsum_e/20.0));

 for(int t=0;t<20;t++){
  devv_s[t]=10.0*(dev0_s[t]/dev_s)+50.0;
  devv_e[t]=10.0*(dev0_e[t]/dev_e)+50.0;
 }
 printf("平均点（理科）：%g\n",ave_s);
 printf("平均点（英語）：%g\n",ave_e);
 printf("標準偏差（理科）：%g\n",dev_s);
 printf("標準偏差（英語）：%g\n",dev_e);
 printf("合計点（理科）：%g\n",sum_s);
 printf("合計点（英語）：%g\n",sum_e);
 printf("偏差値（理科）；");
 for(int y=0;y<20;y++){
  printf("%g ",devv_s[y]);
 }
 printf("\n");
 printf("偏差値（英語）：");

 for (int u=0;u<20;u++){
  printf("%g ",devv_e[u]);
 }
 printf("\n");
 for(int m=0;m<20;m++){
 for(int n=m+1;n<20;n++){
  if(science[m]<science[n]){
   tmp=science[m];
   science[m]=science[n];
   science[n]=tmp;
  }
 }
 }
 printf("点数（理科）：");
 for(int i=0;i<20;i++){
  printf("%g ",science[i]);
 }
 printf("\n");

 for(int c=0;c<20;c++){
 for(int d=c+1;d<20;d++){
  if(english[c]<english[d]){
    tmp=english[c];
    english[c]=english[d];
    english[d]=tmp;
   }
  }
  }
 printf("点数（英語）：");
 for(int j=0;j<20;j++){
  printf("%g ",english[j]);
 }
 printf("\n");
 return 0;
}
