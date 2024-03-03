#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DragDrop_ItemData.DragDrop_ItemData_C
// (None)

class UClass* UDragDrop_ItemData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DragDrop_ItemData_C");

	return Clss;
}


// DragDrop_ItemData_C DragDrop_ItemData.Default__DragDrop_ItemData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDragDrop_ItemData_C* UDragDrop_ItemData_C::GetDefaultObj()
{
	static class UDragDrop_ItemData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDragDrop_ItemData_C*>(UDragDrop_ItemData_C::StaticClass()->DefaultObject);

	return Default;
}

}


