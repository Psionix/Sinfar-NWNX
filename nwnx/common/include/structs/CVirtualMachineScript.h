/*
 *  NWNeXalt - Empty File
 *  (c) 2007 Doug Swarin (zac@intertex.net)
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *  $Id$
 *  $HeadURL$
 *
 */

#ifndef _NX_NWN_STRUCT_CVIRTUALMACHINESCRIPT_
#define _NX_NWN_STRUCT_CVIRTUALMACHINESCRIPT_

struct CVirtualMachineScript_s {
	CVirtualMachineStack* stack;
	char unk_0x4[0xc];
	char* unk_vec_data; //0x10
	uint32_t unk_0x14;
	CExoString script_name; //0x18
};

#endif /* _NX_NWN_STRUCT_CVIRTUALMACHINESCRIPT_ */

/* vim: set sw=4: */
