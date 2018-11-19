#ifndef LIBNLP_TOKENIZER_HPP
#define LIBNLP_TOKENIZER_HPP

#include<string>
#include<vector>


namespace libnlp
{
    
   class Tokenizer{

      public:
	 
	 void tokenize(std::vector<std::string>& results, std::string text); 
    
    };
 	
}


#endif  // LIBNLP_TOKENIZER_HPP
