#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DragItem.DragItem_C
// (None)

class UClass* UDragItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DragItem_C");

	return Clss;
}


// DragItem_C DragItem.Default__DragItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDragItem_C* UDragItem_C::GetDefaultObj()
{
	static class UDragItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDragItem_C*>(UDragItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


