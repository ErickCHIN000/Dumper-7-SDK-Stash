#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_SG_JAK_Fire_LeverAction.Action_SG_JAK_Fire_LeverAction_C
// (None)

class UClass* UAction_SG_JAK_Fire_LeverAction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_SG_JAK_Fire_LeverAction_C");

	return Clss;
}


// Action_SG_JAK_Fire_LeverAction_C Action_SG_JAK_Fire_LeverAction.Default__Action_SG_JAK_Fire_LeverAction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_SG_JAK_Fire_LeverAction_C* UAction_SG_JAK_Fire_LeverAction_C::GetDefaultObj()
{
	static class UAction_SG_JAK_Fire_LeverAction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_SG_JAK_Fire_LeverAction_C*>(UAction_SG_JAK_Fire_LeverAction_C::StaticClass()->DefaultObject);

	return Default;
}

}


