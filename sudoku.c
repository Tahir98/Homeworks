#include<stdio.h>

int sudoku[9][9];
int sortedSudoku[9][9];
int emptySlots=0,taken;

int i,j;

void getSudoku();
void analyzeSudoku();
void sort();
void printSudoku();

int main(){
    
    getSudoku();
    analyzeSudoku();
    sort();
    printSudoku();
    
    return 0;
}

/* Get numbers from user and place them in array */
void getSudoku(){
    
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            scanf("%d",&taken);
            sortedSudoku[i][j] = sudoku[i][j] = taken;
            
        }
    }
    
}

/* Analyze array and find empty indexes */
void analyzeSudoku(){
    
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            if(sudoku[i][j]==0){
                emptySlots++;
            }    
            
        }
    }
    printf("number of empty slots:%d\n",emptySlots);
    
}

/* Sort array */
void sort(){
    int temp,row;
    
    for(row=0;row<9;row++){
    	for(i=0;i<9;i++){
        	for(j=0;j<8;j++){
            	if(sortedSudoku[i][j]>sortedSudoku[i][j+1]){
                	temp = sortedSudoku[i][j];
                	sortedSudoku[i][j] = sortedSudoku[i][j+1];
                	sortedSudoku[i][j+1] = temp;
            	}
        	}
    	}
	}
    

}

/* Print array */
void printSudoku(){
    
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            printf("%d ",sortedSudoku[i][j]);
        }
        puts("");
    }

}

/*
0 4 5 8 0 3 7 1 0 
8 1 0 0 0 0 0 2 4 
7 0 9 0 0 0 5 0 8 
0 0 0 9 0 7 0 0 0 
0 0 0 0 6 0 0 0 0 
0 0 0 4 0 2 0 0 0 
6 0 4 0 0 0 3 0 5 
3 2 0 0 0 0 0 8 7 
0 5 7 3 0 8 2 6 0
 
 
2 4 5 8 9 3 7 1 6
8 1 3 5 7 6 9 2 4
7 6 9 2 1 4 5 3 8
5 3 6 9 8 7 1 4 2
4 9 2 1 6 5 8 7 3
1 7 8 4 3 2 6 5 9
6 8 4 7 2 1 3 9 5
3 2 1 6 5 9 4 8 7
9 5 7 3 4 8 2 6 1
*/

/*
for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            while(58){
                scanf("%d",&taken);
                if(taken>=0 && taken<10){
                    sortedSudoku[i][j] = sudoku[i][j] = taken;
                    break;
                }else{
                    printf("Please enter a number between 0 and 10:");
                }
            }
            
        }
    }
*/




