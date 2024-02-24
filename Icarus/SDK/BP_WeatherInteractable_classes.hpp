#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_WeatherInteractable.BP_WeatherInteractable_C
class IBP_WeatherInteractable_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_WeatherInteractable_C* GetDefaultObj();

	void Snow(float Intensity);
	void Rain(int32 Millilitres);
};

}


