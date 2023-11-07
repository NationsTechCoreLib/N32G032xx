1、功能说明
	1、通过设定闹钟时间来触发闹钟中断。
	2、通过闹钟标志位来配置IO输出

2、使用环境

	软件开发环境： KEIL MDK-ARM V5.34.0.0
	硬件环境：    基于N32G032R8L7_STB V1.0开发


3、使用说明
	
	/* 描述相关模块配置方法；例如:时钟，I/O等 */
	1、RTC时钟源：LSI
	2、闹钟IO输出：PC13
	3、串口配置：
				- 串口为USART1（TX：PA9  RX：PA10）:
				- 数据位：8
				- 停止位：1
				- 奇偶校验：无
				- 波特率： 115200 


	/* 描述Demo的测试步骤和现象 */
	在KEIL下编译后烧录到评估板，上电，串口按照闹钟设定时间进行打印输出。
	闹钟开启时在PC13口会出现翻转电平。


4、注意事项
	无
	
	
1. Functional Description:
    1. Trigger an alarm interrupt by setting the alarm time.
	2. Configure IO output using the alarm flag.
	
2. Usage Environment:

	Software Development Environment: KEIL MDK-ARM V5.34.0.0
	Hardware Environment: Developed based on the evaluation board N32G032R8L7-STB V1.0

3. Usage Instructions:

	/* Describe the configuration methods for relevant modules, e.g., clock, I/O, etc */
	1. RTC Clock Source: LSI
	2. Alarm IO Output: PC13
	3. Serial Configuration:
			Serial Port: USART1 (TX: PA9, RX: PA10)
			Data Bits: 8
			Stop Bits: 1
			Parity: None
			Baud Rate: 115200

	/* Describe the testing steps and observed behavior of the demo */
	1. Compile the code in KEIL, burn it to the evaluation board, power it on, and the serial output will follow the set alarm time. When the alarm is active, a toggle level will appear on PC13.

4. Notes:
	None
	
	