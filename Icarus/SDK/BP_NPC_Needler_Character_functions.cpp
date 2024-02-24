#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NPC_Needler_Character.BP_NPC_Needler_Character_C
// (Actor, Pawn)

class UClass* ABP_NPC_Needler_Character_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NPC_Needler_Character_C");

	return Clss;
}


// BP_NPC_Needler_Character_C BP_NPC_Needler_Character.Default__BP_NPC_Needler_Character_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_NPC_Needler_Character_C* ABP_NPC_Needler_Character_C::GetDefaultObj()
{
	static class ABP_NPC_Needler_Character_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_NPC_Needler_Character_C*>(ABP_NPC_Needler_Character_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_NPC_Needler_Character.BP_NPC_Needler_Character_C.TryCosmeticResetNeedles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void ABP_NPC_Needler_Character_C::TryCosmeticResetNeedles(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_Needler_Character_C", "TryCosmeticResetNeedles");

	Params::ABP_NPC_Needler_Character_C_TryCosmeticResetNeedles_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPC_Needler_Character.BP_NPC_Needler_Character_C.CosmeticResetNeedles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NPC_Needler_Character_C::CosmeticResetNeedles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_Needler_Character_C", "CosmeticResetNeedles");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPC_Needler_Character.BP_NPC_Needler_Character_C.GetNextAttackMontageSection
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      AttackTarget                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetNextAttackMontageSection_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSwimming_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class FName                        CallFunc_Array_Random_OutItem                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABP_NPC_Needler_Character_C::GetNextAttackMontageSection(class AActor* AttackTarget, class FName CallFunc_GetNextAttackMontageSection_ReturnValue, bool CallFunc_IsSwimming_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, class FName CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_Needler_Character_C", "GetNextAttackMontageSection");

	Params::ABP_NPC_Needler_Character_C_GetNextAttackMontageSection_Params Parms{};

	Parms.AttackTarget = AttackTarget;
	Parms.CallFunc_GetNextAttackMontageSection_ReturnValue = CallFunc_GetNextAttackMontageSection_ReturnValue;
	Parms.CallFunc_IsSwimming_ReturnValue = CallFunc_IsSwimming_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_NPC_Needler_Character.BP_NPC_Needler_Character_C.GetMontageForAction
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UIcarusGOAPAction>Action                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UAnimMontage> ActionMontage                                                    (Parm, OutParm, UObjectWrapper, HasGetValueTypeHash)
// class FName                        MontageSection                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        MontageNotify                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TSoftClassPtr<class UIcarusGOAPAction>RoarAction                                                       (Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
// TSoftClassPtr<class UIcarusGOAPAction>IdleAction                                                       (Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
// TSoftClassPtr<class UIcarusGOAPAction>AttackAction                                                     (Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_SoftClassReference_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSwimming_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActionAnimData             CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_SoftClassReference_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UAnimMontage> CallFunc_GetMontageForAction_ActionMontage                       (UObjectWrapper, HasGetValueTypeHash)
// class FName                        CallFunc_GetMontageForAction_MontageSection                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetMontageForAction_MontageNotify                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMontageForAction_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSwimming_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_NPC_Needler_Character_C::GetMontageForAction(TSoftClassPtr<class UIcarusGOAPAction>& Action, TSoftObjectPtr<class UAnimMontage>* ActionMontage, class FName* MontageSection, class FName* MontageNotify, TSoftClassPtr<class UIcarusGOAPAction> RoarAction, TSoftClassPtr<class UIcarusGOAPAction> IdleAction, TSoftClassPtr<class UIcarusGOAPAction> AttackAction, bool CallFunc_EqualEqual_SoftClassReference_ReturnValue, bool CallFunc_IsSwimming_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FActionAnimData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_SoftClassReference_ReturnValue_1, TSoftObjectPtr<class UAnimMontage> CallFunc_GetMontageForAction_ActionMontage, class FName CallFunc_GetMontageForAction_MontageSection, class FName CallFunc_GetMontageForAction_MontageNotify, bool CallFunc_GetMontageForAction_ReturnValue, bool CallFunc_IsSwimming_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_Needler_Character_C", "GetMontageForAction");

	Params::ABP_NPC_Needler_Character_C_GetMontageForAction_Params Parms{};

	Parms.Action = Action;
	Parms.RoarAction = RoarAction;
	Parms.IdleAction = IdleAction;
	Parms.AttackAction = AttackAction;
	Parms.CallFunc_EqualEqual_SoftClassReference_ReturnValue = CallFunc_EqualEqual_SoftClassReference_ReturnValue;
	Parms.CallFunc_IsSwimming_ReturnValue = CallFunc_IsSwimming_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_SoftClassReference_ReturnValue_1 = CallFunc_EqualEqual_SoftClassReference_ReturnValue_1;
	Parms.CallFunc_GetMontageForAction_ActionMontage = CallFunc_GetMontageForAction_ActionMontage;
	Parms.CallFunc_GetMontageForAction_MontageSection = CallFunc_GetMontageForAction_MontageSection;
	Parms.CallFunc_GetMontageForAction_MontageNotify = CallFunc_GetMontageForAction_MontageNotify;
	Parms.CallFunc_GetMontageForAction_ReturnValue = CallFunc_GetMontageForAction_ReturnValue;
	Parms.CallFunc_IsSwimming_ReturnValue_1 = CallFunc_IsSwimming_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (ActionMontage != nullptr)
		*ActionMontage = Parms.ActionMontage;

	if (MontageSection != nullptr)
		*MontageSection = Parms.MontageSection;

	if (MontageNotify != nullptr)
		*MontageNotify = Parms.MontageNotify;

	return Parms.ReturnValue;

}


// Function BP_NPC_Needler_Character.BP_NPC_Needler_Character_C.GetDamageSourceLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_NPC_Needler_Character_C::GetDamageSourceLocation(const struct FVector& CallFunc_GetSocketLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_Needler_Character_C", "GetDamageSourceLocation");

	Params::ABP_NPC_Needler_Character_C_GetDamageSourceLocation_Params Parms{};

	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


