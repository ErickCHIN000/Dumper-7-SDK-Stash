#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ActionSkill_Shaman_02.ActionSkill_Shaman_02_C
// (None)

class UClass* UActionSkill_Shaman_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActionSkill_Shaman_02_C");

	return Clss;
}


// ActionSkill_Shaman_02_C ActionSkill_Shaman_02.Default__ActionSkill_Shaman_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActionSkill_Shaman_02_C* UActionSkill_Shaman_02_C::GetDefaultObj()
{
	static class UActionSkill_Shaman_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActionSkill_Shaman_02_C*>(UActionSkill_Shaman_02_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ActionSkill_Shaman_02.ActionSkill_Shaman_02_C.ProcessSkillFailure
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionSkill_Shaman_02_C::ProcessSkillFailure(float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, float CallFunc_GetDataTableValueFromHandle_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Shaman_02_C", "ProcessSkillFailure");

	Params::UActionSkill_Shaman_02_C_ProcessSkillFailure_Params Parms{};

	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue1 = CallFunc_GetDataTableValueFromHandle_ReturnValue1;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue2 = CallFunc_GetDataTableValueFromHandle_ReturnValue2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionSkill_Shaman_02.ActionSkill_Shaman_02_C.OnDialogSequenceFinished_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionSkill_Shaman_02_C::OnDialogSequenceFinished_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Shaman_02_C", "OnDialogSequenceFinished_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_Shaman_02.ActionSkill_Shaman_02_C.GbxAsyncRequest_Miss_0FAEE7314E17981BECD1C1ACA7A2D21C
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Result                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UActionSkill_Shaman_02_C::GbxAsyncRequest_Miss_0FAEE7314E17981BECD1C1ACA7A2D21C(struct FHitResult& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Shaman_02_C", "GbxAsyncRequest_Miss_0FAEE7314E17981BECD1C1ACA7A2D21C");

	Params::UActionSkill_Shaman_02_C_GbxAsyncRequest_Miss_0FAEE7314E17981BECD1C1ACA7A2D21C_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionSkill_Shaman_02.ActionSkill_Shaman_02_C.GbxAsyncRequest_Hit_0FAEE7314E17981BECD1C1ACA7A2D21C
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Result                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UActionSkill_Shaman_02_C::GbxAsyncRequest_Hit_0FAEE7314E17981BECD1C1ACA7A2D21C(struct FHitResult& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Shaman_02_C", "GbxAsyncRequest_Hit_0FAEE7314E17981BECD1C1ACA7A2D21C");

	Params::UActionSkill_Shaman_02_C_GbxAsyncRequest_Hit_0FAEE7314E17981BECD1C1ACA7A2D21C_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionSkill_Shaman_02.ActionSkill_Shaman_02_C.GbxAsyncRequest_Spawned_57ED781D4CD8C17D4B2001AB16D06843
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InstanceIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionSkill_Shaman_02_C::GbxAsyncRequest_Spawned_57ED781D4CD8C17D4B2001AB16D06843(class AActor* Actor, int32 InstanceIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Shaman_02_C", "GbxAsyncRequest_Spawned_57ED781D4CD8C17D4B2001AB16D06843");

	Params::UActionSkill_Shaman_02_C_GbxAsyncRequest_Spawned_57ED781D4CD8C17D4B2001AB16D06843_Params Parms{};

	Parms.Actor = Actor;
	Parms.InstanceIndex = InstanceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionSkill_Shaman_02.ActionSkill_Shaman_02_C.GbxAsyncRequest_Miss_61D180254962E80E285F2D992CC37D0B
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Result                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UActionSkill_Shaman_02_C::GbxAsyncRequest_Miss_61D180254962E80E285F2D992CC37D0B(struct FHitResult& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Shaman_02_C", "GbxAsyncRequest_Miss_61D180254962E80E285F2D992CC37D0B");

	Params::UActionSkill_Shaman_02_C_GbxAsyncRequest_Miss_61D180254962E80E285F2D992CC37D0B_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionSkill_Shaman_02.ActionSkill_Shaman_02_C.GbxAsyncRequest_Hit_61D180254962E80E285F2D992CC37D0B
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Result                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UActionSkill_Shaman_02_C::GbxAsyncRequest_Hit_61D180254962E80E285F2D992CC37D0B(struct FHitResult& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Shaman_02_C", "GbxAsyncRequest_Hit_61D180254962E80E285F2D992CC37D0B");

	Params::UActionSkill_Shaman_02_C_GbxAsyncRequest_Hit_61D180254962E80E285F2D992CC37D0B_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionSkill_Shaman_02.ActionSkill_Shaman_02_C.OnPaused
// (Event, Protected, BlueprintEvent)
// Parameters:

void UActionSkill_Shaman_02_C::OnPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Shaman_02_C", "OnPaused");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_Shaman_02.ActionSkill_Shaman_02_C.OnResumed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UActionSkill_Shaman_02_C::OnResumed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Shaman_02_C", "OnResumed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_Shaman_02.ActionSkill_Shaman_02_C.Necromancer_15_Buff_Activated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionSkill_Shaman_02_C::Necromancer_15_Buff_Activated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Shaman_02_C", "Necromancer_15_Buff_Activated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_Shaman_02.ActionSkill_Shaman_02_C.Necromancer_15_Buff_Deactivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionSkill_Shaman_02_C::Necromancer_15_Buff_Deactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Shaman_02_C", "Necromancer_15_Buff_Deactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_Shaman_02.ActionSkill_Shaman_02_C.Shaman_02_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionSkill_Shaman_02_C::Shaman_02_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Shaman_02_C", "Shaman_02_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_Shaman_02.ActionSkill_Shaman_02_C.Shaman_02_BindEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionSkill_Shaman_02_C::Shaman_02_BindEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Shaman_02_C", "Shaman_02_BindEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_Shaman_02.ActionSkill_Shaman_02_C.Shaman_02_UnbindEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionSkill_Shaman_02_C::Shaman_02_UnbindEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Shaman_02_C", "Shaman_02_UnbindEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_Shaman_02.ActionSkill_Shaman_02_C.Shaman_02_Spawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionSkill_Shaman_02_C::Shaman_02_Spawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Shaman_02_C", "Shaman_02_Spawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_Shaman_02.ActionSkill_Shaman_02_C.OnStartActionAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UActionSkill_Shaman_02_C::OnStartActionAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Shaman_02_C", "OnStartActionAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_Shaman_02.ActionSkill_Shaman_02_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UActionSkill_Shaman_02_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Shaman_02_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_Shaman_02.ActionSkill_Shaman_02_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UActionSkill_Shaman_02_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Shaman_02_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_Shaman_02.ActionSkill_Shaman_02_C.ExecuteUbergraph_ActionSkill_Shaman_02
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ASpellActor_CircleOfProtection_Base_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FHitResult                  K2Node_CustomEvent_Result3                                       (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  K2Node_CustomEvent_Result2                                       (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable1                                            (ConstParm, ZeroConstructor, ReferenceParm)
// struct FVector                     CallFunc_FindNavMeshPoint_Result                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindNavMeshPoint_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_Actor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_InstanceIndex                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_CustomEvent_Result1                                       (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  Temp_struct_Variable2                                            (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  K2Node_CustomEvent_Result                                        (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location1                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint1                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal1                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal1                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart1                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd1                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue1                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FGameResourcePoolReference  CallFunc_GetResourcePoolByResource_ReturnValue                   (NoDestructor, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1         (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue                            (None)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2         (NoDestructor)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3         (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate4         (NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate5         (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue2                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue1                           (None)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation1                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakFirstPersonComponent*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)
// struct FGbxTraceAsyncRequest       K2Node_MakeStruct_GbxTraceAsyncRequest                           (ContainsInstancedReference)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue3                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue1                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate10                           (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakPlayerAbilityManagerComponent*CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromZ_ReturnValue                                (IsPlainOldData, NoDestructor)
// class UBPEventHub_PlayerCharacter_C*K2Node_DynamicCast_AsBPEvent_Hub_Player_Character                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FGbxSpawnActorAsyncRequest  K2Node_MakeStruct_GbxSpawnActorAsyncRequest                      (ContainsInstancedReference)
// int32                              CallFunc_SpawnActorAsync_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorAimViewPoint_OutLocation                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetActorAimViewPoint_OutRotation                        (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue2                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxTraceAsyncRequest       K2Node_MakeStruct_GbxTraceAsyncRequest1                          (ContainsInstancedReference)

void UActionSkill_Shaman_02_C::ExecuteUbergraph_ActionSkill_Shaman_02(int32 EntryPoint, TArray<class ASpellActor_CircleOfProtection_Base_C*>& CallFunc_GetAllActorsOfClass_OutActors, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FHitResult& K2Node_CustomEvent_Result3, const struct FHitResult& Temp_struct_Variable, const struct FHitResult& K2Node_CustomEvent_Result2, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, TArray<struct FGbxActionRegister>& Temp_struct_Variable1, const struct FVector& CallFunc_FindNavMeshPoint_Result, bool CallFunc_FindNavMeshPoint_ReturnValue, class AActor* K2Node_CustomEvent_Actor, int32 K2Node_CustomEvent_InstanceIndex, const struct FHitResult& K2Node_CustomEvent_Result1, const struct FHitResult& Temp_struct_Variable2, const struct FHitResult& K2Node_CustomEvent_Result, bool CallFunc_BreakHitResult_bBlockingHit1, bool CallFunc_BreakHitResult_bInitialOverlap1, float CallFunc_BreakHitResult_Time1, float CallFunc_BreakHitResult_Distance1, const struct FVector& CallFunc_BreakHitResult_Location1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint1, const struct FVector& CallFunc_BreakHitResult_Normal1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat1, class AActor* CallFunc_BreakHitResult_HitActor1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent1, class FName CallFunc_BreakHitResult_HitBoneName1, int32 CallFunc_BreakHitResult_HitItem1, int32 CallFunc_BreakHitResult_FaceIndex1, const struct FVector& CallFunc_BreakHitResult_TraceStart1, const struct FVector& CallFunc_BreakHitResult_TraceEnd1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate4, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, class AActor* CallFunc_GetAbilityOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation1, int32 CallFunc_FinishTriggerDialog_SequenceID1, bool CallFunc_FinishTriggerDialog_ReturnValue1, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, class UOakFirstPersonComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue2, class UGbxAction* CallFunc_K2Play_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, const struct FGbxTraceAsyncRequest& K2Node_MakeStruct_GbxTraceAsyncRequest, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, class AActor* CallFunc_GetAbilityOwner_ReturnValue3, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue1, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetAbilityOwner_ReturnValue4, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue5, const struct FVector& CallFunc_GetActorAimViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorAimViewPoint_OutRotation, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, const struct FGbxTraceAsyncRequest& K2Node_MakeStruct_GbxTraceAsyncRequest1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Shaman_02_C", "ExecuteUbergraph_ActionSkill_Shaman_02");

	Params::UActionSkill_Shaman_02_C_ExecuteUbergraph_ActionSkill_Shaman_02_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CustomEvent_Result3 = K2Node_CustomEvent_Result3;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CustomEvent_Result2 = K2Node_CustomEvent_Result2;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.CallFunc_FindNavMeshPoint_Result = CallFunc_FindNavMeshPoint_Result;
	Parms.CallFunc_FindNavMeshPoint_ReturnValue = CallFunc_FindNavMeshPoint_ReturnValue;
	Parms.K2Node_CustomEvent_Actor = K2Node_CustomEvent_Actor;
	Parms.K2Node_CustomEvent_InstanceIndex = K2Node_CustomEvent_InstanceIndex;
	Parms.K2Node_CustomEvent_Result1 = K2Node_CustomEvent_Result1;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.CallFunc_BreakHitResult_bBlockingHit1 = CallFunc_BreakHitResult_bBlockingHit1;
	Parms.CallFunc_BreakHitResult_bInitialOverlap1 = CallFunc_BreakHitResult_bInitialOverlap1;
	Parms.CallFunc_BreakHitResult_Time1 = CallFunc_BreakHitResult_Time1;
	Parms.CallFunc_BreakHitResult_Distance1 = CallFunc_BreakHitResult_Distance1;
	Parms.CallFunc_BreakHitResult_Location1 = CallFunc_BreakHitResult_Location1;
	Parms.CallFunc_BreakHitResult_ImpactPoint1 = CallFunc_BreakHitResult_ImpactPoint1;
	Parms.CallFunc_BreakHitResult_Normal1 = CallFunc_BreakHitResult_Normal1;
	Parms.CallFunc_BreakHitResult_ImpactNormal1 = CallFunc_BreakHitResult_ImpactNormal1;
	Parms.CallFunc_BreakHitResult_PhysMat1 = CallFunc_BreakHitResult_PhysMat1;
	Parms.CallFunc_BreakHitResult_HitActor1 = CallFunc_BreakHitResult_HitActor1;
	Parms.CallFunc_BreakHitResult_HitComponent1 = CallFunc_BreakHitResult_HitComponent1;
	Parms.CallFunc_BreakHitResult_HitBoneName1 = CallFunc_BreakHitResult_HitBoneName1;
	Parms.CallFunc_BreakHitResult_HitItem1 = CallFunc_BreakHitResult_HitItem1;
	Parms.CallFunc_BreakHitResult_FaceIndex1 = CallFunc_BreakHitResult_FaceIndex1;
	Parms.CallFunc_BreakHitResult_TraceStart1 = CallFunc_BreakHitResult_TraceStart1;
	Parms.CallFunc_BreakHitResult_TraceEnd1 = CallFunc_BreakHitResult_TraceEnd1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X1 = CallFunc_BreakVector_X1;
	Parms.CallFunc_BreakVector_Y1 = CallFunc_BreakVector_Y1;
	Parms.CallFunc_BreakVector_Z1 = CallFunc_BreakVector_Z1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue1 = CallFunc_MakeVector_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetResourcePoolByResource_ReturnValue = CallFunc_GetResourcePoolByResource_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_NewDialogContext_ReturnValue = CallFunc_NewDialogContext_ReturnValue;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2;
	Parms.CallFunc_FinishTriggerDialog_Conversation = CallFunc_FinishTriggerDialog_Conversation;
	Parms.CallFunc_FinishTriggerDialog_SequenceID = CallFunc_FinishTriggerDialog_SequenceID;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue = CallFunc_FinishTriggerDialog_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate4 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate4;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate5 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate5;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X2 = CallFunc_BreakVector_X2;
	Parms.CallFunc_BreakVector_Y2 = CallFunc_BreakVector_Y2;
	Parms.CallFunc_BreakVector_Z2 = CallFunc_BreakVector_Z2;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue1 = CallFunc_Subtract_FloatFloat_ReturnValue1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_NewDialogContext_ReturnValue1 = CallFunc_NewDialogContext_ReturnValue1;
	Parms.CallFunc_FinishTriggerDialog_Conversation1 = CallFunc_FinishTriggerDialog_Conversation1;
	Parms.CallFunc_FinishTriggerDialog_SequenceID1 = CallFunc_FinishTriggerDialog_SequenceID1;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue1 = CallFunc_FinishTriggerDialog_ReturnValue1;
	Parms.CallFunc_GetAbilityOwner_ReturnValue1 = CallFunc_GetAbilityOwner_ReturnValue1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetAbilityOwner_ReturnValue2 = CallFunc_GetAbilityOwner_ReturnValue2;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;
	Parms.K2Node_MakeStruct_GbxTraceAsyncRequest = K2Node_MakeStruct_GbxTraceAsyncRequest;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue3 = CallFunc_MakeVector_ReturnValue3;
	Parms.CallFunc_Add_VectorVector_ReturnValue1 = CallFunc_Add_VectorVector_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate10 = K2Node_CreateDelegate_OutputDelegate10;
	Parms.CallFunc_GetAbilityOwner_ReturnValue3 = CallFunc_GetAbilityOwner_ReturnValue3;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.CallFunc_MakeRotFromZ_ReturnValue = CallFunc_MakeRotFromZ_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPEvent_Hub_Player_Character = K2Node_DynamicCast_AsBPEvent_Hub_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAbilityOwner_ReturnValue4 = CallFunc_GetAbilityOwner_ReturnValue4;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue1 = CallFunc_GetDataTableValueFromHandle_ReturnValue1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_MakeStruct_GbxSpawnActorAsyncRequest = K2Node_MakeStruct_GbxSpawnActorAsyncRequest;
	Parms.CallFunc_SpawnActorAsync_ReturnValue = CallFunc_SpawnActorAsync_ReturnValue;
	Parms.CallFunc_GetAbilityOwner_ReturnValue5 = CallFunc_GetAbilityOwner_ReturnValue5;
	Parms.CallFunc_GetActorAimViewPoint_OutLocation = CallFunc_GetActorAimViewPoint_OutLocation;
	Parms.CallFunc_GetActorAimViewPoint_OutRotation = CallFunc_GetActorAimViewPoint_OutRotation;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue2 = CallFunc_Add_VectorVector_ReturnValue2;
	Parms.K2Node_MakeStruct_GbxTraceAsyncRequest1 = K2Node_MakeStruct_GbxTraceAsyncRequest1;

	UObject::ProcessEvent(Func, &Parms);

}

}


