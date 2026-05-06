#include <iostream>
#include <fstream>

using namespace std;
void File_generator(){
    for(int range = 1; range <= 10; range++){
        string file_name = "file" + to_string(range) + ".txt";
        string folder_name = "TP03-nithya";
        string file_path = folder_name + "/" + file_name;
        ofstream g_file(file_path);

        for(int i = 1; i <= 10 * range; i++){
            g_file << i << " ";
        }
        g_file.close();
    }
}

int main(){
    File_generator();
}