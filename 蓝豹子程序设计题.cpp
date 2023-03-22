#include<iostream>
using namespace std;

int main(){

	return 0;
}

//第二章  程序设计题
//3.
#include <iostream>
using namespace std;

int main() {
    int num[9];
    cout << "请输入9个整数："<<endl;
    for(int i=0;i<9;i++){
		cin >> num[i];
	}
    cout<<"输出："<<endl;
    for(int j=0;j<9;j++){
        cout<<'\t'<<num[j];
        if((j+1)%3==0)
            cout<<endl;
    }
	return 0;
}

/*请输入9个整数：
输出：
	1	2	3
	11	22	33
	111	222	333
	*/

//4.
#include <iostream>
using namespace std;

int main() {
    int time,saperhour;
	double salary,total;
	cout << "请输入工作时间和每小时工资：";
	cin >> time >> saperhour;
	salary = saperhour * time;
	total = salary * 0.9;
	cout << "应发工资：" << salary << '\n';
	cout << "实发工资：" << total << endl;
	return 0;
}

//5.
#include<iostream>
using namespace std;

int main(){
	double m1,m2,m3,m4;
	int pay1,pay2,payback;
	cout << "请输入苹果，鸭梨，香蕉，橘子的重量(单位：斤)：";
	cin >> m1 >> m2 >> m3 >> m4;
	pay1 = int(m1 * 2.5 + m2 * 1.8 + m3 * 2.0 + m4 * 1.6 + 0.5);
	cout << "应付款：" << pay1 << "元" <<'\n';
	cout << "请输入实付款：";
	cin >> pay2;
	cout << "找零：" << pay2-pay1 << "元" << endl;
	return 0;
}

//6.
#include<iostream>
using namespace std;

int main(){
	char ch;
	int c;
	cout << "输入一个字符：";
	cin >> ch;
	c = ch;
	cout << "对应的ASCII码为：" << c << endl;
	return 0;
}

//7.
#include<iostream>
using namespace std;
const double cost = 0.6;

int main(){
	int elec,y,f,o;
	double money;
	cout << "输入电量：";
	cin >> elec;
	money = elec * cost;
	cout << "电费：" << money << '\n';
	y = int(money) / 1;
	f = int(money * 10) % 10 / 5;
	o = int(money * 10) % 5;
	cout << "共需" << y << "张1元，" << f << "张5角和" << o << "张1角的" << endl;
	return 0;
}

//8.
#include<iostream>
using namespace std;

int main(){
	const double RATE = 0.012;
	double principal;
	int years;
	cout << "输入本金(元)和存款年限(年)：";
	cin>>principal>>years;
	cout<<"本金和利息之和："<<principal + principal * RATE * years<<endl;
	return 0;
}

//9.
#include<iostream>
using namespace std;

int main(){
	int a,b,c,d;
	double avg;
	cout<<"请输入4个整型数：";
	cin>>a>>b>>c>>d;
	avg = (a+b+c+d)/4.0;
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<"的平均值是"<<avg<<endl;
	return 0;
}

//10.
#include<iostream>
using namespace std;

int main(){
	cout<<"int:"<<sizeof(int)<<"字节"<<'\n';
	cout<<"double:"<<sizeof(double)<<"字节"<<'\n';
	cout<<"short int:"<<sizeof(short)<<"字节"<<'\n';
	cout<<"float:"<<sizeof(float)<<"字节"<<endl;
	return 0;
}

//11.
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int x1,y1,x2,y2;
	double distance;
	cout<<"请输入1号点的坐标：";
	cin>>x1>>y1;
	cout<<"请输入2号点的坐标：";
	cin>>x2>>y2;
	distance = sqrt(pow(y2-y1,2) + pow(x2-x1,2));
	cout<<"两点的距离为："<<distance<<endl;
	return 0;
}

//12.
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	const double PI = 22.0 / 7;
	double r,area;
	cout<<"请输入半径：";
	cin>>r;
	area = pow(r,2)*PI;
	cout<<setiosflags(ios::fixed)<<setprecision(2);
	cout<<"半径为"<<r<<"的圆的面积为："<<area<<endl;
	return 0;
}

//13.
#include<iostream>
using namespace std;

