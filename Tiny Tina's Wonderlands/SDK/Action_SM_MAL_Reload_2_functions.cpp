#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_SM_MAL_Reload_2.Action_SM_MAL_Reload_2_C
// (None)

class UClass* UAction_SM_MAL_Reload_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_SM_MAL_Reload_2_C");

	return Clss;
}


// Action_SM_MAL_Reload_2_C Action_SM_MAL_Reload_2.Default__Action_SM_MAL_Reload_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_SM_MAL_Reload_2_C* UAction_SM_MAL_Reload_2_C::GetDefaultObj()
{
	static class UAction_SM_MAL_Reload_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_SM_MAL_Reload_2_C*>(UAction_SM_MAL_Reload_2_C::StaticClass()->DefaultObject);

	return Default;
}

}


