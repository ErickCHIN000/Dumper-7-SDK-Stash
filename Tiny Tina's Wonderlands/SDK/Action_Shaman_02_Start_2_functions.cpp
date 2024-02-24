#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Shaman_02_Start_2.Action_Shaman_02_Start_2_C
// (None)

class UClass* UAction_Shaman_02_Start_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Shaman_02_Start_2_C");

	return Clss;
}


// Action_Shaman_02_Start_2_C Action_Shaman_02_Start_2.Default__Action_Shaman_02_Start_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Shaman_02_Start_2_C* UAction_Shaman_02_Start_2_C::GetDefaultObj()
{
	static class UAction_Shaman_02_Start_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Shaman_02_Start_2_C*>(UAction_Shaman_02_Start_2_C::StaticClass()->DefaultObject);

	return Default;
}

}


