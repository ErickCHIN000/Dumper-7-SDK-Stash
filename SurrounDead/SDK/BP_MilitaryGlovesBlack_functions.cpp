#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MilitaryGlovesBlack.BP_MilitaryGlovesBlack_C
// (Actor)

class UClass* ABP_MilitaryGlovesBlack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MilitaryGlovesBlack_C");

	return Clss;
}


// BP_MilitaryGlovesBlack_C BP_MilitaryGlovesBlack.Default__BP_MilitaryGlovesBlack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MilitaryGlovesBlack_C* ABP_MilitaryGlovesBlack_C::GetDefaultObj()
{
	static class ABP_MilitaryGlovesBlack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MilitaryGlovesBlack_C*>(ABP_MilitaryGlovesBlack_C::StaticClass()->DefaultObject);

	return Default;
}

}


