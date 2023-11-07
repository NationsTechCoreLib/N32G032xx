1、功能说明
	1、PD模式的进入和唤醒退出。


2、使用环境

	软件开发环境： KEIL MDK-ARM V5.34.0.0
	硬件环境：    基于N32G032R8L7_STB V1.0开发


3、使用说明
	
	/* 描述相关模块配置方法；例如:时钟，I/O等 */
	1、时钟源：HSE+PLL
	2、时钟频率：48M

	/* 描述Demo的测试步骤和现象 */
	在KEIL下编译后烧录到评估板，串接电流表，上电后过一会，电流明显变小。按下WAKEUP按键，电流回到了mA级别。过了一会又降到uA。
    如果开启打印输出，可以看到串口输出“Lower Power Entry”，唤醒后输出“PWR_PD INTI”，说明PD唤醒后从0地址开始执行。
           

4、注意事项
	无
	
	
1. Functional Description:
    1. Entry into and Wake-up from Power-down (PD) Mode.
	
2. Usage Environment:

	Software Development Environment: KEIL MDK-ARM V5.34.0.0
	Hardware Environment: Developed based on the evaluation board N32G032R8L7-STB V1.0

3. Usage Instructions:

	/* Describe the configuration methods for relevant modules, e.g., clock, I/O, etc */
	1. Clock Source: HSE+PLL
	2. Clock Frequency: 48MHz

	/* Describe the testing steps and observed behavior of the demo */
	1. After compiling with KEIL, burn the program onto the evaluation board, and connect a current meter. After powering on, observe that the current consumption decreases significantly after a while. 
	   Press the WAKEUP button, and the current returns to the mA level. After a while, it drops to uA. If print output is enabled, you can see serial output "Lower Power Entry" when entering PD mode, 
	   and "PWR_PD INIT" when waking up, indicating that PD wake-up starts execution from address 0.

4. Notes:
	None
	

