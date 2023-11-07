1������˵��

    �������ṩ��һ��DMA�÷���������I2C������RAM֮�䴫�����ݡ�  

2��ʹ�û���

    �������������
        IDE���ߣ�KEIL MDK-ARM 5.30
    
    Ӳ��������
        ������ N32G032R8L7-STB V1.0


3��ʹ��˵��
	
    1��ʱ��Դ��HSE+PLL
    2����ʱ�ӣ�48MHz
    3��DMAͨ����DMA_CH5��DMA_CH6
    4��I2C1 ���ã�
            SCL   -->  PB6
            SDA   -->  PB7
            ADDR��0x30(7bit)
            CLOCK��100K
    
    5��I2C2 ���ã�
            SCL   -->  PA6
            SDA   -->  PA7
            ADDR��0x30(7bit)
            CLOCK��100K
    
    6��USART1���ã�
            TX  -->  PA9
            �����ʣ�115200
            ����λ��8bit
            ֹͣλ��1bit
            ��У��

    7�����Բ���������
        a���������ش��븴λ����
        b���Ӵ��ڿ���ӡ��Ϣ����֤���

4��ע������
    ��


1��Function Description

    This routine provides a DMA usage to transfer data between I2C peripheral and RAM.  

2��Usage Environment

    Software development environment:
        IDE tool: KEIL MDK-ARM 5.30
    
    Hardware environment:
        Development board N32G032R8L7-STB V1.0


3��Use instructions
	
    1��clock source: HSE + PLL
    2��Master clock: 48MHz
    3��DMA Channel: DMA_CH5, DMA_CH6
    4��I2C1 Configuration:
            SCL --> PB6
            SDA --> PB7
            ADDR: 0x30(7bit)
            CLOCK: 100K
    
    5��I2C2 Configuration:
            SCL --> PA6
            SDA --> PA7
            ADDR: 0x30(7bit)
            CLOCK: 100K
    
    6��USART1 Configuration:
            TX --> PA9
            Baud rate: 115200
            Data bit: 8bit
            Stop bit: 1bit
            No parity

    7��test steps and phenomena
        a, compile and download the code reset run
        b, from the serial port to see the print information to verify the results

4��Notes
    No