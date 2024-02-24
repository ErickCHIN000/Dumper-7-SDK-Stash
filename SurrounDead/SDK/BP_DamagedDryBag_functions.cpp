#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamagedDryBag.BP_DamagedDryBag_C
// (Actor)

class UClass* ABP_DamagedDryBag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamagedDryBag_C");

	return Clss;
}


// BP_DamagedDryBag_C BP_DamagedDryBag.Default__BP_DamagedDryBag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DamagedDryBag_C* ABP_DamagedDryBag_C::GetDefaultObj()
{
	static class ABP_DamagedDryBag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DamagedDryBag_C*>(ABP_DamagedDryBag_C::StaticClass()->DefaultObject);

	return Default;
}

}


