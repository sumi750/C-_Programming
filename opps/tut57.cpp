#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st;
    ifstream textin;
    
    ofstream textout;
    textin.open("sumi.txt");


    
    textout.open("sumi2.txt"); 

    // getline(textin, st);
    // getline(textin, st);

    // cout<<st<<endl; 
    

    while(textin.eof() == 0) 
    {
        getline(textin,st); // getline funcition is used to reading single and multiple line strings from input string .  The function continues 
    //                         //  accepting inputs and appending them to the string until it encounters a delimiting character. 
    //      /*1. textin---> this is an fstream class object to specify the location to read the input stream.
    //      2. st ---> this is the object where the string is stored after reading. 
    //      */
        textout<<st<<endl;
    }

    cout<<"content copy successfully";
    
    textin.close();
    textout.close();

    return 0;
}