#include <iostream>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include <random>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main(){

    random_device rd;
    // mersenne twister
    mt19937 gen(rd());
    uniform_real_distribution<float> dist(0.0, 1.0);
    float randomNumber = dist(gen);

    // bool scissor = randomNumber >= 0.0 && randomNumber < 1.0/3.0;
    // bool rock = randomNumber >= 1.0/3.0 && randomNumber < 2.0/3.0;
    // bool paper = randomNumber >=2.0/3.0  && randomNumber <= 1.0;

    string bot_move;
    if(randomNumber < 1.0 / 3.0){
        bot_move = "scissor";
    }else if(randomNumber < 2.0/3.0){
        bot_move = "rock";
    }else{
        bot_move = "paper";
    }

    string player_move;
    cout << "your move (rock, paper, scissor):";
    cin >> player_move;

    for(char &c : player_move)
        c = tolower(c);

    bool isTie = strcasecmp(player_move.c_str(),bot_move.c_str()) ;
    bool isBotWin = (bot_move == "rock" && player_move == "scissor") || (bot_move == "paper" && player_move == "rock") || (bot_move == "scissor" && player_move == "paper");
    bool isPlayerWin = (bot_move == "rock" && player_move == "paper") || (bot_move == "paper" && player_move == "scissor") || (bot_move == "scissor" && player_move == "rock");

    if( isTie == 0){
        cout << "you picked " << player_move << " computer picked " << bot_move << ". Tie" << endl;
    }else if(isBotWin){
        cout << "you picked " << player_move << " computer picked " << bot_move << ". Computer win" << endl;
    }else if(isPlayerWin) {
        cout << "you picked " << player_move << " computer picked " << bot_move << ". you win" << endl;
    } else{
        cout <<"INVALID MOVE" << endl;
    }

    return 0;
}