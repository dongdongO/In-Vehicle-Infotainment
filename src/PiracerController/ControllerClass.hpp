#ifndef CONTROLLERCLASS_HPP
#define CONTROLLERCLASS_HPP

#include <Python.h>

class ControllerClass
{
private:
    PyObject *pModule, *pClass, *pInstance, *pInput, *pTemp, *pThrottle, *pSteering;
    
    double throttle;  // Stores the throttle value
    double steering;  // Stores the steering value
    
    double pre_throttle;  // Stores the previous throttle value
    double pre_steering;  // Stores the previous steering value
    
    bool button_A;
    bool button_B;
    bool button_X;
    bool button_Y;

public:
    // Constructor for the ControllerClass
    ControllerClass();

    // Destructor for the ControllerClass
    ~ControllerClass();

    // Read control input from the gamepad
    void readControl();

    // Get the current throttle value
    double getThrottle();

    // Get the current steering value
    double getSteering();
    
    // Get the previous throttle value
    double getPreThrottle();

    // Get the previous steering value
    double getPreSteering();
};

#endif

