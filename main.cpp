// Riccardo Di Sabatino
// 26/09/2018
// MIT License
// riccardodisabatino.it



#include <iostream>

#include <time.h>


using namespace std;


void recursive(int sum, int number);

void iterative();


int main()
{

    clock_t start,end;
    
 
    start = clock();
    
 
    recursive(0,0);
    

    end = clock();

    double duration_sec = double(end-start)/CLOCKS_PER_SEC;

    cout<<"Nella forma ricorsiva la funzione occupa: "<<duration_sec<<" secondi"<<endl;

    start = clock();
    
    iterative();
    
    end =clock();
    
    duration_sec = double(end-start)/CLOCKS_PER_SEC;
    
   cout<<"Nella forma iterativa la funzione occupa: "<<duration_sec<<" secondi"<<endl;
    
   return 0;
}

void 
recursive(int sum,int number){
    
    if(number < 100){
        
       recursive(sum+=number,number+=1);
    
    }
    else{
        
       cout<<sum<<endl;
    
    } 

}


void iterative(){
    
    int sum=0;
    
    for(int i = 0; i <= 100; i++){
        
         sum +=i;
    
    }
    cout<<sum<<endl;
    

}
