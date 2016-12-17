#include <sys/types.h> 
#include <sys/stat.h> 
#include <fcntl.h> 
#include <unistd.h> 
#include <time.h>
#include <stdio.h>
#include <sys/mount.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <sys/uio.h>
#include <ustat.h>
#include <sys/swap.h>
#include <sys/vfs.h>
#include <sys/io.h>
#include <sys/file.h>
#include <sys/mman.h>
#include <sys/select.h>
#include <sys/quota.h>
#define _GNU_SOURCE         /* See feature_test_macros(7) */
#include <signal.h>
#include <poll.h>
#include <sys/epoll.h>
#include <sys/sendfile.h>
#include <sys/syscall.h>
#include <linux/aio_abi.h>
#include <sys/inotify.h>
#include <sys/mman.h>
int main(){
	mknod ("/home/mohammad/Desktop/mknod", 'b',0);
	lseek (2,2,2);
	fstat(0,NULL);
	mount(NULL,NULL,NULL,0,NULL);
	faccessat(0,NULL,0,0);
	//nice(-100); Converts to getpriority() sand setpriority()
	dup(-100);
	int test[2] ={1,2};
	pipe(test);
	umount("/home/nothing");
	ioctl(-1,-1000);
	fcntl(-1,-1);
	umask(0777);
	chroot(NULL);
	dup2(-100,-200);
	readlink("/sss",NULL,6);
	readlinkat(-10,"/sss",NULL,6);
	swapon("/sssss",-100);
	swapoff("/sssssss");
	truncate("/sssss",100);
	ftruncate(-1000,-100);
	chmod ("/ddddd",100);
	fchmod(-1000,100);
	fchmodat(-1000,"/sss",-100,-100);
	statfs("/ss",NULL);
	fstatfs(-100,NULL);
	ioperm(-10000,-100000,-100000);
	iopl(-1000);
	fsync(-1000);
	fdatasync(-1000);
	quotactl(-100,NULL,-100,NULL);
	chdir(NULL);
	fchdir(-100);
	lseek(-100,10,-10);
	select (-10,NULL,NULL,NULL,NULL);
	flock (-100,-100);
	msync(NULL,100,100);
	readv(-10,NULL,-10);
	writev(-10,NULL,-10);
	preadv(-10,NULL,-10,-10);
	pwritev(-10,NULL,-10,-10);
	poll(NULL,-10,-10);
	pread(-10,NULL,-10,-10);
	pwrite(-10,NULL,-10,-10);
	sendfile(-10,-10,NULL,-10);
	stat(NULL,NULL);
	lstat(NULL,NULL);
	chown(NULL,-100,-100);
	fchown(-10,-10,-10);
	lchown(NULL,-10,-10);
//	setfsuid harmful
//	setfsgid harmful
//	pivot_root(NULL,NULL);
	syscall(SYS_readahead,-10, 0,NULL,NULL,-10);
	syscall(SYS_io_setup);
	syscall(SYS_io_destroy);
	syscall(SYS_io_getevents);
	syscall(SYS_io_submit);
	syscall(SYS_io_cancel);
	posix_fadvise(-100,-10,-10,-10);
	epoll_create(-10);
	epoll_create1(-19);
	epoll_ctl(-100,-100,-1000,NULL);
	epoll_wait(-100,NULL,-100,-100);
	epoll_pwait(-100,NULL,-100,-10,NULL);
	syscall(SYS_ioprio_get);
	syscall(SYS_ioprio_set);
	inotify_add_watch(-10,NULL,-10);
	inotify_rm_watch(-100,-100);

	return 0;
}
