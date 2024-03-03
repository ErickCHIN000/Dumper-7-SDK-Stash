#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_DragAndDrop.WB_DragAndDrop_C
// (None)

class UClass* UWB_DragAndDrop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_DragAndDrop_C");

	return Clss;
}


// WB_DragAndDrop_C WB_DragAndDrop.Default__WB_DragAndDrop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_DragAndDrop_C* UWB_DragAndDrop_C::GetDefaultObj()
{
	static class UWB_DragAndDrop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_DragAndDrop_C*>(UWB_DragAndDrop_C::StaticClass()->DefaultObject);

	return Default;
}

}


