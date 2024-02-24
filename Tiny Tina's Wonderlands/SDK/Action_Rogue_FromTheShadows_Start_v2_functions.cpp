#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Rogue_FromTheShadows_Start_v2.Action_Rogue_FromTheShadows_Start_v2_C
// (None)

class UClass* UAction_Rogue_FromTheShadows_Start_v2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Rogue_FromTheShadows_Start_v2_C");

	return Clss;
}


// Action_Rogue_FromTheShadows_Start_v2_C Action_Rogue_FromTheShadows_Start_v2.Default__Action_Rogue_FromTheShadows_Start_v2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Rogue_FromTheShadows_Start_v2_C* UAction_Rogue_FromTheShadows_Start_v2_C::GetDefaultObj()
{
	static class UAction_Rogue_FromTheShadows_Start_v2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Rogue_FromTheShadows_Start_v2_C*>(UAction_Rogue_FromTheShadows_Start_v2_C::StaticClass()->DefaultObject);

	return Default;
}

}


