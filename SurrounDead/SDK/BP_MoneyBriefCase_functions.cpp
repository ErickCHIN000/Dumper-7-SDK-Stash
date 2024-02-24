#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MoneyBriefCase.BP_MoneyBriefCase_C
// (Actor)

class UClass* ABP_MoneyBriefCase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MoneyBriefCase_C");

	return Clss;
}


// BP_MoneyBriefCase_C BP_MoneyBriefCase.Default__BP_MoneyBriefCase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MoneyBriefCase_C* ABP_MoneyBriefCase_C::GetDefaultObj()
{
	static class ABP_MoneyBriefCase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MoneyBriefCase_C*>(ABP_MoneyBriefCase_C::StaticClass()->DefaultObject);

	return Default;
}

}


