1������˵��

    ����������ò���ʾʹ�ø����㷨ʱ�ļ�������   

2��ʹ�û���

   �������������
        IDE���ߣ�KEIL MDK-ARM 5.21.1.0
    
    Ӳ��������
        ������ N32G032R8L7-STB


3��ʹ��˵��
	
    1��ʱ��Դ��HSI+PLL
    2����ʱ�ӣ�48MHz
    3��USART1���ã�
            TX  -->  PA9   
            RX  -->  PA10           
            �����ʣ�115200       

    4�����Բ���������
        a.��������س���λ���У�
        b.�鿴���ڴ�ӡ��Ϣ���ֱ�ȷ��������������Ƿ����;
        AES�㷨������plain�����Ľ��ܽ��decrypt out�Ƿ�һ�£�
        SM4�㷨������plain�����Ľ��ܽ��decrypt out�Ƿ�һ�£�

4��ע������
   ��

1. Function description

     Encryption algorithm library API usage example


2. Use environment

     Software development environment: KEIL MDK-ARM 5.21.1.0
     Development board: N32G032R8L7-STB


3. Instructions for use
    
     1.Clock source: HSI+PLL
     2.Mian clock: 48MHz
     3.Debug serial port: 
            TX  -->  PA9   
            RX  -->  PA10           
            BAUT��115200 

     4.Use method:
         1. After compiling under KEIL, burn it to the EVB, power on
         2. Output status information through the serial port


4. Matters needing attention
     None