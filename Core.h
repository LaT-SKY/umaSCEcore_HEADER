//Core.h

#ifndef _UMACULCORE_
#define _UMACULCORE_

#include <string>
#include <iostream>
#include<math.h>

using namespace std;
using std::string;

class scc
{
private:

	struct diset
	{
		int abex[5];
		int p[5];
		double r[5];
	}di{};
	//
	struct v4g1data
	{
		int mainept[2];
		int foldept[2];
		int spept[2];
		int click[5];
	};
	v4g1data v4g1{};
	int nowtrap;
	int nowpos;
	struct tempposinfo
	{
		int tpt;
		int index;
	}t[5]{ 0 };
	void ex(int a, int b)
	{
		int c;
		c = a;
		a = b;
		b = c;
	};
protected:
	int type, fs, sfs, dr, tr, gatr, trap, speed, stamina, power, willp, wit, sp;
	int v3g2mainept, v3g2foldept, v3g2spept;
	double v3g1ept, v2ept;
	int v4g1mainept; int v4g1foldept; int v4g1spept;

	bool isdi;


public:
	bool Scan(int, int, int, int, int, int, int, int, int, int, int, int, int);
	bool Get(string);
	bool Clear(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, double, double);

	int Report(string);

	bool Copy(scc&);
	bool Exchange(scc);

	bool EvalV3G2();
	bool EvalV3G1();
	bool EvalV2();
	bool EvalDiG1();
	bool EvalV4G1(bool,bool,int);

};

bool scc::Scan(int type, int fs, int sfs, int dr, int tr, int gatr, int trap, int speed, int stamina, int power, int willp, int wit, int sp)
{
	try
	{
		scc::type = type;
		scc::fs = fs;
		scc::sfs = sfs;
		scc::dr = dr;
		scc::tr = tr;
		scc::gatr = gatr;
		scc::trap = trap;
		scc::speed = speed;
		scc::stamina = stamina;
		scc::power = power;
		scc::willp = willp;
		scc::wit = wit;
		scc::sp = sp;
	}
	catch (std::exception& e)
	{
		return 1;
	}
	return 0;
}

bool scc::Clear(int type, int fs, int sfs, int dr, int tr, int gatr, int trap, int speed, int stamina, int power, int willp, int wit, int sp, int v3g2mainept, int v3g2foldept, int v3g2spept, double v3g1ept, double v2ept)
{
	try
	{
		scc::type = 0; scc::fs = 0; scc::sfs = 0; scc::dr = 0; scc::tr = 0; scc::gatr = 0; scc::trap = 0; scc::speed = 0; scc::stamina = 0; scc::power = 0; scc::willp = 0; scc::wit = 0; scc::sp = 0;
		scc::v3g2mainept = 0; scc::v3g2foldept = 0; scc::v3g2spept = 0;
		scc::v3g1ept = 0;
		scc::v2ept = 0;
		return 0;

	}
	catch(std::exception & e)
	{
		return 1;
	}
}

bool scc::Get(string type)
{
	try
	{
		int num;
		cin >> num;
		if (type == "type")
		{
			scc::type = num;
			return 0;
		}
		else if (type == "fs")
		{
			scc::fs = num;
			return 0;
		}
		else if (type == "sfs")
		{
			scc::sfs = num;
			return 0;
		}
		else if (type == "dr")
		{
			scc::dr = num;
			return 0;
		}
		else if (type == "tr")
		{
			scc::tr = num;
			return 0;
		}
		else if (type == "trap")
		{
			scc::trap = num;
			return 0;
		}
		else if (type == "gatr")
		{
			scc::gatr = num;
			return 0;
		}
		else if (type == "speed")
		{
			scc::speed = num;
			return 0;
		}
		else if (type == "stamina")
		{
			scc::stamina = num;
			return 0;
		}
		else if (type == "power")
		{
			scc::power = num;
			return 0;
		}
		else if (type == "willp")
		{
			scc::willp = num;
			return 0;
		}
		else if (type == "wit")
		{
			scc::wit = num;
			return 0;
		}
		else if (type == "sp")
		{
			scc::sp = num;
			return 0;
		}
	}
	catch (std::exception& e)
	{
		return 1;
	}
}

