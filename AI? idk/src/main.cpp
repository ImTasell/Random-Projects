#include <iostream>
#include <string>

using namespace std;


int main() {

    string name;
    string question;
    string answer;

    cout << "What's Your Name?: ";
    cin >> name;

    cout << "> ";
    cin >> question;

    if (question == "Hello") {
        cout << "Hello There! "<< name;
    }

    else if (question == "hello") {
        cout << "Hello There! "<< name;
    }

}
