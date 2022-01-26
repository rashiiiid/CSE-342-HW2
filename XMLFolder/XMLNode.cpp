#include "XMLNode.h"
#include <istream>
#include<stdexcept>
#include<ifstream>

using namespace std;

XMLNode::XMLNode() {

}

XMLNode::XMLNode() {

}

//Purpose: Correctly read in an XML document to the class 
//Parameter: takes a string filename
//Return: 
// Exception: throws exception if file is not found.
XMLNode::XMLNode ParseFile(string filename) {
        ParseFile(line, node);
}

XMLNode::XMLNode ParseFile(string filename, XMLNode node) {
  XMLNode newNode;	
      ifstream file;
      file.open(filename);
      if(!file) {
        throw std::runtime_error("file is not found");
    } 
 // <Parent name=me><Child name=you><Child name=somebodyelse> I am a grandchild</Child></Child></Parent>   
       
   
         parseline(line);

        stringstream ss(line);
        string tagString >> ss;
        tagString.substr(1);
         if(tagString  != "Parent" || tagString  != "Child") {
                return newNode;
         } else {
          int endOfTag = line.find(">");
          string nextContent = line.substr(endOfTag + 1);        
        return ParseFile(nextContent , node);
        }
      
       
      }
        file.close();
      }





    
}

