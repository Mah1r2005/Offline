#include <stdio.h>
#include <stdlib.h>

void removeNegetive(int* input, int n, int** output,int* newsize){
    
    int temp=0;
    for(int i=0; i<n; i++){
        if(*(input+i)>=0){temp++;}
    }
    *newsize=temp;
    *output=(int *)malloc(sizeof(int)*(temp));
    temp=0;
    *output=1;
    for(int i=0; i<n; i++){
        if(*(input+i)>=0){*(*output+temp)=*(input+i);}
        temp++;
    }

}

int main(){
  int n;
  scanf("%d",&n);
  int *input=(int *)malloc(sizeof(int)*n);
  for(int i=0; i<n; i++){
    scanf("%d",(input+i));
  }
  
  int *output;
  int *newsize;
  *newsize=0;
  removeNegetive(input,n, &(int *){output}, newsize);
  printf("%d",*newsize);
  for(int i=0; i<*newsize;i++){
      printf("%d ",*(output+i));
  }
  
}
