#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    char ch;
    scanf("%d",&n);
    //char str[n];
    char grid[n][n];
    int i=0,j=0;
     
    for(int k=0;k<n;k++)
        {
        scanf("%s",grid[k]);
            
            
    }
    

    /*for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)
            {
            printf("%d\t",grid[i][j]);
        }
        printf("\n");
    }*/
        for(int i=1;i<n-1;i++)
            {
            for(int j=1;j<n-1;j++)
            {
                if(grid[i][j]>grid[i+1][j] && grid[i][j]>grid[i-1][j] && grid[i][j]>grid[i][j-1] && grid[i][j]>grid[i][j+1])
                    grid[i][j]=100;
            }
           
        }
        
        for(int i=0;i<n;i++)
            {
            for(int j=0;j<n;j++)
                {
                if(grid[i][j]==100)
                    printf("X");
                else
                printf("%d",grid[i][j]-'0');
            }
            printf("\n");
        }
        
        
    
    return 0;
}
