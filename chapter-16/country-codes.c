#include <stdio.h>

#define NUM_COUNTRIES 7

struct dialing_code {
    char* country;
    int code;
};

// Make sure to add to NUM_COUNTRIES as well
const struct dialing_code country_codes[] = {
    { "Argentina", 54 },
    { "Bangladesh", 880 },
    { "Brazil", 55 },
    { "China", 86 },
    { "Ethiopia", 251 },
    { "Germany", 49 },
    { "Egypt", 20 },
};

// Will search country codes for given code, if found
// returns index of the dialing_code, else -1.
int find_code(int code)
{
    int i;

    for (i = 0; i < NUM_COUNTRIES; i++) {
        if (country_codes[i].code == code) {
            return i;
        }
    }

    return -1;
}

int main(void)
{
    int code;

    printf("Enter country code: ");
    scanf(" %d", &code);

    int country_index = find_code(code);

    if (country_index >= 0) {
        printf("Country: %s\n", country_codes[country_index].country);
    } else {
        printf("[ERROR] Country not found!\n");
    }

    return 0;
}
