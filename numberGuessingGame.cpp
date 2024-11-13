#include<iostream> 
#include<cstdlib>/* for function rand()[ramdom number generator ] and srand */
#include<ctime>/* for time   */
using namespace std;


int main(){
    srand(static_cast<unsigned>(time(0)));
    int randomNumber=(rand()%100)+1;
    int tries=10;

    int guessingNumber ;
    cout<<"Welcome to guessing game. Remember you have " <<tries -- <<"to guess Number Now please enter a number :"<<endl;
    cin>>guessingNumber;
   for(tries;tries>0;tries--){  
    if(randomNumber>guessingNumber){
        if(randomNumber-guessingNumber<10){
            cout<<"Close call but try again"<<endl;
        }
    
        else  cout<<"Try again"<<endl;
        cout<<"Remeber you have left "<<tries<<" tries"<<endl;
        cin>>guessingNumber;
        
     } 
     else if (randomNumber<guessingNumber)
     {
        if(guessingNumber-randomNumber<10){
            cout<<"Close call but try again"<<endl;
        }
        else  cout<<"Try again"<<endl;
        cout<<"Remeber you have left " << tries <<" tries"<<endl;
        cin>>guessingNumber;
        
     }
     
     else{ cout <<"Congratulation you have guess the right answer";}
     
   }
   if(tries==0) cout<<"You have failed in guessing and the corret number is "<< randomNumber<<endl;


return 0;
}