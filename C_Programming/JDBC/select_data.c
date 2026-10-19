

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<mysql.h>

int main()
{

    MYSQL *conn = mysql_init(NULL);
    MYSQL_RES *res;
    MYSQL_ROW row;

    if (conn == NULL)
    {
        printf("MySQL installtion failed\n");
        return EXIT_FAILURE;
    }

    if(!mysql_real_connect(conn, "127.0.0.1", "root", "", "PPA55", 3306, NULL, 0))
    {
        fprintf(stderr, "Connection filed: %s\n",
                mysql_error(conn));
        mysql_close(conn);
        return EXIT_FAILURE;
    }

    printf("Connected to the XAMPP mysql!\n");

    
    // int RNO = 0, Cid = 0;
    // char Name[50], City[50];

    // prinf("Enter your Roll Number: ");
    // scanf("%d", &RNO);

    // prinf("Enter your Name: ");
    // scanf("%s", &RNO);
    
    // prinf("Enter your City: ");
    // scanf("%s", &RNO);
    
    // prinf("Enter your Cid: ");
    // scanf("%d", &RNO);

    //Execute SELECT query
    char query[1204];
    strcpy(query, "SELECT RNO, Name, City, Cid FROM studentX");
    
    if(mysql_query(conn, query) != 0) {
        fprintf(stderr, "Query failed: %s\n",
            mysql_error(conn));

        return EXIT_FAILURE;
    }

    res = mysql_store_result(conn);

    if (res == NULL)
    {
        printf("Result Error %s\n", mysql_error(conn));
        mysql_close(conn);
        return EXIT_FAILURE;
    }

    //Print all columns names
    unsigned int num_fields = mysql_num_fields(res);
    MYSQL_FIELD *fields = mysql_fetch_fields(res);
    
    printf("\nStudent Records: \n");

    for (unsigned int i = 0; i < num_fields; i++)
    {
        printf("%-20s", fields[i].name);
    }

    printf("\n");

    //Print all rows
    while ((row = mysql_fetch_row(res)) != NULL)
    {
        for (unsigned int i = 0; i < num_fields; i++)
        {
            printf("%-20s", row[i] ? row[i] : "NULL");
        }
        printf("\n");
    }

    // Free memory and close connection
    mysql_free_result(res);
    mysql_close(conn);
    printf("Database connection closed.\n");
    
    return EXIT_SUCCESS;
}