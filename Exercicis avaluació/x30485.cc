#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct Point {
	double x, y, z;
};

struct Particle {
	Point p,v;
	double m;
};

void printDouble(double d){
	if (abs(d) < 1e-7) cout << 0.0;
	else cout << d;
}
void printPoint(const Point& p){
	printDouble(p.x);
	cout<<' ';
	printDouble(p.y);
	cout<<' ';
	printDouble(p.z);
	cout<<'\n';
}
Point sum(Point p1, Point p2){
	p1.x += p2.x;
	p1.y += p2.y;
	p1.z += p2.z;
	
	return p1;
}

Point mul(double a, Point p){
	p.x *= a;
	p.y *= a;
	p.z *= a;

	return p;
}
void calSpeed(Particle& ptcl, const int time){
	ptcl.p = sum(ptcl.p,mul(time,ptcl.v)); 
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);    
	cout.setf(ios::fixed);
	cout.precision(5);	
	
	int n,k;
	while(cin>>n>>k){
		Particle center;
		center.p.x = 0;
		center.p.y = 0;
		center.p.z = 0;

		center.v.x = 0;
		center.v.y = 0;
		center.v.z = 0;

		center.m = 0;

		vector<Particle> particles(n);
		for(int i = 0; i<n; ++i){
			cin>>particles[i].p.x>>particles[i].p.y>>particles[i].p.z;	
			cin>>particles[i].v.x>>particles[i].v.y>>particles[i].v.z;
			cin>>particles[i].m;
		
			center.p = sum(center.p, mul(particles[i].m, particles[i].p));
			center.v = sum(center.v, mul(particles[i].m, particles[i].v)); 
			center.m += particles[i].m;
		}	
		
		center.p = mul(1/center.m, center.p);
		center.v = mul(1/center.m, center.v);
		
		int time = 0;	
		for(int i = 0; i<k; ++i){
			int time2;
			cin>>time2;
			calSpeed(center, time2);
			printPoint(center.p);
			time += time2;
		}
		
		for(int i = 0; i<n; ++i){
			calSpeed(particles[i], time);
			printPoint(particles[i].p);
		}
		cout<<'\n';
	};	
}

