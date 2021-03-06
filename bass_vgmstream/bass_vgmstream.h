/**
 * Copyright (c) 2008, Ruben "angryzor" Tytgat
 * 
 * Permission to use, copy, modify, and/or distribute this
 * software for any purpose with or without fee is hereby granted,
 * provided that the above copyright notice and this permission
 * notice appear in all copies.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS
 * ALL WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY SPECIAL,
 * DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS,
 * WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH
 * THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _BASS_VGMSTREAM_H_
#define _BASS_VGMSTREAM_H_


#ifdef BASS_VGMSTREAM_EXPORTS
#define BASS_VGMSTREAM_API __declspec(dllexport)
#else
#define BASS_VGMSTREAM_API __declspec(dllimport)
#endif

#include <bass.h>


#ifdef __cplusplus
extern "C"
{
#endif

BASS_VGMSTREAM_API HSTREAM BASS_VGMSTREAM_StreamCreate(const char* file, DWORD flags);

#ifdef __cplusplus
}
#endif


#endif