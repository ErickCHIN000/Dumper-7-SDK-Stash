#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rune_Riposte_Crypt.Rune_Riposte_Crypt_C
// (None)

class UClass* URune_Riposte_Crypt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rune_Riposte_Crypt_C");

	return Clss;
}


// Rune_Riposte_Crypt_C Rune_Riposte_Crypt.Default__Rune_Riposte_Crypt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URune_Riposte_Crypt_C* URune_Riposte_Crypt_C::GetDefaultObj()
{
	static class URune_Riposte_Crypt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URune_Riposte_Crypt_C*>(URune_Riposte_Crypt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Rune_Riposte_Crypt.Rune_Riposte_Crypt_C.Rune_Disable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Riposte_Crypt_C::Rune_Disable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Riposte_Crypt_C", "Rune_Disable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Riposte_Crypt.Rune_Riposte_Crypt_C.Rune_Enable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Riposte_Crypt_C::Rune_Enable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Riposte_Crypt_C", "Rune_Enable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Riposte_Crypt.Rune_Riposte_Crypt_C.SubOnRiposte
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Riposte_Crypt_C::SubOnRiposte()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Riposte_Crypt_C", "SubOnRiposte");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Riposte_Crypt.Rune_Riposte_Crypt_C.UnsubOnRiposte
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Riposte_Crypt_C::UnsubOnRiposte()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Riposte_Crypt_C", "UnsubOnRiposte");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Riposte_Crypt.Rune_Riposte_Crypt_C.OnRipWithType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERiposteTypes           RiposteType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            RipostedChar                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_Riposte_Crypt_C::OnRipWithType(enum class ERiposteTypes RiposteType, class ABaseCharacter_C* RipostedChar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Riposte_Crypt_C", "OnRipWithType");

	Params::URune_Riposte_Crypt_C_OnRipWithType_Params Parms{};

	Parms.RiposteType = RiposteType;
	Parms.RipostedChar = RipostedChar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_Riposte_Crypt.Rune_Riposte_Crypt_C.ExecuteUbergraph_Rune_Riposte_Crypt
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetChanceForTier_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetChanceForTier_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetChanceForTier_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetValueForTier_RuneX                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           K2Node_CustomEvent_RiposteType                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_CustomEvent_RipostedChar                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetChanceForTier_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetValueForTier_RuneX_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetChanceForTier_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void URune_Riposte_Crypt_C::ExecuteUbergraph_Rune_Riposte_Crypt(int32 EntryPoint, bool K2Node_SwitchName_CmpSuccess, bool K2Node_SwitchName_CmpSuccess_1, float CallFunc_GetChanceForTier_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetChanceForTier_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_GetChanceForTier_ReturnValue_2, int32 CallFunc_GetValueForTier_RuneX, float CallFunc_Conv_IntToFloat_ReturnValue, enum class ERiposteTypes K2Node_CustomEvent_RiposteType, class ABaseCharacter_C* K2Node_CustomEvent_RipostedChar, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchName_CmpSuccess_2, float CallFunc_RandomFloat_ReturnValue, float CallFunc_GetChanceForTier_ReturnValue_3, int32 CallFunc_GetValueForTier_RuneX_1, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetChanceForTier_ReturnValue_4, float CallFunc_Subtract_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Riposte_Crypt_C", "ExecuteUbergraph_Rune_Riposte_Crypt");

	Params::URune_Riposte_Crypt_C_ExecuteUbergraph_Rune_Riposte_Crypt_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_SwitchName_CmpSuccess_1 = K2Node_SwitchName_CmpSuccess_1;
	Parms.CallFunc_GetChanceForTier_ReturnValue = CallFunc_GetChanceForTier_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetChanceForTier_ReturnValue_1 = CallFunc_GetChanceForTier_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetChanceForTier_ReturnValue_2 = CallFunc_GetChanceForTier_ReturnValue_2;
	Parms.CallFunc_GetValueForTier_RuneX = CallFunc_GetValueForTier_RuneX;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_CustomEvent_RiposteType = K2Node_CustomEvent_RiposteType;
	Parms.K2Node_CustomEvent_RipostedChar = K2Node_CustomEvent_RipostedChar;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchName_CmpSuccess_2 = K2Node_SwitchName_CmpSuccess_2;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_GetChanceForTier_ReturnValue_3 = CallFunc_GetChanceForTier_ReturnValue_3;
	Parms.CallFunc_GetValueForTier_RuneX_1 = CallFunc_GetValueForTier_RuneX_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetChanceForTier_ReturnValue_4 = CallFunc_GetChanceForTier_ReturnValue_4;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


