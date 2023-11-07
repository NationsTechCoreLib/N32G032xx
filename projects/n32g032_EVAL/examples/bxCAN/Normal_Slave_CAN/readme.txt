1������˵��

    ������չʾ����Ϊ�ӻ�ʹ��CAN�շ����ݡ�   

2��ʹ�û���

     �������������KEIL MDK-ARM V5.34.0.0
     Ӳ������������������N32G032R8L7-STBV1.0����

3��ʹ��˵��
	
    1��ʱ��Դ��HSE+PLL
    2����ʱ�ӣ�48MHz
    3��CAN���ã�
            TX   -->  PA4          
            RX   -->  PA5         
            �����ʣ�500K
            
    4��USART1���ã�
            TX  -->  PA9   
	        RX  -->  PA10           
            �����ʣ�115200
        

    5�����Բ���������
        a��������������CAN
        b���������ش��븴λ����
        c���ӻ����յ��������ݺ����̽�ԭ���ݷ���

4��ע������
    ��������Normal_Master_CAN����ʹ��


1. Function Description

    This routine shows the use of CAN to send and receive data as a slave.   

2��Using environment

     Software development environment: KEIL MDK-ARM V5.34.0.0
     Hardware environment: based on evaluation board N32G032R8L7-STBV1.0 development

3, the use of instructions
	
    1��Clock source: HSE+PLL
    2��Master clock: 48MHz
    3��CAN configuration:
            TX --> PA4          
            RX --> PA5         
            Baud rate: 500K
            
    4��USART1 configuration:
            TX --> PA9   
	        RX --> PA10           
            Baud rate: 115200
        

    5��Test steps and phenomena
        a, jumper connection host CAN
        b, compile and download the code reset run
        c, the slave receives the data from the host and immediately sends out the original data

4, Notes
    The host is used with Normal_Master_CAN routine.
