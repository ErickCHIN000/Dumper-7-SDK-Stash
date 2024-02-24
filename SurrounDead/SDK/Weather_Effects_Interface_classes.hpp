#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Weather_Effects_Interface.Weather_Effects_Interface_C
class IWeather_Effects_Interface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IWeather_Effects_Interface_C* GetDefaultObj();

	void Force_Startup();
	void Reset_Emitters();
	void Editor_Update();
};

}


