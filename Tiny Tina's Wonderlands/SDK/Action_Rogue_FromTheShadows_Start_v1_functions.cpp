#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Rogue_FromTheShadows_Start_v1.Action_Rogue_FromTheShadows_Start_v1_C
// (None)

class UClass* UAction_Rogue_FromTheShadows_Start_v1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Rogue_FromTheShadows_Start_v1_C");

	return Clss;
}


// Action_Rogue_FromTheShadows_Start_v1_C Action_Rogue_FromTheShadows_Start_v1.Default__Action_Rogue_FromTheShadows_Start_v1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Rogue_FromTheShadows_Start_v1_C* UAction_Rogue_FromTheShadows_Start_v1_C::GetDefaultObj()
{
	static class UAction_Rogue_FromTheShadows_Start_v1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Rogue_FromTheShadows_Start_v1_C*>(UAction_Rogue_FromTheShadows_Start_v1_C::StaticClass()->DefaultObject);

	return Default;
}

}


