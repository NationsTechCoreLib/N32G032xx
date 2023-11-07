1������˵��

    �ò�����ʾ��USARTy��USARTz��ͨ��DMAʵ�ֵĻ���ͨ�š�USARTy��USARTz
������USART1��USART2��
    ���ȣ�DMA����TxBuffer1������USARTy�������ݼĴ�����������ݷ�����
USARTz��USARTz�����жϽ������ݣ�����RxBuffer2��
    ͬʱ��DMA����TxBuffer2������USARTz�������ݼĴ�����������ݷ�����
USARTy��USARTyͨ����ѯ����־�������ݣ�����RxBuffer1��
    ��󣬷ֱ�Ƚ������ա������ݣ��ȽϽ������TransferStatus1����
��TransferStatus2������


2��ʹ�û���

	�������������KEIL MDK-ARM Professional Version 5.26.2.0

        Ӳ����������Сϵͳ��N32G032C8L7-STB_V1.1


3��ʹ��˵��
	
    ϵͳʱ���������£�
    - ʱ��Դ = HSI + PLL
    - ϵͳʱ�� = 48MHz
    
    USART�������£�
    - ������ = 115200 baud
    - �ֳ� = 8����λ
    - 1ֹͣλ
    - У����ƽ���
    - Ӳ�������ƽ��ã�RTS��CTS�źţ�
    - �������ͷ�����ʹ��
    - DMA����ģʽʹ�ܣ�DMA����ģʽ����
    
    USART�����������£�
    - USART1_Tx.PA9    <------->   USART2_Rx.PB7
    - USART1_Rx.PA10   <------->   USART2_Tx.PB6

    
    ���Բ���������
    - Demo��KEIL�����±����������MCU
    - ��λ���У����β鿴����TransferStatus1��TransferStatus2�����У�
      PASSEDΪ����ͨ����FAILEDΪ�����쳣


4��ע������

    ���Ƚ�������NS-LINK��MCU_TX��MCU_RX����ñ�Ͽ�



1. Function description

    This test example demonstrates the basic communication between USARTy and USARTz through DMA. USARTy and USARTz can be USART1 and USART2.
    First, DMA transfers the TxBuffer1 data to the USARTy send data register, and then the data is sent to 
USARTz. USARTz receives data by interrupt to RxBuffer2.
    At the same time, DMA transfers TxBuffer2 data to the USARTz send data register, and then the data is 
sent to USARTy. USARTy receives data by checking flag to RxBuffer1.
    Finally, compare the two groups of receiving and sending data respectively, and store the comparison results in the TransferStatus1 variable and the TransferStatus2 
variable.


2. Use environment

    Software development environment: KEIL MDK-ARM Professional Version 5.26.2.0

    Hardware environment: minimum system board N32G032C8L7-STB_V1.1


3. Instructions for use

    The system clock configuration is as follows:
    -Clock source = HSI + PLL
    -System clock = 48MHz
    
    The USART configuration is as follows:
    -Baud rate = 115200 baud
    -Word length = 8 data bits
    -1 stop bit
    -Verification control disabled
    -Hardware flow control disabled (RTS and CTS signals)
    -Receiver and transmitter enable
    -DMA transmission mode is enabled, DMA reception mode is disabled
    
    The USART pin connections are as follows:
    -USART1_Tx.PA9 <-------> USART2_Rx.PB7
    -USART1_Rx.PA10 <-------> USART2_Tx.PB6

    
    Test steps and phenomena:
    -After the Demo is compiled in the KEIL environment, download it to the MCU
    -Reset operation, check the variables TransferStatus1 and TransferStatus2 in turn, among them,
      PASSED means the test passed, FAILED means the test is abnormal


4. Matters needing attention

    the MCU_TX and MCU_RX jumper cap of the development board NS-LINK needs to be disconnected first