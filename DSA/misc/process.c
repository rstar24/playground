#include <stdio.h>
#include <unistd.h>

int main() {
    // Creating a new process
    pid_t pid = fork();

    // Error handling: If fork() returns a negative value, the creation of the child process was unsuccessful
    if (pid < 0) {
        printf("Fork failed!\n");
        return 1;
    }
    // Child process: fork() returns 0 to the child process
    else if (pid == 0) {
        printf("Hello from the Child process! PID = %d, Parent PID = %d\n", getpid(), getppid());
    }
    // Parent process: fork() returns the PID of the child process to the parent process
    else {
        printf("Hello from the Parent process! PID = %d, Child PID = %d\n", getpid(), pid);
    }

    // Both the parent and child process will execute this line
    printf("This line is executed by both parent and child processes!\n");

    return 0;
}
