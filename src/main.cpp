#include<iostream>
#include<vector>

#include "tokenizer.hpp"

int main() { 

   std::vector<std::string> result;	
   libnlp::Tokenizer tokenizer;	 
   tokenizer.tokenize(result, "Tokenize this string");
   
   for (std::vector<std::string>::iterator it = result.begin() ; it != result.end(); ++it) 
       std::cout << *it << std::endl;

   return 0;
}
