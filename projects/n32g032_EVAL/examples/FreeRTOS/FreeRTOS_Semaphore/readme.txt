1、功能说明

    此例程为FreeRTOS调度线程通过信号量来切换LED灯的示例。创建两个线程1、2，线程1的优先级高于线程2。线程1首先获得信号量，并且在接下来的5s内每200ms切换一次LED1,然后释放信号量并挂起自己。线程1挂起后线程2将获取信号量并执行，一旦开始执行，线程2将恢复线程1，系统调度执行线程1。但由于此时信号量被线程2抢占，线程1不会成功执行进而执行线程2，在接下来的5s内每200ms切换一次LED2,然后释放掉信号量。
    
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
        b，LED1周期性的闪烁5s后切换成LED2周期性的闪烁5s，由此循环，说明系统正在正确运行。
	
4、注意事项
     1、systick作为时间基准源，并配置为1ms tick 



1、Function Description

    This is an example of FreeRTOS scheduling threads to switch LEDs by signaling. Create two threads 1 and 2, thread 1 has higher priority than thread 2. thread 1 will first get the signal quantity and switch LED1 every 200ms in the next 5s, then release the signal quantity and hang itself. After thread 1 hangs up, thread 2 will get the signal quantity and execute it, once it starts to execute, thread 2 will restore thread 1, and the system schedules the execution of thread 1. However, since the signal quantity is seized by thread 2 at this time, thread 1 won't be executed successfully, and then it will execute thread 2, and it will switch the LED2 once in every 200ms in the next 5s, and then it will release the signal quantity.
    
2、Using environment

    Software development environment:
        IDE tool: KEIL MDK-ARM 5.30
    
    Hardware environment:
        Development board N32G032R8L7-STB

3、Use instructions
	
    1、LED1----------PB1
    2、LED2----------PB6

    3、test steps and phenomena
        a, compile and download the code reset run
        b, LED1 periodically flashes for 5s and then switches to LED2 periodically flashes for 5s, thus cycling, indicating that the system is running correctly.
	
4、Notes
     1, systick as a time reference source, and configured as 1ms tick 

