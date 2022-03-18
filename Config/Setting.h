#ifndef SETTING_H
#define SETTING_H


//#define HERO1
//#define INFANTRY3
#define INFANTRY4
//#define INFANTRY5
//#define SENTRY7






#ifdef INFANTRY4
// ���������ļ�
#define PARAMETER_FILE "Infantry4Parameter.h"
// imu��װ����
#define IMU_DIRECTION_zryx_XYZ
// ���ID����
#define YAW_MOTOR_ID                0x205
#define PITCH_MOTOR_ID              0x206
#define ROTOR_MOTOR_ID              0x203
#define AMMO_LEFT_MOTOR_ID          0x202
#define AMMO_RIGHT_MOTOR_ID         0x201
// �����װ����
// ��̨��������˶��������̨��̬�����ƣ�����ϵͬ��Ϊ1������Ϊ-1
// ���̵�������˶�����͵������ǹ�ܷ���ͬ��Ϊ1������Ϊ-1
// Ħ���ֵ�������˶�����͵���ͬ��Ϊ1������Ϊ-1
#define YAW_MOTOR_DIRECTION         1
#define PITCH_MOTOR_DIRECTION       1
#define ROTOR_MOTOR_DIRECTION       -1
#define AMMO_LEFT_MOTOR_DIRECTION   -1
#define AMMO_RIGHT_MOTOR_DIRECTION  1
// ��̨YAW�����͸����޷�
#define YAW_ZERO_ECDANGLE           -94.9658203f
#define PITCH_MIN_ANGLE             -22.8f
#define PITCH_MAX_ANGLE             18.0f
// Ĭ��Ħ�����ٶ�
#define DEFAULT_AMMOL_PID           AMMO_LEFT_SPEED_15MS
#define DEFAULT_AMMOR_PID           AMMO_RIGHT_SPEED_15MS
#define DEFAULT_AMMO_SPEEDSET       AMMO_SPEEDSET_15MS
// ͨ��can����λ��
#define COMMUNICATE_CANPORT         hcan1
#endif


#ifdef SENTRY7
// ���������ļ�
#define PARAMETER_FILE "Sentry7Parameter.h"
// imu��װ����
#define IMU_DIRECTION_rxryz_XYZ
// ���ID����
#define YAW_MOTOR_ID                0x205
#define PITCH_MOTOR_ID              0x206
#define ROTOR_MOTOR_ID              0x203
#define AMMO_LEFT_MOTOR_ID          0x201
#define AMMO_RIGHT_MOTOR_ID         0x202
// �����װ����
// ��̨��������˶��������̨��̬�����ƣ�����ϵͬ��Ϊ1������Ϊ-1
// ���̵�������˶�����͵������ǹ�ܷ���ͬ��Ϊ1������Ϊ-1
// Ħ���ֵ�������˶�����͵���ͬ��Ϊ1������Ϊ-1
#define YAW_MOTOR_DIRECTION         -1
#define PITCH_MOTOR_DIRECTION       -1
#define ROTOR_MOTOR_DIRECTION       1
#define AMMO_LEFT_MOTOR_DIRECTION   -1
#define AMMO_RIGHT_MOTOR_DIRECTION  1
// ��̨YAW�����͸����޷�
#define YAW_ZERO_ECDANGLE           0.0f
#define PITCH_MIN_ANGLE             -8.8f
#define PITCH_MAX_ANGLE             28.0f
// Ĭ��Ħ�����ٶ�
#define DEFAULT_AMMOL_PID           AMMO_LEFT_SPEED_15MS
#define DEFAULT_AMMOR_PID           AMMO_RIGHT_SPEED_15MS
#define DEFAULT_AMMO_SPEEDSET       AMMO_SPEEDSET_15MS
// ͨ��can����λ��
#define COMMUNICATE_CANPORT         hcan2
#endif




//#define IMU_DIRECTION_xyz_XYZ
//#define IMU_DIRECTION_yrxz_XYZ
//#define IMU_DIRECTION_rxryz_XYZ
//#define IMU_DIRECTION_ryxz_XYZ

//#define IMU_DIRECTION_zryx_XYZ
//#define IMU_DIRECTION_yzx_XYZ
//#define IMU_DIRECTION_rzyx_XYZ
//#define IMU_DIRECTION_ryrzx_XYZ




#endif

