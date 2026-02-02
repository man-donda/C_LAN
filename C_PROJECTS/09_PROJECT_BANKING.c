#include <stdio.h>
#include <string.h>

// Create account
// Login with account number & PIN
// Deposit / Withdraw
// Check balance
// Transaction history (stored in file)

struct account
{
    int accno;
    char name[50];
    int pin;
    float balance;
};

struct transaction
{
    int accno;
    char type[20];
    float amount;
};

void createaccount();
int login(struct account *acc);
void deposit(struct account *acc);
void withdraw(struct account *acc);
void checkbalance(struct account acc);
void savetransaction(int accno, char type[], float amount);
void showtransaction(int accno);

int main()
{
    struct account acc;
    int choice, loggedin = 0;

    do
    {
        printf("1. create account\n");
        printf("2. login\n");
        printf("3. exit\n");
        printf("enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            createaccount();
            break;

        case 2:
            loggedin = login(&acc);
            if (loggedin)
            {
                int option;
                do
                {

                    printf("1. deposit\n");
                    printf("2. withdraw\n");
                    printf("3. check balance\n");
                    printf("4. transaction History\n");
                    printf("5. logout\n");
                    printf("enter choicw: ");
                    scanf("%d", &option);

                    switch (option)
                    {
                    case 1:
                        deposit(&acc);
                        break;
                    case 2:
                        withdraw(&acc);
                        break;
                    case 3:
                        checkbalance(acc);
                        break;
                    case 4:
                        showtransaction(acc.accno);
                        break;
                    case 5:
                        printf("logged out successfully.\n");
                        break;
                    default:
                        printf("invalid option!\n");
                    }
                } while (option != 5);
            }
            break;

        case 3:
            printf("exiting program.\n");
            break;

        default:
            printf("invalid choice!\n");
        }

    } while (choice != 3);

    return 0;
}

void createaccount()
{
    struct account acc;
    FILE *fp = fopen("accounts.txt", "a");

    if (fp == NULL)
    {
        printf("file error!\n");
        return;
    }

    printf("enter account number: ");
    scanf("%d", &acc.accno);
    printf("enter name: ");
    scanf("%s", acc.name);
    printf("set pin: ");
    scanf("%d", &acc.pin);

    acc.balance = 0;

    fprintf(fp, "%d %s %d %.2f\n", acc.accno, acc.name, acc.pin, acc.balance);
    fclose(fp);

    printf("account created successfully!\n");
}

int login(struct account *acc)
{
    int accno, pin;
    struct account temp;
    FILE *fp = fopen("accounts.txt", "r");

    if (fp == NULL)
    {
        printf("No accounts found.\n");
        return 0;
    }

    printf("Enter account number: ");
    scanf("%d", &accno);
    printf("Enter pin: ");
    scanf("%d", &pin);

    while (fscanf(fp, "%d %s %d %f",
                  &temp.accno, temp.name, &temp.pin, &temp.balance) == 4)
    {
        if (temp.accno == accno && temp.pin == pin)
        {
            *acc = temp;
            fclose(fp);
            printf("login successful!\n");
            return 1;
        }
    }

    fclose(fp);
    printf("invalid account or pin!\n");
    return 0;
}

void deposit(struct account *acc)
{
    float amount;
    FILE *fp = fopen("accounts.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    struct account a;

    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    while (fscanf(fp, "%d %s %d %f",
                  &a.accno, a.name, &a.pin, &a.balance) == 4)
    {
        if (a.accno == acc->accno)
        {
            a.balance += amount;
            acc->balance = a.balance;
        }
        fprintf(temp, "%d %s %d %.2f\n", a.accno, a.name, a.pin, a.balance);
    }

    fclose(fp);
    fclose(temp);

    remove("accounts.txt");
    rename("temp.txt", "accounts.txt");

    savetransaction(acc->accno, "deposit", amount);
    printf("deposit successful!\n");
}

void withdraw(struct account *acc)
{
    float amount;
    FILE *fp = fopen("accounts.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    struct account a;

    printf("enter amount to withdraw: ");
    scanf("%f", &amount);

    if (acc->balance < amount)
    {
        printf("insufficient balance!\n");
        return;
    }

    while (fscanf(fp, "%d %s %d %f",
                  &a.accno, a.name, &a.pin, &a.balance) == 4)
    {
        if (a.accno == acc->accno)
        {
            a.balance -= amount;
            acc->balance = a.balance;
        }
        fprintf(temp, "%d %s %d %.2f\n", a.accno, a.name, a.pin, a.balance);
    }

    fclose(fp);
    fclose(temp);

    remove("accounts.txt");
    rename("temp.txt", "accounts.txt");

    savetransaction(acc->accno, "withdraw", amount);
    printf("withdrawal successful!\n");
}

void checkbalance(struct account acc)
{
    printf("current balance: %.2f\n", acc.balance);
}

void savetransaction(int accno, char type[], float amount)
{
    struct transaction t;
    FILE *fp = fopen("transactions.txt", "a");

    t.accno = accno;
    strcpy(t.type, type);
    t.amount = amount;

    fprintf(fp, "%d %s %.2f\n", t.accno, t.type, t.amount);
    fclose(fp);
}

void showtransaction(int accno)
{
    struct transaction t;
    FILE *fp = fopen("transactions.txt", "r");

    printf("transaction history\n");

    while (fscanf(fp, "%d %s %f",
                  &t.accno, t.type, &t.amount) == 3)
    {
        if (t.accno == accno)
        {
            printf("%s : %.2f\n", t.type, t.amount);
        }
    }

    fclose(fp);
}
