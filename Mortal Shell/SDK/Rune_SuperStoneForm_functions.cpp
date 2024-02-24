#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rune_SuperStoneForm.Rune_SuperStoneForm_C
// (None)

class UClass* URune_SuperStoneForm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rune_SuperStoneForm_C");

	return Clss;
}


// Rune_SuperStoneForm_C Rune_SuperStoneForm.Default__Rune_SuperStoneForm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URune_SuperStoneForm_C* URune_SuperStoneForm_C::GetDefaultObj()
{
	static class URune_SuperStoneForm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URune_SuperStoneForm_C*>(URune_SuperStoneForm_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Rune_SuperStoneForm.Rune_SuperStoneForm_C.RemoveIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_SuperStoneForm_C::RemoveIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_SuperStoneForm_C", "RemoveIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_SuperStoneForm.Rune_SuperStoneForm_C.Rune_Enable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_SuperStoneForm_C::Rune_Enable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_SuperStoneForm_C", "Rune_Enable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_SuperStoneForm.Rune_SuperStoneForm_C.Rune_Disable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_SuperStoneForm_C::Rune_Disable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_SuperStoneForm_C", "Rune_Disable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_SuperStoneForm.Rune_SuperStoneForm_C.OnStoneFormExitCooldown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_SuperStoneForm_C::OnStoneFormExitCooldown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_SuperStoneForm_C", "OnStoneFormExitCooldown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_SuperStoneForm.Rune_SuperStoneForm_C.OnSuperStoneFormActivated_Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_SuperStoneForm_C::OnSuperStoneFormActivated_Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_SuperStoneForm_C", "OnSuperStoneFormActivated_Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_SuperStoneForm.Rune_SuperStoneForm_C.OnSuperStoneFormActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_SuperStoneForm_C::OnSuperStoneFormActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_SuperStoneForm_C", "OnSuperStoneFormActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_SuperStoneForm.Rune_SuperStoneForm_C.ExecuteUbergraph_Rune_SuperStoneForm
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetChanceForTier_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddStatusIcon_IconID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddStatusIcon_IconID_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_GetValueForTier_RuneX                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_SuperStoneForm_C::ExecuteUbergraph_Rune_SuperStoneForm(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetChanceForTier_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, int32 CallFunc_AddStatusIcon_IconID, int32 CallFunc_AddStatusIcon_IconID_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_GetValueForTier_RuneX, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_SuperStoneForm_C", "ExecuteUbergraph_Rune_SuperStoneForm");

	Params::URune_SuperStoneForm_C_ExecuteUbergraph_Rune_SuperStoneForm_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetChanceForTier_ReturnValue = CallFunc_GetChanceForTier_ReturnValue;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.CallFunc_AddStatusIcon_IconID = CallFunc_AddStatusIcon_IconID;
	Parms.CallFunc_AddStatusIcon_IconID_1 = CallFunc_AddStatusIcon_IconID_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetValueForTier_RuneX = CallFunc_GetValueForTier_RuneX;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


