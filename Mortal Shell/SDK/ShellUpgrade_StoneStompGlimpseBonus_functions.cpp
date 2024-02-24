#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShellUpgrade_StoneStompGlimpseBonus.ShellUpgrade_StoneStompGlimpseBonus_C
// (None)

class UClass* UShellUpgrade_StoneStompGlimpseBonus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShellUpgrade_StoneStompGlimpseBonus_C");

	return Clss;
}


// ShellUpgrade_StoneStompGlimpseBonus_C ShellUpgrade_StoneStompGlimpseBonus.Default__ShellUpgrade_StoneStompGlimpseBonus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShellUpgrade_StoneStompGlimpseBonus_C* UShellUpgrade_StoneStompGlimpseBonus_C::GetDefaultObj()
{
	static class UShellUpgrade_StoneStompGlimpseBonus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShellUpgrade_StoneStompGlimpseBonus_C*>(UShellUpgrade_StoneStompGlimpseBonus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShellUpgrade_StoneStompGlimpseBonus.ShellUpgrade_StoneStompGlimpseBonus_C.OnAbilityGained
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_StoneStompGlimpseBonus_C::OnAbilityGained()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_StoneStompGlimpseBonus_C", "OnAbilityGained");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_StoneStompGlimpseBonus.ShellUpgrade_StoneStompGlimpseBonus_C.OnAbilityLost
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_StoneStompGlimpseBonus_C::OnAbilityLost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_StoneStompGlimpseBonus_C", "OnAbilityLost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_StoneStompGlimpseBonus.ShellUpgrade_StoneStompGlimpseBonus_C.OnStoneStompBlast
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bStarted                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShellUpgrade_StoneStompGlimpseBonus_C::OnStoneStompBlast(bool bStarted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_StoneStompGlimpseBonus_C", "OnStoneStompBlast");

	Params::UShellUpgrade_StoneStompGlimpseBonus_C_OnStoneStompBlast_Params Parms{};

	Parms.bStarted = bStarted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellUpgrade_StoneStompGlimpseBonus.ShellUpgrade_StoneStompGlimpseBonus_C.ExecuteUbergraph_ShellUpgrade_StoneStompGlimpseBonus
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bStarted                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgrade_StoneStompGlimpseBonus_C::ExecuteUbergraph_ShellUpgrade_StoneStompGlimpseBonus(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool K2Node_CustomEvent_bStarted, float K2Node_Select_Default, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_StoneStompGlimpseBonus_C", "ExecuteUbergraph_ShellUpgrade_StoneStompGlimpseBonus");

	Params::UShellUpgrade_StoneStompGlimpseBonus_C_ExecuteUbergraph_ShellUpgrade_StoneStompGlimpseBonus_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.K2Node_CustomEvent_bStarted = K2Node_CustomEvent_bStarted;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_1 = CallFunc_GetCharacterAs0_Base_As0_Base_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


