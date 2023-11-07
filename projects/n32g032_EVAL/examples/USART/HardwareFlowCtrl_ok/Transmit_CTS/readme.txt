1������˵��

	�ò�����ʾ��Board1_USARTy��Board2_USARTz��ʹ��Ӳ�������ƵĻ���ͨ�š�
USARTy��USARTz������USART1��USART2��USART3��USART1��
    ���ȣ�USARTy����CTS����TxBuffer1���ݣ�USARTz����RTS�������ݣ�����
RxBuffer1��
    ��󣬱ȽϽ��������뷢�����ݣ��ȽϽ������TransferStatus������


2��ʹ�û���

	�������������KEIL MDK-ARM Professional Version 5.26.2.0

        Ӳ����������Сϵͳ��N32G032C8L7-STB_V1.1


3��ʹ��˵��
	
	ϵͳʱ���������£�
    - ʱ��Դ = HSI + PLL
    - ϵͳʱ�� = 48MHz
    
    USARTy�������£�
    - ������ = 115200 baud
    - �ֳ� = 8����λ
    - 1ֹͣλ
    - У����ƽ���
    - CTSӲ��������ʹ��
    - ������ʹ��   
    
    USARTz�������£�
    - ������ = 115200 baud
    - �ֳ� = 8����λ
    - 1ֹͣλ
    - У����ƽ���
    - RTSӲ��������ʹ��
    - ������ʹ��   
    
    
    USART�����������£�    
    - Board1 USART1_Tx.PA9    <------->   Board2 USART2_Rx.PB7
    - Board1 USART1_CTS.PA0   <------->   Board2 USART2_RTS.PA1 

    
    ���Բ���������
    - Demo��KEIL�����±����������MCU
    - �ȸ�λBoard2�ٸ�λBoard1���У��鿴Board2����TransferStatus�����У�PASSEDΪ����ͨ����FAILED
      Ϊ�����쳣


4��ע������

    ���Ƚ�������NS-LINK��MCU_TX��MCU_RX����ñ�Ͽ�

1. Function description

    This test example demonstrates the basic communication between Board1_USARTy and Board2_USARTz using hardware flow control. USARTy and USARTz can be USART1 
and USART2/USART3 and USART1.
    First, USARTy uses CTS to send TxBuffer1 data, USARTz uses RTS to receive data and stores it in RxBuffer1; 
    Then, compare the received data with the sent data, and the comparison results are stored in the variables TransferStatus.

2. Use environment

    Software development environment: KEIL MDK-ARM Professional Version 5.26.2.0

    Hardware environment: minimum system board N32G032C8L7-STB_V1.1


3. Instructions for use

    The system clock configuration is as follows:
    -Clock source = HSI + PLL
    -System clock = 48MHz
    
    The USARTy configuration is as follows:
    -Baud rate = 115200 baud
    -Word length = 8 data bits
    -1 stop bit
    -Verification control disabled
    -CTS hardware flow control enable
    -Transmitter enable
    
    The USARTz configuration is as follows:
    -Baud rate = 115200 baud
    -Word length = 8 data bits
    -1 stop bit
    -Verification control disabled
    -RTS hardware flow control enable
    -Receiver enable
    
    
    The USART pin connections are as follows:
    - Board1 USART1_Tx.PA9    <------->   Board2 USART2_Rx.PB7
    - Board1 USART1_CTS.PA0   <------->   Board2 USART2_RTS.PA1 


    
    Test steps and phenomena:
    -After the Demo is compiled in the KEIL environment, download it to the MCU
    -Reset Board2 and then reset Board1, check the Board2 variables TransferStatus,
Among them, PASSED means the test passed and FAILED means the test is abnormal


4. Matters needing attention

    the MCU_TX and MCU_RX jumper cap of the development board NS-LINK needs to be disconnected first