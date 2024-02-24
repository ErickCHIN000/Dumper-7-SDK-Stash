#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Eridian_Equip.Action_Eridian_Equip_C
// (None)

class UClass* UAction_Eridian_Equip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Eridian_Equip_C");

	return Clss;
}


// Action_Eridian_Equip_C Action_Eridian_Equip.Default__Action_Eridian_Equip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Eridian_Equip_C* UAction_Eridian_Equip_C::GetDefaultObj()
{
	static class UAction_Eridian_Equip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Eridian_Equip_C*>(UAction_Eridian_Equip_C::StaticClass()->DefaultObject);

	return Default;
}

}


