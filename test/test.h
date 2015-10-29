#ifndef TEST_H
#define TEST_H

#include "zlog.h"

// Fail Current Test
#define FAILTEST throw __LINE__;
// Assert for Tests
#define TASSERT(X) if(!(X)) throw __LINE__;

using namespace LibChaos;

int sandbox();

int array_test();
int assoc_test();
int stack_test();
int map_test();
int list_test();
int queue_test();

int test_forward_iterator(ZSimplexIterator<ZString> *it, zu64 size);
int test_reverse_iterator(ZDuplexIterator<ZString> *it, zu64 size);
int test_duplex_iterator(ZDuplexIterator<ZString> *it, zu64 size);

int binary_test();

int string_test();
int path_test();
int json_test();

int pointer_test();
int allocator_test();
int storage_test();

int thread_test();
int mutex_test();

int number_test();

int random_test();
int uid_test();
int hash_test();

int file_test();
int image_test();
int pdf_test();

int udp_test();
int udpserver_test();

int tcp_test();
int tcpserver_test();
int tcpserver_test2();
int tcpserver_test3();

int error_test();

typedef int (*test_func)(void);

#endif // TEST_H