int scc::Report(string ty)
{
	try
	{
		if (ty == "ty")
		{
			return type;
		}
		else if (ty == "fs")
		{
			return fs;
		}
		else if (ty == "sfs")
		{
			return sfs;
		}
		else if (ty == "dr")
		{
			return dr;
		}
		else if (ty == "tr")
		{
			return tr;
		}
		else if (ty == "trap")
		{
			return trap;
		}
		else if (ty == "gatr")
		{
			return gatr;
		}
		else if (ty == "speed")
		{
			return speed;
		}
		else if (ty == "stamina")
		{
			return stamina;
		}
		else if (ty == "power")
		{
			return power;
		}
		else if (ty == "willp")
		{
			return willp;
		}
		else if (ty == "wit")
		{
			return wit;
		}
		else if (ty == "sp")
		{
			return sp;
		}
		else if (ty == "v3g1ept")
		{
			return v3g1ept;
		}
		else if (ty == "v3g2mainept")
		{
			return v3g2mainept;
		}
		else if (ty == "v3g2foldept")
		{
			return v3g2foldept;
		}
		else if (ty == "v3g2spept")
		{
			return v3g2spept;
		}
		else if (ty == "v4g1spept")
		{
			return v4g1spept;
		}
		else if (ty == "v4g1foldept")
		{
			return v4g1foldept;
		}
		else if (ty == "v4g1mainept")
		{
			return v4g1mainept;
		}
	}
	catch (std::exception& e)
	{
		return 1;
	}
}

bool scc::Copy(scc& opt)
{
	try
	{
		opt.type = scc::type;
		opt.sfs = scc::sfs;
		opt.fs = scc::fs;
		opt.dr = scc::dr;
		opt.tr = scc::tr;
		opt.gatr = scc::gatr;
		opt.trap = scc::trap;
		opt.speed = scc::speed;
		opt.stamina = scc::stamina;
		opt.power = scc::power;
		opt.willp = scc::willp;
		opt.wit = scc::wit;
		opt.sp = scc::sp;
		opt.v3g1ept = scc::v3g1ept;
		opt.v2ept = scc::v2ept;
		//cout << "done";
		//cout << opt.type;
		//cin.get();
		return 0;
	}
	catch (std::exception& e)
	{
		return 1;
	}
}

bool scc::Exchange(scc opt)
{
	try
	{
		scc temp{};

		opt.Copy(temp);

		scc::type = opt.type;
		scc::sfs = opt.sfs;
		scc::fs = opt.fs;
		scc::dr = opt.dr;
		scc::tr = opt.tr;
		scc::gatr = opt.gatr;
		scc::trap = opt.trap;
		scc::speed = opt.speed;
		scc::stamina = opt.stamina;
		scc::power = opt.power;
		scc::willp = opt.willp;
		scc::wit = opt.wit;
		scc::sp = opt.sp;
		scc::v3g1ept = opt.v3g1ept;
		scc::v2ept = opt.v2ept;

		temp.type = scc::type;
		temp.sfs = scc::sfs;
		temp.fs = scc::fs;
		temp.dr = scc::dr;
		temp.tr = scc::tr;
		temp.gatr = scc::gatr;
		temp.trap = scc::trap;
		temp.speed = scc::speed;
		temp.stamina = scc::stamina;
		temp.power = scc::power;
		temp.willp = scc::willp;
		temp.wit = scc::wit;
		temp.sp = scc::sp;
		temp.v3g1ept = scc::v3g1ept;
		temp.v2ept = scc::v2ept;
		return 0;
	}
	catch (std::exception& e)
	{
		return 1;
	}

}

