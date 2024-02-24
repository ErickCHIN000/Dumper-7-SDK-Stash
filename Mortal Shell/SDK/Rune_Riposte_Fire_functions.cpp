#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rune_Riposte_Fire.Rune_Riposte_Fire_C
// (None)

class UClass* URune_Riposte_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rune_Riposte_Fire_C");

	return Clss;
}


// Rune_Riposte_Fire_C Rune_Riposte_Fire.Default__Rune_Riposte_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URune_Riposte_Fire_C* URune_Riposte_Fire_C::GetDefaultObj()
{
	static class URune_Riposte_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URune_Riposte_Fire_C*>(URune_Riposte_Fire_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Rune_Riposte_Fire.Rune_Riposte_Fire_C.Rune_Disable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Riposte_Fire_C::Rune_Disable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Riposte_Fire_C", "Rune_Disable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Riposte_Fire.Rune_Riposte_Fire_C.Rune_Enable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Riposte_Fire_C::Rune_Enable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Riposte_Fire_C", "Rune_Enable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Riposte_Fire.Rune_Riposte_Fire_C.ExecuteUbergraph_Rune_Riposte_Fire
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetChanceForTier_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetValueForTier_RuneX                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetChanceForTier_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetValueForTier_RuneX_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetChanceForTier_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_Riposte_Fire_C::ExecuteUbergraph_Rune_Riposte_Fire(int32 EntryPoint, float CallFunc_GetChanceForTier_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool K2Node_SwitchName_CmpSuccess, int32 CallFunc_GetValueForTier_RuneX, float CallFunc_Conv_IntToFloat_ReturnValue, bool K2Node_SwitchName_CmpSuccess_1, float CallFunc_GetChanceForTier_ReturnValue_1, int32 CallFunc_GetValueForTier_RuneX_1, float CallFunc_GetChanceForTier_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Riposte_Fire_C", "ExecuteUbergraph_Rune_Riposte_Fire");

	Params::URune_Riposte_Fire_C_ExecuteUbergraph_Rune_Riposte_Fire_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetChanceForTier_ReturnValue = CallFunc_GetChanceForTier_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_GetValueForTier_RuneX = CallFunc_GetValueForTier_RuneX;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess_1 = K2Node_SwitchName_CmpSuccess_1;
	Parms.CallFunc_GetChanceForTier_ReturnValue_1 = CallFunc_GetChanceForTier_ReturnValue_1;
	Parms.CallFunc_GetValueForTier_RuneX_1 = CallFunc_GetValueForTier_RuneX_1;
	Parms.CallFunc_GetChanceForTier_ReturnValue_2 = CallFunc_GetChanceForTier_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


