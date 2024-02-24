#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_PS_Vlad_ModeSwitch_01.Action_PS_Vlad_ModeSwitch_01_C
// (None)

class UClass* UAction_PS_Vlad_ModeSwitch_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_PS_Vlad_ModeSwitch_01_C");

	return Clss;
}


// Action_PS_Vlad_ModeSwitch_01_C Action_PS_Vlad_ModeSwitch_01.Default__Action_PS_Vlad_ModeSwitch_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_PS_Vlad_ModeSwitch_01_C* UAction_PS_Vlad_ModeSwitch_01_C::GetDefaultObj()
{
	static class UAction_PS_Vlad_ModeSwitch_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_PS_Vlad_ModeSwitch_01_C*>(UAction_PS_Vlad_ModeSwitch_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


