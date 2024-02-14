/********************************************************************************
********************************************************************************
* �ļ���:    error_event.h         
* ��������:    
         ������״̬ ����״̬��
* �汾      ����       ʱ��          ״̬
* V1.0      sunlf      2016.4.5    �����ļ�
*****************************************************************************
*****************************************************************************/

#ifndef _ERROR_ENENT_H
#define _ERROR_ENENT_H
#include "stm32f4xx.h"

/***������Ӳ��״̬***/
typedef union
{
    u8 all;
    struct
    {
       u8 mpu6050_flag:1;        //mpu6050�����Ǵ����־ 1 ��ʾ������ 0 ��ʾok
       u8 ble_hm13_flag:1;       //hm13����ģ������־ 1��ʾ������ 0 ��ʾok
	   u8 nrf24lc01_flag:1;      //nrf24lc01����ģ���־
	   u8 eeprom_24lc64_flag:1;  //�洢��ģ���־
	   u8 reserved:4;
 	
    }bit;
}ERROR_EVENT_UNION;

extern ERROR_EVENT_UNION error_flag;


#endif