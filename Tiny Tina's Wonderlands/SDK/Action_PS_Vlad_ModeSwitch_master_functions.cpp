#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_PS_Vlad_ModeSwitch_master.Action_PS_Vlad_ModeSwitch_Master_C
// (None)

class UClass* UAction_PS_Vlad_ModeSwitch_Master_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_PS_Vlad_ModeSwitch_Master_C");

	return Clss;
}


// Action_PS_Vlad_ModeSwitch_Master_C Action_PS_Vlad_ModeSwitch_master.Default__Action_PS_Vlad_ModeSwitch_Master_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_PS_Vlad_ModeSwitch_Master_C* UAction_PS_Vlad_ModeSwitch_Master_C::GetDefaultObj()
{
	static class UAction_PS_Vlad_ModeSwitch_Master_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_PS_Vlad_ModeSwitch_Master_C*>(UAction_PS_Vlad_ModeSwitch_Master_C::StaticClass()->DefaultObject);

	return Default;
}

}


