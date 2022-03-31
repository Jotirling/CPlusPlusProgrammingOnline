	String& operator =(String &old_str) {
		cout << "assignment Operator" << endl;
		delete[] s;
		size = old_str.size;
		s = new char[size + 1];
		strcpy(s, old_str.s);
		return *this;
	}