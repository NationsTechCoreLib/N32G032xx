1、功能说明

    此例程为FreeRTOS调度线程向队列发送和接收一个递增值的示例。创建两个线程，一个作生产者，一个作消费者。生产者的优先级低于消费者。生产者线程发送递增值，消费者线程阻塞式接收递增值。生产者每隔1s向队列发送消息，此时，消费者将解除阻塞，抢占生产者，并删除该项。
    
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
        b，LED1不停地周期性地闪烁（1秒）、LED2常灭，说明示例正在正常运行。发送消息错误，双方事件结构的消息值不相同等任何错误发生都将导致LED2被点亮。
	
4、注意事项
    1、systick作为时间基准源，并配置为1ms tick 
    2、ProducerValue与ConsumerValue必须保持相等



1、Function Description

    This routine is an example of FreeRTOS scheduling threads to send and receive an incremental value to and from a queue. Two threads are created, one as a producer and one as a consumer. The producer has a lower priority than the consumer. The producer thread sends the incremented value and the consumer thread receives the incremented value blockingly. The producer sends a message to the queue every 1s, at this time, the consumer will unblock, seize the producer, and delete the item.
    
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
        b, LED1 keeps flashing periodically (1 second), LED2 is always off, indicating that the example is running normally. Send message error, the two sides of the event structure of the message value is not the same, and any other error occurs will lead to LED2 is lit.
	
4、Notes
    1, systick as a time base source, and configured to 1ms tick 
    2、ProducerValue and ConsumerValue must be kept equal.