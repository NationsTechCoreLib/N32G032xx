1、功能说明

	/* 简单描述工程功能 */
        这个例程配置并演示CAN1在环回测试模式下收发CAN报文情况


2、使用环境

     软件开发环境：KEIL MDK-ARM V5.34.0.0
     硬件环境：基于评估板N32G032R8L7-STBV1.0开发


3、使用说明
	
	/* 描述相关模块配置方法；例如:时钟，I/O等 */
        SystemClock：48MHz
        USART：TX - PA9，RX - PA10，波特率115200
	CAN1：RX - PA5，TX - PA4，波特率500K，环回测试模式

	/* 描述Demo的测试步骤和现象 */
        1.编译后下载程序复位运行；
        2.查看串口打印信息，CAN1把发送的报文当做接收的报文并保存，当查看到打印信息为接收通过时程序运行正常；


4、注意事项


1. Functional description

	/* Simple description of project functions */
        This routine configures and demonstrates CAN1 sending and receiving CAN messages in loopback test mode.


2、Using environment

     Software development environment: KEIL MDK-ARM V5.34.0.0
     Hardware environment: based on the evaluation board N32G032R8L7-STBV1.0 development


3, the use of instructions
	
	/* Describe how to configure the related modules; e.g.: Clock, I/O, etc. */
        SystemClock: 48MHz
        USART: TX - PA9, RX - PA10, baud rate 115200
	CAN1: RX - PA5, TX - PA4, baud rate 500K, loopback test mode.

	/* Describe the test steps and phenomenon of Demo */
        1. Compile and download the program to reset and run;
        2. View the serial port print information, CAN1 take the transmitted message as received and save it, when the print information is viewed as received through the program runs normally;


4. Notes
