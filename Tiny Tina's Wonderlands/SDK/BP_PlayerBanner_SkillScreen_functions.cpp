#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerBanner_SkillScreen.BP_PlayerBanner_SkillScreen_C
// (Actor)

class UClass* ABP_PlayerBanner_SkillScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerBanner_SkillScreen_C");

	return Clss;
}


// BP_PlayerBanner_SkillScreen_C BP_PlayerBanner_SkillScreen.Default__BP_PlayerBanner_SkillScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PlayerBanner_SkillScreen_C* ABP_PlayerBanner_SkillScreen_C::GetDefaultObj()
{
	static class ABP_PlayerBanner_SkillScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PlayerBanner_SkillScreen_C*>(ABP_PlayerBanner_SkillScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PlayerBanner_SkillScreen.BP_PlayerBanner_SkillScreen_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerBanner_SkillScreen_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerBanner_SkillScreen_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


