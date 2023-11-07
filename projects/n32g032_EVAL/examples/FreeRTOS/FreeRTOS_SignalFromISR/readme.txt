1、功能说明

    此例程为FreeRTOS通过ISR发送信号来通知切换LED的示例。创建一个线程，尝试获取BIT_1 | BIT_2的信号以切换LED1，中断服务程序中计数器达到400时向线程发送BIT_1信号，达到1000时向线程发送BIT_1 | BIT_2信号，并清0计数器。
    
2、使用环境

    软件开发环境：
        IDE工具：KEIL MDK-ARM 5.30
    
    硬件环境：
        开发板 N32G032R8L7-STB

3、使用说明
	
    1、LED1----------PB1

    2、测试步骤与现象
        a，编译下载代码复位运行
        b，LED1亮灭每1000ms切换一次。
	
4、注意事项
     1、systick作为时间基准源，并配置为1ms tick 


1、Function Description

    This routine is an example of FreeRTOS sending signals via ISR to notify switching LEDs. Create a thread to try to get the signal of BIT_1 | BIT_2 to switch LED1. The counter in the interrupt service program sends the BIT_1 signal to the thread when it reaches 400, and sends the BIT_1 | BIT_2 signal to the thread when it reaches 1000, and clears the counter at 0.
    
2、Using environment

    Software development environment:
        IDE tool: KEIL MDK-ARM 5.30
    
    Hardware environment:
        Development board N32G032R8L7-STB

3、Use instructions
	
    1、LED1----------PB1

    2、test steps and phenomena
        a, compile and download the code reset run
        b, LED1 light on and off every 1000ms switch.
	
4、Note
     1, systick as a time reference source, and configured as 1ms tick 
