#include <iostream>

using namespace std;

int main() {
    const char* PATH_TO_INPUT_FILE = "file1.txt";
    const char* PATH_TO_OUTPUT_FILE = "file2.txt";
    FILE* inputFile;
    FILE* outputFile;

    char buffer[1024];
    int charCount = 0;
    int lineCount = 0;
    int vowelCount = 0;
    int consonantCount = 0;
    int digitCount = 0;

    if ((fopen_s(&inputFile, PATH_TO_INPUT_FILE, "r")) != 0) {
        cout << "Error opening input file" << endl;
        return 1;
    }
    if ((fopen_s(&outputFile, PATH_TO_OUTPUT_FILE, "w")) != 0) {
        cout << "Error opening output file" << endl;
        fclose(inputFile);
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), inputFile)) {
        charCount += strlen(buffer);
        lineCount++;

        for (char* p = buffer; *p; ++p) {
            if (isalpha(*p)) {
                char lowercaseChar = tolower(*p);
                if (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' || lowercaseChar == 'o' || lowercaseChar == 'u') {
                    vowelCount++;
                }
                else {
                    consonantCount++;
                }
            }
            else if (isdigit(*p)) {
                digitCount++;
            }
        }
    }

    fprintf(outputFile, "Number of characters: %d\n", charCount);
    fprintf(outputFile, "Number of lines: %d\n", lineCount);
    fprintf(outputFile, "Number of vowels: %d\n", vowelCount);
    fprintf(outputFile, "Number of consonants: %d\n", consonantCount);
    fprintf(outputFile, "Number of digits: %d\n", digitCount);

    fclose(inputFile);
    fclose(outputFile);

    cout << "Statistics written to the output file." << endl;

    return 0;
}


/*
int main() {
    const char* PATH_TO_FILE1 = "file1.txt";
    const char* PATH_TO_FILE2 = "file2.txt";
    FILE* file1;
    FILE* file2;

    char buffer1[1024];
    char buffer2[1024];

    if ((fopen_s(&file1, PATH_TO_FILE1, "r")) != 0) {
        cout << "Error opening file1" << endl;
        return 1;
    }
    if ((fopen_s(&file2, PATH_TO_FILE2, "r")) != 0) {
        cout << "Error opening file2" << endl;
        fclose(file1);
        return 1;
    }

    bool filesMatch = true;
    while (true) {
        if (fgets(buffer1, sizeof(buffer1), file1)) {
            size_t len1 = strlen(buffer1);
            if (len1 > 0 && buffer1[len1 - 1] == '\n') {
                buffer1[len1 - 1] = '\0';
            }
        }
        else {
            buffer1[0] = '\0';
        }

        if (fgets(buffer2, sizeof(buffer2), file2)) {
            size_t len2 = strlen(buffer2);
            if (len2 > 0 && buffer2[len2 - 1] == '\n') {
                buffer2[len2 - 1] = '\0';
            }
        }
        else {
            buffer2[0] = '\0';
        }

        if (buffer1[0] == '\0' && buffer2[0] == '\0') {
            break;
        }
        else if (strcmp(buffer1, buffer2) != 0) {
            filesMatch = false;
            cout << "Mismatch found:" << endl;
            cout << "File1: " << buffer1 << endl;
            cout << "File2: " << buffer2 << endl;
            break;
        }
    }

    if (filesMatch) {
        cout << "The files match." << endl;
    }

    fclose(file1);
    fclose(file2);

    return 0;
}
*/