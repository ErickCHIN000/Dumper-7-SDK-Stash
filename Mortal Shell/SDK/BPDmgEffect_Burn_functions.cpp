#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPDmgEffect_Burn.BPDmgEffect_Burn_C
// (None)

class UClass* UBPDmgEffect_Burn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPDmgEffect_Burn_C");

	return Clss;
}


// BPDmgEffect_Burn_C BPDmgEffect_Burn.Default__BPDmgEffect_Burn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPDmgEffect_Burn_C* UBPDmgEffect_Burn_C::GetDefaultObj()
{
	static class UBPDmgEffect_Burn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPDmgEffect_Burn_C*>(UBPDmgEffect_Burn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPDmgEffect_Burn.BPDmgEffect_Burn_C.ApplyBurn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_Character_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Character                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetBurningMaceDamageBonus_Bonus                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPDmgEffect_Burn_C::ApplyBurn(class AActor* Source, class AActor* Target, const class FString& CallFunc_Conv_FloatToString_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetBurningMaceDamageBonus_Bonus, class AController* CallFunc_GetController_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess_1, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPDmgEffect_Burn_C", "ApplyBurn");

	Params::UBPDmgEffect_Burn_C_ApplyBurn_Params Parms{};

	Parms.Source = Source;
	Parms.Target = Target;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Character = K2Node_DynamicCast_AsBPI_Storm_Mode_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBurningMaceDamageBonus_Bonus = CallFunc_GetBurningMaceDamageBonus_Bonus;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPDmgEffect_Burn.BPDmgEffect_Burn_C.OnApplyDmgToHitActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              OriginalDmg                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPDmgEffect_Burn_C::OnApplyDmgToHitActor(float OriginalDmg, class AActor* Source, class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPDmgEffect_Burn_C", "OnApplyDmgToHitActor");

	Params::UBPDmgEffect_Burn_C_OnApplyDmgToHitActor_Params Parms{};

	Parms.OriginalDmg = OriginalDmg;
	Parms.Source = Source;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPDmgEffect_Burn.BPDmgEffect_Burn_C.ExecuteUbergraph_BPDmgEffect_Burn
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_OriginalDmg                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Source                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Target                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPDmgEffect_Burn_C::ExecuteUbergraph_BPDmgEffect_Burn(int32 EntryPoint, float K2Node_Event_OriginalDmg, class AActor* K2Node_Event_Source, class AActor* K2Node_Event_Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPDmgEffect_Burn_C", "ExecuteUbergraph_BPDmgEffect_Burn");

	Params::UBPDmgEffect_Burn_C_ExecuteUbergraph_BPDmgEffect_Burn_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OriginalDmg = K2Node_Event_OriginalDmg;
	Parms.K2Node_Event_Source = K2Node_Event_Source;
	Parms.K2Node_Event_Target = K2Node_Event_Target;

	UObject::ProcessEvent(Func, &Parms);

}

}


