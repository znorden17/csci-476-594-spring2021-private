#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

void main(){
	int fd;

	/* Assume that /etc/zzz is an important system file,
	 * and it owned by root with permission 0644. Before
	 * running this program you should create the file 
	 * etc/zzz first.
	 */

	fd = open("/etc/zzz", O_RDWR | O_APPEND);
	if (fd == -1){
		printf("cannot open /etc/zzz\n");
		exit(0);
	}

	sleep(1);

	/* After the task, elevated privileges are no longer needed;
	 * it is time to reliqish these privleges!
	 * NOTE: getuid() returns the real UID (RUID)
	 */

	setuid(getuid());

	if(fork()){
		close(fd);
		exit(0);
	}
	else{
		/* Now assume that the child process is compromised 
		 * and that malicious attackers have injected the following
		 * statements into this process 
		 */
		write(fd,"Malicious Data\n",15);
		close(fd);
	}
}

