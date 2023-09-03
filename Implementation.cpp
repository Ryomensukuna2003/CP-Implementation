#include <bits/stdc++.h>
using namespace  std;
 
//                                「本 物 の 柔 術 を 見 せ て や る」


// For checking String 1 in string 2
bool substringcheck(string s1,string s2){
    // String 1 in String 2
    if (s2.find(s1) != std::string::npos) return true;
    else return false;
}

// For creation of Boolean Matrix 
bool g[100][100]={};

