#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Battery.BP_Battery_C
// (Actor)

class UClass* ABP_Battery_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Battery_C");

	return Clss;
}


// BP_Battery_C BP_Battery.Default__BP_Battery_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Battery_C* ABP_Battery_C::GetDefaultObj()
{
	static class ABP_Battery_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Battery_C*>(ABP_Battery_C::StaticClass()->DefaultObject);

	return Default;
}

}


