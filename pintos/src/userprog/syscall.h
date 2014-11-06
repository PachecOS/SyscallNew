#ifndef USERPROG_SYSCALL_H
#define USERPROG_SYSCALL_H
#include "threads/synch.h"
<<<<<<< HEAD

#define WRITE 1
#define READ 0

struct lock lock;
=======
/*
void syscall_init (void);
void halt (void);
void exit (int status);
pid_t exec (const char *cmd_line);
int wait (pid_t pid);
bool create (const char *file, unsigned initial_size);
bool remove (const char *file);
int open (const char *file);
int filesize (int fd);
int read (int fd, void *buffer, unsigned size);
int write (int fd, const void *buffer, unsigned size);
void seek (int fd, unsigned position);
unsigned tell (int fd);
void close (int fd);
*/
struct child_p {
	int load;
	int pid;
	bool wait;
	bool exit;
	int status;
	struct list_elem elem;
	struct lock *lock;
};
>>>>>>> 780be0ec81719880c2518fa76e8778be48fb5746

struct file_attr {
	int fd;
	struct file *file;
	struct list_elem elem;
};

#endif /* userprog/syscall.h */