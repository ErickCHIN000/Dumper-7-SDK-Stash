#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_PS_DAL_Crossbow_Fire_Auto.Action_PS_DAL_Crossbow_Fire_Auto_C
// (None)

class UClass* UAction_PS_DAL_Crossbow_Fire_Auto_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_PS_DAL_Crossbow_Fire_Auto_C");

	return Clss;
}


// Action_PS_DAL_Crossbow_Fire_Auto_C Action_PS_DAL_Crossbow_Fire_Auto.Default__Action_PS_DAL_Crossbow_Fire_Auto_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_PS_DAL_Crossbow_Fire_Auto_C* UAction_PS_DAL_Crossbow_Fire_Auto_C::GetDefaultObj()
{
	static class UAction_PS_DAL_Crossbow_Fire_Auto_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_PS_DAL_Crossbow_Fire_Auto_C*>(UAction_PS_DAL_Crossbow_Fire_Auto_C::StaticClass()->DefaultObject);

	return Default;
}

}


