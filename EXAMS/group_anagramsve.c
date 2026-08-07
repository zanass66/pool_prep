#include <stdio.h>
#include <stdlib.h>

/* ==========================================
 * PHASE 1: The Signature Generator
 * Takes a single string, makes a copy, sorts
 * the copy alphabetically, and returns it.
 * ========================================== */
char *generate_signature(char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    char *new_string = (char *) malloc(sizeof(char) * (len + 1));
    if (new_string == NULL)
        return NULL;

    int i = 0, j = 0;
    while (str[i] != '\0') {
        new_string[j] = str[i];
        i++;
        j++;
    }
    new_string[j] = '\0';

    int k = 0;
    int size = len;
    while (k < size) {
        j = 0;
        while (j < size - 1) {
            // Sort Alphabetically (A to Z)
            if (new_string[j] > new_string[j + 1]) {
                int temp = new_string[j];
                new_string[j] = new_string[j + 1];
                new_string[j + 1] = temp;
            }
            j++;
        }
        k++;
    }
    return new_string;
}

/* ==========================================
 * PHASE 1.5: The String Comparator
 * Compares two strings. Returns 0 if they
 * are a perfect match.
 * ========================================== */
int my_strcmp(char *s1, char *s2) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]) {
        i++;
    }
    return s1[i] - s2[i];
}

/* ==========================================
 * PHASE 2: The Master Grouping Engine
 * Uses the Anchor (i) and Stretcher (j)
 * approach to group and print the anagrams.
 * ========================================== */
void group_anagrams(char **strs, int size) {
    // 1. Create the Visited Checklist
    int *visited = (int *) malloc(sizeof(int) * size);
    if (visited == NULL) return;

    int l = 0;
    while (l < size) {
        visited[l] = 0;
        l++;
    }

    // 2. The Anchor Loop (i)
    int i = 0;
    while (i < size) {

        // Filter: Skip if already grouped!
        if (visited[i] == 1) {
            i++;
            continue;
        }

        // Setup the Anchor
        char *sig_i = generate_signature(strs[i]);
        printf("[ %s", strs[i]); // Print the first word of the group
        visited[i] = 1;          // Mark as visited

        // 3. The Stretcher Loop (j)
        int j = i + 1;
        while (j < size) {

            // Only check unvisited words
            if (visited[j] == 0) {
                char *sig_j = generate_signature(strs[j]);

                // 4. Match & Group
                if (my_strcmp(sig_i, sig_j) == 0) {
                    printf(", %s", strs[j]); // Print the match!
                    visited[j] = 1;          // Mark as visited
                }

                free(sig_j); // Clean up the stretcher signature!
            }
            j++;
        }
        printf(" ]\n"); // End the line for this group
        free(sig_i);    // Clean up the anchor signature!

        i++;
    }

    // 5. Final Cleanup
    free(visited);
}

/* ==========================================
 * MAIN: The Testing Environment
 * ========================================== */
int main(void) {
    // We simulate the given array of strings (char **)
    char *strs[] = {"eat", "tea", "tan", "ate", "nat", "bat"};
    int size = 6;

    printf("Grouping Anagrams Engine Running:\n");
    printf("---------------------------------\n");

    group_anagrams(strs, size);

    return 0;
}