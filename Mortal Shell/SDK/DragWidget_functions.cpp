#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DragWidget.DragWidget_C
// (None)

class UClass* UDragWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DragWidget_C");

	return Clss;
}


// DragWidget_C DragWidget.Default__DragWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDragWidget_C* UDragWidget_C::GetDefaultObj()
{
	static class UDragWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDragWidget_C*>(UDragWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


