#include <stdio.h>

int main(){
    int sales;
    float comission;
    printf("Enter total sales?\t");
    scanf("%d",&sales);
    
    if(sales > 0 && sales <= 5000){
      comission = sales * 0.01;
    } 
    else if (sales > 5000 && sales <= 8000)
    {
      comission = sales * 0.03;
    }
    else if(sales > 8000 && sales <= 11000)
    {
      comission = sales * 0.05;
    }
    else if(sales > 11000){
      comission = sales * 0.1;
    }
    else
    {
      printf("Invalid Sales Data");
      return 0;
    }
    
    printf("Comission is %.2f",comission);
}   