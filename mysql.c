#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<mysql/mysql.h>

#define MAX_COLUMN_LEN 32

/* gcc mysql.c -o m -lmysqlclient */

int mysql();

int mysql() {
    MYSQL my_connection;
    MYSQL_RES *result = NULL;
    MYSQL_ROW sql_row;
    MYSQL_FIELD *fd;
    char column[MAX_COLUMN_LEN][MAX_COLUMN_LEN];
    int res;
    mysql_init(&my_connection);
    if (mysql_real_connect(&my_connection, "127.0.0.1", "root", "root", "neeqdc_development", 3306, NULL, 0)) {
        perror("connect");
        res = mysql_query(&my_connection, "select * from users"); // 查询
        if (!res) {
            result = mysql_store_result(&my_connection); // 保存查询到的数据到result
            if (result) {
                int i, j;
                printf("the result number is %lu\n ", (unsigned long) mysql_num_rows(result));
                fd = mysql_fetch_field(result);
                for (i = 0; fd; i++) // 获取列名
                {
                    bzero(column[i], sizeof(column[i]));
                    strcpy(column[i], fd->name);
                    fd = mysql_fetch_field(result);
                }
                j = mysql_num_fields(result);
                for (i = 0; i < j; i++) {
                    printf("%s\t", column[i]);
                }
                printf("\n");
                sql_row = mysql_fetch_row(result);
                while (sql_row) // 获取具体的数据
                {
                    for (i = 0; i < j; i++) {
                        printf("%s\t", sql_row[i]);
                    }
                    printf("\n");
                    sql_row = mysql_fetch_row(result);
                }

            }
        }
        else {
            perror("select");
        }
    }
    else {
        perror("connect:error");
    }
    mysql_free_result(result);//释放结果资源
    mysql_close(&my_connection);//断开连接
    return 1;
}