/**
* @file pid.h
* @author Maitreya Kulkarni (Driver), Markose Jacob (Navigator)
* @date 2 October 2021
* @copyright 2021 Maitreya Kulkarni , Markose Jacob
* @brief This is a class for a PID controller
*/
#ifndef INCLUDE_pid_hpp_
#define INCLUDE_pid_hpp_
#include <iostream>
#pragma once
namespace ttd{
class PID{
    public:
        double target_velocity,actual_velocity ;
        //compute method here
        double compute(double actual_velocity, double target_velocity);
        double getKp();
        double getKi();
        double getKd();
        PID(double _kp=1 , double _ki=1, double _kd=1): kp{_kp} ,ki{_ki},kd{_kd} {std::cout<<"constructor"<<std::endl;};
    private:
        double kp , ki , kd;
    
    
};
} 

#endif  // INCLUDE_pid_hpp_
