#include <iostream>
#include <string>

#include <thread>
#include <chrono>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{

  cout << "Huhu!" << endl;
  std::this_thread::sleep_for(std::chrono::seconds(1));
  cout << "Wie geht es dir?" << endl;
  string answer;
  if(cin >> answer) {
    string lower_case_answer(answer);
    for(auto& letter : lower_case_answer) {
      letter = tolower(letter);
    }

    if(lower_case_answer == "gut") {
      cout << "Das ist schön zu hören. :)" << endl;
    } else {
      cout << answer << "?" << endl;
      std::this_thread::sleep_for(std::chrono::seconds(1));
      cout << "Ist das schlecht?" << endl;
      cout << "Kopf hoch." << endl;
    }
  }
  
  return 0;
}
