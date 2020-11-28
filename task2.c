#include<stdio.h>
void main(){
int n,k,count=0,g=0,x[n],xc;
scanf("%d %d",&n, &k);
char c[n-1] ,d[k-1],ar[n-1];
scanf("%s", c);
scanf("%s", d);
for(int i = 0;i<k;i++)
{
for(int j=0;j<n;j++){	
if(d[i] == c[j]){
ar[g]=d[i];
count++;
g++;
}
}
}
for(int i=0;i<n;i++){
for(int j=0;j<=g;j++){
	if(c[i] == ar[j]){
		x[xc]=i;
		
		xc++;
                break;
		}
}}
for(int i=0;i<=xc;i++){
if(x[i]==x[i+1]-1){
count++;
}
if(x[i]== x[i+2]-2 && x[i] == x[i+1]-1){
count++;
}
if(x[i]==x[i+3]-3 && x[i]==x[i+2]-2 && x[i]==x[i+1]-1){
count++;
}
}
printf("%d", count);
}
