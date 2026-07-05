//28.FIND THE INDEX OF THE FIRST OCCURRENCE IN A STRING:
//Given two strings "needle" and "haystack", return the index of the first occurrence of "needle" in "haystack", or -1 if "needle" is not part of "haystack".
//INPUT: haystack='Leetcode', needle='Leeto'
//OUTPUT: 0
//EXPLANATION: "Leeto" didnot occur in "Leetcode" so, return -1.

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class solution{
    public:
    int strstr(string haystack, string needle){
        if(needle.empty())  
        return 0;   //if needle is empty return 0
        int haystackLength=haystack.size();   //get the length of haystack
        int needleLength=needle.size();    //get the length of needle
        for(int i=0;i<=haystackLength-needleLength;i++){
            if(haystack.substr(i, needleLength)==needle){
                return i;
            }
        }
        return -1;   //if needle is not found, return -1
    }
};

//main function
int main(){
    vector<string> haystack={"Leetcode"};
    vector<string> needle={"Leeto"};
    solution s;
    for(int i=0;i<haystack.size();i++){
        int index=s.strstr(haystack[i],needle[i]);
        cout<<"Index of first Occurrence of: "<<needle[i]<<" in "<<haystack[i]<<" is: "<<index<<endl;
    }
    return 0;
}