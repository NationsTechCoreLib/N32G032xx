1、功能说明

    此例程为FreeRTOS调度系统进出低功耗的示例。创建两个线程，一个Rx，一个Tx。Rx每阻塞500ms通过队列发送一个值，Tx通过队列阻塞等待接收Rx的值，接收到后点亮LED1，持续20ms后关闭。阻塞期间允许内核停止SysTick中断，并将系统置于sleep模式。
    
2、使用环境

    软件开发环境：
        IDE工具：KEIL MDK-ARM 5.30
    
    硬件环境：
        开发板 N32G032R8L7-STB

3、使用说明
	
    1、LED1----------PB1

    2、测试步骤与现象
        a，编译下载代码复位运行
        b，每500ms系统将走出低功率状态点亮LED1，然后返回到低功率状态20ms，然后再次离开低功率状态关闭LED1，观察到LED1快速闪烁说明系统在正常进出低功耗模式
	
4、注意事项
    1、systick作为时间基准源，并配置为1ms tick 
    2、配置进入SLEEP模式函数时，配置为立即进入



1、Function Description

    This routine is an example of FreeRTOS scheduling system in and out with low power consumption. Two threads are created, one Rx and one Tx. The Rx sends a value through the queue every 500ms of blocking, and the Tx waits to receive the value from the Rx by blocking through the queue, and then lights up LED1 when it receives it, and turns it off after 20ms. During the blocking period, the kernel is allowed to stop the SysTick interrupt and put the system in sleep mode.
    
2、Using environment

    Software development environment:
        IDE tool: KEIL MDK-ARM 5.30
    
    Hardware environment:
        Development board N32G032R8L7-STB

3、Use instructions
	
    1、LED1----------PB1

    2、test steps and phenomena
        a, compile and download the code reset run
        b, every 500ms the system will be out of the low-power state to light up LED1, and then return to the low-power state 20ms, and then leave the low-power state again to close the LED1, observed that LED1 rapid blinking indicates that the system is in and out of the normal low-power mode
	
4、Cautions
    1、Systick as the time reference source, and configure it as 1ms tick. 
    2、Configure the function to enter SLEEP mode, configure it to enter immediately.