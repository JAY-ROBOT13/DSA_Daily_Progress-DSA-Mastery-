//344.REVERSE STRING:
//write a function that reverses a string.The input string is given as an array of characters s.
//YOu must do this by modifying the input array in-place with O(1) extra memory.
//e.g., INPUT: s=['h],'e','l','l','o']
//OUTPUT: ['o','l','l','e','h']

#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    void reversestring(vector<char>& s){
        int left=0;
        int right=s.size()-1;
        // for(int i=0;i<s.size()/2;i++){
        while(left<right){
            swap(s[left],s[right]);
            left++;
            right--;
        }
    }
};

//main function
int main(){
    vector<char> s={'h','e','l','l','o'};
    solution s1;
    s1.reversestring(s);
    cout<<"Reversed string:";
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
    return 0;
}