bool scc::EvalV3G2()
{
	//将int转换为float
	float a = (1 + 0.01 * scc::fs);
	float b = (1 + 0.01 * scc::sfs);
	float fsrate = a * b;
	float drrate = 1 + 0.002 * scc::dr;
	float trrate = 1 + 0.01 * scc::tr;
	//end

	//得意率计算
	float c = (100 + scc::gatr);
	float d = (550 + scc::gatr);
	float gat = c / d;
	float e = (550 + scc::gatr);
	float ngat = 100 / e;
	float f = (550 + scc::gatr);
	float eht = 50 / f;
	//end

	//计算失效率
	float x = (80 - scc::trap) / 5;
	if (x != int(x))
		if (x > int(x))
			x = 1 + int(x);
		else
			x = int(x);
	//Todo :向上取整
	//end
	float fht = x / 72;//失效率
	//end

	//与回合相关的计算
	//实际训练回合
	int actualround = 10000 - 10000 * eht;
	//失效回
	int failround = actualround * fht;
	//友情训练趋势回合
	int trendround = actualround - failround;
	//end

	//杂项
	//不含友情加成的训练倍率
	float anfsrate = drrate * trrate;
	//包含友情‘s
	float afsrate = fsrate * drrate * trrate;
	//失效回
	int ngfailround = failround * ngat;
	int gfailround = failround * gat;
	//趋势回
	int ngtrendround = trendround * ngat;
	int gtrendround = trendround * gat;
	//end
	
	//v3g2mainept
	if (type == 1)
		scc::v3g2mainept = (afsrate + 0.1 * anfsrate * scc::speed) * gfailround + (afsrate + 0.1 * afsrate * scc::speed) * gtrendround - gfailround - gtrendround;
	else if (type == 2)
		scc::v3g2mainept = (afsrate + 0.1 * anfsrate * scc::stamina) * gfailround + (afsrate + 0.1 * afsrate * scc::stamina) * gtrendround - gfailround - gtrendround;
	else if (type == 3)
		scc::v3g2mainept = (afsrate + 0.1 * anfsrate * scc::power) * gfailround + (afsrate + 0.1 * afsrate * scc::power) * gtrendround - gfailround - gtrendround;
	else if (type == 4)
		scc::v3g2mainept = (afsrate + 0.1 * anfsrate * scc::willp) * gfailround + (afsrate + 0.1 * afsrate * scc::willp) * gtrendround - gfailround - gtrendround;
	else if (type == 5)
		scc::v3g2mainept = (afsrate + 0.1 * anfsrate * scc::wit) * gfailround + (afsrate + 0.1 * afsrate * scc::wit) * gtrendround - gfailround - gtrendround;
	//v3g2foldept
	if (type == 1)
		scc::v3g2foldept = (ngfailround + ngtrendround) * (4 * anfsrate + 0.1 * anfsrate * (scc::stamina + scc::power + scc::willp + scc::wit)) - 4 * (ngfailround + ngtrendround);
	else if (type == 2)
		scc::v3g2foldept = (ngfailround + ngtrendround) * (4 * anfsrate + 0.1 * anfsrate * (scc::speed + scc::power + scc::willp + scc::wit)) - 4 * (ngfailround + ngtrendround);
	else if (type == 3)
		scc::v3g2foldept = (ngfailround + ngtrendround) * (4 * anfsrate + 0.1 * anfsrate * (scc::speed + scc::stamina + scc::willp + scc::wit)) - 4 * (ngfailround + ngtrendround);
	else if (type == 4)
		scc::v3g2foldept = (ngfailround + ngtrendround) * (4 * anfsrate + 0.1 * anfsrate * (scc::speed + scc::stamina + scc::power + scc::wit)) - 4 * (ngfailround + ngtrendround);
	else if (type == 5)
		scc::v3g2foldept = (ngfailround + ngtrendround) * (4 * anfsrate + 0.1 * anfsrate * (scc::speed + scc::stamina + scc::willp + scc::power)) - 4 * (ngfailround + ngtrendround);
	//v3g2spept
	scc::v3g2spept = gfailround * (afsrate + afsrate * 0.1 * scc::sp) + (actualround - gfailround) * (anfsrate + anfsrate * 0.1 * scc::sp) - actualround;
	return 0;
}

