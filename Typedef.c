#include <stdio.h>
#include <string.h>

typedef struct
{
    char nama[20];
    char password[15];
    int id;

} User;

int main(){

    User user1 = {"Vier", "password123", 12345};
    User user2 = {"Vano", "password321", 54321};

    printf("\nNama = %s ", user1.nama);
    printf("\nPassword = %s ", user1.password);
    printf("\nID = %d ", user1.id);
    
    printf("\n");

    printf("\nNama = %s ", user2.nama);
    printf("\nPassword = %s ", user2.password);
    printf("\nID = %d ", user2.id);

 return 0;
}