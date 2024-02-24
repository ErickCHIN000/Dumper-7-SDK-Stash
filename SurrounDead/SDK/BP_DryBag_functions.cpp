#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DryBag.BP_DryBag_C
// (Actor)

class UClass* ABP_DryBag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DryBag_C");

	return Clss;
}


// BP_DryBag_C BP_DryBag.Default__BP_DryBag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DryBag_C* ABP_DryBag_C::GetDefaultObj()
{
	static class ABP_DryBag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DryBag_C*>(ABP_DryBag_C::StaticClass()->DefaultObject);

	return Default;
}

}


