#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MosinNagant.BP_MosinNagant_C
// (Actor)

class UClass* ABP_MosinNagant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MosinNagant_C");

	return Clss;
}


// BP_MosinNagant_C BP_MosinNagant.Default__BP_MosinNagant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MosinNagant_C* ABP_MosinNagant_C::GetDefaultObj()
{
	static class ABP_MosinNagant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MosinNagant_C*>(ABP_MosinNagant_C::StaticClass()->DefaultObject);

	return Default;
}

}


