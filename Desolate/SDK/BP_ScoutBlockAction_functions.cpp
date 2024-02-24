#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ScoutBlockAction.BP_ScoutBlockAction_C
// (None)

class UClass* UBP_ScoutBlockAction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ScoutBlockAction_C");

	return Clss;
}


// BP_ScoutBlockAction_C BP_ScoutBlockAction.Default__BP_ScoutBlockAction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ScoutBlockAction_C* UBP_ScoutBlockAction_C::GetDefaultObj()
{
	static class UBP_ScoutBlockAction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ScoutBlockAction_C*>(UBP_ScoutBlockAction_C::StaticClass()->DefaultObject);

	return Default;
}

}


