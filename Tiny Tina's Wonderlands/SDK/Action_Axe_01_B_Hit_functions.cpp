#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Axe_01_B_Hit.Action_Axe_01_B_Hit_C
// (None)

class UClass* UAction_Axe_01_B_Hit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Axe_01_B_Hit_C");

	return Clss;
}


// Action_Axe_01_B_Hit_C Action_Axe_01_B_Hit.Default__Action_Axe_01_B_Hit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Axe_01_B_Hit_C* UAction_Axe_01_B_Hit_C::GetDefaultObj()
{
	static class UAction_Axe_01_B_Hit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Axe_01_B_Hit_C*>(UAction_Axe_01_B_Hit_C::StaticClass()->DefaultObject);

	return Default;
}

}


