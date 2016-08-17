#include<stdio.h>
int Check(int x,int y,char arr[x][y],int i,int j,char ch);

int main(){

char arr[3][4]={"ofas","llqw","zowk"};

char pat[]="ola";

FindPattern(3,4,arr,pat);

return 0;

}

int FindPatternUtill(int x,int y,char arr[x][y],int i,int j,char *ch,int pos){

if(ch[pos]==NULL){

return 1;

}

if(i!=0&&arr[i-1][j]==ch[pos]){

if(FindPatternUtill(x,y,arr,i-1,j,ch,pos+1)) return 1;

}

if(i!=x-1&&arr[i+1][j]==ch[pos]){

if(FindPatternUtill(x,y,arr,i+1,j,ch,pos+1)) return 1;

}

if(j!=0&&arr[i][j-1]==ch[pos]){

if(FindPatternUtill(x,y,arr,i,j-1,ch,pos+1)) return 1;

}

if(j!=y-1&&arr[i][j+1]==ch[pos]){

if(FindPatternUtill(x,y,arr,i,j+1,ch,pos+1)) return 1;

}

return 0;

}

void FindPattern(int m,int n,char arr[m][n],char pat[] ){

int i,j;

for(i=0;i<3;i++){

for(j=0;j<4;j++){

if(arr[i][j]==pat[0]){

if(FindPatternUtill(3,4,arr,i,j,pat,1)){

printf("TRUE");

return 0;

}

}

}

}

printf("FALSE");

}
