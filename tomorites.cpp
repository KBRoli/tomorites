#include "std_lib_faciities.h"

int main()
{
ifstream f("nagy.txt");
ofstream g("10mb.txt");
char k;
for(int i=0;i<=10*1024*1024;i++)
}
f.get(k);
g<<k;

}
f.close();
g.close();
}
