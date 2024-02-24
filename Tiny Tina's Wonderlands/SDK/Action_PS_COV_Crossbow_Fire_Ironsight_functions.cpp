#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_PS_COV_Crossbow_Fire_Ironsight.Action_PS_COV_Crossbow_Fire_Ironsight_C
// (None)

class UClass* UAction_PS_COV_Crossbow_Fire_Ironsight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_PS_COV_Crossbow_Fire_Ironsight_C");

	return Clss;
}


// Action_PS_COV_Crossbow_Fire_Ironsight_C Action_PS_COV_Crossbow_Fire_Ironsight.Default__Action_PS_COV_Crossbow_Fire_Ironsight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_PS_COV_Crossbow_Fire_Ironsight_C* UAction_PS_COV_Crossbow_Fire_Ironsight_C::GetDefaultObj()
{
	static class UAction_PS_COV_Crossbow_Fire_Ironsight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_PS_COV_Crossbow_Fire_Ironsight_C*>(UAction_PS_COV_Crossbow_Fire_Ironsight_C::StaticClass()->DefaultObject);

	return Default;
}

}


