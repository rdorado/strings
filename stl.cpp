#include<iostream>
#include<vector>

#include<libnlp/tokenizer.hpp>

int main() {
   std::vector<std::string> result;   
   libnlp::Tokenizer tokenizer;    

   tokenizer.tokenize(result, "Tokenize this string");      

   for (std::vector<std::string>::iterator it = result.begin() ; it != result.end(); ++it)
      std::cout << *it << std::endl;
  
   return 0;
}



/*
#include<string>
#include<vector>
#include<iostream>

#include<boost/algorithm/string.hpp>

using namespace std;

int main(){
  string text = "Let me split this into words";
 
  vector<string> results;

  boost::split(results, text, [](char c){return c == ' ';});

  for (vector<string>::iterator it = results.begin() ; it != results.end(); ++it){
     cout << *it << endl;
  }
  return 0;
}
*/

