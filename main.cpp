#include <iostream>
#include <sys/types.h>
#include <sys/msg.h>
#include <sys/ipc.h>
using namespace std;

int main() {
    struct bugaga
    {
        int a = 1;
        int *b = &a;


    } ;

    struct bugaga *a = new bugaga;
    struct msqid_ds *buf = new msqid_ds;
    int id_1 = msgget(4459, 0622 | IPC_CREAT);
    int id_2 = msgget(4459, IPC_CREAT);

    int stat = msgctl(id_2, IPC_STAT, buf);

 cout << id_2 << endl;
 cout << stat << endl;
 cout << buf->msg_ctime;
}