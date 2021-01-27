#include "Tokenizer.cpp"
#include <iostream>
#include <fstream>
using namespace std;
using namespace lx_parser;

int main(int argc, char const *argv[])
{
    /* code */
    string myText;
    string fileContents;

    // Read from the text file
    ifstream MyReadFile("index.kh");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline(MyReadFile, myText))
    {
        // Output the text from the file
        // cout << myText << endl;
        fileContents += myText;
        fileContents.push_back('\n');
    }

    // Close the file
    MyReadFile.close();

    Tokenizer tokenizer;
    vector<Token> tokens = tokenizer.parse(fileContents);

    for (Token currToken : tokens)
    {
        currToken.DebugPrint();
    }

    return 0;
}
