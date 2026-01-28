#include <iostream>
#include <cmath>

using namespace std;

int main() {

int user_num;
int answer;
int final_answer;

cout << "Enter your favorite integer: " << endl;
cin >> user_num;

answer = ((user_num * 2) + 10) / 2;

final_answer = answer - user_num;

cout << "Your magic number is: " << final_answer << endl;

    return 0;
}