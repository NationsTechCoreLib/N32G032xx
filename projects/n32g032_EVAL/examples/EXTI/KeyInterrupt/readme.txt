1、功能说明

	1、此例程展示通过外部触发中断，控制 LED 闪烁


2、使用环境

	软件开发环境： KEIL MDK-ARM V5.34.0.0
	硬件环境：    基于N32G032R8L7_STB V1.0开发

3、使用说明
	
	/* 描述相关模块配置方法；例如:时钟，I/O等 */
	SystemClock：48MHz
	GPIO：PA5 选择作为外部中断入口，PB7 控制 LED(D3) 闪烁


	/* 描述Demo的测试步骤和现象 */
	1.编译后下载程序复位运行；
	2.按下松开 KEY2 按键，LED 闪烁；


4、注意事项
	无


1. Functional Description:
    1. This example demonstrates controlling LED blinking through an external trigger interrupt.
	
2. Usage Environment:

	Software Development Environment: KEIL MDK-ARM V5.34.0.0
	Hardware Environment: Developed based on the evaluation board N32G032R8L7-STB V1.0

3. Usage Instructions:

	/* Describe the configuration methods for relevant modules, e.g., clock, I/O, etc */
	System Clock: 48MHz
	GPIO: PA5 selected as an external interrupt input, PB7 controls LED (D3) blinking.

	/* Describe the testing steps and observed behavior of the demo */

	1. After compilation, download the program and reset to run.
	Press and release the KEY2 button; the LED will blink.

4. Notes:
	None