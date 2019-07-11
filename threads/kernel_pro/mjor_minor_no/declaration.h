static const struct file_operations fops = {
    .owner = THIS_MODULE,
//    .open = do_open,
//    .read = do_read,
};

#define DEVNAME "MCHARDEV"
#define MJR 45
#define MNR 2
#define NOD 1

dev_t mydev;


int GetDevNo(void);
