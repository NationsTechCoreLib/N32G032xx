1������˵��
	1��SLEEP����ͻ����˳�ʾ����


2��ʹ�û���

	������������� KEIL MDK-ARM V5.34.0.0
	Ӳ��������    ����N32G032R8L7_STB V1.0����


3��ʹ��˵��
	
	/* �������ģ�����÷���������:ʱ�ӣ�I/O�� */
	1��ʱ��Դ��HSE+PLL
	2��ʱ��Ƶ�ʣ�48M

	/* ����Demo�Ĳ��Բ�������� */
	��KEIL�±������¼�������壬�ϵ������ӡ��PWR_SLEEP INIT��������һ�������ӡ��Lower Power Entry������������SLEEP�ˡ�
	����WAKEUP�����󣬴����������Lower Power Entry��������MCU����֮���ֿ�ʼ����SLEEPģʽ��


4��ע������
	��

	
1. Functional Description:
    1. Entry and Wakeup from SLEEP Mode.
	
2. Usage Environment:

	Software Development Environment: KEIL MDK-ARM V5.34.0.0
	Hardware Environment: Developed based on the evaluation board N32G032R8L7-STB V1.0

3. Usage Instructions:

	/* Describe the configuration methods for relevant modules, e.g., clock, I/O, etc */
	1. Clock Source: HSE+PLL
	2. Clock Frequency: 48MHz

	/* Describe the testing steps and observed behavior of the demo */
	1. After compiling with KEIL, burn the program onto the evaluation board. Upon powering up, the program outputs "PWR_SLEEP INIT." After a while, it outputs "Lower Power Entry," 
	   indicating entry into SLEEP mode. Pressing the WAKEUP button results in the serial port outputting "Lower Power Entry" again, indicating that the MCU enters SLEEP mode again after waking up.
	   
4. Notes:
	None
	
