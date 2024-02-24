#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KeyboardModeNotifierComponent.KeyboardModeNotifierComponent_C
// (None)

class UClass* UKeyboardModeNotifierComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KeyboardModeNotifierComponent_C");

	return Clss;
}


// KeyboardModeNotifierComponent_C KeyboardModeNotifierComponent.Default__KeyboardModeNotifierComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKeyboardModeNotifierComponent_C* UKeyboardModeNotifierComponent_C::GetDefaultObj()
{
	static class UKeyboardModeNotifierComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKeyboardModeNotifierComponent_C*>(UKeyboardModeNotifierComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KeyboardModeNotifierComponent.KeyboardModeNotifierComponent_C.OnKeyboardModeChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeyboardMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyboardModeNotifierComponent_C::OnKeyboardModeChanged__DelegateSignature(bool KeyboardMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyboardModeNotifierComponent_C", "OnKeyboardModeChanged__DelegateSignature");

	Params::UKeyboardModeNotifierComponent_C_OnKeyboardModeChanged__DelegateSignature_Params Parms{};

	Parms.KeyboardMode = KeyboardMode;

	UObject::ProcessEvent(Func, &Parms);

}

}


