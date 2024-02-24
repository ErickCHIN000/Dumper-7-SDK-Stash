#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_SG_MAL_Fire_Zoomed.Action_SG_MAL_Fire_Zoomed_C
// (None)

class UClass* UAction_SG_MAL_Fire_Zoomed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_SG_MAL_Fire_Zoomed_C");

	return Clss;
}


// Action_SG_MAL_Fire_Zoomed_C Action_SG_MAL_Fire_Zoomed.Default__Action_SG_MAL_Fire_Zoomed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_SG_MAL_Fire_Zoomed_C* UAction_SG_MAL_Fire_Zoomed_C::GetDefaultObj()
{
	static class UAction_SG_MAL_Fire_Zoomed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_SG_MAL_Fire_Zoomed_C*>(UAction_SG_MAL_Fire_Zoomed_C::StaticClass()->DefaultObject);

	return Default;
}

}


