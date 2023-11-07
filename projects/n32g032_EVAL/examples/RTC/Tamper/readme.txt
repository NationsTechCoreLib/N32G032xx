1、功能说明
	1、通过PC13来检测入侵。

2、使用环境

	软件开发环境： KEIL MDK-ARM V5.34.0.0
	硬件环境：    基于N32G032R8L7_STB V1.0开发


3、使用说明
	
	/* 描述相关模块配置方法；例如:时钟，I/O等 */
	1、RTC时钟：LSI
	2、检测口：PC13
	3、串口配置：
				- 串口为USART1（TX：PA9  RX：PA10）:
				- 数据位：8
				- 停止位：1
				- 奇偶校验：无
				- 波特率： 115200 


	/* 描述Demo的测试步骤和现象 */
	1、在KEIL下编译后烧录到评估板，上电后，PC13外接上拉，再给PC13传入低电平，串口打印输出Tamper interrupt。

4、注意事项
	PC13需要外部上拉
	
	
1. Functional Description:
    1. Detect intrusion using PC13.
	
2. Usage Environment:

	Software Development Environment: KEIL MDK-ARM V5.34.0.0
	Hardware Environment: Developed based on the evaluation board N32G032R8L7-STB V1.0

3. Usage Instructions:

	/* Describe the configuration methods for relevant modules, e.g., clock, I/O, etc */
	1. RTC Clock: LSI
	2. Detection Port: PC13
	3. Serial Configuration:
			Serial Port: USART1 (TX: PA9, RX: PA10)
			Data Bits: 8
			Stop Bits: 1
			Parity: None
			Baud Rate: 115200

	/* Describe the testing steps and observed behavior of the demo */
	1. After compiling in KEIL, burn the code to the evaluation board. When powered on, connect an external pull-up resistor to PC13 and then apply a low level to PC13. The serial port will print "Tamper interrupt."

4. Notes:
	PC13 requires an external pull-up resistor.
	