1、功能说明
	1、STOP进入和唤醒退出示例。

2、使用环境

	软件开发环境： KEIL MDK-ARM V5.34.0.0
	硬件环境：    基于N32G032R8L7_STB V1.0开发

3、使用说明
	
	/* 描述相关模块配置方法；例如:时钟，I/O等 */
	1、时钟源：HSE+PLL
	2、时钟频率：48M

	/* 描述Demo的测试步骤和现象 */
	在KEIL下编译后烧录到评估板，上电输出打印“PWR_STOP INIT”。过了一会输出打印“STOP ENTRY”，表明进入STOP了。
	按下WAKEUP按键后，串口又输出“STOP EXIT”，表明MCU被唤醒了.从停止的位置执行。


4、注意事项
	无


1. Functional Description:
    1. Entry and Wakeup from STOP Mode..
	
2. Usage Environment:

	Software Development Environment: KEIL MDK-ARM V5.34.0.0
	Hardware Environment: Developed based on the evaluation board N32G032R8L7-STB V1.0

3. Usage Instructions:

	/* Describe the configuration methods for relevant modules, e.g., clock, I/O, etc */
	1. Clock Source: HSE+PLL
	2. Clock Frequency: 48MHz

	/* Describe the testing steps and observed behavior of the demo */
	1. After compiling with KEIL, burn the program onto the evaluation board. Upon powering up, the program outputs "PWR_STOP INIT." After a while, it outputs "STOP ENTRY", 
	   indicating entry into STOP mode. Pressing the WAKEUP button results in the serial port outputting "STOP EXIT," indicating that the MCU has been awakened and resumed execution from where it stopped.
	   
4. Notes:
	None
	