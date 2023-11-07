1、功能说明
    1、通过设定唤醒时间触发中断。
    2、通过唤醒标志位来配置IO输出


2、使用环境

	软件开发环境： KEIL MDK-ARM V5.34.0.0
	硬件环境：    基于N32G032R8L7_STB V1.0开发


3、使用说明

    /* 描述相关模块配置方法；例如:时钟，I/O等 */
	1、周期性唤醒时钟源：RTCCLK（1HZ）
	2、唤醒输出口：PC13
	3、串口配置：
				- 串口为USART1（TX：PA9  RX：PA10）:
				- 数据位：8
				- 停止位：1
				- 奇偶校验：无
				- 波特率： 115200 


    /* 描述Demo的测试步骤和现象 */
	1、在KEIL下编译后烧录到评估板，上电后，串口每隔5s会打印"I am in rtc_wkup"，PC13每隔5S翻转一次。

4、注意事项
    无
	
	
1. Functional Description:
    1. Trigger an interrupt by setting the wake-up time.
	2. Configure IO output using the wake-up flag.
	
2. Usage Environment:

	Software Development Environment: KEIL MDK-ARM V5.34.0.0
	Hardware Environment: Developed based on the evaluation board N32G032R8L7-STB V1.0

3. Usage Instructions:

	/* Describe the configuration methods for relevant modules, e.g., clock, I/O, etc */
	1. Periodic Wake-up Clock Source: RTCCLK (1HZ)
	2. Wake-up Output Port: PC13
	3. Serial Configuration:
			Serial Port: USART1 (TX: PA9, RX: PA10)
			Data Bits: 8
			Stop Bits: 1
			Parity: None
			Baud Rate: 115200

	/* Describe the testing steps and observed behavior of the demo */
	1. After compiling in KEIL, burn the code to the evaluation board. When powered on, the serial port will print "I am in rtc_wkup" every 5 seconds, and PC13 will toggle every 5 seconds.

4. Notes:
	None
	