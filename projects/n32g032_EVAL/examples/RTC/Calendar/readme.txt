1、功能说明
    1、通过EXTI线来触发日历打印输出。


2、使用环境

	软件开发环境： KEIL MDK-ARM V5.34.0.0
	硬件环境：    基于N32G032R8L7_STB V1.0开发


3、使用说明

    /* 描述相关模块配置方法；例如:时钟，I/O等 */
	1、RTC时钟源：LSI
	2、中断线：EXTI_LINE7
	3、串口配置：
				- 串口为USART1（TX：PA9  RX：PA10）:
				- 数据位：8
				- 停止位：1
				- 奇偶校验：无
				- 波特率： 115200 

    /* 描述Demo的测试步骤和现象 */
	在KEIL下编译后烧录到评估板，PC13连接到PA7口，上电后，串口每隔1S会打印一次对应日历时间


4、注意事项
    下载后需重新上电
	
		
1. Functional Description:
    1. Trigger calendar printing output through the EXTI line.
	
2. Usage Environment:

	Software Development Environment: KEIL MDK-ARM V5.34.0.0
	Hardware Environment: Developed based on the evaluation board N32G032R8L7-STB V1.0

3. Usage Instructions:

	/* Describe the configuration methods for relevant modules, e.g., clock, I/O, etc */
	1. RTC Clock Source: LSI
	2. Interrupt Line: EXTI_LINE7
	3. Serial Configuration:
			Serial Port: USART1 (TX: PA9, RX: PA10)
			Data Bits: 8
			Stop Bits: 1
			Parity: None
			Baud Rate: 115200

	/* Describe the testing steps and observed behavior of the demo */
	After compiling in KEIL, burn the code to the evaluation board. Connect PC13 to PA7, power on the board, and the serial port will print the corresponding calendar time every 1 second.

4. Notes:
	After downloading, the board needs to be powered off and then powered on again.