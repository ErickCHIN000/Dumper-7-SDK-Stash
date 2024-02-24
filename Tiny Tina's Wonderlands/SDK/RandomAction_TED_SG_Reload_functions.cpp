#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RandomAction_TED_SG_Reload.RandomAction_TED_SG_Reload_C
// (None)

class UClass* URandomAction_TED_SG_Reload_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RandomAction_TED_SG_Reload_C");

	return Clss;
}


// RandomAction_TED_SG_Reload_C RandomAction_TED_SG_Reload.Default__RandomAction_TED_SG_Reload_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URandomAction_TED_SG_Reload_C* URandomAction_TED_SG_Reload_C::GetDefaultObj()
{
	static class URandomAction_TED_SG_Reload_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URandomAction_TED_SG_Reload_C*>(URandomAction_TED_SG_Reload_C::StaticClass()->DefaultObject);

	return Default;
}

}


