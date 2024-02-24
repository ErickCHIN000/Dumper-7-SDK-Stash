#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_KeycardBriefcase.BP_KeycardBriefcase_C
// (Actor)

class UClass* ABP_KeycardBriefcase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_KeycardBriefcase_C");

	return Clss;
}


// BP_KeycardBriefcase_C BP_KeycardBriefcase.Default__BP_KeycardBriefcase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_KeycardBriefcase_C* ABP_KeycardBriefcase_C::GetDefaultObj()
{
	static class ABP_KeycardBriefcase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_KeycardBriefcase_C*>(ABP_KeycardBriefcase_C::StaticClass()->DefaultObject);

	return Default;
}

}


