#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CarBattery.BP_CarBattery_C
// (Actor)

class UClass* ABP_CarBattery_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CarBattery_C");

	return Clss;
}


// BP_CarBattery_C BP_CarBattery.Default__BP_CarBattery_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CarBattery_C* ABP_CarBattery_C::GetDefaultObj()
{
	static class ABP_CarBattery_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CarBattery_C*>(ABP_CarBattery_C::StaticClass()->DefaultObject);

	return Default;
}

}


