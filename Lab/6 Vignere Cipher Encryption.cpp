#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main(){
char a[26][26],pt[100]="They will attack on Monday",key[100]="BULLET";
int i,j,v=65,temp=0,l=strlen(pt),l1=strlen(key),t1=0,t2=0,k;
for(i=l1;i<l;i++){
    key[i]=key[temp];
    temp++;
    if(temp==l1)
        temp=0;
}
temp=v;
printf("Vignere Table:\n");
for(i=0;i<26;i++){
    for(j=0;j<26;j++){
        if(v>90)
            v=65;
        a[i][j]=v;
        v++;
    }
    temp++;
    v=temp;
}
for(i=0;i<26;i++){
    for(j=0;j<26;j++)
        printf("%c",a[i][j]);
    printf("\n");
}
printf("\n\n");
printf("Plaintext: ");
for(i=0;i<l;i++)
    printf("%c",pt[i]);
for(i=0;i<l;i++){
    if(pt[i]==' '){
        for(j=i+1;j<l;j++){
            pt[j-1]=pt[j];
        }
        l--;
        i--;
    }
}
for(i=0;i<l;i++)
    pt[i]=toupper(pt[i]);
printf("\nKey: ");
for(i=0;i<l1;i++)
    printf("%c",key[i]);
for(i=0;i<l;i++)
    key[i]=toupper(key[i]);
for(i=0;i<l;i++){
    for(j=0;j<26;j++){
        if(key[t1]==a[0][j]){
            temp=0;
            for(k=65;k<=pt[t2];k++){
                temp++;
            }
            pt[t2]=a[temp-1][j];
        t1++;
        t2++;
        }
    }
}
printf("\nCipherText: ");
for(i=0;i<l;i++)
    printf("%c",pt[i]);
}



