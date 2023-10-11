#ifndef SENDSOMEIPTHREAD_HPP
#define SENDSOMEIPTHREAD_HPP


#include <string>
#include <unistd.h>
#include <math.h>
#include <CommonAPI/CommonAPI.hpp>
#include <v1/commonapi/IPCManagerProxy.hpp>

#include "CANSenderStubImpl.hpp"
#include "CANBuffer.h"


#define SIZE 2
#define MEASURE_SIZE 1


double speed_sensor_estimation[SIZE];
double speed_sensor_letterP[SIZE][SIZE];
double speed_sensor_dt;
double speed_sensor_renewed_e[SIZE], speed_sensor_renewed_P[SIZE][SIZE];
double speed_sensor_measuredstate;

void matrix_multiply(double A[SIZE][SIZE], double B[SIZE][SIZE], double result[SIZE][SIZE]);
void kalmanFilter_(double measuredstate, double estimation[SIZE], double letterP[SIZE][SIZE], double dt, double renewed_e[SIZE], double renewed_P[SIZE][SIZE]);
uint16_t filter(uint16_t speed_sensor_rpm);

void *SendSomeipThread(void *arg);


#endif

