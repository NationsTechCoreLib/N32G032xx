1、功能说明

    此例程为FreeRTOS调度三个不同优先级的线程访问同一互斥锁的示例。高优先级线程首先访问互斥锁，然后进入20ms的休眠期，在挂起自己前释放掉互斥锁以及切换LED1；中优先级线程以阻塞的形式等待访问互斥锁，只有高优先级释放掉互斥锁后它才解除阻塞访问互斥锁，在挂起自己前释放掉互斥锁以及切换LED1；低优先级线程通过非阻塞调用来获得互斥锁，只有在高优先级和中优先级线程都挂起，它才能成功地获得互斥锁，同时，恢复两个挂起的线程，在挂起自己前释放掉互斥锁以及切换LED1。
    
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
        b，LED1快速地周期性地闪烁，LED2长灭。获取、释放互斥锁有误，线程未成功挂起等任何错误都将引起LED2切换。
	
4、注意事项
    1、systick作为时间基准源，并配置为1ms tick 


1、Function Description

    This routine is an example of FreeRTOS scheduling three different priority threads to access the same mutex lock. The high-priority thread first accesses the mutex lock, then enters a 20ms sleep period, releases the mutex lock and toggles LED1 before hanging itself; the medium-priority thread waits for access to the mutex lock in blocking mode, and only after the high-priority releases the mutex lock does it unblock access to the mutex lock, and then releases the mutex lock and toggles LED1 before hanging itself; the low-priority thread acquires the mutex lock through a non-blocking call. Mutual exclusion lock, only in the high-priority and medium-priority threads are hung up, it can successfully obtain the mutual exclusion lock, at the same time, to restore the two hung up threads, before hanging themselves before releasing the mutual exclusion lock and switching LED1.
    
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
        b, LED1 flashes rapidly and periodically, and LED2 goes out. Getting, releasing the mutual exclusion lock in error, thread unsuccessfully hung and any other errors will cause LED2 switching.
	
4、Cautions
    1, systick as a time reference source, and configured to 1ms tick 