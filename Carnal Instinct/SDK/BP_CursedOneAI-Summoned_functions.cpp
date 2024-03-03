#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CursedOneAI-Summoned.BP_CursedOneAI-Summoned_C
// (Actor, Pawn)

class UClass* ABP_CursedOneAIMinusSummoned_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CursedOneAI-Summoned_C");

	return Clss;
}


// BP_CursedOneAI-Summoned_C BP_CursedOneAI-Summoned.Default__BP_CursedOneAI-Summoned_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CursedOneAIMinusSummoned_C* ABP_CursedOneAIMinusSummoned_C::GetDefaultObj()
{
	static class ABP_CursedOneAIMinusSummoned_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CursedOneAIMinusSummoned_C*>(ABP_CursedOneAIMinusSummoned_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CursedOneAI-Summoned.BP_CursedOneAI-Summoned_C.CanEffectBeApplied
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_EffectType            Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Applier                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanEffectBeApplied_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_CursedOneAIMinusSummoned_C::CanEffectBeApplied(enum class E_EffectType Type, class AActor* Applier, bool CallFunc_CanEffectBeApplied_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CursedOneAI-Summoned_C", "CanEffectBeApplied");

	Params::ABP_CursedOneAIMinusSummoned_C_CanEffectBeApplied_Params Parms{};

	Parms.Type = Type;
	Parms.Applier = Applier;
	Parms.CallFunc_CanEffectBeApplied_ReturnValue = CallFunc_CanEffectBeApplied_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CursedOneAI-Summoned.BP_CursedOneAI-Summoned_C.GetMontages
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_MontageAction         Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Montages                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CursedOneAIMinusSummoned_C::GetMontages(enum class E_MontageAction Action, class UDataTable** Montages, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CursedOneAI-Summoned_C", "GetMontages");

	Params::ABP_CursedOneAIMinusSummoned_C_GetMontages_Params Parms{};

	Parms.Action = Action;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Montages != nullptr)
		*Montages = Parms.Montages;

}


// Function BP_CursedOneAI-Summoned.BP_CursedOneAI-Summoned_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CursedOneAIMinusSummoned_C::UserConstructionScript(bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_RandomIntegerInRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CursedOneAI-Summoned_C", "UserConstructionScript");

	Params::ABP_CursedOneAIMinusSummoned_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CursedOneAI-Summoned.BP_CursedOneAI-Summoned_C.OnCollisionActivated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_CollisionPart         Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CursedOneAIMinusSummoned_C::OnCollisionActivated(enum class E_CollisionPart Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CursedOneAI-Summoned_C", "OnCollisionActivated");

	Params::ABP_CursedOneAIMinusSummoned_C_OnCollisionActivated_Params Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CursedOneAI-Summoned.BP_CursedOneAI-Summoned_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CursedOneAIMinusSummoned_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CursedOneAI-Summoned_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CursedOneAI-Summoned.BP_CursedOneAI-Summoned_C.DissolveInCharacterMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CursedOneAIMinusSummoned_C::DissolveInCharacterMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CursedOneAI-Summoned_C", "DissolveInCharacterMesh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CursedOneAI-Summoned.BP_CursedOneAI-Summoned_C.OnOwnerStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_State                 PrevState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_State                 NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CursedOneAIMinusSummoned_C::OnOwnerStateChanged(enum class E_State PrevState, enum class E_State NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CursedOneAI-Summoned_C", "OnOwnerStateChanged");

	Params::ABP_CursedOneAIMinusSummoned_C_OnOwnerStateChanged_Params Parms{};

	Parms.PrevState = PrevState;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CursedOneAI-Summoned.BP_CursedOneAI-Summoned_C.DeathSummon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CursedOneAIMinusSummoned_C::DeathSummon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CursedOneAI-Summoned_C", "DeathSummon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CursedOneAI-Summoned.BP_CursedOneAI-Summoned_C.ExecuteUbergraph_BP_CursedOneAI-Summoned
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CollisionPart         K2Node_Event_Selection                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStateManagerComponent_C*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_State                 K2Node_CustomEvent_PrevState                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_State                 K2Node_CustomEvent_NewState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_State                 CallFunc_GetState_State                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_State                 CallFunc_GetState_State_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetIsInCombat_Dummy                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CursedOneAIMinusSummoned_C::ExecuteUbergraph_BP_CursedOneAIMinusSummoned(int32 EntryPoint, enum class E_CollisionPart K2Node_Event_Selection, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UStateManagerComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class E_State K2Node_CustomEvent_PrevState, enum class E_State K2Node_CustomEvent_NewState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class E_State CallFunc_GetState_State, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class E_State CallFunc_GetState_State_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_SetIsInCombat_Dummy, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CursedOneAI-Summoned_C", "ExecuteUbergraph_BP_CursedOneAI-Summoned");

	Params::ABP_CursedOneAIMinusSummoned_C_ExecuteUbergraph_BP_CursedOneAIMinusSummoned_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Selection = K2Node_Event_Selection;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_PrevState = K2Node_CustomEvent_PrevState;
	Parms.K2Node_CustomEvent_NewState = K2Node_CustomEvent_NewState;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetState_State = CallFunc_GetState_State;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetState_State_1 = CallFunc_GetState_State_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_SetIsInCombat_Dummy = CallFunc_SetIsInCombat_Dummy;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


