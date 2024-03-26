#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main()
{ 
    string unformatted_full_name {"StephenHawking"};

    string first_name {unformatted_full_name, 0 , 7};
    string last_name = unformatted_full_name.substr(7, 7);
    cout << first_name <<endl;
    cout << last_name << endl;
    
    string formatted_full_name = first_name + last_name;
    formatted_full_name.insert(7, " ");
    
    cout << formatted_full_name << endl;
    
    // ---------------------------------------------- Encrypt and Decrypt Message System -----------------------------------------
    
    string real {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string code {"QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm"}; 
    
    string initialMessage {};
    string codedMessage {};
    cout << "Enter a message to code: ";
    getline(cin, initialMessage);
    
    cout << "Encripting Message ... " <<endl;

    for (char letter:initialMessage){
        if(real.find(letter)==string::npos)
            codedMessage.push_back(letter);
        else {
            int index = real.find(letter);
            codedMessage.push_back(code[index]);
        }
    }
    cout << codedMessage <<endl;
    cout << "\nDecripting Message ... " << endl;
    initialMessage = {};
       for (char letter:codedMessage){
        if(real.find(letter)==string::npos)
            initialMessage.push_back(letter);
        else {
            int index = code.find(letter);
            initialMessage.push_back(real[index]);
        }
    } 
    
    cout << initialMessage << "\n" <<endl;


	return 0;
}

