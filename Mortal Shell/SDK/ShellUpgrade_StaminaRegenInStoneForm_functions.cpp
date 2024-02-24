#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShellUpgrade_StaminaRegenInStoneForm.ShellUpgrade_StaminaRegenInStoneForm_C
// (None)

class UClass* UShellUpgrade_StaminaRegenInStoneForm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShellUpgrade_StaminaRegenInStoneForm_C");

	return Clss;
}


// ShellUpgrade_StaminaRegenInStoneForm_C ShellUpgrade_StaminaRegenInStoneForm.Default__ShellUpgrade_StaminaRegenInStoneForm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShellUpgrade_StaminaRegenInStoneForm_C* UShellUpgrade_StaminaRegenInStoneForm_C::GetDefaultObj()
{
	static class UShellUpgrade_StaminaRegenInStoneForm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShellUpgrade_StaminaRegenInStoneForm_C*>(UShellUpgrade_StaminaRegenInStoneForm_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShellUpgrade_StaminaRegenInStoneForm.ShellUpgrade_StaminaRegenInStoneForm_C.OnAbilityGained
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_StaminaRegenInStoneForm_C::OnAbilityGained()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_StaminaRegenInStoneForm_C", "OnAbilityGained");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_StaminaRegenInStoneForm.ShellUpgrade_StaminaRegenInStoneForm_C.OnAbilityLost
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_StaminaRegenInStoneForm_C::OnAbilityLost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_StaminaRegenInStoneForm_C", "OnAbilityLost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_StaminaRegenInStoneForm.ShellUpgrade_StaminaRegenInStoneForm_C.OnStoneFormEnterred
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_StaminaRegenInStoneForm_C::OnStoneFormEnterred()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_StaminaRegenInStoneForm_C", "OnStoneFormEnterred");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_StaminaRegenInStoneForm.ShellUpgrade_StaminaRegenInStoneForm_C.OnStoneFormLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_StaminaRegenInStoneForm_C::OnStoneFormLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_StaminaRegenInStoneForm_C", "OnStoneFormLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_StaminaRegenInStoneForm.ShellUpgrade_StaminaRegenInStoneForm_C.ExecuteUbergraph_ShellUpgrade_StaminaRegenInStoneForm
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgrade_StaminaRegenInStoneForm_C::ExecuteUbergraph_ShellUpgrade_StaminaRegenInStoneForm(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous_1, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_MakeLiteralFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_StaminaRegenInStoneForm_C", "ExecuteUbergraph_ShellUpgrade_StaminaRegenInStoneForm");

	Params::UShellUpgrade_StaminaRegenInStoneForm_C_ExecuteUbergraph_ShellUpgrade_StaminaRegenInStoneForm_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous_1 = CallFunc_GetCharacterAsBarbarous_AsBarbarous_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue_1 = CallFunc_MakeLiteralFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


