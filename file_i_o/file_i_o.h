//
// Created by sjhuang on 2022/4/10.
//

#ifndef OPERATOR_SYSTEM_FILE_I_O_H
#define OPERATOR_SYSTEM_FILE_I_O_H
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

// 用来操作的文件
#define FILE_PATH "./tmp.txt"
// buff size
#define BUFFSIZE 4096
// 打开文件
void file_open_test();

// io 效率测试
void file_io_test();


#endif //OPERATOR_SYSTEM_FILE_I_O_H
