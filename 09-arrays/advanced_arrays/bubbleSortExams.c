#include <stdio.h>
#define size 7
int main(){
  int score[] ={90,40,60,100,30,50,80};

for(int i = 0; i < size; i++){
    for(int j = 0; j < (size - i - 1); j++){
        if(score[j] > score[j+1]){
        int temp = score[j];
        score[j] = score[j+1];
        score[j+1] = temp;
        }
    }
}

for(int i = 0; i < size; i++){

    printf(" %d", score[i]);
}

}