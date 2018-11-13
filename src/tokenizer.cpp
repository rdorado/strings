#include "tokenizer.hpp"

#include<boost/algorithm/string.hpp>

namespace libnlp{

   void Tokenizer::tokenize(std::vector<std::string>& results, std::string text){
      boost::split(results, text, [](char c){return c == ' ';});	        
   }

}
