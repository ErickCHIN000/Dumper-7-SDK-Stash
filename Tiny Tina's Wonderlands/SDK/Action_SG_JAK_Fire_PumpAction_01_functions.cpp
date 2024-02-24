#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_SG_JAK_Fire_PumpAction_01.Action_SG_JAK_Fire_PumpAction_01_C
// (None)

class UClass* UAction_SG_JAK_Fire_PumpAction_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_SG_JAK_Fire_PumpAction_01_C");

	return Clss;
}


// Action_SG_JAK_Fire_PumpAction_01_C Action_SG_JAK_Fire_PumpAction_01.Default__Action_SG_JAK_Fire_PumpAction_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_SG_JAK_Fire_PumpAction_01_C* UAction_SG_JAK_Fire_PumpAction_01_C::GetDefaultObj()
{
	static class UAction_SG_JAK_Fire_PumpAction_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_SG_JAK_Fire_PumpAction_01_C*>(UAction_SG_JAK_Fire_PumpAction_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


