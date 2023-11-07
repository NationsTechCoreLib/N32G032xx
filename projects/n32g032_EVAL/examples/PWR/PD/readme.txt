1������˵��
	1��PDģʽ�Ľ���ͻ����˳���


2��ʹ�û���

	������������� KEIL MDK-ARM V5.34.0.0
	Ӳ��������    ����N32G032R8L7_STB V1.0����


3��ʹ��˵��
	
	/* �������ģ�����÷���������:ʱ�ӣ�I/O�� */
	1��ʱ��Դ��HSE+PLL
	2��ʱ��Ƶ�ʣ�48M

	/* ����Demo�Ĳ��Բ�������� */
	��KEIL�±������¼�������壬���ӵ������ϵ���һ�ᣬ�������Ա�С������WAKEUP�����������ص���mA���𡣹���һ���ֽ���uA��
    ���������ӡ��������Կ������������Lower Power Entry�������Ѻ������PWR_PD INTI����˵��PD���Ѻ��0��ַ��ʼִ�С�
           

4��ע������
	��
	
	
1. Functional Description:
    1. Entry into and Wake-up from Power-down (PD) Mode.
	
2. Usage Environment:

	Software Development Environment: KEIL MDK-ARM V5.34.0.0
	Hardware Environment: Developed based on the evaluation board N32G032R8L7-STB V1.0

3. Usage Instructions:

	/* Describe the configuration methods for relevant modules, e.g., clock, I/O, etc */
	1. Clock Source: HSE+PLL
	2. Clock Frequency: 48MHz

	/* Describe the testing steps and observed behavior of the demo */
	1. After compiling with KEIL, burn the program onto the evaluation board, and connect a current meter. After powering on, observe that the current consumption decreases significantly after a while. 
	   Press the WAKEUP button, and the current returns to the mA level. After a while, it drops to uA. If print output is enabled, you can see serial output "Lower Power Entry" when entering PD mode, 
	   and "PWR_PD INIT" when waking up, indicating that PD wake-up starts execution from address 0.

4. Notes:
	None
	

