#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_SM_MAL_ModeReturn.Action_SM_MAL_ModeReturn_C
// (None)

class UClass* UAction_SM_MAL_ModeReturn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_SM_MAL_ModeReturn_C");

	return Clss;
}


// Action_SM_MAL_ModeReturn_C Action_SM_MAL_ModeReturn.Default__Action_SM_MAL_ModeReturn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_SM_MAL_ModeReturn_C* UAction_SM_MAL_ModeReturn_C::GetDefaultObj()
{
	static class UAction_SM_MAL_ModeReturn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_SM_MAL_ModeReturn_C*>(UAction_SM_MAL_ModeReturn_C::StaticClass()->DefaultObject);

	return Default;
}

}


