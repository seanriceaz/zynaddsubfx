/*
  ZynAddSubFX - a software synthesizer
 
  Presets.h - Presets and Clipboard management
  Copyright (C) 2002-2004 Nasca Octavian Paul
  Author: Nasca Octavian Paul

  This program is free software; you can redistribute it and/or modify
  it under the terms of version 2 of the GNU General Public License 
  as published by the Free Software Foundation.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License (version 2) for more details.

  You should have received a copy of the GNU General Public License (version 2)
  along with this program; if not, write to the Free Software Foundation,
  Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA

*/

#ifndef PRESETS_H
#define PRESETS_H

#include "../Misc/XMLwrapper.h"
#define MAX_PRESETTYPE_SIZE 20

class Presets{
    public:
	Presets();
	virtual ~Presets();
        void copyclipboard();
	void pasteclipboard();

	char type[MAX_PRESETTYPE_SIZE];
    protected:
	void setpresettype(char *type);
    private:
	virtual void add2XML(XMLwrapper *xml)=0;
        virtual void getfromXML(XMLwrapper *xml)=0;
	
};

#endif
