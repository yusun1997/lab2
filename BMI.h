#include <string>
using namespace std;


class BMI
{
	private:
		float height;
		int mass;
	public:
		void setBMI(float h, int m);
		float getheight();
		int getmass();
		float getBMI(float height,int mass);
		
		string category(float height,int mass);
};
