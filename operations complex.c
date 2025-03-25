#include <stdio.h>
#include <stdlib.h>

struct complex {
    float real, img;
};

struct complex read_complex() {
    struct complex c;
    printf("Enter real part of complex number: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part of complex number: ");
    scanf("%f", &c.img);
    return c;
}

struct complex add_complex(struct complex c1, struct complex c2) {
    struct complex c3;
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;
    return c3;
}

struct complex sub_complex(struct complex c1, struct complex c2) {
    struct complex c3;
    c3.real = c1.real - c2.real;
    c3.img = c1.img - c2.img;
    return c3;
}

struct complex mul_complex(struct complex c1, struct complex c2) {
    struct complex c3;
    c3.real = c1.real * c2.real - c1.img * c2.img;
    c3.img = c1.img * c2.real + c2.img * c1.real;
    return c3;
}

struct complex div_complex(struct complex c1, struct complex c2) {
    struct complex c3;
    float denominator = c2.real * c2.real + c2.img * c2.img;
    
    if (denominator == 0) {
        printf("Error: Division by zero is not allowed.\n");
        c3.real = 0;
        c3.img = 0;
    } else {
        c3.real = (c1.real * c2.real + c1.img * c2.img) / denominator;
        c3.img = (c1.img * c2.real - c1.real * c2.img) / denominator;
    }
    
    return c3;
}

void display_complex(struct complex c) {
    if (c.img < 0)
        printf("The result is: %.2f - %.2fi\n", c.real, -c.img);
    else
        printf("The result is: %.2f + %.2fi\n", c.real, c.img);
}

int main() {
    int choice;
    struct complex a, b, c;

    while (1) {
        printf("\n| Menu for Complex Number Operations |\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Clear Screen\n");
        printf("6. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You have selected Addition operation.\n");
                printf("Enter First complex number:\n");
                a = read_complex();
                printf("Enter Second complex number:\n");
                b = read_complex();
                c = add_complex(a, b);
                display_complex(c);
                break;

            case 2:
                printf("You have selected Subtraction operation.\n");
                printf("Enter First complex number:\n");
                a = read_complex();
                printf("Enter Second complex number:\n");
                b = read_complex();
                c = sub_complex(a, b);
                display_complex(c);
                break;

            case 3:
                printf("You have selected Multiplication operation.\n");
                printf("Enter First complex number:\n");
                a = read_complex();
                printf("Enter Second complex number:\n");
                b = read_complex();
                c = mul_complex(a, b);
                display_complex(c);
                break;

            case 4:
                printf("You have selected Division operation.\n");
                printf("Enter First complex number:\n");
                a = read_complex();
                printf("Enter Second complex number:\n");
                b = read_complex();
                c = div_complex(a, b);
                display_complex(c);
                break;

            case 5:
                system("cls"); // Use "clear" for Linux/macOS
                break;

            case 6:
                exit(0);

            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}
