1、功能说明
	1. 通过EXTI来触发时间戳。

2、使用环境

	软件开发环境： KEIL MDK-ARM V5.34.0.0
	硬件环境：    基于N32G032R8L7_STB V1.0开发

3、使用说明
	
	/* 描述相关模块配置方法；例如:时钟，I/O等 */
	1、时钟源：LSI
	2、EXTI：PB7
	3、串口配置：
				- 串口为USART1（TX：PA9  RX：PA10）:
				- 数据位：8
				- 停止位：1
				- 奇偶校验：无
				- 波特率： 115200 

	/* 描述Demo的测试步骤和现象 */
    1、在KEIL下编译后烧录到评估板，上电后，给PB7灌入高电平，串口打印输出时间戳。

4、注意事项
	无
	
	
1. Functional Description:
    1. Trigger a timestamp using EXTI.
	
2. Usage Environment:

	Software Development Environment: KEIL MDK-ARM V5.34.0.0
	Hardware Environment: Developed based on the evaluation board N32G032R8L7-STB V1.0

3. Usage Instructions:

	/* Describe the configuration methods for relevant modules, e.g., clock, I/O, etc */
	1. RTC Clock: LSI
	2. EXTI: PB7
	3. Serial Configuration:
			Serial Port: USART1 (TX: PA9, RX: PA10)
			Data Bits: 8
			Stop Bits: 1
			Parity: None
			Baud Rate: 115200

	/* Describe the testing steps and observed behavior of the demo */
	1. After compiling in KEIL, burn the code to the evaluation board. When powered on, apply a high level to PB7. The serial port will print the timestamp.

4. Notes:
	None
	