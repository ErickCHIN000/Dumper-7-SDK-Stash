#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_AR_JAK_Crossbow_Fire_Lever_Zoom.Action_AR_JAK_Crossbow_Fire_Lever_Zoom_C
// (None)

class UClass* UAction_AR_JAK_Crossbow_Fire_Lever_Zoom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_AR_JAK_Crossbow_Fire_Lever_Zoom_C");

	return Clss;
}


// Action_AR_JAK_Crossbow_Fire_Lever_Zoom_C Action_AR_JAK_Crossbow_Fire_Lever_Zoom.Default__Action_AR_JAK_Crossbow_Fire_Lever_Zoom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_AR_JAK_Crossbow_Fire_Lever_Zoom_C* UAction_AR_JAK_Crossbow_Fire_Lever_Zoom_C::GetDefaultObj()
{
	static class UAction_AR_JAK_Crossbow_Fire_Lever_Zoom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_AR_JAK_Crossbow_Fire_Lever_Zoom_C*>(UAction_AR_JAK_Crossbow_Fire_Lever_Zoom_C::StaticClass()->DefaultObject);

	return Default;
}

}


