
#include <stdio.h>
#include <usloss.h>
#include <phase1.h>
#include <phase2.h>

int start2(char *arg)
{
  int mbox_id;

  printf("start2(): started\n");
  mbox_id = MboxCreate(10, 50);
  printf("start2(): MailBoxCreate returned id = %d\n", mbox_id);
  mbox_id = MboxCreate(20, 30);
  printf("start2(): MailBoxCreate returned id = %d\n", mbox_id);
  quit(0);
  return 0; /* so gcc will not complain about its absence... */
}
