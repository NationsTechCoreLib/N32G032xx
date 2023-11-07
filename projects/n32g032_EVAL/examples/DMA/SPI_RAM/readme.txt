1������˵��

    �������ṩ��һ��DMA�÷������������赽RAM֮�䴫�����ݡ�
    

2��ʹ�û���

	�������������
        IDE���ߣ�KEIL MDK-ARM 5.30
    
    Ӳ��������
        ������ N32G032R8L7-STB V1.0


3��ʹ��˵��
	
    1��ʱ��Դ��HSE+PLL
    2����ʱ�ӣ�48MHz
    3��DMAͨ����DMA_CH2��DMA_CH3��DMA_CH4��DMA_CH5
    4��SPI1 ���ã�
            SCK   -->  PA5
            MISO  -->  PA6
            MOSI  -->  PA7
            ȫ˫��
            ��ģʽ
            8bit����
            ���ԣ���ʼΪ��/�ڶ�������
            ���Ƭѡ
            �����ǰMSB
    
    5��SPI2 ���ã�
            SCK   -->  PB13
            MISO  -->  PB14
            MOSI  -->  PB15
            ȫ˫��
            ��ģʽ
            8bit����
            ���ԣ���ʼΪ��/�ڶ�������
            ���Ƭѡ
            �����ǰMSB
    
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


1.��Function Description

    This routine provides a DMA usage for transferring data from peripheral to RAM.
    

2��Usage Environment

    Software development environment:
        IDE tool: KEIL MDK-ARM 5.30
    
    Hardware environment:
        Development board N32G032R8L7-STB V1.0


3��Use instructions
	
    1��clock source: HSE + PLL
    2��Master clock: 48MHz
    3��DMA channel: DMA_CH2, DMA_CH3, DMA_CH4, DMA_CH5
    4��SPI1 Configuration:
            SCK --> PA5
            MISO --> PA6
            MOSI --> PA7
            Full duplex
            Master Mode
            8bit transmission
            Polarity: start low/second edge
            Software chip select
            Big end in front MSB
    
    5��SPI2 Config:
            SCK --> PB13
            MISO --> PB14
            MOSI --> PB15
            Full duplex
            Slave Mode
            8bit transmission
            Polarity: start low/second edge
            Software chip select
            Big end in front MSB
    
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