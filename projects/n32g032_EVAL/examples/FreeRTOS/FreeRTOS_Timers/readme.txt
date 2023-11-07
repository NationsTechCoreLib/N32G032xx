1、功能说明

    此例程为FreeRTOS创建线程和创建定时器来切换LED的示例。这个示例创建了一个每400毫秒切换LED2的线程，以及一个周期性计时器，它每200毫秒调用一个回调函数来切换LED1。
    
2、使用环境

    软件开发环境：
        IDE工具：KEIL MDK-ARM 5.30
    
    硬件环境：
        开发板 N32G032R8L7-STB

3、使用说明
	
    1、LED1----------PB1
    2、LED2----------PB6

    3、测试步骤与现象
        a，编译下载代码复位运行
        b，LED1（间隔200ms）和LED2（间隔400ms）同时闪烁。
	
4、注意事项
     1、systick作为时间基准源，并配置为1ms tick 


1、Function Description

    This routine creates a thread and creates a timer to toggle LEDs as an example for FreeRTOS. This example creates a thread that toggles LED2 every 400 milliseconds, and a periodic timer that calls a callback function to toggle LED1 every 200 milliseconds.
    
2、Using environment

    Software development environment:
        IDE tool: KEIL MDK-ARM 5.30
    
    Hardware environment:
        Development board N32G032R8L7-STB

3、Use instructions
	
    1、LED1----------PB1
    2、LED2----------PB6

    3、Test steps and phenomena
        a, compile and download the code reset run
        b, LED1 (200ms interval) and LED2 (400ms interval) flash at the same time.
	
4、Notes
     1, systick as a time reference source, and configured as 1ms tick 