class Complex{
public:
	Complex(){real=0;imag=0;}
	Complex(double r,double i):real(r),imag(i){}
	Complex operator+(Complex &);
	void display();
private:
	double real;
	double imag;
};

Complex Complex::operator+(Complex &c2){
	Complex c;
	c.real = c2.real + real;
	c.imag = c2.imag + imag;
	return c;
}

void Complex::display(){
	cout<<"("<<real<<","<<imag<<"i)"<<endl;
}

int main(){
	double r1,i1,r2,i2;
	cout<<"输入复数1的实部和虚部：";
	cin>>r1>>i1;
	cout<<"输入复数2的实部和虚部：";
	cin>>r2>>i2;
	Complex c1(r1,i1),c2(r2,i2),c3;
	c3=c1 + c2;
	cout<<"c1=";
	c1.display();
	cout<<"c2:=";
	c2.display();
	cout<<"c1 + c2 = ";
	c3.display();
	return 0;
}

//第三章
//5.
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double a,b,c,h,k,det,x1,x2;
	cout<<"请输入二次函数y=ax^2+bx+c中的a,b,c的值：";
	cin>>a>>b>>c;
	while(!a){
		cout<<"该函数不是二次函数！请重新输入！"<<endl;
		cin>>a>>b>>c;
	}
	if(a>0)
		cout<<"抛物线开口向上"<<endl;
	else 
		cout<<"抛物线开口向下"<<endl;
	//顶点坐标x=-b/2a,y=4ac-b^2/4a
	h=-(b/(2*a));
	k=(4*a*c-b*b)/(4*a);
	cout<<"顶点坐标为：("<<h<<","<<k<<")"<<endl;
	det=b*b-4*a*c;
	if(det<0)
		cout<<"该函数与x轴没有交点，与y轴交点坐标为：(0,"<<c<<")"<<endl;
	else if(det==0){
		x1=-(b/(2*a));
		cout<<"该函数与x轴交点为：("<<x1<<",0)，"<<"与y轴交点坐标为：(0,"<<c<<")"<<endl;
	}
	else{
		x1=(-b+sqrt(b*b-4*a*c))/(2*a);
		x2=(-b-sqrt(b*b-4*a*c))/(2*a);
		cout<<"该函数与x轴交点为：("<<x1<<",0)和("<<x2<<",0)，"<<"与y轴交点坐标为：(0,"<<c<<")"<<endl;
	}
	return 0;
}

//6.

//7.
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	const double PI = 3.1415926;
	double du,sinx;
	cout<<"请输入角度(0-360)：";
	cin>>du;
	/*因为PI是近似值，所以kΠ计算结果都是近似0，自行定义为0
	sin(double)的参数是弧度值，弧度=角度*PI/180.0*/
	if(int(du)%180==0)			
		sinx=0;
	else
		sinx=sin(du*PI/180.0);  
	if(sinx>0)
		cout<<du<<"度的正弦值为："<<sinx<<"，是正数。"<<endl;
	else if(sinx<0)
		cout<<du<<"度的正弦值为："<<sinx<<"，是负数。"<<endl;
	else
		cout<<du<<"度的正弦值为0。"<<endl;
	return 0;
}

//8.
#include<iostream>
using namespace std;

int main(){
	void salary(char);
	char type;
	cout<<"请选择，计时工资(T)，计件工资(P)，固定工资(S)：";
	cin>>type;
	salary(type);
	return 0;
}

void salary(char t){
	double final(double);
	bool f=true;
	int time,piece;
	double salary,totalSalary;
	
	switch(t){
	case 'T':
	case 't':
		cout<<"请输入工作时间和每小时薪水：";
		cin>>time>>salary;
		totalSalary=time*salary;
		cout<<"工作时间："<<time<<"小时，应发工资："<<totalSalary<<endl;
		break;
	case 'P':
	case 'p':
		cout<<"请输入本月完成件数和每件报酬：";
		cin>>piece>>salary;
		totalSalary=piece*salary;
		cout<<"本月完成："<<piece<<"件，应发工资："<<totalSalary<<endl;
		break;
	case 'S':
	case 's':
		cout<<"请输入固定工资额：";
		cin>>totalSalary;
		cout<<"应发工资："<<totalSalary<<endl;
		break;
	default:
		cout<<"错误的输入类型！";
		f=false;
	}
	if(f)
		cout<<"实发工资："<<final(totalSalary)<<endl;
}

