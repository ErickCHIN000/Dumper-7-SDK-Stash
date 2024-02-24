#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MenuPlayerController.BP_MenuPlayerController_C
// (Actor, PlayerController)

class UClass* ABP_MenuPlayerController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MenuPlayerController_C");

	return Clss;
}


// BP_MenuPlayerController_C BP_MenuPlayerController.Default__BP_MenuPlayerController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MenuPlayerController_C* ABP_MenuPlayerController_C::GetDefaultObj()
{
	static class ABP_MenuPlayerController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MenuPlayerController_C*>(ABP_MenuPlayerController_C::StaticClass()->DefaultObject);

	return Default;
}

}


