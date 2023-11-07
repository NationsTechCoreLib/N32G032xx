1、功能说明
	1、PVD配置电压产生对应的中断。


2、使用环境

	软件开发环境： KEIL MDK-ARM V5.34.0.0
	硬件环境：    基于N32G032R8L7_STB V1.0开发

3、使用说明
	
	/* 描述相关模块配置方法；例如:时钟，I/O等 */
	1、时钟源：HSE+PLL
	2、时钟频率：48M

	/* 描述Demo的测试步骤和现象 */
	在KEIL下编译后烧录到评估板，通过仿真器进入调试模式，在PVD_IRQHandler()中设置断点。
	全速运行。然后再把电压调到PVD设置电压附近，此时程序会停在断点处。


4、注意事项
	无
	
	
1. Functional Description:
    1. Configuration of the Programmable Voltage Detector (PVD) to Generate Corresponding Interrupts.
	
2. Usage Environment:

	Software Development Environment: KEIL MDK-ARM V5.34.0.0
	Hardware Environment: Developed based on the evaluation board N32G032R8L7-STB V1.0

3. Usage Instructions:

	/* Describe the configuration methods for relevant modules, e.g., clock, I/O, etc */
	1. Clock Source: HSE+PLL
	2. Clock Frequency: 48MHz

	/* Describe the testing steps and observed behavior of the demo */
	1. After compiling with KEIL, burn the program onto the evaluation board. Enter debug mode through the debugger and set a breakpoint in the PVD_IRQHandler() function. 
	   Run the program at full speed. Then adjust the voltage to be near the PVD-configured voltage threshold. At this point, the program will stop at the breakpoint.

4. Notes:
	None
	