double final(double total){
	double tmp=total;
	if(tmp>4000){
		total-=(tmp-4000)*0.15;
		tmp=4000;
	}
	if(tmp>2500){
		total-=(tmp-2500)*0.1;
		tmp=2500;
	}
	if(tmp>2000)
		total-=(tmp-2000)*0.05;
	return total;
}

//9.
//用if语句
#include<iostream>
using namespace std;

int main(){
	char ch;
	cout<<"输入一个字母：";
	cin>>ch;
	if(ch>='a'&&ch<='z')
		ch-=32;
	if(ch<'A'||ch>'Z')
		cout<<"不是字母"<<endl;
	if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		cout<<"是元音字母"<<endl;
	else
		cout<<"是辅音字母"<<endl;
	return 0;
}
//用switch语句
#include<iostream>
using namespace std;

int main(){
	char ch;
	cout<<"输入一个字母：";
	cin>>ch;
	if(ch>='a'&&ch<='z')
		ch-=32;
	if(ch<'A'||ch>'Z')
		cout<<"不是字母"<<endl;
	else
		switch(ch){
		case 'A':case 'E':case 'I':case 'O':case 'U':
			cout<<"是元音字母"<<endl;break;
		default:
			cout<<"是辅音字母"<<endl;
		}
	return 0;
}

//10.
#include<iostream>
using namespace std;

int main(){
	int a,b,c,t;
	cout<<"输入三角形的三条边a,b,c：";
	cin>>a>>b>>c;
	while(a==0||b==0||c==0){
		cout<<"错误，请输入非零整数：";
		cin>>a>>b>>c;
	}
	//让c为最大边,a,b为所谓谁大谁小
	if(a>b){
		t=a;a=b;b=t;
	}
	if(b>c){
		t=b;b=c;c=b;
	}
	//两条短边和大于长边
	if(a+b>c){
		cout<<"这三条边能拼成一个三角形，";
		if(a*a+b*b==c*c)
			cout<<"且是直角三角形。"<<endl;
		else
			cout<<"但不是直角三角形。"<<endl;
	}
	else
		cout<<"这三条边不能拼成一个三角形"<<endl;
	return 0;
}

//13.
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double x1,x2,y1,y2;
	//浮点数判等不能用等于
	const double EPSILON=1e-10;
	cout<<"请输入左下角坐标:";
	cin>>x1>>y1;
	cout<<"请输入右上角坐标:";
	cin>>x2>>y2;
	cout<<"矩形的面积为:"<<fabs((y2-y1)*(x2-x1))<<endl;
	cout<<"矩阵的周长为:"<<fabs(2*(y2-y1+x2-x1))<<endl;
	cout<<(fabs(y2-y1-x2+x1)<EPSILON?"是正方形":"不是正方形")<<endl;
	return 0;
}

//14.
#include<iostream>
using namespace std;
const int Fee3Hour=5,FeeForCar=10;
const int Fee2Hour=10,FeeForBus=15;
const int Fee1Hour=10,FeeForTruck=15;

class Time{
public:
	Time(){inHour=0,inMin=0,outHour=0,outMin=0;}
	Time(int ih,int im,int oh,int om):inHour(ih),inMin(im),outHour(oh),outMin(om){}
	int ParkHour();
private:
	int inHour;
	int inMin;
	int outHour;
	int outMin;
};
int Time::ParkHour(){
	return ((outHour-inHour)*60+outMin-inMin+1440)%1440/60;
}

