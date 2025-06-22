#include <stdio.h>
#include <stdlib.h>

int compare(char **ptr ,int i){
    for(int j=0; j<25;j++){
        int a1=*(*(ptr+i)+j)-'a';
        int a2=*(*(ptr+i+1)+j)-'a';
        if(a1>a2) return 1;
        else if(a1<a2)return 0;
        else{
            if(a1<0 && a2<0) return 0;
        }
    }

}

int main(){
 int n;
 scanf("%d",&n);
 char **ptr=(char **)malloc(sizeof(char *)*n);
 for(int i=0; i<n;i++){
    *(ptr+i)=(char *)malloc(sizeof(char)*25);
 }

 for(int i=0; i<n; i++){
   scanf("%s",*(ptr + i));
 }

  for (int step=1; step<=n-1; step++){
    for (int i = 0; i<n-1; i++){
        if(compare(ptr,i)){
           char *temp=*(ptr+i+1);
          *(ptr+i+1)=*(ptr+i);
            *(ptr+i)=temp;
        }
    }
 }



 for(int i=0; i<n; i++){
   printf("%s \n",*(ptr + i));
 }
 for(int i=0; i<n; i++){
    free(*(ptr + i));
 }
 free(ptr);
}
