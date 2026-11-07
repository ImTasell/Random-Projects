#include <iostream>
#include <string>

using namespace std;

struct variables {
    string Name;
    string Question;
    string Answer;
};


int main() {

    variables AI;

    AI.Name;
    AI.Question;

    cout << "What's Your Name?: ";
    cin >> AI.Name;

    cout << "> ";
    cin >> AI.Question;

    if (AI.Question == "Hello") {
        cout << "Hello There! "<< AI.Name;
    }

    else if (AI.Question == "Test") {
            cout << "Idk....";
    }

}
