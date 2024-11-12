//Core.h

#ifndef _UMACULCORE_
#define _UMACULCORE_

#include <string>
#include <iostream>

using namespace std;
using std::string;

class scc
{
protected:
	int type, fs, sfs, dr, tr, gatr, trap, speed, stamina, power, willp, wit, sp;
	int v3g2mainept, v3g2foldept, v3g2spept;
	double v3g1ept, v2ept;

	bool isdi;

public:
	bool Scan(int, int, int, int, int, int, int, int, int, int, int, int, int);
	bool Get(string);
	bool Clear(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, double, double);

	int Report(string);

	bool Copy(scc);
	bool Exchange(scc);

	bool EvalV3G2();
	bool EvalV3G1();
	bool EvalV2();
	bool EvalDiG1();
	bool EvalV4G1();

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
	scc::type = 0; scc::fs = 0; scc::sfs = 0; scc::dr = 0; scc::tr = 0; scc::gatr = 0; scc::trap = 0; scc::speed = 0; scc::stamina = 0; scc::power = 0; scc::willp = 0; scc::wit = 0; scc::sp = 0;
	scc::v3g2mainept = 0; scc::v3g2foldept = 0; scc::v3g2spept = 0;
	scc::v3g1ept = 0;
	scc::v2ept = 0;
	return 0;
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

	}
	catch (std::exception& e)
	{
		return 1;
	}
}

bool scc::Copy(scc opt)
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



#endif

