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