#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FamiliarityDiamond.FamiliarityDiamond_C
// (None)

class UClass* UFamiliarityDiamond_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FamiliarityDiamond_C");

	return Clss;
}


// FamiliarityDiamond_C FamiliarityDiamond.Default__FamiliarityDiamond_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFamiliarityDiamond_C* UFamiliarityDiamond_C::GetDefaultObj()
{
	static class UFamiliarityDiamond_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFamiliarityDiamond_C*>(UFamiliarityDiamond_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FamiliarityDiamond.FamiliarityDiamond_C.GetText_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UFamiliarityDiamond_C::GetText_0(class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FamiliarityDiamond_C", "GetText_0");

	Params::UFamiliarityDiamond_C_GetText_0_Params Parms{};

	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FamiliarityDiamond.FamiliarityDiamond_C.OnAppearAnimEnded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFamiliarityDiamond_C::OnAppearAnimEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FamiliarityDiamond_C", "OnAppearAnimEnded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FamiliarityDiamond.FamiliarityDiamond_C.OnFillAnimEnded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFamiliarityDiamond_C::OnFillAnimEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FamiliarityDiamond_C", "OnFillAnimEnded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FamiliarityDiamond.FamiliarityDiamond_C.OnMaxedAnimEnded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFamiliarityDiamond_C::OnMaxedAnimEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FamiliarityDiamond_C", "OnMaxedAnimEnded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FamiliarityDiamond.FamiliarityDiamond_C.SetFilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewFill                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFamiliarityDiamond_C::SetFilled(bool bNewFill)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FamiliarityDiamond_C", "SetFilled");

	Params::UFamiliarityDiamond_C_SetFilled_Params Parms{};

	Parms.bNewFill = bNewFill;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FamiliarityDiamond.FamiliarityDiamond_C.PlayFillAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlaySound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFamiliarityDiamond_C::PlayFillAnim(bool PlaySound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FamiliarityDiamond_C", "PlayFillAnim");

	Params::UFamiliarityDiamond_C_PlayFillAnim_Params Parms{};

	Parms.PlaySound = PlaySound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FamiliarityDiamond.FamiliarityDiamond_C.PlayMaxed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFamiliarityDiamond_C::PlayMaxed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FamiliarityDiamond_C", "PlayMaxed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FamiliarityDiamond.FamiliarityDiamond_C.PlayNewAppear
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFamiliarityDiamond_C::PlayNewAppear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FamiliarityDiamond_C", "PlayNewAppear");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FamiliarityDiamond.FamiliarityDiamond_C.OnMaxedEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFamiliarityDiamond_C::OnMaxedEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FamiliarityDiamond_C", "OnMaxedEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FamiliarityDiamond.FamiliarityDiamond_C.ExecuteUbergraph_FamiliarityDiamond
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_bNewFill                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_PlaySound                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)

void UFamiliarityDiamond_C::ExecuteUbergraph_FamiliarityDiamond(int32 EntryPoint, const class FString& CallFunc_Conv_IntToString_ReturnValue, float Temp_float_Variable, float Temp_float_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_bNewFill, bool K2Node_CustomEvent_PlaySound, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FamiliarityDiamond_C", "ExecuteUbergraph_FamiliarityDiamond");

	Params::UFamiliarityDiamond_C_ExecuteUbergraph_FamiliarityDiamond_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_bNewFill = K2Node_CustomEvent_bNewFill;
	Parms.K2Node_CustomEvent_PlaySound = K2Node_CustomEvent_PlaySound;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FamiliarityDiamond.FamiliarityDiamond_C.OnAppearAnimEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFamiliarityDiamond_C::OnAppearAnimEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FamiliarityDiamond_C", "OnAppearAnimEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FamiliarityDiamond.FamiliarityDiamond_C.OnFillAnimEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFamiliarityDiamond_C::OnFillAnimEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FamiliarityDiamond_C", "OnFillAnimEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FamiliarityDiamond.FamiliarityDiamond_C.OnMaxedAnimEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFamiliarityDiamond_C::OnMaxedAnimEnd__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FamiliarityDiamond_C", "OnMaxedAnimEnd__DelegateSignature");

	Params::UFamiliarityDiamond_C_OnMaxedAnimEnd__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}

}


