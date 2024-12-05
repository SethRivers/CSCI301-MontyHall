/**
 * @file montyhall.cpp
 * @author Seth Rivers
 * @date 2024-11-30
 * @brief the .cpp program for the montyhall sim program
 * 
 * 
 */

#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "montyhall.h" 
using namespace std;

void MontyHall::monty_hall(){
  //random number generation seed. 
  srand(time(0));
  //the user's initial choice. 
  int User_Door = 1 + rand() % 3; 
  //represents the door that holds the car
  int User_Door_Prize = 1 + rand() % 3;
  //represents the doors that hold the 
  int User_Door_Goat;
  //will determine if the user switches or not
  int User_Switch; 
  //The user's decision. 
  char decision;
  
  cout << "======================\n"
       << "You have joined a gameshow that uses the Monty-hall scenario. You have chosen a door, and the host has opened another door; revealing a goat."
       << "You have been given the option to switch your choice. What will you do?"
       << "(select Y/N)"
       << endl;

  cin >> decision; 

  if (decision == 'N'){
    cout << "Selection Finalized." << endl;
  };

  else if (decision == 'Y'){
    //new door selection. 
    int New_User_Door; 

  };

  else {
    cout << "Invalid selection. Closing program." 
  }
};
void MontyHall::simulate(int num_iterations){

};
void MontyHall::victory_calculator(){

};
void MontyHall::print_results(){

};
