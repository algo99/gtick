/*
 * Interface for Profiles
 *
 * This file is part of GTick
 *
 *
 * Copyright (c) 2003, 2004, 2005, 2006 Roland Stigge <stigge@antcom.de>
 *
 * GTick is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * GTick is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GTick; if not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef PROFILES_H
#define PROFILES_H

/* GNU headers */
#include <time.h>

/* GTK+ headers */
#include <gtk/gtk.h>
#include <glib.h>

/* own headers */
#include "metro.h"

void toggle_profiles_cb(GtkToggleAction *action, metro_t *metro);
GtkWidget* profiles_new(metro_t* metro);

#endif /* PROFILES_H */
