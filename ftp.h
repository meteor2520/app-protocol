
/* author : jason chen
 * date: 2012-07-25
 * description: ftp api */
#ifndef _FTP_H
#define _FTP_H
#endif

int ftp_init(const char *url, int port, const char *username, const char *password);

int ftp_get(const char *src, const char *dst);

int ftp_put(const char *src, const char *dst);

int ftp_remove(const char *name);

int ftp_mirror(const char *dir);

int ftp_close(const char *url);



