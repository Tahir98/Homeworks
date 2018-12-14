#include<stdio.h>
#define column 5
#define row 3

void getWords();
void printWords();
void sort(int a);
void sort2(int i,int a);

char dictionary[column][row];
int i,j,r;

int main(){

    getWords();
    
    sort(0);

    printWords();

    return 0;
}

void getWords(){
    
    char taken;
    
    for(i=0;i<column;i++){
        for(j=0;j<row;){
            scanf("%c",&taken);
            if(taken==' '){
                 continue;
            }else{
                dictionary[i][j] = taken;    
            }    
            j++;
        }    
    }    
}

void printWords(){

    for(i=0;i<column;i++){
        for(j=0;j<row;j++){
            printf("%c",dictionary[i][j]);
        }    
        printf(" ");
    }
  
}

void sort(int a){
    char temp;  
   
    for(j=0;j<column;j++){          
    
        for(i=0;i<column-1;i++){  
            if((int)dictionary[i][a] > (int)dictionary[i+1][a]){
                for(r=0;r<row;r++){
                    temp = dictionary[i][r];
                    dictionary[i][r] = dictionary[i+1][r];
                    dictionary[i+1][r] = temp;
                }
               
            }else if((int)dictionary[i][a] == (int)dictionary[i+1][a]){
                if(a<2){
                    sort2(i,a+1);
                }
                
            }        
        }
    }
}

void sort2(int i,int a){

    char temp;
    
    if((int)dictionary[i][a] > (int)dictionary[i+1][a]){
        for(r=0;r<row;r++){
            temp = dictionary[i][r];
            dictionary[i][r] = dictionary[i+1][r];
            dictionary[i+1][r] = temp;
        }
                 
    }else if((int)dictionary[i][a] == (int)dictionary[i+1][a]){
        if(a<2){
            sort2(i,a+1);
        }
                
    }

}

/*
void sort(int a){
    char temp;  
   
    for(j=0;j<column;j++){          
    
        for(i=0;i<column-1;i++){  
            if((int)dictionary[i][a] > (int)dictionary[i+1][a]){
                for(r=0;r<row;r++){
                    temp = dictionary[i][r];
                    dictionary[i][r] = dictionary[i+1][r];
                    dictionary[i+1][r] = temp;
                }
                 
            }else if((int)dictionary[i][a] == (int)dictionary[i+1][a]){
                if(a<2){
                    sort2(i,a+1);
                }
                
            }        
        }
    }
}

void sort2(int i,int a){

    char temp;
    
    if((int)dictionary[i][a] > (int)dictionary[i+1][a]){
        for(r=0;r<row;r++){
            temp = dictionary[i][r];
            dictionary[i][r] = dictionary[i+1][r];
            dictionary[i+1][r] = temp;
        }
                 
    }else if((int)dictionary[i][a] == (int)dictionary[i+1][a]){
        if(a<2){
            sort2(i,a+1);
        }
                
    }

}
*/













