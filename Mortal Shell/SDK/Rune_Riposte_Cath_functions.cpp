#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rune_Riposte_Cath.Rune_Riposte_Cath_C
// (None)

class UClass* URune_Riposte_Cath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rune_Riposte_Cath_C");

	return Clss;
}


// Rune_Riposte_Cath_C Rune_Riposte_Cath.Default__Rune_Riposte_Cath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URune_Riposte_Cath_C* URune_Riposte_Cath_C::GetDefaultObj()
{
	static class URune_Riposte_Cath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URune_Riposte_Cath_C*>(URune_Riposte_Cath_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Rune_Riposte_Cath.Rune_Riposte_Cath_C.Rune_Disable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Riposte_Cath_C::Rune_Disable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Riposte_Cath_C", "Rune_Disable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Riposte_Cath.Rune_Riposte_Cath_C.Rune_Enable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Riposte_Cath_C::Rune_Enable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Riposte_Cath_C", "Rune_Enable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Riposte_Cath.Rune_Riposte_Cath_C.ExecuteUbergraph_Rune_Riposte_Cath
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetChanceForTier_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetValueForTier_RuneX                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetChanceForTier_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetChanceForTier_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetChanceForTier_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetValueForTier_RuneX_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetValueForTier_RuneX_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetChanceForTier_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void URune_Riposte_Cath_C::ExecuteUbergraph_Rune_Riposte_Cath(int32 EntryPoint, float CallFunc_GetChanceForTier_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_GetValueForTier_RuneX, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_GetChanceForTier_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_GetChanceForTier_ReturnValue_2, float CallFunc_GetChanceForTier_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_2, int32 CallFunc_GetValueForTier_RuneX_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_GetValueForTier_RuneX_2, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_GetChanceForTier_ReturnValue_4, bool K2Node_SwitchName_CmpSuccess, bool K2Node_SwitchName_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Riposte_Cath_C", "ExecuteUbergraph_Rune_Riposte_Cath");

	Params::URune_Riposte_Cath_C_ExecuteUbergraph_Rune_Riposte_Cath_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetChanceForTier_ReturnValue = CallFunc_GetChanceForTier_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetValueForTier_RuneX = CallFunc_GetValueForTier_RuneX;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetChanceForTier_ReturnValue_1 = CallFunc_GetChanceForTier_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetChanceForTier_ReturnValue_2 = CallFunc_GetChanceForTier_ReturnValue_2;
	Parms.CallFunc_GetChanceForTier_ReturnValue_3 = CallFunc_GetChanceForTier_ReturnValue_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_GetValueForTier_RuneX_1 = CallFunc_GetValueForTier_RuneX_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_GetValueForTier_RuneX_2 = CallFunc_GetValueForTier_RuneX_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_GetChanceForTier_ReturnValue_4 = CallFunc_GetChanceForTier_ReturnValue_4;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_SwitchName_CmpSuccess_1 = K2Node_SwitchName_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


