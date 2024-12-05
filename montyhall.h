/**
 * @file montyhall.h
 * @author Seth Rivers
 * @date 2024-11-30
 * @brief the .h file for the monty hall program
 * 
 * 
 */

#ifndef MONTYHALL_H
#define MONTYHALL_H

using namespace std; 

class MontyHall{
 private:
  int victories_switch;
  int failures_switch;
  int victories_stay;
  int failures_stay; 
  int total_runs;
  int num_iterations;
  float percental; 

 public:
  void monty_hall();
  void simulate(int num_iterations); 
  void door_selection();
  void door_settup();
  void victory_calculator();
  void results(); 
  void print_results();
  
}
