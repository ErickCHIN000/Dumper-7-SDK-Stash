#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_PS_Vlad_Reload_Magnificent.Action_PS_Vlad_Reload_Magnificent_C
// (None)

class UClass* UAction_PS_Vlad_Reload_Magnificent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_PS_Vlad_Reload_Magnificent_C");

	return Clss;
}


// Action_PS_Vlad_Reload_Magnificent_C Action_PS_Vlad_Reload_Magnificent.Default__Action_PS_Vlad_Reload_Magnificent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_PS_Vlad_Reload_Magnificent_C* UAction_PS_Vlad_Reload_Magnificent_C::GetDefaultObj()
{
	static class UAction_PS_Vlad_Reload_Magnificent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_PS_Vlad_Reload_Magnificent_C*>(UAction_PS_Vlad_Reload_Magnificent_C::StaticClass()->DefaultObject);

	return Default;
}

}


