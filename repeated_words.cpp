/*So in this program what we are doing is that we are checking the condition for simultaneous repeated words entered 
For example say we have first entered ("hello"),then we enter ("jubesh"),then we eter("hey"),and say we again enter ("hey"),so this time the if condition will 
be triggered and we will get output as 
num of words : 4
repeated hey
So basically "hey" is the word which was repeated one after the other 
And this is what the program checks*/
#include <iostream>
#include <string>

int main(void){
int num_of_words=0;
std::string previous="";
std::string current="";

while(std::cout<<"Please input the word :\t",std::cin>>current){
    ++num_of_words;
    if(previous==current){
        std::cout<<"total number of words inputted : "<<num_of_words<<"\n"<<"the word which was repeated : "<<current<<std::endl;

    }
    previous=current;
}



    return 0;
}