bool scc::EvalV3G1()
{
	//将int转换为float
	float a = (1 + 0.01 * scc::fs);
	float b = (1 + 0.01 * scc::sfs);
	float fsrate = a * b;
	float drrate = 1 + 0.002 * scc::dr;
	float trrate = 1 + 0.01 * scc::tr;
	//end

	//得意率计算
	float c = (100 + scc::gatr);
	float d = (550 + scc::gatr);
	float gat = c / d;
	float e = (550 + scc::gatr);
	float ngat = 100 / e;
	float f = (550 + scc::gatr);
	float eht = 50 / f;
	//end

	//杂项
	//不含友情加成的训练倍率
	float anfsrate = drrate * trrate;
	//包含友情‘s
	float afsrate = fsrate * drrate * trrate;

	if (type == 1)
		scc::v3g1ept = ((((anfsrate + anfsrate * 0.1 * scc::speed) * (ngat * 4) + (afsrate + afsrate * 0.1 * scc::speed) * gat) - 0.909) * 10000);
	else if (type == 2)
		scc::v3g1ept = ((((anfsrate + anfsrate * 0.1 * scc::stamina) * (ngat * 4) + (afsrate + afsrate * 0.1 * scc::stamina) * gat) - 0.909) * 10000);
	else if (type == 3)
		scc::v3g1ept = ((((anfsrate + anfsrate * 0.1 * scc::power) * (ngat * 4) + (afsrate + afsrate * 0.1 * scc::power) * gat) - 0.909) * 10000);
	else if (type == 4)
		scc::v3g1ept = ((((anfsrate + anfsrate * 0.1 * scc::willp) * (ngat * 4) + (afsrate + afsrate * 0.1 * scc::willp) * gat) - 0.909) * 10000);
	else if (type == 5)
		scc::v3g1ept = ((((anfsrate + anfsrate * 0.1 * scc::wit) * (ngat * 4) + (afsrate + afsrate * 0.1 * scc::wit) * gat) - 0.909) * 10000);
	return 0;
}

bool scc::EvalV2()
{
	double a = 1 + 0.01 * scc::fs;
	double b = 1 + 0.01 * scc::sfs;
	double ab = a * b;
	double c= 1 + 0.01 * scc::dr;
	double d= 1 + 0.01 * scc::tr;

	double e = ab * c * d;
	double f = 0.01 * ab * c * d ;

	if (type == 1)
	{
		return e + f * scc::speed;
	}
	if (type == 2)
	{
		return e + f * scc::stamina;
	}
	if (type == 3)
	{
		return e + f * scc::power;
	}
	if (type == 4)
	{
		return e + f * scc::willp;
	}
	if (type == 5)
	{
		return e + f * scc::wit;
	}
	else
	{
		return 1;
	}
	
} 

bool scc::EvalDiG1()
{
	//new
	scc temp{};
	try
	{
		scc::EvalV3G2();
	}
	catch (std::exception& e)
	{
		return 1;
	}
	int afs = ((fs * 0.01 + 1) * (sfs * 0.01 + 1) - 1) * 100;
	int arrv[5]{ afs,dr,tr,gatr,trap };
	for (int i = 0; i < 5; i++)
	{
		di.r[i] = cos(arrv[i] * 0.5 * sqrt(di.abex[i] * di.abex[i] * di.p[i] * 0.01));
		temp.type = type;
		temp.fs = afs*di.r[0];
		temp.dr = dr;
		temp.tr = tr;
		temp.gatr = gatr;
		temp.trap = trap;
		temp.speed = speed;
		temp.stamina = stamina;
		temp.power = power;
		temp.willp = willp;
		temp.wit = wit;
		temp.sp = sp;
		temp.EvalV3G2();
		v3g2mainept -= temp.v3g2mainept;
		v3g2spept -= temp.v3g2spept;
		v3g2foldept -= temp.v3g2foldept;
	}
	return 0;
}

