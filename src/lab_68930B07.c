#include <stdio.h>
#include <string.h>
#include "get_line.h"
#include "essay.h"

#define MAXLEN 1000

const char ESSAY[] = "Ah Love! could you and I with Fate conspire \
To grasp this sorry Scheme of Things entire, \
Would not we shatter it to bits -- and then \
Re-mould it nearer to the Heart's Desire!";

int strindex(const char source[], char pattern[])
{
    int i, j, k;

    for (i = 0; source[i] != '\0'; i++) {
        for (j = i, k = 0; pattern[k] != '\0' && source[j] == pattern[k]; j++, k++)
            ;
        if (k > 0 && pattern[k] == '\0') {
            return i; // 找到匹配，返回起始索引
        }
    }
    return -1; // 未找到匹配
}


// DO NOT change the code below
#ifndef ___TEST___
int main(void)
{
    char pattern[MAXLEN] = "";

    printEssay(ESSAY);
    read_pattern_from_stdio( pattern, MAXLEN);
    int pos = strindex(ESSAY, pattern);
    printResult(ESSAY, pos);

    return 0;
}
#endif
// DO NOT change the code above

