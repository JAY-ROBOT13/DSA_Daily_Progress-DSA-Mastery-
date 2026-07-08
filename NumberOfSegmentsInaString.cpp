//434.NUMBER OF SEGEMENTS IN A STRING
//Given a string 's', return the number a semgents in the string
//A segment is defined to be a contiguous sequence of non-space characters

//Input: s="Hello, my name is Jay"
//Output: 5
//EXPLANATION: The five segements are ['Hello,"my","name","is","Jay"]


#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    int countsegemnts(string s){
        int count=0;

        for(int i=0;i<s.length();i++){
            //current characters is not a space
            //and it is the start of a new word
            if(s[i] != ' ' && (i==0 || s[i-1] == ' ') ){
                count++;
            }
        }
        return count;
    }
};

//main function
int main(){

    string s = "Hello, my name is Jay";

    solution s1;
    cout<<s1.countsegemnts(s);

    return 0;
}