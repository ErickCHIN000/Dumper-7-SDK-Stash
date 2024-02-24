#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_TED_Reload_Zeus_SG.Action_TED_Reload_Zeus_SG_C
// (None)

class UClass* UAction_TED_Reload_Zeus_SG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_TED_Reload_Zeus_SG_C");

	return Clss;
}


// Action_TED_Reload_Zeus_SG_C Action_TED_Reload_Zeus_SG.Default__Action_TED_Reload_Zeus_SG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_TED_Reload_Zeus_SG_C* UAction_TED_Reload_Zeus_SG_C::GetDefaultObj()
{
	static class UAction_TED_Reload_Zeus_SG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_TED_Reload_Zeus_SG_C*>(UAction_TED_Reload_Zeus_SG_C::StaticClass()->DefaultObject);

	return Default;
}

}


