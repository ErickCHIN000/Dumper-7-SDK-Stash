#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DebugMenuListItem.DebugMenuListItem_C
// (None)

class UClass* UDebugMenuListItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DebugMenuListItem_C");

	return Clss;
}


// DebugMenuListItem_C DebugMenuListItem.Default__DebugMenuListItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDebugMenuListItem_C* UDebugMenuListItem_C::GetDefaultObj()
{
	static class UDebugMenuListItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDebugMenuListItem_C*>(UDebugMenuListItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DebugMenuListItem.DebugMenuListItem_C.PlaySelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDebugMenuListItem_C::PlaySelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuListItem_C", "PlaySelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DebugMenuListItem.DebugMenuListItem_C.PlayDefault
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDebugMenuListItem_C::PlayDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuListItem_C", "PlayDefault");



	UObject::ProcessEvent(Func, nullptr);

}

}


