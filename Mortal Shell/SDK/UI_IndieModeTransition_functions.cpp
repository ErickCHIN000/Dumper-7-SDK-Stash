#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_IndieModeTransition.UI_IndieModeTransition_C
// (None)

class UClass* UUI_IndieModeTransition_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_IndieModeTransition_C");

	return Clss;
}


// UI_IndieModeTransition_C UI_IndieModeTransition.Default__UI_IndieModeTransition_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_IndieModeTransition_C* UUI_IndieModeTransition_C::GetDefaultObj()
{
	static class UUI_IndieModeTransition_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_IndieModeTransition_C*>(UUI_IndieModeTransition_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_IndieModeTransition.UI_IndieModeTransition_C.SequenceEvent__ENTRYPOINTUI_IndieModeTransition_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_IndieModeTransition_C::SequenceEvent__ENTRYPOINTUI_IndieModeTransition_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_IndieModeTransition_C", "SequenceEvent__ENTRYPOINTUI_IndieModeTransition_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_IndieModeTransition.UI_IndieModeTransition_C.SequenceEvent__ENTRYPOINTUI_IndieModeTransition_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_IndieModeTransition_C::SequenceEvent__ENTRYPOINTUI_IndieModeTransition_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_IndieModeTransition_C", "SequenceEvent__ENTRYPOINTUI_IndieModeTransition_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_IndieModeTransition.UI_IndieModeTransition_C.Enable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_IndieModeTransition_C::Enable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_IndieModeTransition_C", "Enable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_IndieModeTransition.UI_IndieModeTransition_C.Disable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_IndieModeTransition_C::Disable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_IndieModeTransition_C", "Disable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_IndieModeTransition.UI_IndieModeTransition_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_IndieModeTransition_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_IndieModeTransition_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_IndieModeTransition.UI_IndieModeTransition_C.OnTransitionEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_IndieModeTransition_C::OnTransitionEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_IndieModeTransition_C", "OnTransitionEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_IndieModeTransition.UI_IndieModeTransition_C.ExecuteUbergraph_UI_IndieModeTransition
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_IndieModeTransition_C::ExecuteUbergraph_UI_IndieModeTransition(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_IndieModeTransition_C", "ExecuteUbergraph_UI_IndieModeTransition");

	Params::UUI_IndieModeTransition_C_ExecuteUbergraph_UI_IndieModeTransition_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_IndieModeTransition.UI_IndieModeTransition_C.TransitionEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_IndieModeTransition_C::TransitionEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_IndieModeTransition_C", "TransitionEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_IndieModeTransition.UI_IndieModeTransition_C.UpdateIndieMode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_IndieModeTransition_C::UpdateIndieMode__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_IndieModeTransition_C", "UpdateIndieMode__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


