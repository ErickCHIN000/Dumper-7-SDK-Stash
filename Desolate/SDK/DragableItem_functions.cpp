#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DragableItem.DragableItem_C
// (None)

class UClass* IDragableItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DragableItem_C");

	return Clss;
}


// DragableItem_C DragableItem.Default__DragableItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IDragableItem_C* IDragableItem_C::GetDefaultObj()
{
	static class IDragableItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IDragableItem_C*>(IDragableItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DragableItem.DragableItem_C.Drop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IDragableItem_C::Drop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragableItem_C", "Drop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DragableItem.DragableItem_C.Hold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IDragableItem_C::Hold()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragableItem_C", "Hold");



	UObject::ProcessEvent(Func, nullptr);

}

}