int main(){	
	double Fee(char,int);
	char type;
	int inHour,inMin,outHour,outMin;
	cout<<"请输入汽车类型(轿车C，客车B，卡车T):";
	cin>>type;
	if(type!='c'&&type!='C'&&type!='b'&&type!='B'&&type!='t'&&type!='T'){
		cout<<"输入类型错误!"<<endl;
		return 0;
	}
	cout<<"请输入入库时间(时 分)和出库时间(时 分)";
	cin>>inHour>>inMin>>outHour>>outMin;
	if(inHour<0||inHour>23||inMin<0||inMin>59){
		cout<<"入库时间输入错误!"<<endl;
		return 0;
	}
	if(outHour<0||outHour>23||outMin<0||outMin>59){
		cout<<"出库时间输入错误!"<<endl;
		return 0;
	}
	Time time(inHour,inMin,outHour,outMin);
	cout<<"应交停车费:"<<(Fee(type,time.ParkHour()))<<"元"<<endl;
	return 0;
}

double Fee(char t,int hour){
	int fee;
	switch(t){
	case 'c': case 'C':
		if(hour<=3) fee=Fee3Hour*hour;
		else fee=3*Fee3Hour+FeeForCar*(hour-3);
		break;
	case 'b': case 'B':
		if(hour<=2) fee=Fee2Hour*hour;
		else fee=2*Fee2Hour+FeeForBus*(hour-2);
		break;
	case 't': case 'T':
		if(hour<=1) fee=Fee1Hour;
		else fee=Fee1Hour+FeeForTruck*(hour-1);
	}
	return fee;
}

//15.
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
	int num1,num2,op;
	void arithmetic(int,int,int);
	srand(time(NULL));
	for(int i=0;i<20;i++){
		num1=rand()*10/(RAND_MAX+1);
		num2=rand()*10/(RAND_MAX+1);
		op=rand()*4/(RAND_MAX+1);
		arithmetic(num1,num2,op);
	}
	return 0;
}

void arithmetic(int n1,int n2,int op){
	int result1,result2,t;
	switch(op){
	case 0:
		cout<<n1<<" + "<<n2<<" = ";
		cin>>result1;
		if(n1+n2==result1) cout<<"you are right!\n";
		else cout<<"you are wrong!\n";
		break;
	case 1:
		if(n1<n2){
			t=n1;
			n1=n2;
			n2=t;
		}
		cout<<n1<<" - "<<n2<<" = ";
		cin>>result1;
		if(n1-n2==result1) cout<<"you are right!\n";
		else cout<<"you are wrong!\n";
		break;
	case 2:
		cout<<n1<<" * "<<n2<<" = ";
		cin>>result1;
		if(n1*n2==result1) cout<<"you are right!\n";
		else cout<<"you are wrong!\n";
		break;
	case 3:
		while(n2==0){
			n2=rand()*10/(RAND_MAX+1);
		}
		cout<<n1<<" / "<<n2<<" = ";
		cin>>result1;
		cout<<"余数=";
		cin>>result2;
		if((n1/n2==result1)&&(n1%n2==result2)) cout<<"you are right!\n";
		else cout<<"you are wrong!\n";
		break;
	}
}

//第四章
//1.
#include<iostream>
using namespace std;

int main(){
	int x,y,z,t;
	for(x=1;x<=9;x++)
		for(y=1;y<=9;y++){
			if(y==x) continue;
			for(z=0;z<=9;z++){
				if(z==x||z==y) continue;
				else{
					t=(x*100+y*10+z)+(y*100+z*10+z);
					if(t==532)
						cout<<"x="<<x<<" y="<<y<<" z="<<z<<endl;
				}
			}
		}
	return 0;
}

//2.
#include<iostream>
using namespace std;

int main(){
	int n,s=0,t=1;
	cout<<"请输入整数n=";
	cin>>n;
	while(n){
		s+=t;
		t+=2;
		n--;
	}
	cout<<"前n个奇数和="<<s<<endl;
	return 0;
}

//3.
#include<iostream>
using namespace std;

int main(){
	int n=7;
	while(n%7!=0||n%6!=5||n%5!=4||n%3!=2||n%2!=1)
		n+=7;
	cout<<"楼梯至少"<<n<<"阶"<<endl;
	return 0;
}

//5.
#include<iostream>
using namespace std;

int main(){
	int f[16];
	f[0]=0;
	f[1]=1;
	cout<<"F0="<<f[0]<<"\nF1="<<f[1]<<"\n";
	for(int i=2;i<=15;i++){
		f[i]=f[i-1]+f[i-2];
		cout<<"F"<<i<<"="<<f[i]<<"\n";
	}
	cout<<endl;
	return 0;
}

