#include<stdio.h>

void countLetters(char array[],int size);
void printLetters(int a0,int e1,int i2,int o3,int u4);

int main(){

    char array[100];
    int counter=0;
    
    int i=0;
    for(i=0;120551;i++){
        
        scanf("%c",&array[i]);
        counter++;
        if(array[i]=='.'){break;}
        
    }
        
    countLetters(array,counter);
	
	return 0;
}

void countLetters(char array[],int size){
    int a0=0,e1=0,i2=0,o3=0,u4=0;
    
    int i=0;
    for(i=0;i<size;i++){
        
        if(array[i]=='a'){
            a0++;
        }else if(array[i]=='e'){
            e1++;
        }else if(array[i]=='i'){
            i2++;
        }else if(array[i]=='o'){
            o3++;
        }else if(array[i]=='u'){
            u4++;
        }
    }
    printLetters(a0,e1,i2,o3,u4);
    
}

void printLetters(int a0,int e1,int i2,int o3,int u4){
    
    int i=0;
    
    printf("0");
    for(i=0;i<a0;i++){printf("*");}
    printf("\n");
    
    printf("1");
    for(i=0;i<e1;i++){printf("*");}
    printf("\n");
    
    printf("2");
    for(i=0;i<i2;i++){printf("*");}
    printf("\n");
    
    printf("3");
    for(i=0;i<o3;i++){printf("*");}
    printf("\n");
    
    printf("4");
    for(i=0;i<u4;i++){printf("*");}

}

//"a, e, i, o, u"













