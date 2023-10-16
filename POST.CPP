#include <dos.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

        if (argc != 2) {
                printf("Usage: post <number>\n");
                return 10;
        }

        unsigned long num = strtoul(argv[1], NULL, 16);

        unsigned char low = num & 0xFF;
        unsigned char high = (num >> 8) & 0xFF;

        outportb(0x80, low);
        delay(10UL);
        outportb(0x80, high);
        return 0;
}
