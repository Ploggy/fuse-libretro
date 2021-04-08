/* win32joystick.h: Joystick emulation
   Copyright (c) 2008 Marek Januszewski

   $Id: win32joystick.h 3804 2008-11-03 04:21:02Z specu $

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

   Author contact information:

   E-mail: philip-fuse@shadowmagic.org.uk

   Darren: linux@youmustbejoking.demon.co.uk

*/

#define IDD_JOYSTICKS                 1700
#define IDC_JOYSTICKS_GROUP_JOYTYPE   1701

#define IDC_JOYSTICKS_GROUP_BUTTON1   ( IDC_JOYSTICKS_GROUP_JOYTYPE + 1 )
#define IDC_JOYSTICKS_GROUP_BUTTON2   ( IDC_JOYSTICKS_GROUP_BUTTON1 + 1 )
#define IDC_JOYSTICKS_GROUP_BUTTON3   ( IDC_JOYSTICKS_GROUP_BUTTON2 + 1 )
#define IDC_JOYSTICKS_GROUP_BUTTON4   ( IDC_JOYSTICKS_GROUP_BUTTON3 + 1 )
#define IDC_JOYSTICKS_GROUP_BUTTON5   ( IDC_JOYSTICKS_GROUP_BUTTON4 + 1 )
#define IDC_JOYSTICKS_GROUP_BUTTON6   ( IDC_JOYSTICKS_GROUP_BUTTON5 + 1 )
#define IDC_JOYSTICKS_GROUP_BUTTON7   ( IDC_JOYSTICKS_GROUP_BUTTON6 + 1 )
#define IDC_JOYSTICKS_GROUP_BUTTON8   ( IDC_JOYSTICKS_GROUP_BUTTON7 + 1 )
#define IDC_JOYSTICKS_GROUP_BUTTON9   ( IDC_JOYSTICKS_GROUP_BUTTON8 + 1 )
#define IDC_JOYSTICKS_GROUP_BUTTON10  ( IDC_JOYSTICKS_GROUP_BUTTON9 + 1 )

#define IDC_JOYSTICKS_STATIC_BUTTON1  ( IDC_JOYSTICKS_GROUP_BUTTON10 + 1 )
#define IDC_JOYSTICKS_STATIC_BUTTON2  ( IDC_JOYSTICKS_STATIC_BUTTON1 + 1 )
#define IDC_JOYSTICKS_STATIC_BUTTON3  ( IDC_JOYSTICKS_STATIC_BUTTON2 + 1 )
#define IDC_JOYSTICKS_STATIC_BUTTON4  ( IDC_JOYSTICKS_STATIC_BUTTON3 + 1 )
#define IDC_JOYSTICKS_STATIC_BUTTON5  ( IDC_JOYSTICKS_STATIC_BUTTON4 + 1 )
#define IDC_JOYSTICKS_STATIC_BUTTON6  ( IDC_JOYSTICKS_STATIC_BUTTON5 + 1 )
#define IDC_JOYSTICKS_STATIC_BUTTON7  ( IDC_JOYSTICKS_STATIC_BUTTON6 + 1 )
#define IDC_JOYSTICKS_STATIC_BUTTON8  ( IDC_JOYSTICKS_STATIC_BUTTON7 + 1 )
#define IDC_JOYSTICKS_STATIC_BUTTON9  ( IDC_JOYSTICKS_STATIC_BUTTON8 + 1 )
#define IDC_JOYSTICKS_STATIC_BUTTON10 ( IDC_JOYSTICKS_STATIC_BUTTON9 + 1 )

#define IDC_JOYSTICKS_BUTTON_BUTTON1  ( IDC_JOYSTICKS_STATIC_BUTTON10 + 1 )
#define IDC_JOYSTICKS_BUTTON_BUTTON2  ( IDC_JOYSTICKS_BUTTON_BUTTON1 + 1 )
#define IDC_JOYSTICKS_BUTTON_BUTTON3  ( IDC_JOYSTICKS_BUTTON_BUTTON2 + 1 )
#define IDC_JOYSTICKS_BUTTON_BUTTON4  ( IDC_JOYSTICKS_BUTTON_BUTTON3 + 1 )
#define IDC_JOYSTICKS_BUTTON_BUTTON5  ( IDC_JOYSTICKS_BUTTON_BUTTON4 + 1 )
#define IDC_JOYSTICKS_BUTTON_BUTTON6  ( IDC_JOYSTICKS_BUTTON_BUTTON5 + 1 )
#define IDC_JOYSTICKS_BUTTON_BUTTON7  ( IDC_JOYSTICKS_BUTTON_BUTTON6 + 1 )
#define IDC_JOYSTICKS_BUTTON_BUTTON8  ( IDC_JOYSTICKS_BUTTON_BUTTON7 + 1 )
#define IDC_JOYSTICKS_BUTTON_BUTTON9  ( IDC_JOYSTICKS_BUTTON_BUTTON8 + 1 )
#define IDC_JOYSTICKS_BUTTON_BUTTON10 ( IDC_JOYSTICKS_BUTTON_BUTTON9 + 1 )

#define IDR_JOYSTICKS_POPUP           ( IDC_JOYSTICKS_BUTTON_BUTTON10 + 1 )

/*
   win32joystick_buttonevent parameters:
   which_joystick = 0 => JOYSTICK1
   which_joystick = 1 => JOYSTICK2
   button_down = 1 => button pressed
   button_down = 0 => button released
*/
void win32joystick_buttonevent( int which_joystick, int button_down,
                                unsigned int wParam );
void win32joystick_move( int which_joystick,
                         unsigned short pos_x, unsigned short pos_y );
