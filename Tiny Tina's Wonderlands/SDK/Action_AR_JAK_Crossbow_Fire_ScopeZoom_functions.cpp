#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_AR_JAK_Crossbow_Fire_ScopeZoom.Action_AR_JAK_Crossbow_Fire_ScopeZoom_C
// (None)

class UClass* UAction_AR_JAK_Crossbow_Fire_ScopeZoom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_AR_JAK_Crossbow_Fire_ScopeZoom_C");

	return Clss;
}


// Action_AR_JAK_Crossbow_Fire_ScopeZoom_C Action_AR_JAK_Crossbow_Fire_ScopeZoom.Default__Action_AR_JAK_Crossbow_Fire_ScopeZoom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_AR_JAK_Crossbow_Fire_ScopeZoom_C* UAction_AR_JAK_Crossbow_Fire_ScopeZoom_C::GetDefaultObj()
{
	static class UAction_AR_JAK_Crossbow_Fire_ScopeZoom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_AR_JAK_Crossbow_Fire_ScopeZoom_C*>(UAction_AR_JAK_Crossbow_Fire_ScopeZoom_C::StaticClass()->DefaultObject);

	return Default;
}

}


