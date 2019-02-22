#ifndef NEW
#define NEW

class Button {
	int num;
	public:
		bool onoff = false;
}

class ButtonPad {
	public:
		Button ** pad;	
}

#endif
