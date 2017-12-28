#pragma once
#include"stdafx.h"
#include<vector>
#include<string>
using namespace std;
class mysqlDatabase {
public:
	//���캯��
	mysqlDatabase();
	//��hashֵ��ͼƬ֡��ID�������ݿ�
	bool err_insert( int logid, string date, string position, string imgpath);
	bool log_insert(string imgpath);
	bool query_insert(string pic_id, string pic_path, string begin_time, string end_time);
	//������������ѯ��¼
	bool logItemQueryByDate(string date);
	//ɾ�����ݱ��е�ȫ������
	void deleteAllData();
	//����ͼƬ����ѯ����
	bool result_retrieve();
	//���ҵ�ַ
	bool position_retrieve();
	//����id��ɾ����¼
	bool logItemdeleteById(int id);
	//���������ʱ����logitem���status�ֶ�
	bool updateLogItemStatus(int id);

	//��������ѯ��������һ��vector��
	vector<string> result_results;
	//��ַ���ѯ��������string��
	string position_result;

private:
	//���ݿ�ṹ
	MYSQL mydata;
	//SQL�������ַ���
	string sqlstr;
	//SQL�����Ľ����
	MYSQL_RES *result;
	//SQL�����Ľ����������
	MYSQL_ROW row;
	
	//��ʼ�����ݿ�
	int mysql_library_init1();
	//��ʼ�����ݽṹ
	int mysql_init1();
	//���ö��������ѡ����������ַ����������޷���������
	int mysql_options1();
	//�������ݿ�
	int mysql_real_connect1();
};