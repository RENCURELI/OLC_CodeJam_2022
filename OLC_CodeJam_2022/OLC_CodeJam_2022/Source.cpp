#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"

class PGE : public olc::PixelGameEngine
{
public:
	PGE()
	{
		sAppName == "OLC_CodeJam_2022";
	}

	bool OnUserCreate() override
	{
		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override
	{
		
		return true;
	}
};

int main()
{
	PGE m_Engine;

	if (m_Engine.Construct(852, 480, 1, 1))
		m_Engine.Start();

	return 0;
}