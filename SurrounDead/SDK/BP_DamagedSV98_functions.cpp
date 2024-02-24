#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamagedSV98.BP_DamagedSV98_C
// (Actor)

class UClass* ABP_DamagedSV98_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamagedSV98_C");

	return Clss;
}


// BP_DamagedSV98_C BP_DamagedSV98.Default__BP_DamagedSV98_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DamagedSV98_C* ABP_DamagedSV98_C::GetDefaultObj()
{
	static class ABP_DamagedSV98_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DamagedSV98_C*>(ABP_DamagedSV98_C::StaticClass()->DefaultObject);

	return Default;
}

}


