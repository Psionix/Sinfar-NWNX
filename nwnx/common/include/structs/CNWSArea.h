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

#ifndef _NX_NWN_STRUCT_CNWSAREA_
#define _NX_NWN_STRUCT_CNWSAREA_

struct CResHelper_ARE
{
    uint32_t field_00;
	CRes* res; //0x4
	CResRef resref; //0x8
	void* vtable; //0x18
};

struct CNWSArea_s {
    uint32_t                    field_00;
    uint32_t                    area_width;
    uint32_t                    area_height;
    uint32_t                    field_0C;
    uint32_t                    field_10;
    uint32_t                    field_14;
    uint32_t                    field_18;
    uint32_t                    field_1C;
    uint32_t                    field_20;
    uint32_t                    field_24;
    uint32_t                    field_28;
    uint32_t                    field_2C;
    uint32_t                    field_30;
    uint32_t                    field_34;
    uint32_t                    field_38;
    uint32_t                    field_3C;
    uint32_t                    field_40;
    uint32_t                    field_44;
    uint32_t                    field_48;
    uint32_t                    field_4C;
    uint32_t                    field_50;
    uint32_t                    field_54;
    uint32_t                    field_58;
    uint32_t                    field_5C;
    uint32_t                    field_60;
    uint32_t                    field_64;
    uint32_t                    field_68;
    uint32_t                    field_6C;
    uint32_t                    field_70;
    uint32_t                    field_74;
    uint32_t                    field_78;
    uint32_t                    field_7C;
    uint32_t                    field_80;
    uint32_t                    field_84;
    uint32_t                    area_use_day_night_cyle;
    uint32_t                    area_is_night;
    uint32_t                    field_90;
    uint32_t                    field_94;
    uint32_t                    field_98;
    uint32_t                    field_9C;
    uint32_t                    field_A0;
    uint32_t                    field_A4;
    CResHelper_ARE              res_helper; //0xa8
	uint32_t                    field_C4;
	uint32_t                    area_id;
	uint32_t                    field_CC;
	uint32_t                    field_D0;
    uint32_t                    num_players;
    uint32_t                    field_D8;
    uint32_t                    field_DC;
    uint32_t                    field_E0;
    uint32_t                    field_E4;
    uint32_t                    field_E8;
    uint32_t                    field_EC;
    uint32_t                    field_F0;
    uint32_t                    field_F4;
    uint32_t                    field_F8;
    CExoLocString               name; //0xfc
    CExoString                  area_tag; //0x104
    uint32_t                    field_10C;
    uint32_t                    field_110;
    uint32_t                    field_114;
    uint32_t                    field_118;
    uint32_t                    field_11C;
    CNWSTile*                   area_tiles;
    uint32_t                    field_124;
    uint32_t                    field_128;
    uint32_t                    field_12C;
    uint32_t                    field_130;
    uint32_t                    field_134;
    uint32_t                    field_138;
    uint32_t                    field_13C;
    uint32_t                    field_140;
    uint32_t                    field_144;
    uint32_t                    field_148;
    uint32_t                    field_14C;
    uint32_t                    field_150;
    CExoArrayList<uint32_t>     are_objects;
    uint32_t                    are_next_object_loop_index;
    uint32_t                    field_164;
    uint32_t                    field_168;
    uint32_t                    field_16C;
    uint32_t                    field_170;
    uint32_t                    field_174;
    uint32_t                    field_178;
    uint32_t                    field_17C;
    uint32_t                    field_180;
    uint32_t                    field_184;
    uint32_t                    field_188;
    uint32_t                    field_18C;
    uint32_t                    field_190;
    uint32_t                    field_194;
    CPathfindInformation*       are_cre_pathfinding;
    uint32_t                    field_19C;
    uint32_t                    field_1A0;
    uint32_t                    field_1A4;
    uint32_t                    field_1A8;
    uint32_t                    field_1AC;
    uint32_t                    field_1B0;
    uint32_t                    field_1B4;
    uint32_t                    field_1B8;
    uint32_t                    field_1BC;
    uint32_t                    field_1C0;
    uint32_t                    field_1C4;
    uint32_t                    field_1C8;
    uint32_t                    field_1CC;
    uint32_t                    field_1D0;
    uint32_t                    field_1D4;

    CNWSScriptVarTable          area_vartable;

    uint32_t                    field_1E0;
	uint32_t                    field_1E4;
	uint32_t                    field_1E8;
	uint32_t                    field_1EC;
	uint32_t                    field_1F0;
	uint32_t                    field_1F4;
	uint32_t                    field_1F8;
	uint32_t                    field_1FC;
	uint32_t                    field_200;
	uint32_t                    field_204;
	uint32_t                    field_208;
	uint16_t                    area_transition_bmp;
};

#endif /* _NX_NWN_STRUCT_CNWSAREA_ */

/* vim: set sw=4: */
