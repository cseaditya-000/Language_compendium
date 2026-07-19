#include <stdio.h>

int main(void)
{
    char s[90];
    fgets(s, 90, stdin);//fgets(array name, max size limit, input stream-stdin)
    // gets func is a imp function because it can helps with multiword string
    // If a user types a string that is 100 characters long, gets() will mindlessly write all 100 characters into memory anyway. 
    // It overruns the 5-byte boundary of the password array and starts overwriting other critical parts of your program's memory—such as variable states or return addresses.

    // In the computer security world, this is called a Buffer Overflow. 
    // It is the absolute number-one exploit hackers use to hijack systems and inject malicious code.
    // use fgets()
    puts(s);//puts() is best for printing raw, static string and it adds a \n automatically.
    printf("Hello");
    //There is one fascinating visual detail you'll notice immediately when you run this corrected version.

// When you type your input string and hit Enter, fgets() actually captures the Enter key (\n) and stuffs it inside the array s.

// Because fgets includes that newline character, and puts(s) also automatically adds its own newline character at the end, your terminal output will have an extra blank line right between the string and your printf("Hello").
    return 0;
}