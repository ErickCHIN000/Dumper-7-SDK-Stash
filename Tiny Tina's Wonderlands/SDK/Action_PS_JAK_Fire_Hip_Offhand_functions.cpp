#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_PS_JAK_Fire_Hip_Offhand.Action_PS_JAK_Fire_Hip_Offhand_C
// (None)

class UClass* UAction_PS_JAK_Fire_Hip_Offhand_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_PS_JAK_Fire_Hip_Offhand_C");

	return Clss;
}


// Action_PS_JAK_Fire_Hip_Offhand_C Action_PS_JAK_Fire_Hip_Offhand.Default__Action_PS_JAK_Fire_Hip_Offhand_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_PS_JAK_Fire_Hip_Offhand_C* UAction_PS_JAK_Fire_Hip_Offhand_C::GetDefaultObj()
{
	static class UAction_PS_JAK_Fire_Hip_Offhand_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_PS_JAK_Fire_Hip_Offhand_C*>(UAction_PS_JAK_Fire_Hip_Offhand_C::StaticClass()->DefaultObject);

	return Default;
}

}