//6.
#include<iostream>
using namespace std;

int main(){
	int n,i,j;
	cout<<"请输入一个整数N:";
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++)
			cout<<" ";
		for(j=0;j<2*i+1;j++)
			cout<<"*";
		cout<<endl;
	}
	return 0;
}

//7.
#include<iostream>
using namespace std;

int main(){
	int i,j,n;
	for(i=0;i<10;i++){
		cout<<" ";
		if(i==0){
			cout<<"*";
			for(j=1;j<=9;j++)
				cout<<"  "<<j;
		}
		else{
			cout<<i;
			for(j=0;j<i-1;j++)
				cout<<"   ";
			for(j=i;j<=9;j++){
				n=i*j;
				if(n<10)
					cout<<"  "<<n;
				else
					cout<<" "<<n;
			}
		}
		cout<<endl;
	}
	return 0;
}

//8.
#include<iostream>
using namespace std;

int main(){
	double s=0,n,t=1;
	for(n=1;n<=30;n++){
		t*=n;
		s+=t;
	}
	cout<<"1!+2!+...+30!="<<s<<endl;
	return 0;
}

//9.
#include <iostream>
using namespace std;

int main(){
	int sum , n ;
	cout << "请输入n：";
	cin >> n;
	if (n % 2) sum = n - (n-1)/ 2;
	else sum = -n / 2;
	cout << "总和为：" << sum << endl;
	return 0;
}

//10.
#include<iostream>
using namespace std;

int main(){
	int a,b;
	for(a=1;a<=9;a++)
		for(b=0;b<=9;b++)
			if((a*1000+200+b*10+3)%23==0)
				cout<<(a*1000+200+b*10+3)<<endl;
	return 0;
}

//11.
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
	int m;
	void arithmetic();
	srand(time(NULL));
	cout<<"请输入需要题目数量:";
	cin>>m;
	for(int i=0;i<m;i++){
		arithmetic();
		cout<<endl;
	}
	return 0;
}

void cheers(bool b){
	if(b){
		if(rand()%2)
			cout<<"You are right!\n";
		else
			cout<<"It's Ok!\n";
	}
	else{
		if(rand()%2)
			cout<<"Try again!\n";
		else
			cout<<"Come on,you can do it!\n";
	}
}

void add(int n1,int n2){
	int result;
	cout<<n1<<" + "<<n2<<" = ";
	cin>>result;
	while(n1+n2!=result){
		cheers(false);
		cout<<n1<<" + "<<n2<<" = ";
		cin>>result;
	}
	cheers(true);
}

void substract(int n1,int n2){
	int result,t;
	if(n1<n2){
		t=n1;
		n1=n2;
		n2=t;
	}
	cout<<n1<<" - "<<n2<<" = ";
	cin>>result;
	while(n1-n2!=result){
		cheers(false);
		cout<<n1<<" - "<<n2<<" = ";
		cin>>result;
	}
	cheers(true);
}

void multiply(int n1,int n2){
	int result;
	cout<<n1<<" * "<<n2<<" = ";
	cin>>result;
	while(n1*n2!=result){
		cheers(false);
		cout<<n1<<" * "<<n2<<" = ";
		cin>>result;
	}
	cheers(true);
}

void divide(int n1,int n2){
	int result1,result2;
	while(n2==0){
		n2=rand()%100+1;
	}
	cout<<n1<<" / "<<n2<<" = ";
	cin>>result1;
	cout<<"余数=";
	cin>>result2;
	while(n1/n2!=result1||n1%n2!=result2){
		cheers(false);
		cout<<n1<<" / "<<n2<<" = ";
		cin>>result1;
		cout<<"余数=";
		cin>>result2;
	}
	cheers(true);
}

/*
取得[0,x)的随机整数：rand()%x；
取得[0,x]的随机整数：rand()%(x+1)；
取得[a,b)的随机整数：rand()%(b-a)+a；
取得(a,b]的随机整数：rand()%(b-a)+a+1；
取得[a,b]的随机整数：rand()%(b-a+1)+a；
取得0-1之间的浮点数：rand()/double(RAND_MAX)。
*/
void arithmetic(){
	int num1,num2,op;
	num1=rand()%100+1;
	num2=rand()%100+1;
	op=rand()%4;
	switch(op){
	case 0:
		add(num1,num2);break;
	case 1:
		substract(num1,num2);break;
	case 2:
		multiply(num1,num2);break;
	case 3:
		divide(num1,num2);break;
	}
}

