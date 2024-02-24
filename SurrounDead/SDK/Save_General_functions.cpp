#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Save_General.Save_General_C
// (None)

class UClass* USave_General_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Save_General_C");

	return Clss;
}


// Save_General_C Save_General.Default__Save_General_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USave_General_C* USave_General_C::GetDefaultObj()
{
	static class USave_General_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USave_General_C*>(USave_General_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Save_General.Save_General_C.Save_General
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USave_General_C::Save_General()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Save_General_C", "Save_General");



	UObject::ProcessEvent(Func, nullptr);

}

}


