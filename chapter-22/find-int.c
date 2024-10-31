#include <stdio.h>

int find_int(const char* filename)
{
    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        // Could not open file error
        return -1;
    }

    int n;

    // We check the return value of fscanf which is the number of elements
    // read in
    while (fscanf(fp, "%d", &n) != 1) {
        if (ferror(fp)) {
            // Could not read error, not pattern matching failure error
            // Note that we close the stream before we exit
            fclose(fp);
            return -2;
        }
        if (feof(fp)) {
            // We reached the end of file before we could find anything
            fclose(fp);
            return -3;
        }
        // So no errors happened, so it must have been a pattern matching
        // failure, so we need to skip the rest of the line
        // Remember we are trying to find a number at the start of a line
        // and scanf skips whitespace (newline included)
        fscanf(fp, "%*[^\n]");
    }

    // We did find a int at the start of a line, return its value
    return n;
}

int main(void)
{
    return 0;
}
