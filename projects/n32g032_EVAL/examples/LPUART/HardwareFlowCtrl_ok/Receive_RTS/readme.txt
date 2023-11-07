1������˵��

	�ò�����ʾ��Board1_LPUART��Board2_LPUART��ʹ��Ӳ�������ƵĻ���ͨ�š�
    ���ȣ�Board1_LPUART����CTS����TxBuffer1���ݣ�Board2_LPUART����RTS����
���ݣ�����RxBuffer1��
    ��󣬱ȽϽ��������뷢�����ݣ��ȽϽ������TransferStatus������


2��ʹ�û���

	�������������KEIL MDK-ARM Professional Version 5.26.2.0

        Ӳ����������Сϵͳ��N32G032C8L7-STB_V1.1


3��ʹ��˵��
	
	ϵͳʱ���������£�
    - ʱ��Դ = HSI + PLL
    - ϵͳʱ�� = 48MHz
    
    Board1_LPUART�������£�
    - ������ = 9600 baud
    - �ֳ� = 8����λ���̶���
    - 1ֹͣλ���̶���
    - У����ƽ���
    - CTSӲ��������ʹ��
    - ������ʹ��
    
    Board2_LPUART�������£�
    - ������ = 9600 baud
    - �ֳ� = 8����λ���̶���
    - 1ֹͣλ���̶���
    - У����ƽ���
    RTSӲ��������ʹ��
    - ������ʹ��  
    
    
    LPUART�����������£�    
    - Board1_LPUART_Tx.PB6    <------->   Board2_LPUART_Rx.PB7
    - Board1_LPUART_CTS.PA6   <------->   Board2_LPUART_RTS.PB1  

    
    ���Բ���������
    - Demo��KEIL�����±����������MCU
    - ��λ���У��鿴����TransferStatus�����У�PASSEDΪ����ͨ����FAILED
      Ϊ�����쳣


4��ע������
1. Function description

    This test example demonstrates the basic communication between Board1_LPUART and Board2_LPUART using hardware flow control. USARTz can be USART1.
     First, Board1_LPUART uses CTS to send TxBuffer1 data, USARTz uses RTS to receive data and stores it in RxBuffer1;
     Then, compare the received data with the sent data, and the comparison results are stored in the variables TransferStatus1 and TransferStatus2 respectively.


2. Use environment

    Software development environment: KEIL MDK-ARM Professional Version 5.26.2.0

    Hardware environment: minimum system board N32G032C8L7-STB_V1.1


3. Instructions for use

    The system clock configuration is as follows:
    -Clock source = HSI + PLL
    -System clock = 48MHz
    
    The Board1_LPUART configuration is as follows:
    -Baud rate = 9600 baud
    -Word length = 8 data bits (fixed)
    -1 stop bit (fixed)
    -Verification control disabled
    -CTS and RTS hardware flow control enable
    -Receiver and transmitter enable
   
    The Board2_LPUART configuration is as follows:
    -Baud rate = 9600 baud
    -Word length = 8 data bits
    -1 stop bit
    -Verification control disabled
    -CTS and RTS hardware flow control enable)
    -Receiver and transmitter enable
    
    
    The LPUART pin connections are as follows:
    - Board1_LPUART_Tx.PB6    <------->   Board2_LPUART_Rx.PB7
    - Board1_LPUART_CTS.PA6   <------->   Board2_LPUART_RTS.PB1  

    
    Test steps and phenomena:
    -After the Demo is compiled in the KEIL environment, download it to the MCU
    -Reset operation, check the variables TransferStatus in turn, among them,
      PASSED means the test passed, FAILED means the test is abnormal


4. Matters needing attention
