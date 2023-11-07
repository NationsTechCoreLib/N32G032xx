1、功能说明

    此例程为FreeRTOS创建两个相同优先级的线程来调度切换LED的示例。在前5秒，线程1每200ms切换LED1，线程2每500ms切换LED2。在接下来的5秒中，线程1挂起自己，线程2继续切换LED2。在最后5秒中，线程2恢复线程1，然后挂起自己，线程1每500毫秒切换LED1一次。
    
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
        b，前5s,LED1（间隔200ms）和LED2（间隔500ms）同时闪烁；中间5s，LED1灭，LED2继续闪烁（间隔500ms）；后5s，LED1闪烁（间隔400ms），LED2灭，以此反复，周期为15s。
	
4、注意事项
     1、systick作为时间基准源，并配置为1ms tick 



1、Function Description

    This is an example of creating two threads of the same priority for FreeRTOS to schedule switching LEDs. In the first 5 seconds, thread 1 switches LED1 every 200ms and thread 2 switches LED2 every 500ms. in the next 5 seconds, thread 1 hangs itself and thread 2 continues to switch LED2. in the last 5 seconds, thread 2 resumes thread 1 and then hangs itself, and thread 1 switches LED1 every 500 milliseconds.
    
2、Using environment

    Software development environment:
        IDE tool: KEIL MDK-ARM 5.30
    
    Hardware environment:
        Development Board N32G032R8L7-STB

3、Use instructions
	
    1、LED1----------PB1
    2、LED2----------PB6

    3、Test steps and phenomena
        a, compile and download the code reset run
        b, the first 5s, LED1 (interval 200ms) and LED2 (interval 500ms) flashing at the same time; the middle 5s, LED1 extinguished, LED2 continue to flash (interval 500ms); after 5s, LED1 flashing (interval 400ms), LED2 extinguished, and so on and so forth, the cycle is 15s.
	
4、Notes
     1, systick as a time reference source, and configured as 1ms tick 

