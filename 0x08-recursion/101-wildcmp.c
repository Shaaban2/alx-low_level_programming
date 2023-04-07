#include "main.h"
/*
 * A function that compares two strings and determines if they match, taking
 * into account the presence of wildcard characters ('*') in the second string.
 *
 * @param s1: a pointer to the first string to compare
 * @param s2: a pointer to the second string to compare, which may contain
 *            wildcard characters
 * @return: 1 if the strings match, 0 if they do not
 */
int wildcmp(char *s1, char *s2)
{
    // Base case: both strings are empty
    if (*s1 == '\0' && *s2 == '\0') {
        return 1;
    }

    // If the first string has reached its end, check if the second string
    // only contains wildcard characters
    if (*s1 == '\0' && *s2 == '*') {
        return wildcmp(s1, s2 + 1);
    }

    // If the second string has reached its end, the strings do not match
    if (*s2 == '\0') {
        return 0;
    }

    // If the current characters match, continue comparing the rest of the strings
    if (*s1 == *s2) {
        return wildcmp(s1 + 1, s2 + 1);
    }

    // If the current character in s2 is a wildcard, try to match the
    // remaining part of s1 with and without the wildcard
    if (*s2 == '*') {
        return wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2);
    }

    // If none of the above cases apply, the strings do not match
    return 0;
}

