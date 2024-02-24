#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_Warning.UMG_Warning_C
// (None)

class UClass* UUMG_Warning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_Warning_C");

	return Clss;
}


// UMG_Warning_C UMG_Warning.Default__UMG_Warning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_Warning_C* UUMG_Warning_C::GetDefaultObj()
{
	static class UUMG_Warning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_Warning_C*>(UUMG_Warning_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_Warning.UMG_Warning_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Warning_C::SetState(bool Visible, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Warning_C", "SetState");

	Params::UUMG_Warning_C_SetState_Params Parms{};

	Parms.Visible = Visible;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Warning.UMG_Warning_C.Initialise
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_Warning_C::Initialise(class FText Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Warning_C", "Initialise");

	Params::UUMG_Warning_C_Initialise_Params Parms{};

	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}

}


