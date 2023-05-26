#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>

int closedir(DIR *dirp)
{
    free(dirp->d_buf);
    dirp->d_buf = NULL;
    free(dirp);
    return close(dirp->d_fd); // dirp has already been freed
}