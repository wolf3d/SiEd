
/*
 * SiEd - A text editor for PalmOS 3.5+ Copyright (C) 2003 Benjamin Roe
 * Contact Email:ben@benroe.com
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
#include "vfs_dirnode.h"
#ifndef VFSDIR_SIDIRNODE_HPP
#define VFSDIR_SIDIRNODE_HPP


class vfsdir_SiDirNode : public vfs_SiDirNode
{
public:
	vfsdir_SiDirNode(Char * filename);
	virtual SiDirNode * get_copy();
	virtual Int16 get_position_index() const __attribute__ ((section ("diafns")));
};

#endif
