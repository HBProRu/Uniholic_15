
//���������� ����� � ������� "HH:mm:ss.SSS" �� �����������
char * TimeToString(unsigned long t)
{
	static char str[14];
	unsigned short ms = t % 1000;
	unsigned char s = (t/1000) % 60;
	unsigned char m = (t / 1000 / 60) % 60;
	long h = (t / 1000 / 60 / 60);
	sprintf(str, "%02ld:%02d:%02d.%03d", h, m, s, ms);
	return str;
}


