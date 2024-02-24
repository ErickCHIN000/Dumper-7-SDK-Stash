#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Sword2H_01_A_Hit.Action_Sword2H_01_A_Hit_C
// (None)

class UClass* UAction_Sword2H_01_A_Hit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Sword2H_01_A_Hit_C");

	return Clss;
}


// Action_Sword2H_01_A_Hit_C Action_Sword2H_01_A_Hit.Default__Action_Sword2H_01_A_Hit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Sword2H_01_A_Hit_C* UAction_Sword2H_01_A_Hit_C::GetDefaultObj()
{
	static class UAction_Sword2H_01_A_Hit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Sword2H_01_A_Hit_C*>(UAction_Sword2H_01_A_Hit_C::StaticClass()->DefaultObject);

	return Default;
}

}


