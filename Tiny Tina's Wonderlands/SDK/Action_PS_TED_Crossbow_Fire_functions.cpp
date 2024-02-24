#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_PS_TED_Crossbow_Fire.Action_PS_TED_Crossbow_Fire_C
// (None)

class UClass* UAction_PS_TED_Crossbow_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_PS_TED_Crossbow_Fire_C");

	return Clss;
}


// Action_PS_TED_Crossbow_Fire_C Action_PS_TED_Crossbow_Fire.Default__Action_PS_TED_Crossbow_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_PS_TED_Crossbow_Fire_C* UAction_PS_TED_Crossbow_Fire_C::GetDefaultObj()
{
	static class UAction_PS_TED_Crossbow_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_PS_TED_Crossbow_Fire_C*>(UAction_PS_TED_Crossbow_Fire_C::StaticClass()->DefaultObject);

	return Default;
}

}


