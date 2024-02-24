#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NWX_ControllerInputData_SteamDeck.NWX_ControllerInputData_SteamDeck_C
// (None)

class UClass* UNWX_ControllerInputData_SteamDeck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NWX_ControllerInputData_SteamDeck_C");

	return Clss;
}


// NWX_ControllerInputData_SteamDeck_C NWX_ControllerInputData_SteamDeck.Default__NWX_ControllerInputData_SteamDeck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNWX_ControllerInputData_SteamDeck_C* UNWX_ControllerInputData_SteamDeck_C::GetDefaultObj()
{
	static class UNWX_ControllerInputData_SteamDeck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNWX_ControllerInputData_SteamDeck_C*>(UNWX_ControllerInputData_SteamDeck_C::StaticClass()->DefaultObject);

	return Default;
}

}


