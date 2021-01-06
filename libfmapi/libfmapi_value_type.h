/*
 * Value type functions
 *
 * Copyright (C) 2009-2021, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#if !defined( _LIBFMAPI_VALUE_TYPE_H )
#define _LIBFMAPI_VALUE_TYPE_H

#include <common.h>
#include <types.h>

#if defined( __cplusplus )
extern "C" {
#endif

#if defined( HAVE_DEBUG_OUTPUT )

typedef struct libfmapi_value_type libfmapi_value_type_t;

struct libfmapi_value_type
{
	/* The value type
	 */
	uint32_t value_type;

	/* The identifier
	 */
	const char *identifier;

	/* The description
	 */
	const char *description;
};

const char *libfmapi_value_type_get_identifier(
             uint32_t value_type );

const char *libfmapi_value_type_get_description(
             uint32_t value_type );

#endif

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBFMAPI_VALUE_TYPE_H ) */

