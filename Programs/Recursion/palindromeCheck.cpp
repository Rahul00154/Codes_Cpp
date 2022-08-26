#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string &str,int i,int j){
    //base case 
    if(i>j){
      return true;
    }
    if(str[i]!=str[j])
       return false;
    else{
       //recursive call
       return checkPalindrome(str,i+1,j-1);
    }

}

int main(){
    
    string str = "abba";
    cout<<endl;

    bool isPalindrome = checkPalindrome(str,0,str.length()-1);
    
    if(isPalindrome){
       cout<<"Palindrome detected"<<endl;
    }
    else{
       cout<<"Palindrome noreturn"<<endl;
    }
return 0;
}