#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Shaman_02_Start_1.Action_Shaman_02_Start_1_C
// (None)

class UClass* UAction_Shaman_02_Start_1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Shaman_02_Start_1_C");

	return Clss;
}


// Action_Shaman_02_Start_1_C Action_Shaman_02_Start_1.Default__Action_Shaman_02_Start_1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Shaman_02_Start_1_C* UAction_Shaman_02_Start_1_C::GetDefaultObj()
{
	static class UAction_Shaman_02_Start_1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Shaman_02_Start_1_C*>(UAction_Shaman_02_Start_1_C::StaticClass()->DefaultObject);

	return Default;
}

}


