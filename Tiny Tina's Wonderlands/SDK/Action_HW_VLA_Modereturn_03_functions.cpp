#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_HW_VLA_Modereturn_03.Action_HW_VLA_Modereturn_03_C
// (None)

class UClass* UAction_HW_VLA_Modereturn_03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_HW_VLA_Modereturn_03_C");

	return Clss;
}


// Action_HW_VLA_Modereturn_03_C Action_HW_VLA_Modereturn_03.Default__Action_HW_VLA_Modereturn_03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_HW_VLA_Modereturn_03_C* UAction_HW_VLA_Modereturn_03_C::GetDefaultObj()
{
	static class UAction_HW_VLA_Modereturn_03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_HW_VLA_Modereturn_03_C*>(UAction_HW_VLA_Modereturn_03_C::StaticClass()->DefaultObject);

	return Default;
}

}


