1、功能说明

	/* 简单描述工程功能 */
        这个例程配置并演示使用EXIT外部中断及TIM定时器中断


2、使用环境

	软件开发环境：KEIL MDK-ARM V5.34.0.0
    硬件环境：基于评估板N32G032R8L7-STBV1.0开发
        

3、使用说明
	
	/* 描述相关模块配置方法；例如:时钟，I/O等 */
        SystemClock：48MHz
        USART：TX - PA9，波特率115200
	EXIT：PA0为浮空输入模式，外部中断线 - EXIT_LINE0，开启外部中断
	TIM：预分频系数 - （SystemClock/1200-1），周期 - （1200-1），开启定时器中断

	/* 描述Demo的测试步骤和现象 */
        1.编译后下载程序复位运行；
        2.查看串口打印信息，定时器中断信息每1S打印一次，按下按键打印停止，再次按下则继续打印，表明程序运行正常；


4、注意事项
	1、按键可用WAKEUP键代替（WAKEUP-PA0），此时注意J11跳线帽


1. Functional description

    /* A brief description of the function of the project */
    This routine configures and demonstrates the use of EXIT external interrupt and TIM timer interrupt.

2、Using environment

    Software Development Environment: KEIL MDK-ARM V5.34.0.0
    Hardware environment: based on the evaluation board N32G032R8L7-STBV1.0 development
        

3、Use instructions
	
        /* Describe how to configure the related modules; e.g.: Clock, I/O, etc. */
        SystemClock: 48MHz
        USART: TX - PA9, baud rate 115200
        EXIT: PA0 for floating input mode, external interrupt line - EXIT_LINE0, open external interrupt
        TIM: prescaler factor - (SystemClock/1200-1), period - (1200-1), turn on timer interrupt

	/* Describe the test steps and phenomenon of Demo */
        1、Compile and download the program to reset and run;
        2、View the serial port print information, timer interrupt information is printed every 1S, press the key to print stop, and press it again to continue printing, indicating that the program is running normally;


4、Notes
	1、the key can be used instead of WAKEUP key (WAKEUP-PA0), at this time pay attention to the J11 jumper cap