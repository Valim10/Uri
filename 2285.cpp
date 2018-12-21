#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<bits/stdc++.h>


using namespace std;

/*
int main(){
	
	string text ;
	int tam;
	int i ;
	scanf("%d", &tam);
	cin >> text;
	for(i  = 0 ; i < tam/2 ; i++)
		if(text[i] == text[tam-i-1])
				 flag == 1;				
    cout << text;	
	
	return 0;
}
*/
/*
bool checkPalindrome(string str){
    string tmp = str;
    bool OK = true;
    reverse(tmp.begin(),tmp.end());
    for(int i = 0; i < str.size(); i++){
        if(str[i] != tmp[i]){
            OK = false;
            break;
        }
    }
    return OK;
}
string conCat(string str,int index){
    string tmp;
    for(int i = 0; i < str.size();i++){
        if(i != index)tmp.push_back(str[i]);
    }
    return tmp;
}
int main(){

    int T;
    string str;
    cin >> T;
	cin >> str;        
    
    int index = -1,len = str.size();
    for(int i = 0; i < len/2; i++){
       if(str[i] != str[len-i-1]){
            if(checkPalindrome(conCat(str,i)))
					index = i;
            if(checkPalindrome(conCat(str,len-i-1)))
					index = len-i-1;
                break;
        }
    }
    cout << index << endl;
    
    return 0;
}
*/

int ispalindrome(string s){
    int l = s.length()-1;
    int r = 0;
    while(l>r){
        if(s[l]!=s[r])
            return 0;
        l--;r++;
    }
    return 1;
}

int main(){
  int tam,count = 0;
  string str,str1,str3;
  vector<string> str2;
  scanf("%d",&tam);
  while(1){
  
  	if(tam == 0) return 0;
  	cin>>str;
  	int len = str.length();
   	for(int i=0;i<len;i++){
        for(int j=i;j<=len;j++){
            str1 = "";
            str1.append(str,i,j);
            if(ispalindrome(str1)){
                str2.push_back(str1);
                //count++;
            }
        }
    }
//    count = str2.size();
    int max =0;
    for(int i=0;i<str2.size();i++){
        if(str2[i].length()>max){
            max = str2[i].length();
            str3 = str2[i];
        }
        
    }
    count++;
    printf("Teste %d\n%d\n\n",count,len - max +1);
    scanf("%d",&tam);
 
  }
  return 0;
}
