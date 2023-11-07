1、功能说明
    1、LP RUN模式的进入和退出。


2、使用环境

    软件开发环境： KEIL MDK-ARM V5.34.0.0
	硬件环境：    基于N32G032R8L7_STB V1.0开发

3、使用说明

    /* 描述相关模块配置方法；例如:时钟，I/O等 */
	1、时钟源：HSE+PLL
	2、时钟频率：48M

    /* 描述Demo的测试步骤和现象 */
	在KEIL下编译后烧录到评估板，串接电流表，上电后过一会，电流明显变小。又过一会电流又变大。
    循环往复。

4、注意事项
    当进入LP RUN模式时，系统时钟切换到了LSE/LSI，当退出时，需要切回用户默认系统时钟
	
	
1. Functional Description:
    1. Entry and Exit from LP RUN Mode.
	
2. Usage Environment:

	Software Development Environment: KEIL MDK-ARM V5.34.0.0
	Hardware Environment: Developed based on the evaluation board N32G032R8L7-STB V1.0

3. Usage Instructions:

	/* Describe the configuration methods for relevant modules, e.g., clock, I/O, etc */
	1. Clock Source: HSE+PLL
	2. Clock Frequency: 48MHz

	/* Describe the testing steps and observed behavior of the demo */
	1. After compiling with KEIL, burn the program onto the evaluation board, and connect a current meter. After powering on, observe that the current consumption decreases significantly after a while. 
	   Then, the current consumption increases again after some time. This cycle repeats.

4. Notes:
	When entering LP RUN mode, the system clock switches to LSE/LSI. When exiting this mode, it's necessary to switch back to the user's default system clock.
	

