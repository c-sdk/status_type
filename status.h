#ifndef _STATUS_TYPE_H_
#define _STATUS_TYPE_H_ 1

enum status_t { STATUS_FAILURE = -1, STATUS_OK = 0 };

#define status_is_ok(x) ((x) == STATUS_OK)

#endif // _STATUS_TYPE_H_
