#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Fist_01_A_Miss.Action_Fist_01_A_Miss_C
// (None)

class UClass* UAction_Fist_01_A_Miss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Fist_01_A_Miss_C");

	return Clss;
}


// Action_Fist_01_A_Miss_C Action_Fist_01_A_Miss.Default__Action_Fist_01_A_Miss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Fist_01_A_Miss_C* UAction_Fist_01_A_Miss_C::GetDefaultObj()
{
	static class UAction_Fist_01_A_Miss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Fist_01_A_Miss_C*>(UAction_Fist_01_A_Miss_C::StaticClass()->DefaultObject);

	return Default;
}

}


