#include <stdio.h>

// A char is 1 byte, and a word usually in x86
// computers is 2 bytes, which is the size of a short.
typedef unsigned char BYTE;
typedef unsigned short WORD;

// We are simulating registers in x86 computers.
// The registers are labeled AX BX and so on and they
// hold 16 bits. Within the register there are two
// byte portions refered to AL (A "low") and AH (A "high")
// the union structure allows us to hold the AX and refer to
// within it the two byte portions.
union {
    struct {
        // A word is 16 bits (2 bytes) which is what we
        // want for each register.
        WORD ax, bx, cx, dx;
    } word;
    struct {
        // Now we want a byte for each portion of the
        // corresponding register.
        // Note that we store "al" first before "ah",
        // thats because x86 proccessors are "little-endian"
        // as opposed to "big-endian" where they store the most leftmost
        // byte last.
        BYTE al, ah, bl, bh, cl, ch, dl, dh;
    } byte;
} regs;

int main(void)
{
    // We set byte slices to certain numerical values
    // for example "1" 0001 and "2" 0010.
    // They follow one after they other in memory for regs.
    regs.byte.ah = 0x12;
    regs.byte.al = 0x34;

    // In the printf call, we tell it to expect a short
    // hexadecimal value, so it breaks up the "ax" value
    // into its 4 bit parts which we set before.
    printf("AX: %hx\n", regs.word.ax);
    return 0;
}
