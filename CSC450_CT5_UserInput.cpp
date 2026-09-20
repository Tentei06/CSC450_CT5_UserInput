/*

Pseudocode

START

DECLARE userInput as string
DECLARE fileContents as string

ASK user to enter text
GET userInput

OPEN CSC450_CT5_mod5.txt in append mode

IF file does not open
PRINT error message
END program
END IF

APPEND userInput to CSC450_CT5_mod5.txt
CLOSE file

OPEN CSC450_CT5_mod5.txt for reading

IF file does not open
PRINT error message
END program
END IF

READ all characters from file into fileContents
CLOSE file

REVERSE all characters in fileContents

OPEN CSC450-mod5-reverse.txt for writing

IF file does not open
PRINT error message
END program
END IF

WRITE reversed fileContents to CSC450-mod5-reverse.txt
CLOSE file

PRINT confirmation that files were successfully processed

END

*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
// Store the text entered by the user
string userInput;

// Ask the user for a line of text.
// getline() allows the user to enter spaces in the input.
cout << "Enter text to add to the file: ";
getline(cin, userInput);

// Open the instructor-provided file in append mode.
// ios::app adds new information to the end of the file
// instead of deleting the text that is already there.
ofstream appendFile("CSC450_CT5_mod5.txt", ios::app);

// Make sure the file opened successfully before trying to use it.
if (!appendFile.is_open())
{
    cout << "Error: Unable to open CSC450_CT5_mod5.txt." << endl;
    return 1;
}

// Add the user's input to the end of the existing file.
appendFile << userInput << endl;

// Close the file after we are finished writing to it.
appendFile.close();

cout << "Your text was successfully added to CSC450_CT5_mod5.txt." << endl;

// Open the completed file again, this time for reading.
ifstream inputFile("CSC450_CT5_mod5.txt");

// Make sure the file opened successfully before trying to read it.
if (!inputFile.is_open())
{
    cout << "Error: Unable to read CSC450_CT5_mod5.txt." << endl;
    return 1;
}

// This string will hold every character that we read from the file.
string fileContents;

// Read the file one character at a time.
// Using get() also reads spaces and line breaks so that the
// entire contents of the file can be reversed.
char currentCharacter;

while (inputFile.get(currentCharacter))
{
    fileContents += currentCharacter;
}

// Close the original file after all of its contents have been read.
inputFile.close();

// Reverse all characters in the entire file as one sequence.
// Since newline characters are included in the file contents,
// reversing the entire file also reverses the order of the lines.
// This follows the assignment requirement to reverse all characters.
for (int i = 0; i < fileContents.length() / 2; i++)
{
    char temporaryCharacter = fileContents[i];

    fileContents[i] = fileContents[fileContents.length() - 1 - i];

    fileContents[fileContents.length() - 1 - i] = temporaryCharacter;
}

// Create the second file that will contain the reversed text.
ofstream reverseFile("CSC450-mod5-reverse.txt");

// Make sure the new file opened successfully before writing to it.
if (!reverseFile.is_open())
{
    cout << "Error: Unable to create CSC450-mod5-reverse.txt." << endl;
    return 1;
}

// Write all of the reversed characters into the new file.
reverseFile << fileContents;

// Close the reverse file after writing is complete.
reverseFile.close();

// Let the user know that the program completed successfully.
cout << "The reversed text was successfully saved to "
     << "CSC450-mod5-reverse.txt." << endl;

return 0;

}