//12.
#include <iostream>
using namespace std;

int main()
{
	char ch;
	int numVowel = 0, numCons = 0, numSpace = 0, numDigit = 0, numOther = 0;
	cout << "请输入句子：";
	while (true) { // 处理每个字符
		cin.get(ch); // 读入一个字符
		if (ch == '.') break; // 如果读入的是句号，退出循环
		if (ch >= 'A' && ch <= 'Z' ) 
			ch = ch - 'A' + 'a';
		if (ch >= 'a' && ch <= 'z'){
			if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
				++numVowel;
			else 
				++numCons;
		}
		else if (ch == ' ') 
			++numSpace;
		else if (ch >= '0' && ch <= '9') 
			++numDigit;
		else 
			++numOther;
	}
	cout << "元音字母数：" << numVowel << endl;
	cout << "辅音字母数：" << numCons << endl;
	cout << "空格数：" << numSpace << endl;
	cout << "数字字符数：" << numDigit << endl;
	cout << "其他字符数：" << numOther << endl;
	return 0;
}

//16.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x,y,delt,s=0;
	cout<<"请输入dx=";
	cin>>delt;
	for(x=delt/2;x<=1;x+=delt){
		y=sqrt(1-x*x);
		s+=delt*y;
	}
	cout<<"Pi="<<(4*s)<<endl;
	return 0;
}

//17.弦截法求方程的根，重中之重！
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double EPSILON = 1e-10;
	double x, x1 = 0, x2 = 2, f2, f1, f;
	do { 
		f1 = 2 * x1 * x1 * x1 - x1 * x1 + 5 * x1 - 1; // 计算f(0)
		f2 = 2 * x2 * x2 * x2 - x2 * x2 + 5 * x2 - 1; // 计算f(2)
		x = (x1 * f2 - x2 * f1) / (f2 - f1); // 计算(x1,f(x1))和(x2,f(x2))的弦交与x轴的交点
		f = 2 * x * x * x - x * x + 5 * x - 1; 
		if (f * f1 > 0) // 修正区间
			x1 = x; 
		else 
			x2 = x; 
	} while (fabs(f) > EPSILON);
	cout << "方程的根是：" << x << endl;
	return 0;
}

//补充：牛顿法求根（谭浩强4_6）
#include <iostream>
#include <cmath>
using namespace std;
const double EPSILON=1e-10;

int main()
{
	double solut(double,double,double,double);
	double a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<(solut(a,b,c,d))<<endl;
	return 0;
}

//x(n+1)=x(n)-f(x(n))/f'(x(n))
double solut(double a,double b,double c,double d){
	double x=1,x0,f,f1;
	do{
		x0=x;
		f=a*pow(x0,3.0)+b*pow(x0,2.0)+c*x0+d;
		f1=3*a*pow(x0,2.0)+2*b*x0+c;
		x=x0-f/f1;
	}while(fabs(x-x0)>=EPSILON);
	return x;
}

