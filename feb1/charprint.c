#include <stdio.h>
int main(){
        int num=0;
        char alp[100],ch;
        printf("enter the input:");
        scanf("%s", alp);

        for(int i=0;alp[i]!='\0';i++){
                if((alp[i]>='a' && alp[i]<='z')||(alp[i]>='A' && alp[i]<='Z')){
                    ch=alp[i];
                }
                else{
                    num=alp[i]-'0';
                    for(int j=0;j<num;j++){
                        printf("%c", ch);
                    }
                }
        }
return 0;
}

