#include<iostream>
using namespace std;

char toLower(char ch){
   if(ch >='a'&& ch <='z'){
      return ch;
   }
   else{
      char temp = ch - 'A'+'a';
      return temp;
   }
}

bool checkPalindrome(string s){

   int start=0;
   int end=s.length()-1;
   
   while(start<end){
   
   while(start<end && !isalnum(s[start]))
   start++;
   while(start<end && !isalnum(s[end]))
   end--;
   if(start<end && tolower(s[start])!=tolower(s[end]))
      return 0;
     start++;
     end--;
   }
   return 1;
}

void reverseString(char name[], int size){
   int start=0;
   int end=size-1;

   for(int i=start;i<end;i++){
      
      swap(name[start],name[end]);
      start++;
      end--;
  
   }

}

int getLength(char name[]){
  int count =0;
  for(int i=0;name[i]!='\0';i++){
     count++;
  }

  return count;

}

char getMaxOccurence(string s){

   int arr[26]={0};
   

   //Create an array of count of characters
   for(int i = 0; i< s.length();i++){

      char ch=s[i];
      int number = 0;
      //lowercase string
     
       number =ch-'a';
    
      arr[number]++;
   }
   //find maximum occurence character
   int maximum = -1,ans = 0;

   for(int i=0;i<26;i++){
      if(maximum < arr[i]){
         ans=i;
         maximum=arr[i];
      }

   }
   
   return 'a'+ans;
}

int main(){
/*
   char name[20];
   
   cout<<"Enter your name"<<endl; 
   cin>>name;
   name[5]='\0'; //stop execution after printing 3 character
   
   int length=getLength(name);
   cout<<"Your name is "<<endl;
   cout<<name<<endl;
   
   cout<<"Length is "<< length<<endl;

   reverseString(name,length);
   cout<<"Your name is "<<endl;
   cout<<name<<endl;

   cout<<"Palindrome or Not: "<<checkPalindrome(name,length)<<endl;
   cout<<toLower('a')<<endl;
   cout<<toLower('A'); */
   
   string s;
   cin>>s;

   cout<<getMaxOccurence(s)<<endl;

   return 0;
}