//第五章
/*7.（求行列式的值，用的代数余子式方法，网上找的动态数组法，配合指针）
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int det(int, int**);
	int x,y,n = 0;//矩阵阶数
	cout << "输入矩阵阶数：" << endl;
	cin >> n;
	int** a = new int* [n];//所要求的矩阵,因为矩阵阶数不是常数，so不能直接创建数组，以指针的形式呈现。
	for (int z = 0; z < n; ++z)
		a[z] = new int[n];//为每一行申请空间
	cout << "输入矩阵：" << endl;
	for (x = 0; x < n; ++x)
		for (y = 0; y < n; ++y)
			cin >> a[x][y];
	for (x = 0; x < n; ++x)
	{
		cout << endl;
		for (y = 0; y < n; ++y)
			cout << a[x][y] << " ";
	}
	cout << endl;
	cout << "矩阵行列式的值为：" << det(n, a)<<endl;
	for (int p = 0; p < n; ++p)
		delete[] a[p];
	delete[]a;
	return 0;
}

int det(int n, int** mat)//取矩阵的第一列进行运算
{
	int mov = 0;//记录a,b矩阵相对应的行数是否发生了改变
	int flag;
	int sum = 0;
	if (n == 1) return mat[0][0];
	int** b = new int* [n - 1];//创建第一列的n-1阶代数余子式矩阵
	for (int z = 0; z < n-1; ++z)
		b[z] = new int[n-1];//为每一行申请空间
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n - 1; ++j) {
			mov = i > j ? 0 : 1;
			//b中行数小于此时a中所取行数即i时，可直接将a中j行搬到b中j行；
			//b中行数大于此时a中所取行数即i时，需将a中第j+1行搬运到b中j行；
			for (int k = 0; k < n - 1; ++k)//开始一行一行的搬运
				b[j][k] = mat[j + mov][k + 1];//k+1是因为在搬运过程中不取mat中第一列
		}
		if (i % 2 == 0) flag = 1;
		else flag = -1;//判断符号的正负，因为所取值为mat[0][i],所以需判断1+1+i=i+2的奇偶
		sum += flag * mat[i][0] * det(n - 1, b);
	}
	delete[] b;
	return sum;
}

（以下为数组法）
*/
#include <iostream>
using namespace std;

int main()
{	
	int det(int a[6][6],int);
	int a[6][6],i,j;
	cout<<"请输入5阶行列式:";
	for(i=1;i<=5;i++)
		for(j=1;j<=5;j++)
			cin>>a[i][j];
	for(i=1;i<=5;i++){
		cout<<endl;
		for(j=1;j<=5;j++)
			cout<<a[i][j]<<" ";
	}
	cout<<endl;
	cout<<"行列式的值为:"<<det(a,5)<<endl;
	return 0;
}

int det(int a[6][6],int n){
	int i,j,k,m,b[6][6],sum=0,flag;
	if(n==1){
		return a[1][1];
	}
	for(i=1;i<=n;i++){//选择1行i列的元素展开
		for(j=1;j<=n-1;j++){//找到a[1][i]的余子式存到b[][]中
			m=1;
			for(k=1;k<=n;k++){
				if(k!=i)
					b[j][m++]=a[j+1][k];
				else continue;
			}
		}
		if(i%2==0) flag=1;
		else flag=-1;
		sum+=flag*a[1][i]*det(b,n-1);//计算a[1][i]的代数余子式
	}
	return sum;
}

//第七章
//2.
#include <iostream>
#include <string>
using namespace std;

int main()
{	
	void deletechar(char *,const char *);
	char *str1,*str2,s1[80],s2[80];
	str1=s1;
	str2=s2;
	cout<<"please input str1 and str2:";
	cin>>str1>>str2;
	cout<<"str1:"<<str1<<"\nstr2:"<<str2<<endl;
	deletechar(str1,str2);
	cout<<str1<<endl;
	return 0;
}

void deletechar(char *str1,const char *str2){
	int i=0,j=0,k;
	for(i=0;i<strlen(str1);i++)
		for(j=0;j<strlen(str2);j++)
			if(str1[i]==str2[j]){
				for(k=i;k<strlen(str1)-1;k++)
					str1[k]=str1[k+1];
				str1[k]='\0';
			}
}

//3.
#include <iostream>
#include <string>
using namespace std;

int main()
{	
	char *itos(int);
	char *str;
	int n;
	cout<<"please input an integer:";
	cin>>n;
	str=itos(n);
	cout<<str<<endl;
	return 0;
}

char *itos(int n){
	char *s = new char[12];
	int i = 0, scale = 1000000000;
	if (n == 0) { // 处理特殊情况0
		s[0] = '0';
		s[1] = '\0';
		return s;
	}
	if (n < 0) { // 处理-号
		s[0] = '-';
		n = -n;
		++i;
	}
	while (n / scale == 0) scale /= 10; // 压缩整数前面的0
	while (scale > 0) { // 从高到低处理每一位
		s[i] = n / scale + '0';
		n %= scale;
		++i;
		scale /= 10;
	}
	s[i] = '\0';
	return s;
}

