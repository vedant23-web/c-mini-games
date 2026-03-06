#include<iostream>
#include<ctime>
#include<cstdlib>

int main(){

    srand(time(NULL));

    std:: cout <<"\n==================================";
    std:: cout <<"\n|     NUMBER GUESSING GAME       |";
    std:: cout <<"\n==================================";
    std:: cout <<"\nSelect Difficulty level\n";
    
    std::cout <<"\n1. Easy ( 1 - 50 )";
    std::cout <<"\n2. Medium ( 1 - 100 )";
    std::cout <<"\n3. Hard ( 1 - 500 )";
    std::cout <<"\n4. Exit\n";
    
    int choice;
    int num;
    int guess;
    while(true){
    std:: cout <<"\nEnter choice : ";
    std::cin >> choice;
    switch(choice){
        case 1:{
        
            num = (rand() % 50 ) + 1 ;
            std:: cout  << "I have selected a number between 1 and 50\nYou have 7 attempts to guess it.\n";
            
            for(int i=1; i<=7;i++){
                std:: cout << "\nAnd your guess is : ";
                std:: cin >> guess;

                if( num > guess ){
                    std:: cout <<"\nToo low! Try again.";
                }
                else if( num < guess ){
                    std:: cout <<"\nToo high! Try again.";
                }
                else {
                    std:: cout <<"\nCorrect! You guessed the number.";
                    break;
                }
                if(i == 7) {
                    std::cout <<"\n  you are dead GAME OVER ";
                
                }
            }
            break;
        }

        case 2 : {
            
            num = (rand() % 100 ) + 1 ;
            std:: cout  << "I have selected a number between 1 and 100\nYou have 7 attempts to guess it.\n"; 

            for(int i=1; i<=7; i++){
                std:: cout << "\nAnd your guess is : ";
                std:: cin >> guess;

                if( num > guess ){
                    std:: cout <<"\nToo low! Try again.";
                }
                else if( num < guess ){
                    std:: cout <<"\nToo high! Try again.";
                }
                else{
                    std:: cout <<"\nCorrect! You guessed the number. ";
                    break;
                }
                if(i == 7) {
                    std::cout <<"\n you are dead GAME OVER ";
                    
                }
            }
            break;
        }

        case 3 : {
            
            num = (rand() % 500 ) + 1 ;
            std:: cout  << "I have selected a number between 1 and 500\nYou have 7 attempts to guess it.\n"; 

            for(int i=1; i <=7; i++){
                std:: cout << "\nAnd your guess is : ";
                std:: cin >> guess;

                if( num > guess ){
                    std:: cout <<"\nToo low! Try again.";
                }
                else if( num < guess ){
                    std:: cout <<"\nToo high! Try again.";
                }
                else{
                    std:: cout <<"\n Correct! You guessed the number. \n";
                    break;
                }
                if(i == 7){
                    std::cout <<"\n  you are dead GAME OVER \n";
                
                }
            }
            break;
        }

        case 4 :{
            exit( 0 );
            break;
        }
    }    

    }
    return 0;
}
