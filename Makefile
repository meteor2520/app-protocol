
CFLAGS += -w
CFLAGS += -g
CC := gcc

netapp: main.c http.c ftp.c sftp.c

	-$(CC) $(CFLAGS) $(<) -o $@
clean:
	-rm netapp
