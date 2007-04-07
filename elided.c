/*
 * CDDL HEADER START
 *
 * The contents of this file are subject to the terms
 * of the Common Development and Distribution License
 * (the "License").  You may not use this file except
 * in compliance with the License.
 *
 * You can obtain a copy of the license at
 * src/OPENSOLARIS.LICENSE
 * or http://www.opensolaris.org/os/licensing.
 * See the License for the specific language governing
 * permissions and limitations under the License.
 *
 * When distributing Covered Code, include this CDDL
 * HEADER in each file and include the License file at
 * usr/src/OPENSOLARIS.LICENSE.  If applicable,
 * add the following below this CDDL HEADER, with the
 * fields enclosed by brackets "[]" replaced with your
 * own identifying information: Portions Copyright [yyyy]
 * [name of copyright owner]
 *
 * CDDL HEADER END
 */

/*
 * Copyright 2005 Sun Microsystems, Inc.  All rights reserved.
 * Use is subject to license terms.
 */

#ifdef	__sun
#pragma ident	"@(#)elided.c	1.3	05/08/04 SMI"
#endif

/*
 * empty benchmark program to substitute for  benchmarks
 * that don't work/exist on some platforms
 */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*ARGSUSED*/
int
main(int argc, char *argv[])
{
	char			 *tmp = strrchr(argv[0], '/');

	if (tmp == NULL)
		tmp = argv[0];
	else
		tmp++;

	(void) printf(
	    "#\n"
	    "# benchmark %s not compiled/supported on this platform\n"
	    "#\n",
	    tmp);

	return (0);
}
