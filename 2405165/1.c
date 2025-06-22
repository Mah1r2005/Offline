#include <stdio.h>
#include <stdlib.h>

void removeNegetive(int* input, int n, int** output,int* newsize){

    int temp=0;
    for(int i=0; i<n; i++){
        if(*(input+i)>=0){temp++;}
    }
    *newsize=temp;
    temp=0;
    for(int i=0; i<n; i++){
        if(*(input+i)>=0){*(*output+temp)=*(input+i); temp++;}
    }

}

int main(){
  int n;
  scanf("%d",&n);
  int *input=(int *)malloc(sizeof(int)*n);
  for(int i=0; i<n; i++){
    scanf("%d",(input+i));
  }

  int *output=(int *)malloc(sizeof(int)*n);
  int newsize=0;
  removeNegetive(input, n, &output, &newsize);
  printf("%d \n",newsize);
  for(int i=0; i<newsize;i++){
      printf("%d ",*(output+i));
  }


   free(input);
   free(output);
}
