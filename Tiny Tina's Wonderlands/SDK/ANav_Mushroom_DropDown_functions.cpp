#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ANav_Mushroom_DropDown.ANav_Mushroom_DropDown_C
// (None)

class UClass* UANav_Mushroom_DropDown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANav_Mushroom_DropDown_C");

	return Clss;
}


// ANav_Mushroom_DropDown_C ANav_Mushroom_DropDown.Default__ANav_Mushroom_DropDown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANav_Mushroom_DropDown_C* UANav_Mushroom_DropDown_C::GetDefaultObj()
{
	static class UANav_Mushroom_DropDown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANav_Mushroom_DropDown_C*>(UANav_Mushroom_DropDown_C::StaticClass()->DefaultObject);

	return Default;
}

}

