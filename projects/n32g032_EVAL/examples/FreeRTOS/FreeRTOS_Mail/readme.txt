1、功能说明

    此例程为FreeRTOS调度系统发送和接收邮件示例。创建两个线程，一个作生产者，一个作消费者。生产者的优先级低于消费者。生产者线程发送邮件，消费者线程阻塞式接收邮件。生产者发送邮件时将邮件放入邮件队列中，一旦生产者在队列上发布了邮件，消费者就会解除阻塞，抢占生产者，免费获取邮件信息。
    
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
        b，LED1不停地周期性地闪烁、LED2常亮，说明示例正在正常运行。发送邮件错误，双方邮件结构的变量值不相同等任何错误发生都将导致LED2熄灭。
	
4、注意事项
     1、systick作为时间基准源，并配置为1ms tick 



1、Function Description

    This is an example of sending and receiving emails from the FreeRTOS scheduling system. Two threads are created, one as a producer and one as a consumer. The producer has a lower priority than the consumer. The producer thread sends emails and the consumer thread receives emails in blocking mode. When the producer sends an email, it puts the email into the email queue. Once the producer releases an email on the queue, the consumer will unblock and seize the producer to get the email message for free.
    
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
        b, LED1 keeps flashing periodically, LED2 is always on, indicating that the example is running normally. Send mail error, both sides of the mail structure of the variable value is not the same, and so on any error occurs will lead to LED2 off.
	
4、Notes
     1. systick is used as the time base source and configured as 1ms tick. 