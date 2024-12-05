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
  void victory_calculator();
  void print_results();
  
};

#endif //MONTYHALL_H
