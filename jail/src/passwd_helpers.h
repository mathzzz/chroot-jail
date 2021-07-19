///////////////////////////////////////////////////////////////////////////////
//
// Jail
// A chrooted login shell implementation
// Released under GNU Public License v.2.0
// See LICENSE file for details
//
// Juan M. Casillas <juanm.casillas@jmcresearch.com>
// 3/April/ 2001 09:22
// 
///////////////////////////////////////////////////////////////////////////////
//
// $Id: passwd_helpers.h,v 1.2 2004/04/01 16:32:31 assman Exp $
//
// $Log: passwd_helpers.h,v $
// Revision 1.2  2004/04/01 16:32:31  assman
// Fixed directory structure, added new url & links, fixed the
// Makefile script.
//
// Revision 1.1  2004/01/01 18:26:10  assman
// Upgraded version
//
// Revision 1.1.1.1  2001/10/26 09:36:09  assman
// Added support for new platforms: FreeBSD, Solaris, IRIX. Now some options
// can be selected from the Makefile script: DEBUG on/off, install path,
// install permissions, etc. The perl scripts have been rewritten so they
// support platform-specific code, so port Jail to another platform should
// be an easy task.
//
//
///////////////////////////////////////////////////////////////////////////////

#ifndef __JAIL_PASSWORD_HELPERS_H__
#define __JAIL_PASSWORD_HELPERS_H__

#include "globals.h"
#include "types.h"


extern void free_passwd_data(passwd_data *p);
extern int fill_from_string(char *str, passwd_data *data);
extern passwd_data *getpasswddata(int uid);

#endif
