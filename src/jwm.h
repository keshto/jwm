/****************************************************************************
 * The main JWM header file.
 * Copyright (C) 2004 Joe Wingbermuehle
 ****************************************************************************/

#ifndef JWM_H
#define JWM_H

#include "../config.h"

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>

#ifdef HAVE_STDARG_H
#	include <stdarg.h>
#endif
#ifdef HAVE_SIGNAL_H
#	include <signal.h>
#endif
#ifdef HAVE_UNISTD_H
#	include <unistd.h>
#endif
#ifdef HAVE_TIME_H
#	include <time.h>
#endif
#ifdef HAVE_SYS_WAIT_H
#	include <sys/wait.h>
#endif
#ifdef HAVE_SYS_TIME_H
#	include <sys/time.h>
#endif
#ifdef HAVE_SYS_SELECT_H
#	include <sys/select.h>
#endif

#include <X11/Xlib.h>
#ifdef HAVE_X11_XUTIL_H
#	include <X11/Xutil.h>
#endif
#ifdef HAVE_X11_XRESOURCE_H
#	include <X11/Xresource.h>
#endif
#ifdef HAVE_X11_CURSORFONT_H
#	include <X11/cursorfont.h>
#endif
#ifdef HAVE_X11_XPROTO_H
#	include <X11/Xproto.h>
#endif
#ifdef HAVE_X11_XATOM_H
#	include <X11/Xatom.h>
#endif
#ifdef HAVE_X11_KEYSYM_H
#	include <X11/keysym.h>
#endif

#ifdef USE_XPM
#	include <X11/xpm.h>
#endif
#ifdef USE_PNG
#	include <png.h>
#endif
#ifdef USE_SHAPE
#	include <X11/extensions/shape.h>
#endif
#ifdef USE_XINERAMA
#	include <X11/extensions/Xinerama.h>
#endif
#ifdef USE_XFT
#	ifdef HAVE_FT2BUILD_H
#		include <ft2build.h>
#	endif
#	include <X11/Xft/Xft.h>
#endif
#ifdef USE_XRENDER
#	include <X11/extensions/Xrender.h>
#endif
#ifdef USE_FRIBIDI
#	include <fribidi/fribidi.h>
#	include <fribidi/fribidi_char_sets_utf8.h>
#endif

#define MAX_DESKTOP_COUNT 8

#define MAX_INCLUDE_DEPTH 16

#define MAX_BORDER_WIDTH 32
#define MIN_BORDER_WIDTH 3
#define DEFAULT_BORDER_WIDTH 5

#define MAX_TITLE_HEIGHT 64
#define MIN_TITLE_HEIGHT 2
#define DEFAULT_TITLE_HEIGHT 21

#define MAX_DOUBLE_CLICK_DELTA 32
#define MIN_DOUBLE_CLICK_DELTA 0
#define DEFAULT_DOUBLE_CLICK_DELTA 2

#define MAX_DOUBLE_CLICK_SPEED 2000
#define MIN_DOUBLE_CLICK_SPEED 1
#define DEFAULT_DOUBLE_CLICK_SPEED 400

#define MAX_SNAP_DISTANCE 32
#define MIN_SNAP_DISTANCE 1
#define DEFAULT_SNAP_DISTANCE 5

#define MAX_TRAY_BORDER 32
#define MIN_TRAY_BORDER 0
#define DEFAULT_TRAY_BORDER 1

#define MOVE_DELTA 3

#define SHELL_NAME "/bin/sh"

#define DEFAULT_MENU_TITLE "JWM"

#define DEFAULT_DESKTOP_COUNT 4

#include "debug.h"
#include "jxlib.h"

#endif

