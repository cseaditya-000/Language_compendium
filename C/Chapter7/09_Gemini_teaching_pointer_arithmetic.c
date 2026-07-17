#include<stdio.h>

int main()
{
    // RAM is a massive street of houses. Each house has an address(a number) and inside each house is a byte of data.
    // | | 
    // | | 
    // | | 
    // When we create a pointer, we store the house address. 
    // Pointer Arithmetic is simply how we travel down the street.
    // Rule 1: The Scaling Secret (Adding & Subtracting Numbers)

    // If you have an integer pointer ptr pointing to address 1000, and you write ptr + 1, you might expect the new address to be 1001.
    // It isn't! The actual address will be 1004 (on most systems).
    // Why?
    // Because C is smart. 
    // It knows that an int requires 4 bytes of space. 
    // If you move forward by "1 element", C automatically scales that step to leap over the 4 bytes of the current integer to land exactly at the start of the next one.
    
    // New Addre= Current Address + (N  * sizeof(Type))

    // char -> 1 bytes
    // int -> 4 bytes
    // double -> 8 bytes

    // Rule 2: Subtraction of two pointer (Distance)
    // When you subtract one pointer from another (ptr1 - ptr2), you are asking: "How many elements fit between these two addresses?"

    // The Golden Rule: You must only subtract pointers that point to elements in the same array. 
    // Subtracting pointers to random variables (like f and h in your earlier code) is undefined behavior.
    
    // Even if ptrA and ptrB are 12 bytes apart in memory, C automatically divides that 12-byte raw difference by sizeof(int) (4 bytes) to give you a clean, simple answer of 3.

    // Rule 3: Pointer Comparison

    // == and !=: Tell you if two pointers point to the exact same memory location. 
    // This is safe to use anywhere.

    // < and >: Tell you which pointer points to an element further along in memory. 
    // Just like subtraction, only use these within the same array.

    // Rule 4: The Banned Math (What You Can't Do)
    // Because pointers are physical memory addresses, some basic math operations make absolutely no sense:

    // No Pointer Addition: You cannot do ptr1 + ptr2. (What does Address 1004 + Address 1008 mean? Nothing!)

    // No Multiplication/Division: You cannot do ptr * 2 or ptr / ptr.

    // No void * Arithmetic: A void pointer has no type, meaning its size is unknown. 
    // Because C doesn't know the size of a void element, it cannot calculate how far to scale a step (though some compilers let you step by 1 byte as an extension, it's not standard C).
    
    return 0;
}