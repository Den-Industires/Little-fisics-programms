#include <SFML/Graphics.hpp>
int viewX, viewY;
sf::View view;

void getplayercoordinateforview(float x, float y, int sw, int sh) { //������� ��� ���������� ��������� ������
	viewX = int(x); viewY = int(y);//��������� ����� ������ � ��������� ��, ����� ������ ����

	if (x < int(sw / 2)) viewX = int(sw / 2);//������� �� ���� ����� �������
	if (y < int(sh / 2)) viewY = int(sh / 2);
	if (x > 5000 - int(sw / 2)) viewX = 5000 - int(sw / 2);//������� �� ���� ����� �������
	if (y > 3100 - int(sh / 2)) viewY = 3100 - int(sh / 2);//������� �� ���� ����� �������

	view.setCenter(viewX, viewY); //������ �� �������, ��������� ��� ���������� ������. +100 - �������� ������ �� ���� ������. �����������������
}
void setposview(float x, float y)
{
	viewX = int(x); viewY = int(y);
	view.setCenter(viewX, viewY);
}
int getviewx() { return(viewX); }
int getviewy() { return(viewY); }


