#ifndef SCANNER
#define SCANNER

#include <string>;
#include <array>;
using std::string;
using std::pair;

class scanner {

    class OP {
        int SR;
        int VR;
        int PR;
        int NU;
    }
    
    // linked list of Array[OPCode, OP1, OP2]
    
    
	/*

	load r1 = > r2			r2 ? MEM(r1)				2
	loadI x = > r2			r2 ? x						1
	lshift r1, r2 = > r3	r3 ? r1  r2					1
	store r1 = > r2			MEM(r2) ? r1				2
	sub r1, r2 = > r3		r3 ? r1 - r2				1
	add r1, r2 = > r3		r3 ? r1 + r2				1
	mult r1, r2 = > r3		r3 ? r1 * r2				1
	rshift r1, r2 = > r3	r3 ? r1  r2					1
	output x				prints MEM(x) to stdout		1
	nop						idle for one cycle			1

	*/

	template<x>
	std::array<char,x> readInput(string s) {
		std::array(char, s.length) tmp;

		int t = 0;
		bool com = false;
		for (int i = 0; i < s.length; i++) {
			if (s[t] == '/' || !com) {

			}
			else{
				tmp[t] = s[i];
				t++;
			}

		}

		return tmp;
	}

	bool whitespace(char c) {
		if (c == '  ') {

		}
		else if (c == '	') {

		}
		else {
			false;
		}
	}


	// scans the string for reading
	// completed: change the input
	pair<string,string> scan(string s) {
		char cur;
		if ('l' == cur) {
			if ('o' == cur) {
				if ('a' == cur) {
					if ('d' == cur) {
						if (whitespace(cur) ) {
							return std::pair<string, string>("load", "load");
						}
						else if ('I' == cur) {
							if (whitespace(cur)) {
								return std::pair<string, string>("loadI", "loadI");
							}
							else {
								return std::pair<string, string>("error", "loadI_");
							}
						}
						else {
							return std::pair<string, string>("error", "load_");
						}
					}
					else {
						return std::pair<string, string>("error", "loa_");
					}
				}
				else {
					return std::pair<string, string>("error", "lo_");
				}
			}
			else if ('s' == cur) {
				if ('h' == cur) {
					if ('i' == cur) {
						if ('f' == cur) {
							if ('t' == cur) {
								if (whitespace(cur)) {
									return std::pair<string, string>("lshift", "lshift");
								}
								else {
									return std::pair<string, string>("error", "lshift_");
								}
							}
							else {
								return std::pair<string, string>("error", "lshif_");
							}
						}
						else {
							return std::pair<string, string>("error", "lshi_");
						}
					}
					else {
						return std::pair<string, string>("error", "lsh_");
					}
				}
				else {
					return std::pair<string, string>("error", "ls_");
				}
			}
			else {
				return std::pair<string, string>("error", "l_");
			}
		}
		
		else if ('s' == cur) {
			if ('t' == cur) {
				if ('o' == cur) {
					if ('r' == cur) {
						if ('e' == cur) {
							if (whitespace(cur)) {
								return std::pair<string, string>("store", "store");
							}
							else {
								return std::pair<string, string>("error", "store_");
							}
						}
						else {
							return std::pair<string, string>("error", "stor_");
						}
					}
					else {
						return std::pair<string, string>("error", "sto_");
					}
				}
				else {
					return std::pair<string, string>("error", "st_");
					}
				}
			else if ('u' == cur) {
				if ('b' == cur) {
					return std::pair<string, string>("sub", "sub");
				}
				else {
					return std::pair<string, string>("error", "su_");
				}
			}
			else {
				return std::pair<string, string>("error", "s_");
			}
		}
		
		else if ('a' == cur) {
			if ('d' == cur) {
				if ('d' == cur) {
					if (whitespace(cur)) {
						return std::pair<string, string>("add", "add");
					}
					else {
						return std::pair<string, string>("error", "add_");
					}
				}
				else {
					return std::pair<string, string>("error", "ad_");
				}
			}
			else {
				return std::pair<string, string>("error", "a_");
			}
		}
		
		else if ('m' == cur) {
			if ('u' == cur) {
				if ('l' == cur) {
					if ('t' == cur) {
						if (whitespace(cur)) {
							return std::pair<string, string>("mult", "mult");
						}
						else {
							return std::pair<string, string>("error", "mult_");
						}
					}
					else {
						return std::pair<string, string>("error", "mul_");
					}
				}
				else {
					return std::pair<string, string>("error", "mu_");
				}
			}
			else {
				return std::pair<string, string>("error", "m_");
			}

		}
		
		else if ('r' == cur) {
			if ('s' == cur) {
				if ('h' == cur) {
					if ('i' == cur) {
						if ('f' == cur) {
							if ('t' == cur) {
								if (whitespace(cur)) {
									return std::pair<string, string>("rshift", "rshift");
								}
								else {
									return std::pair<string, string>("error", "rshift_");
								}
							}
							else {
								return std::pair<string, string>("error", "rshif_");
							}
						}
						else {
							return std::pair<string, string>("error", "rshi_");
						}
					}
					else {
						return std::pair<string, string>("error", "rsh_");
					}
				}
				else {
					return std::pair<string, string>("error", "rs_");
				}
			}
			else {
				return std::pair<string, string>("error", "r_");
			}
		}
		
		else if ('o' == cur) {
			if ('u' == cur) {
				if ('t' == cur) {
					if ('p' == cur) {
						if ('u' == cur) {
							if ('t' == cur) {
								return std::pair<string, string>("output", "output");
							}
							else {
								return std::pair<string, string>("error", "outpu_");
							}
						}
						else {
							return std::pair<string, string>("error", "outp_");
						}
					}
					else {
						return std::pair<string, string>("error", "out_");
					}
				}
				else {
					return std::pair<string, string>("error", "ou_");
				}
			}
			else {
				return std::pair<string, string>("error", "o_");
			}
		}
		
		else if ('n' == cur) {
			if ('o' == cur) {
				if ('p' == cur) {
					return std::pair<string, string>("nop", "nop");
				}
				else {
					return std::pair<string, string>("error", "no_");
				}
			}
			else {
				return std::pair<string, string>("error", "n_");
			}
		}
		
		else {
			return std::pair<string, string>("error", "_");
		}
	}



	bool isnum(char c) {
		return (c == '0') || (c == '1') || (c == '2') || (c == '3') || (c == '4') || (c == '5') ||
			(c == '6') || (c == '7') || (c == '8') || (c == '9');
	}

	pair<string,string> readreg(string s) {
		char cur;
		if ('r' == cur) {
			while ( isnum(cur) ) {
				// increase cur
			}
			if (whitespace(cur) ) {
				return std::pair<string, string>("r", "regester");
			}
			else {
				return std::pair<string, string>("error", "not a regester");
			}
		}
		else {
			return std::pair<string, string>("error", "no r for regester");
		}
	}

};

#endif