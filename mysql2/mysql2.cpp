// mysql2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "mysql.h"
#include <Windows.h>
#include <mysql.h>
#include <string>
#include <iostream>

using namespace std;
//#pragma comment(lib,"D:\\mysql1\\mysql-5.6.23-winx64\\mysql-5.6.23-winx64\\lib") 
int main()
{
	mysqlDatabase mdb;
	//mdb.log_insert("C:/Users/15013/Desktop/imgs/IMG_20170311_135249.jpg");
	//mdb.err_insert(4,"2017-08-09 08:09:30", "���ӿƼ���\\ѧɳ�Ӻ�У��","C:/Users/15013/Desktop/imgs/IMG_20170311_135249.jpg");
	//mdb.path_insert(24, "2007-11-16 00:00:00", "���ӿƼ���ѧ", "C:/Users/15013/Desktop/imgs/IMG_20170311_135249.jpg");
	//mdb.mysql_deleteById(1);
	//mdb.logItemqueryByImg("C:/Users/15013/Desktop/imgs/IMG_20170311_135249.jpg");
	//mdb.query_insert("456", "C:/fjdi/fji.f", "2017-11-06 05:04:01", "2017-11-06 05:04:01");
	mdb.position_retrieve();
	cout << mdb.position_result << endl;
	system("pause");
	return 0;
}




/*
const char user[] = "root";
const char pswd[] = "";
const char host[] = "localhost";
const char table[] = "log";
unsigned int port = 3306;
MYSQL myCont;
MYSQL_RES *result;
//MYSQL_ROW sql_row;
int res;
mysql_init(&myCont);
if (mysql_real_connect(&myCont, host, user, pswd, table, port, NULL, 0))
{
mysql_query(&myCont, "SET NAMES GBK"); //���ñ����ʽ
mysql_query(&myCont, "delete from erroritem where id = 3");
//mysql_query(&myCont, "insert into erroritem(id,logid,pos)values(3,3,'�ɶ���ѧ')");
//mysql_query(&myCont, "update erroritem set pos='�Ĵ���ѧ' where id = 1");
//res = mysql_query(&myCont, "select * from erroritem");//��ѯ
/*if (!res)
{
result = mysql_store_result(&myCont);
if (result)
{
while (sql_row = mysql_fetch_row(result))//��ȡ���������
{
cout << "BOOKNAME:" << sql_row[0] << endl;
cout << "    SIZE:" << sql_row[1] << endl;
cout << "    didian:" << sql_row[2] << endl;
cout << "    tupian:" << sql_row[3] << endl;
}
}
}
else
{
cout << "query sql failed!" << endl;
}*/

/*	}
	else
	{
		cout << "connect failed!" << endl;
	}
		if (result != NULL)
	mysql_free_result(result);
	mysql_close(&myCont);
	system("pause");*/