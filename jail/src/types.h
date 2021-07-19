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
// $Id: types.h,v 1.2 2004/04/01 16:32:31 assman Exp $
//
// $Log: types.h,v $
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

#ifndef __JAIL_TYPES_H__
#define __JAIL_TYPES_H__

struct passwd_data_s {
    char *login;
    char *pass;
    int  id;
    int  gid;
    char *gecos;
    char *dir;
    char *shell;
};

typedef struct passwd_data_s passwd_data;

//////////////////////////////////////////////////////////////////////////////
//
// device_data
// a struct to handle the data about a terminal device
//
//       *path:     the path name of the device
//       major:     major number
//       minor:     minor number
//
//////////////////////////////////////////////////////////////////////////////

struct device_data {
    char *path;
    int major;
    int minor;
};    

#endif
