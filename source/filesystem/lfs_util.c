/*
 * lfs util functions
 *
 * Copyright (c) 2017 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "lfs_util.h"

// Only compile if user does not provide custom config
#ifndef LFS_CONFIG


// Software CRC implementation with small lookup table
void lfs_crc( uint32_t *crc, const void *buffer, size_t size )
{
	static const uint32_t rtable[16] =
	{
		0x00000000, 0x1db71064, 0x3b6e20c8, 0x26d930ac,
		0x76dc4190, 0x6b6b51f4, 0x4db26158, 0x5005713c,
		0xedb88320, 0xf00f9344, 0xd6d6a3e8, 0xcb61b38c,
		0x9b64c2b0, 0x86d3d2d4, 0xa00ae278, 0xbdbdf21c,
	};

	const uint8_t *data = ( const uint8_t * )buffer;

	size_t i = 0;
	for ( i = 0; i < size; i++ )
	{
		*crc = ( *crc >> 4 ) ^ rtable[( *crc ^ ( data[i] >> 0 ) ) & 0xf];
		*crc = ( *crc >> 4 ) ^ rtable[( *crc ^ ( data[i] >> 4 ) ) & 0xf];
	}
}


#endif