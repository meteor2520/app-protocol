
/* author: jason chen
 * date : 2012-07-25
 * descriptioin: http api*/

#ifndef _HTTP_H
#define _HTTP_H
#endif


int http_init(const char *url, int port);

int http_reques(const char *url);

int http_get(const char *url_name);

int http_post(const char *url);

int http_put(const char *url);

int http_delete(const char *url);

int http_option(const char *url);

int http_close();

