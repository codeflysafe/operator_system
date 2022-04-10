//
// Created by sjhuang on 2022/4/10.
//

#include "file_i_o.h"

void file_open_test(){
    errno = 0;
    int fd = open(FILE_PATH,O_CREAT|O_RDWR|O_APPEND, 0000644);
    if(fd == -1){
        char buf[100];
        sprintf(buf, "open file: %s, err fail, error %d \n",FILE_PATH, errno);
        perror(buf);
    }
//    char msg[] = "1231\n";
//    write(fd,msg,sizeof(msg));
//
//    off_t curpos;
//    curpos = lseek(fd, 0, SEEK_CUR);
//    printf("cur position %d \n", curpos);
    close(fd);
}

void file_read_write_only(int fd){
    int n;
    char buf[BUFFSIZE];
    // 从文件中读取
    while((n = read(fd, buf, BUFFSIZE)) > 0){

    }
}

// 对比 io 效率
void void file_io_test(){

}