#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UserEdge_DropDown.UserEdge_DropDown_C
// (None)

class UClass* UUserEdge_DropDown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UserEdge_DropDown_C");

	return Clss;
}


// UserEdge_DropDown_C UserEdge_DropDown.Default__UserEdge_DropDown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUserEdge_DropDown_C* UUserEdge_DropDown_C::GetDefaultObj()
{
	static class UUserEdge_DropDown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUserEdge_DropDown_C*>(UUserEdge_DropDown_C::StaticClass()->DefaultObject);

	return Default;
}

}


