1、功能说明

    此例程为FreeRTOS信号来通知切换LED的示例。创建3个优先级相同的线程，线程1等待含有bit0位的信号来切换LED1；线程2等待含有bit1和bit2位的信号来切换LED2；线程3发送一个含有bit0位的信号并延时500ms后发送一个含有bit1和bit2位的信号，然后再延时500ms。
    
2、使用环境

    软件开发环境：
        IDE工具：KEIL MDK-ARM 5.30
    
    硬件环境：
        开发板 N32G032R8L7-STB

3、使用说明
	
    1、LED1----------PB1
    2、LED1----------PB6

    3、测试步骤与现象
        a，编译下载代码复位运行
        b，LED1灭、延时500ms，LED2灭、延时500ms，LED1亮、延时500ms，LED2亮、延时500ms，以此反复。
	
4、注意事项
     1、systick作为时间基准源，并配置为1ms tick 



1、Function Description

    This routine is an example of FreeRTOS signal to notify switching LEDs. Create 3 threads with the same priority, thread 1 waits for a signal containing bit0 to switch LED1; thread 2 waits for a signal containing bit1 and bit2 to switch LED2; thread 3 sends a signal containing bit0 and delays it for 500ms, then sends a signal containing bit1 and bit2, then delays it for another 500ms.
    
2、Using environment

    Software development environment:
        IDE tool: KEIL MDK-ARM 5.30
    
    Hardware environment:
        Development board N32G032R8L7-STB

3、Use instructions
	
    1、LED1----------PB1
    2、LED1----------PB6

    3、test steps and phenomena
        a, compile and download the code reset run
        b, LED1 extinguished, delay 500ms, LED2 extinguished, delay 500ms, LED1 light, delay 500ms, LED2 light, delay 500ms, and so on repeatedly.
	
4, Notes
     1, systick as a time reference source, and configured for 1ms tick 
