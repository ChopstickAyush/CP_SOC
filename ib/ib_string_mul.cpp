#include<string>
#include<vector>
using namespace std;


string add(string num1,string num2);
string single_multiply(string num1,int x);
string multiply(string num1, string num2) {
        if (num2.length()==0){
            return "0";
        }
        int i=num2[num2.length()-1]-'0';
        num2.pop_back();
        string s=multiply(num1,num2);
        s += '0';
        string a=add(s,single_multiply(num1,i));
        while(a[0]=='0' && a.length()>1){
            a.erase(a.begin());
        }
        return a;
    }

string single_multiply(string num1,int x){

        int i=num1.length();
        int carry=0;
        string s="";
        for (int j=0;j<i;j++){
            int a1=num1[i-j-1]-'0';
            int prod=a1*x+carry;
            int digit=prod%10;
            carry=prod/10;
            string num =to_string(digit);
            s.insert(0,num);
        }
        if (carry!=0){
           string num =to_string(carry);
           s.insert(0,num);
        }
        while(s[0]=='0' && s.length()>1){
            s.erase(s.begin());
        }
        return s;
    }

string add(string num1,string num2){
        int i =max(num1.length(),num2.length());
        int carry=0;
        string s="";
        int a1,a2;
        for (int l=0;l<i;l++){
           if(num1.length()>l)  a1=num1[num1.length()-1-l]-'0';
           else{
               a1=0;
           }
           if(num2.length()>l)  a2=num2[num2.length()-1-l]-'0';
           else{
               a2=0;
           }
           int digit=(a2+a1+carry)%10;
           carry =(a2+a1+carry)/10;
           string num =to_string(digit);
           s.insert(0,num);
        }
        if (carry!=0){
           string num =to_string(carry);
           s.insert(0,num);
        }
        return s;
    }





int power(string A) {
    string a="2";
    vector<string> power_2;
    
    string prev_a="2";
    int i=-1;
    while(a.length()<A.length()){
        if (a==A) return 1;
        else{
            prev_a=a;
            i++;
            power_2.push_back(a);
            a=multiply(a,a);
        }   
    }
    a=prev_a;
    while(a.length()<A.length() && i>0){
        if (multiply(a,power_2[i]).length()<A.length()){
            a=multiply(a,power_2[i]);
        }
        else{
            i--;
        }
    }
     while(a.length()<=A.length()){
          if (a==A) return 1;
          else{
              a=multiply(a,"2");
          }
    }
    return 0;
}
