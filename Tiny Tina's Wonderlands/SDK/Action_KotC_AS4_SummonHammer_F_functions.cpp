#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_KotC_AS4_SummonHammer_F.Action_KotC_AS4_SummonHammer_F_C
// (None)

class UClass* UAction_KotC_AS4_SummonHammer_F_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_KotC_AS4_SummonHammer_F_C");

	return Clss;
}


// Action_KotC_AS4_SummonHammer_F_C Action_KotC_AS4_SummonHammer_F.Default__Action_KotC_AS4_SummonHammer_F_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_KotC_AS4_SummonHammer_F_C* UAction_KotC_AS4_SummonHammer_F_C::GetDefaultObj()
{
	static class UAction_KotC_AS4_SummonHammer_F_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_KotC_AS4_SummonHammer_F_C*>(UAction_KotC_AS4_SummonHammer_F_C::StaticClass()->DefaultObject);

	return Default;
}

}


