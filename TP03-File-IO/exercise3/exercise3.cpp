// 3
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <string.h>

#define storage 100
using namespace std;

struct Student {
  int id, age;
  string name, email;
} stds[storage];

int Load_from_file() {
  int count = 0;
  ifstream display_data_file("data1.txt");
  while (count < 100 && display_data_file >> stds[count].id >>
                            stds[count].name >> stds[count].age >>
                            stds[count].email) {
    count++;
  }
  display_data_file.close();
  return count;
}

int std_count = 0;
bool Check_Existing_ID_email(int current_id, string current_email) {
  std_count = Load_from_file();
  bool is_new = true;

  ofstream check_("data1.txt", ios::app);

  if(current_id < 0){
      cout << "ID must be greater than 0!" << endl;  
      is_new = false;
      return false;
  }else if(current_id == 0){
      is_new = false;
      return false;
  }

  for (int i = 0; i < std_count; i++) {
    if (current_id == stds[i].id) {
      cout << "ID already Exist!" << endl;
      is_new = false;
      break;
    } else if (current_email == stds[i].email) {
      cout << "Email already Exist!" << endl;
      is_new = false;
      break;  
    }
  }
  if (is_new) {
    check_<< stds[std_count].id << " " << stds[std_count].name << " "
           << stds[std_count].age << " " << stds[std_count].email << endl;
    is_new = true;
  }

  return true;
}

//  storage && data_file << stds[std_count].id << stds[std_count].name <<
//  stds[std_count].age << stds[std_count].email
int Add_information_to_file() {
  int _ID;
  std_count = Load_from_file();

  ofstream data_file_in("data1.txt", ios::app);
  cin >> stds[std_count].id >> stds[std_count].name >> stds[std_count].age >>
      stds[std_count].email;
  _ID = stds[std_count].id;
  Check_Existing_ID_email(stds[std_count].id, stds[std_count].email);
  std_count++;
  data_file_in.close();

  return  _ID;
}

void Display_file_data() {
  cout << "Display file data..." << endl;
  std_count = Load_from_file();
  if(std_count == 0){
    cout << "No data exist." << endl;
  }else{
    for (int i = 0; i < std_count; i++) {
      cout << stds[i].id << " " << stds[i].name << " " << stds[i].age << " "
          << stds[i].email << endl;
    }
  }
}

void find_student() {
  cout << "Find student base on Email..." << endl;
  std_count = Load_from_file();
  string email;
  bool is_found = false;
  cout << "Student Email:  ";
  cin >> email;
  for (int i = 0; i < std_count; i++) {
    if (email == stds[i].email) {
      is_found = true;
      cout << "Student Info..." << endl;
      cout << stds[i].id << " " << stds[i].name << " " << stds[i].age << " "
           << stds[i].email << endl;
    }
  }
  if (!is_found) cout << "No Data!" << endl;
}

void Update_student_info() {
  std_count = Load_from_file();
  int ID, age, current_idx = 0;
  string name, email;
  cout << "Student ID: ";
  cin >> ID;
  bool found_id = false;

  for (int i = 0; i < std_count; i++) {
    if (ID == stds[i].id) {
      found_id = true;
      current_idx = i;
      cin >> stds[current_idx].id >> stds[current_idx].name >> stds[current_idx].age >> stds[current_idx].email;
    }
  }
  if (!found_id){
    cout << "ID doesn't exist!" << endl;
    return;
  }

  if(stds[current_idx].id != ID ){
    Check_Existing_ID_email(stds[current_idx].id, stds[current_idx].email);
  }else {
    ofstream update_file("data1.txt");
    for (int i = 0; i < std_count; i++) {
      update_file << stds[i].id << " " << stds[i].name << " " << stds[i].age
                  << " " << stds[i].email << endl;
    }
    update_file.close();
    if (found_id) cout << "information updated successfuly!" << endl;
  }
  


}

void Clear_file_data() {
  ofstream clear_data("data1.txt",ios::trunc);
  clear_data.close();
}

void Verify_clear_data() {
  char con;
  cout << "Type y to confirm / n to cancel..." << endl;
  cin >> con;

  if (tolower(con) == 'y') {
    Clear_file_data();
  }
}

void Operation_systems_message() {
    cout << endl;
    cout << "1 -> Display all Data." << endl;
    cout << "2 -> Add information of 3 students." << endl;
    cout << "3 -> Add all student at once." << endl;
    cout << "4 -> Search for student base on eamil." << endl;
    cout << "5 -> Update student informatoin." << endl;
    cout << "6 -> Delete data in file." << endl;
    cout << "7 -> Exit." << endl << endl;
}

void Display_add_information_message() {
  cout << "Add information to file..." << endl;
  cout << "ID, Name, Age, Email..." << endl;
}

int main() {
  int OS;
  while (true) {
    std_count = Load_from_file();
    Operation_systems_message();
    cout << "Input Option: ";
    cin >> OS;
    if (OS == 1) {
      Display_file_data();
    } else if (OS == 2) {
      Display_add_information_message();
      for (int i = 0; i < 3; i++) {
        Add_information_to_file();
      }
    } else if (OS == 3) {
      Display_add_information_message();
      while(true){
        int _ID = Add_information_to_file();
        if(_ID == 0) break; 
        cout << "Use ID 0 to quite..." << endl;
      };
    } else if (OS == 4) {
      find_student();
    } else if (OS == 5) {
      Update_student_info();
    } else if (OS == 6) {
      Verify_clear_data();
    } else if (OS == 7) {
      break;
    }
  }
}