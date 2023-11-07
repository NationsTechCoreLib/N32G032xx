1������˵��

	�ò�����ʾ��USARTy��USARTz��ͨ����ѯ����ʶʵ�ֵĻ���ͨ�š�
    ���ȣ�USARTy����TxBuffer1������USARTz��USARTz�������ݴ���RxBuffer1��
�ȽϽ��������뷢�����ݣ��ȽϽ������TransferStatus������
    ���USARTz����TxBuffer2������USARTy��USARTy�������ݴ���RxBuffer2��
�ȽϽ��������뷢�����ݣ��ȽϽ������TransferStatus������
    USARTy��USARTz������USART1��USART2��


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
    
    USART�����������£�
    - USART1_Tx.PA9    <------->   UART6_Rx.PA5
    - USART1_Rx.PA10   <------->   UART6_Tx.PA4 
    ��
    - UART5_Tx.PB0   <------->   USART2_Rx.PA10
    - UART5_Rx.PB1   <------->   USART2_Tx.PA9

    
    ���Բ���������
    - Demo��KEIL�����±����������MCU
    - ��λ���У������β鿴����TransferStatus�����У�PASSEDΪ����ͨ����
      FAILEDΪ�����쳣


4��ע������

    ���Ƚ�������NS-LINK��MCU_TX��MCU_RX����ñ�Ͽ�

1. Function description

    This test case demonstrates the basic communication between USARTy and USARTz by querying the detection identification.
    First, USARTy sends TxBuffer1 data to USARTz, and USARTz receives data and stores it in RxBuffer1.
Compare the received data with the sent data, and the comparison result is stored in the TransferStatus variable.
    Subsequently, USARTz sends TxBuffer2 data to USARTy, and USARTy receives data to RxBuffer2.
Compare the received data with the sent data, and the result of the comparison is stored in the TransferStatus variable.
    USARTy and USARTz can be USART1 and USART2.


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
    
    The USART pin connections are as follows:
    - USART1_Tx.PA9    <------->   UART6_Rx.PA5
    - USART1_Rx.PA10   <------->   UART6_Tx.PA4 
    or
    - UART5_Tx.PB0   <------->   USART2_Rx.PA10
    - UART5_Rx.PB1   <------->   USART2_Tx.PA9

    
    Test steps and phenomena:
    -After the Demo is compiled in the KEIL environment, download it to the MCU
    -Reset operation, check the variables TransferStatus twice, among them,
      PASSED means the test passed, FAILED means the test is abnormal


4. Matters needing attention

    the MCU_TX and MCU_RX jumper cap of the development board NS-LINK needs to be disconnected first