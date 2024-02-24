#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TemperatureVolume_Fire.TemperatureVolume_Fire_C
// (Actor)

class UClass* ATemperatureVolume_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TemperatureVolume_Fire_C");

	return Clss;
}


// TemperatureVolume_Fire_C TemperatureVolume_Fire.Default__TemperatureVolume_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATemperatureVolume_Fire_C* ATemperatureVolume_Fire_C::GetDefaultObj()
{
	static class ATemperatureVolume_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATemperatureVolume_Fire_C*>(ATemperatureVolume_Fire_C::StaticClass()->DefaultObject);

	return Default;
}

}


