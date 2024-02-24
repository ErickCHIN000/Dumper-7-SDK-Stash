#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ColonelsRevengeAcog.BP_ColonelsRevengeAcog_C
// (Actor)

class UClass* ABP_ColonelsRevengeAcog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ColonelsRevengeAcog_C");

	return Clss;
}


// BP_ColonelsRevengeAcog_C BP_ColonelsRevengeAcog.Default__BP_ColonelsRevengeAcog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ColonelsRevengeAcog_C* ABP_ColonelsRevengeAcog_C::GetDefaultObj()
{
	static class ABP_ColonelsRevengeAcog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ColonelsRevengeAcog_C*>(ABP_ColonelsRevengeAcog_C::StaticClass()->DefaultObject);

	return Default;
}

}


