#ifndef _XMLNode_H_
#define _XMLNode_H_
#include<iostream>
#include<string>
#include<map>
#include<vector>

using namespace std;

class XMLNode {
    private:
        string name;  // name of the node
        map<string, string> properties; // any properties found in the node start tag
        string content; // if the node has content between the start and end tag, oput it here
        vector<XMLNode*> children; 
        
    public:

        XMLNode();
        XMLNode(string filename);

        //Purpose: Correctly read in an XML document to the class 
        //Parameter: takes a string filename
        //Return: 
        // Exception: throws exception if file is not found.
        XMLNode ParseFile(string filename);


        //Purpose: Correctly writes out a node to a file
        //Parameter: takes a string filename
        //Return: 
        // Exception: None
        XMLNode WriteFile(string filename);


        //Purpose: Prints all subnodes those node types matches
        //Parameter: takes a string filename
        //Return: void just printing
        // Exception: None
        void FindByNodeType(string name); 

        //Purpose: Prints all subnodes who have a property with the specified value
        //Parameter: property and value
        //Return: void just printing
        // Exception: None
        void FindByProperty(map<string, string> properties,  string value);


        //Purpose: Prints the node structure using tabbed spacing
        //Parameter: 
        //Return: 
        // Exception: None
        void PrettyPrintDocument();

};
#endif