bool scc::EvalV4G1(bool iswillp, bool isReport, int dozen)
{
	if (isReport) cout << "\nCreating SupportCards......";
	scc card[6]{};
	if (isReport) cout << "Done!";
	if (isReport) cout << "\nHanging out value......";
	scc::Copy(card[0]);
	card[0].type = scc::type;
	//card[0].type = 1;
	//cout << card[0].type;
	//cin.get();
	if (card[0].type == 4)
	{
		iswillp = 1;
	}
	if (iswillp)
	{
		switch (card[0].type)
		{
		case 1:card[1].type = 1; card[2].type = 3; card[3].type = 4; card[4].type = 5; card[5].type = 5; break;
		case 2:card[1].type = 1; card[2].type = 1; card[3].type = 4; card[4].type = 5; card[5].type = 5; break;
		case 3:card[1].type = 1; card[2].type = 1; card[3].type = 4; card[4].type = 5; card[5].type = 5; break;
		case 4:card[1].type = 1; card[2].type = 1; card[3].type = 3; card[4].type = 5; card[5].type = 5; break;
		case 5:card[1].type = 1; card[2].type = 1; card[3].type = 4; card[4].type = 3; card[5].type = 5; break;
		}
	}
	else
	{
		switch (card[0].type)
		{
		case 1:card[1].type = 1; card[2].type = 3; card[3].type = 2; card[4].type = 5; card[5].type = 5; break;
		case 2:card[1].type = 1; card[2].type = 1; card[3].type = 3; card[4].type = 5; card[5].type = 5; break;
		case 3:card[1].type = 1; card[2].type = 1; card[3].type = 2; card[4].type = 5; card[5].type = 5; break;
		case 4:card[1].type = 1; card[2].type = 1; card[3].type = 3; card[4].type = 5; card[5].type = 5; break;
		case 5:card[1].type = 1; card[2].type = 1; card[3].type = 2; card[4].type = 3; card[5].type = 5; break;
		}
	}
	cout << card[1].type;
	cin.get();
	if (isReport) cout << "\nFormating setting......";
	int round = 1;
	bool isjunior = 0;
	bool ismedial = 1;
	int nval[6]{ 0 };
	int oval[5]{ 800,500,500,500,600 };
	for (int i = 1; i < 6; i++)
	{
		card[i].fs = 25;
		card[i].dr = 30;
		card[i].tr = 10;
		card[i].gatr = 50;
		card[i].trap = 20;
		card[i].sp = 1;
		card[i].nowpos = 6;
		card[i].sfs = 0;
	}
	struct positioninfo
	{
		int clickpt;
		int pospt;
		int insdr;
		int instr;
		float insfsrate;
		int insnum;
		int insbonus;
		int scale;
		int lscale;
		int click;
	};
	positioninfo posinfo[6]{ 0 };
	for (int i = 0; i < 6; i++)
	{
		posinfo[i].insfsrate = 1;
		posinfo[i].lscale = 6;
		posinfo[i].scale = 10;
		if (i == 3)
		{
			posinfo[i].lscale = 3;
		}
	}
	posinfo[5].lscale = 3;
	posinfo[5].insbonus = 0;
	float c114 = (100 + scc::gatr);
	float d114 = (550 + scc::gatr);
	float gat = c114 / d114;
	float e114 = (550 + scc::gatr);
	float ngat = 100 / e114;
	const int mgatp = gat * 10000;
	const int mngatp = mgatp + ngat * 40000;
	const int gatp = 2500;
	const int ngatp = 9166;
	if (isReport) cout << "\nGeting seed......";
	int seed = time(NULL);
	srand(seed);
	for (int asdfghjkl = 0; asdfghjkl < dozen; asdfghjkl++)
	{
		if (isReport) cout << "\nEvaluating V4G1......" << asdfghjkl << " / " << dozen << " ......";
		while (round < 73)
		{
			if (isReport) cout << "\n  Round......" << round << " / " << "72";
			seed += asdfghjkl;
			srand(seed + rand() % seed);
			if (isReport) cout << "\n    Hanging out stage......";
			for (int i = 1; i < 6; i++)
			{
				int num = rand() % 999 + 1;
				if (num < gatp + 1)
				{
					card[i].nowpos = card[i].type - 1;
				}
				else if (num > gatp + 1 && num < ngatp + 1)
				{
					num = rand() % 4;
					//num?
					switch (card[i].type)
					{
					case 1:
					{
						switch (num)
						{
						case 0:card[i].nowpos = 1; break;
						case 1:card[i].nowpos = 2; break;
						case 2:card[i].nowpos = 3; break;
						case 3:card[i].nowpos = 4; break;
						}
						break;
					}
					case 2:
					{
						switch (num)
						{
						case 0:card[i].nowpos = 1; break;
						case 1:card[i].nowpos = 1; break;
						case 2:card[i].nowpos = 3; break;
						case 3:card[i].nowpos = 4; break;
						}
						break;
					}
					case 3:
					{
						switch (num)
						{
						case 0:card[i].nowpos = 1; break;
						case 1:card[i].nowpos = 1; break;
						case 2:card[i].nowpos = 2; break;
						case 3:card[i].nowpos = 4; break;
						}
						break;
					}
					//num?
					}
				}
				else if(num>ngatp+1)
				{
					card[i].nowpos = 5;
				}
				num = rand() % 999 + 1;
				if (num < mgatp + 1)
				{
					card[0].nowpos = card[0].type - 1;
				}
				else if (num > mgatp + 1 && num < mngatp + 1)
				{
					num = rand() % 4;
					//num?
					switch (card[0].type)//次分配
					{
					case 1://speed
					{
						switch (num)
						{
						case 0:card[0].nowpos = 1; break;
						case 1:card[0].nowpos = 2; break;
						case 2:card[0].nowpos = 3; break;
						case 3:card[0].nowpos = 4; break;
						}
					}
					case 2:
					{
						switch (num)
						{
						case 0:card[0].nowpos = 0; break;
						case 1:card[0].nowpos = 2; break;
						case 2:card[0].nowpos = 3; break;
						case 3:card[0].nowpos = 4; break;
						}
					}
					case 3:
					{
						switch (num)
						{
						case 0:card[0].nowpos = 0; break;
						case 1:card[0].nowpos = 1; break;
						case 2:card[0].nowpos = 3; break;
						case 3:card[0].nowpos = 4; break;
						}
					}
					case 4:
					{
						switch (num)
						{
						case 0:card[0].nowpos = 0; break;
						case 1:card[0].nowpos = 1; break;
						case 2:card[0].nowpos = 2; break;
						case 3:card[0].nowpos = 4; break;
						}
					}
					case 5:
					{
						switch (num)
						{
						case 0:card[0].nowpos = 0; break;
						case 1:card[0].nowpos = 1; break;
						case 2:card[0].nowpos = 2; break;
						case 3:card[0].nowpos = 3; break;
						}
					}
					}
				}
				else if (num > mngatp + 1)
				{
					card[0].nowpos = 5;
				}
			}//for ending
			if (isReport) cout << "\n    Hanging out information......";
			for (int i = 0; i < 5; i++)
			{
				for (int m = 0; m < 6; m++)
				{
					if (card[m].nowpos == i)
					{
						if (card[m].nowtrap > 79)
						{
							posinfo[i].insfsrate *= (card[m].fs * 0.01 + 1) * (card[m].sfs * 0.01 + 1);
						}
						posinfo[i].insdr += card[m].dr;
						posinfo[i].instr += card[m].tr;
						posinfo[m].insnum++;
						if (m == 0 && card[0].nowpos == i)
						{
							switch (i)
							{
							case 0:posinfo[0].insbonus = card[0].speed; break;
							case 1:posinfo[0].insbonus = card[0].stamina; break;
							case 2:posinfo[0].insbonus = card[0].power; break;
							case 3:posinfo[0].insbonus = card[0].willp; break;
							case 4:posinfo[0].insbonus = card[0].wit; break;
							}
						}
					}
				}
			}
			if (isReport) cout << "\n    Calculating clickpt......";
			for (int i = 0; i < 5; i++)
			{
				posinfo[i].pospt = (posinfo[i].scale + posinfo[i].insbonus) * posinfo[i].insfsrate * (posinfo[i].insdr * 0.002 + 1) * (posinfo[i].instr * 0.01 + 1) * (posinfo[i].insnum * 0.05 + 1);
			}
			if (isjunior)
			{
				for (int i = 0; i < 6; i++)
				{
					if (card[i].nowtrap < 80)
					{
						posinfo[card[i].nowpos].clickpt += 2;
					}
					else
					{
						posinfo[card[i].nowpos].clickpt += 1;
					}
				}
			}
			else if(ismedial)
			{
				for (int i = 0; i < 5; i++)
				{
					t[i].tpt = posinfo[i].pospt;
					t[i].index = i;
				}
				int temppt = t[0].tpt;
				for (int m = 0; m < 4; m++)
				{
					for (int i = 0; i < 4; i++)
					{
						if(temppt>t[i+1].tpt)
						{
							ex(t[i].tpt, t[i + 1].tpt);
							ex(t[i].index, t[i + 1].index);
							temppt = t[i + 1].tpt;
						}
					}
					temppt = t[0].tpt;
				}
				for (int i = 0; i < 5; i++)
				{
					posinfo[t[i].index].clickpt += i;
				}
				for (int i = 0; i < 5; i++)
				{
					oval[i] -= nval[i];
					t[i].tpt = oval[i];
					t[i].index = i;
				}
				temppt = t[0].tpt;
				for (int m = 0; m < 4; m++)
				{
					for (int i = 0; i < 4; i++)
					{
						if (temppt > t[i + 1].tpt)
						{
							ex(t[i].tpt, t[i + 1].tpt);
							ex(t[i].index, t[i + 1].index);
							temppt = t[i + 1].tpt;
						}
					}
					temppt = t[0].tpt;
				}
				for (int i = 0; i < 5; i++)
				{
					posinfo[t[i].index].clickpt += i;
				}


			}//ismedial ending;
			else
			{
				struct tempposinfo
				{
					int tpt;
					int index;
				}t[5]{0};
				for (int i=0;i<5;i++)
				{
					t[i].tpt=posinfo[i].pospt;
					t[i].index=i;
				}
				int temppt = t[0].tpt;
				for(int m=0;m<5;m++)
				{
					for(int i=0;i<4;i++)
					{
						if (temppt>t[i+1].tpt)
						{
							ex(t[i].tpt,t[i+1].tpt);
							ex(t[i].index,t[i+1].index);
							temppt = t[i+1].tpt;
						}
					}
					temppt = t[0].tpt;
				}
				for (int i=0;i<5;i++)
				{
					posinfo[t[i].index].click += i;
				}
			}
		//模拟点击
		if (isReport) cout << "\n    Clickdown......";
		int num =0;
		int temppt =posinfo[0].clickpt;
		for (int i=0;i<5;i++)
		{
			if (temppt<posinfo[i+1].clickpt)
			{
				num = i+1;
				temppt = posinfo[i+1].clickpt;
			}
		}//以上代码确认了点击哪一个场地，以下的代码决定副训练的属性分以及sp的属性分
		nval[num] += posinfo[num].pospt;
		int z =posinfo[num].insfsrate * (posinfo[num].insdr * 0.002 + 1) * (posinfo[num].instr * 0.01 + 1) * (posinfo[num].insnum * 0.05 + 1);
		if (card[0].nowpos == num)
		{
			switch (num)
			{
			case 0:nval[2] += (posinfo[num].lscale + card[0].power) * z; break;
			case 1:nval[3] += (posinfo[num].lscale + card[0].willp) * z; break;
			case 2:nval[1] += (posinfo[num].lscale + card[0].stamina) * z; break;
			case 3:nval[0] += (posinfo[num].lscale + card[0].speed) * z; nval[2] += (posinfo[num].lscale + card[0].power) * z; break;
			case 4:nval[2] += (posinfo[num].lscale + card[0].wit) * z; break;
			}
		}
		for (int i = 0; i < 6; i++)
		{
			if (card[i].nowpos == num)
			{
				posinfo[5].insbonus += card[i].sp;
			}
		}
		if (num == 4)
		{
			nval[5] += (posinfo[5].scale + posinfo[5].insbonus) * z;
		}
		else
		{
			nval[5] += (posinfo[5].lscale + posinfo[5].insbonus) * z;
		}
		for (int i = 0; i < 6; i++)
		{
			if (card[i].nowpos == num)
			{
				card[i].nowtrap += 5;
			}
		}
		posinfo[num].click++;
		//收尾工作
		//复位S卡与训练场
		if (isReport) cout << "\n    Formating stage......";
		for (int i = 0; i < 6; i++)
		{
			posinfo[i].clickpt = 0;
			posinfo[i].pospt = 0;
			posinfo[i].insdr = 0;
			posinfo[i].instr = 0;
			posinfo[i].insbonus = 0;
			posinfo[i].insfsrate = 0;
			posinfo[i].insnum = 0;
		}
		for (int i = 0; i < 6; i++)
		{
			card[i].nowpos = 5;
		}
		oval[0] = 800;
		oval[0] = 500;
		oval[0] = 500;
		oval[0] = 500;
		oval[0] = 600;
		//判断训练场升级
		if (isReport) cout << "\n    Checking upgrade......";
		for (int i = 0; i < 6; i++)
		{
			if (posinfo[i].click = 5)
			{
				posinfo[i].scale++;
				posinfo[i].lscale++;
			}
			if (posinfo[i].click = 10)
			{
				posinfo[i].scale++;
				posinfo[i].lscale++;
			}
			if (posinfo[i].click = 15)
			{
				posinfo[i].scale++;
				posinfo[i].lscale++;
			}
			if (posinfo[i].click = 20)
			{
				posinfo[i].scale++;
				posinfo[i].lscale++;
			}
		}
		//阶段判断
		if (isReport) cout << "\n    Tiding lastly......";
		num = 0;
		for (int i = 0; i < 6;i++)
		{
			if (card[i].nowtrap > 79)
			{
				num++;
			}
		}
		if (num > 4 || round < 50)
		{
			isjunior = false;
			ismedial = true;
		}
		num = 0;
		if (nval[0] > 799)
		{
			num++;
		}
		if (!iswillp&&nval[1] > 499)
		{
			num++;
		}
		if (nval[2] > 499)
		{
			num++;
		}
		if (iswillp&&nval[3] > 499)
		{
			num++;
		}
		if (nval[4] > 599)
		{
			num++;
		}
		if (num > 3)
		{
			ismedial = false;
		}
		round++;
		}//while ending
		//育成结束。收集数据
		round = 1;
		if (isReport) cout << "\n  Collecting data......";
		//cout << card[2].type;
		//cout << card[0].speed;
		//cout << scc::type;
		switch (card[0].type)
		{
		case 1:
		{
			v4g1.mainept[0] = nval[0];
			v4g1.foldept[0] = nval[1] + nval[2] + nval[3] + nval[4];
			//cout << v4g1.foldept;
		}
		case 2:
		{
			v4g1.mainept[0] = nval[1];
			v4g1.foldept[0] = nval[0] + nval[2] + nval[3] + nval[4];
		}
		case 3:
		{
			v4g1.mainept[0] = nval[2];
			v4g1.foldept[0] = nval[0] + nval[1] + nval[3] + nval[4];
		}
		case 4:
		{
			v4g1.mainept[0] = nval[3];
			v4g1.foldept[0] = nval[0] + nval[1] + nval[2] + nval[4];
		}
		case 5:
		{
			v4g1.mainept[0] = nval[4];
			v4g1.foldept[0] = nval[0] + nval[1] + nval[2] + nval[3];
		}
		}
		for (int i = 0; i < 5; i++)
		{
			v4g1.click[i] += posinfo[i].click;
		}
		v4g1.spept[0] = nval[5];
		if (isReport) cout << "\n  Analysing data......";
		v4g1.mainept[1] = (v4g1.mainept[0] + v4g1.mainept[1]) * 0.5;
		v4g1.foldept[1] = (v4g1.foldept[0] + (v4g1.foldept[1]*0.25)) * 0.5;
		v4g1.spept[1] = (v4g1.spept[0] + v4g1.spept[1]) * 0.5;
	}
	for (int i = 0; i < 5; i++)
	{
		v4g1.click[i] /= dozen;
	}
	v4g1mainept = v4g1.mainept[0];
	v4g1foldept = v4g1.foldept[0];
	v4g1spept = v4g1.spept[0];
	if (isReport) cout << "\nEvaluating V4G1......Done!";
	return 0;
}

#endif

