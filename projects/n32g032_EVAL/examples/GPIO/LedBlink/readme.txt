1、功能说明

	1、此例程展示 IO 控制 LED 闪烁

2、使用环境

	软件开发环境： KEIL MDK-ARM V5.34.0.0
	硬件环境：    基于N32G032R8L7_STB V1.0开发

3、使用说明
	
	/* 描述相关模块配置方法；例如:时钟，I/O等 */
	SystemClock：48MHz
	GPIO：PB1、PB6、PB7 控制 LED(D1、D2、D3) 闪烁

	/* 描述Demo的测试步骤和现象 */
	1.编译后下载程序复位运行；
	2. LED(D1、D2、D3) 闪烁；

4、注意事项
	无
	
1. Functional Description:
    1. This routine shows IO control LED flashing
	
2. Usage Environment:

	Software Development Environment: KEIL MDK-ARM V5.34.0.0
	Hardware Environment: Developed based on the evaluation board N32G032R8L7-STB V1.0

3. Usage Instructions:

	/* Describe the configuration methods for relevant modules, e.g., clock, I/O, etc */
	System Clock: 48MHz
	GPIO: PB1, PB6, PB7 control LED(D1, D2, D3) flashing


	/* Describe the testing steps and observed behavior of the demo */

	1. After compiling, the downloaded program is reset and run;
	2. LED(D1, D2, D3) flickers;

4. Notes:
	None
