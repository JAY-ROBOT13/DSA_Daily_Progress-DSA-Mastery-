//58.LENGTH OF LAST WORD
//Given a string "s" consisting of words and spaces, return the length of the last word in the string.
//A word is a maximal substring consisting of non-space characters only.
//Input: s = "Fly me to the moon"
//Output: 4
//Explanation: The last word is "moon" with length 4.

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class solution{
    public:
    int lengthoflastword(string s){
        int length=0;     //initial length of word 
        int i=s.size()-1;  //initial index of string
        //for loop for iteration
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!=' '){
                length++;
            }
            else if(length>0){
                return length;
            }
            }
            return length;
    }
};

//main function
int main(){
    string s="fly me to the moon";
    solution s1;
    int length=s1.lengthoflastword(s);
    cout<<"Length of last word is:"<<length;
    return 0;
}
