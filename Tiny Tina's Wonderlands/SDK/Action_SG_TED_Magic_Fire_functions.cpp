#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_SG_TED_Magic_Fire.Action_SG_TED_Magic_Fire_C
// (None)

class UClass* UAction_SG_TED_Magic_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_SG_TED_Magic_Fire_C");

	return Clss;
}


// Action_SG_TED_Magic_Fire_C Action_SG_TED_Magic_Fire.Default__Action_SG_TED_Magic_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_SG_TED_Magic_Fire_C* UAction_SG_TED_Magic_Fire_C::GetDefaultObj()
{
	static class UAction_SG_TED_Magic_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_SG_TED_Magic_Fire_C*>(UAction_SG_TED_Magic_Fire_C::StaticClass()->DefaultObject);

	return Default;
}

}


