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
    variables Person;

    cout << "What's Your Name?: ";
    cin >> Person.Name;

    cout << "> ";
    cin >> Person.Question;

    if (Person.Question == "Hello") {
        AI.Answer = "Hello There! ";
        cout << AI.Answer << Person.Name;
    }

    else if (Person.Question == "Test") {
           AI.Answer = "Idk....";
           cout << AI.Answer;
    }

}
