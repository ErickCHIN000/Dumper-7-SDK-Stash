#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DragDrop_AbilityData.DragDrop_AbilityData_C
// (None)

class UClass* UDragDrop_AbilityData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DragDrop_AbilityData_C");

	return Clss;
}


// DragDrop_AbilityData_C DragDrop_AbilityData.Default__DragDrop_AbilityData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDragDrop_AbilityData_C* UDragDrop_AbilityData_C::GetDefaultObj()
{
	static class UDragDrop_AbilityData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDragDrop_AbilityData_C*>(UDragDrop_AbilityData_C::StaticClass()->DefaultObject);

	return Default;
}

}


