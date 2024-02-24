#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NPC_RockDog_Character.BP_NPC_RockDog_Character_C
// (Actor, Pawn)

class UClass* ABP_NPC_RockDog_Character_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NPC_RockDog_Character_C");

	return Clss;
}


// BP_NPC_RockDog_Character_C BP_NPC_RockDog_Character.Default__BP_NPC_RockDog_Character_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_NPC_RockDog_Character_C* ABP_NPC_RockDog_Character_C::GetDefaultObj()
{
	static class ABP_NPC_RockDog_Character_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_NPC_RockDog_Character_C*>(ABP_NPC_RockDog_Character_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_NPC_RockDog_Character.BP_NPC_RockDog_Character_C.OnRep_IsEnraged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NPC_RockDog_Character_C::OnRep_IsEnraged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_RockDog_Character_C", "OnRep_IsEnraged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPC_RockDog_Character.BP_NPC_RockDog_Character_C.ReplicateBlackboardVariables
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusNPCGOAPController*    K2Node_DynamicCast_AsIcarus_NPCGOAPController                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCurrentPropertyState_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_NPC_RockDog_Character_C::ReplicateBlackboardVariables(class FName NewLocalVar_0, class AController* CallFunc_GetController_ReturnValue, class AIcarusNPCGOAPController* K2Node_DynamicCast_AsIcarus_NPCGOAPController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetCurrentPropertyState_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_RockDog_Character_C", "ReplicateBlackboardVariables");

	Params::ABP_NPC_RockDog_Character_C_ReplicateBlackboardVariables_Params Parms{};

	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_NPCGOAPController = K2Node_DynamicCast_AsIcarus_NPCGOAPController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentPropertyState_ReturnValue = CallFunc_GetCurrentPropertyState_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPC_RockDog_Character.BP_NPC_RockDog_Character_C.GetCriticalHitAreas
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TMap<class UPrimitiveComponent*, struct FCriticalHitAreasEnum>ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)
// TMap<class UPrimitiveComponent*, struct FCriticalHitAreasEnum>CallFunc_GetCriticalHitAreas_ReturnValue                         (ContainsInstancedReference)
// TMap<class UPrimitiveComponent*, struct FCriticalHitAreasEnum>K2Node_MakeMap_Map                                               (ContainsInstancedReference)
// TMap<class UPrimitiveComponent*, struct FCriticalHitAreasEnum>CallFunc_AppendNewCriticalHitAreas_CombinedAreas                 (ContainsInstancedReference)

TMap<class UPrimitiveComponent*, struct FCriticalHitAreasEnum> ABP_NPC_RockDog_Character_C::GetCriticalHitAreas(TMap<class UPrimitiveComponent*, struct FCriticalHitAreasEnum> CallFunc_GetCriticalHitAreas_ReturnValue, TMap<class UPrimitiveComponent*, struct FCriticalHitAreasEnum> K2Node_MakeMap_Map, TMap<class UPrimitiveComponent*, struct FCriticalHitAreasEnum> CallFunc_AppendNewCriticalHitAreas_CombinedAreas)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_RockDog_Character_C", "GetCriticalHitAreas");

	Params::ABP_NPC_RockDog_Character_C_GetCriticalHitAreas_Params Parms{};

	Parms.CallFunc_GetCriticalHitAreas_ReturnValue = CallFunc_GetCriticalHitAreas_ReturnValue;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;
	Parms.CallFunc_AppendNewCriticalHitAreas_CombinedAreas = CallFunc_AppendNewCriticalHitAreas_CombinedAreas;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_NPC_RockDog_Character.BP_NPC_RockDog_Character_C.GetDamageSourceLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_NPC_RockDog_Character_C::GetDamageSourceLocation(const struct FVector& CallFunc_GetSocketLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_RockDog_Character_C", "GetDamageSourceLocation");

	Params::ABP_NPC_RockDog_Character_C_GetDamageSourceLocation_Params Parms{};

	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_NPC_RockDog_Character.BP_NPC_RockDog_Character_C.GetMontageForAction
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UIcarusGOAPAction>Action                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UAnimMontage> ActionMontage                                                    (Parm, OutParm, UObjectWrapper, HasGetValueTypeHash)
// class FName                        MontageSection                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        MontageNotify                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TSoftClassPtr<class UIcarusGOAPAction>AttackAction                                                     (Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UAnimMontage> CallFunc_GetMontageForAction_ActionMontage                       (UObjectWrapper, HasGetValueTypeHash)
// class FName                        CallFunc_GetMontageForAction_MontageSection                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetMontageForAction_MontageNotify                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMontageForAction_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSwimming_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_SoftClassReference_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_NPC_RockDog_Character_C::GetMontageForAction(TSoftClassPtr<class UIcarusGOAPAction>& Action, TSoftObjectPtr<class UAnimMontage>* ActionMontage, class FName* MontageSection, class FName* MontageNotify, TSoftClassPtr<class UIcarusGOAPAction> AttackAction, TSoftObjectPtr<class UAnimMontage> CallFunc_GetMontageForAction_ActionMontage, class FName CallFunc_GetMontageForAction_MontageSection, class FName CallFunc_GetMontageForAction_MontageNotify, bool CallFunc_GetMontageForAction_ReturnValue, bool CallFunc_IsSwimming_ReturnValue, bool CallFunc_EqualEqual_SoftClassReference_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_RockDog_Character_C", "GetMontageForAction");

	Params::ABP_NPC_RockDog_Character_C_GetMontageForAction_Params Parms{};

	Parms.Action = Action;
	Parms.AttackAction = AttackAction;
	Parms.CallFunc_GetMontageForAction_ActionMontage = CallFunc_GetMontageForAction_ActionMontage;
	Parms.CallFunc_GetMontageForAction_MontageSection = CallFunc_GetMontageForAction_MontageSection;
	Parms.CallFunc_GetMontageForAction_MontageNotify = CallFunc_GetMontageForAction_MontageNotify;
	Parms.CallFunc_GetMontageForAction_ReturnValue = CallFunc_GetMontageForAction_ReturnValue;
	Parms.CallFunc_IsSwimming_ReturnValue = CallFunc_IsSwimming_ReturnValue;
	Parms.CallFunc_EqualEqual_SoftClassReference_ReturnValue = CallFunc_EqualEqual_SoftClassReference_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ActionMontage != nullptr)
		*ActionMontage = Parms.ActionMontage;

	if (MontageSection != nullptr)
		*MontageSection = Parms.MontageSection;

	if (MontageNotify != nullptr)
		*MontageNotify = Parms.MontageNotify;

	return Parms.ReturnValue;

}


// Function BP_NPC_RockDog_Character.BP_NPC_RockDog_Character_C.GetAlertWidgetLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPC_RockDog_Character_C::GetAlertWidgetLocation(struct FVector* Location, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_RockDog_Character_C", "GetAlertWidgetLocation");

	Params::ABP_NPC_RockDog_Character_C_GetAlertWidgetLocation_Params Parms{};

	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function BP_NPC_RockDog_Character.BP_NPC_RockDog_Character_C.FindFloorAngle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Angle                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_ProjectVectorOnToPlane_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SignOfFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Dot_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DegAcos_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPC_RockDog_Character_C::FindFloorAngle(float* Angle, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_2, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_ProjectVectorOnToPlane_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_SignOfFloat_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue_1, float CallFunc_DegAcos_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_RockDog_Character_C", "FindFloorAngle");

	Params::ABP_NPC_RockDog_Character_C_FindFloorAngle_Params Parms{};

	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue_1 = CallFunc_GetActorForwardVector_ReturnValue_1;
	Parms.CallFunc_GetActorForwardVector_ReturnValue_2 = CallFunc_GetActorForwardVector_ReturnValue_2;
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
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_ProjectVectorOnToPlane_ReturnValue = CallFunc_ProjectVectorOnToPlane_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_SignOfFloat_ReturnValue = CallFunc_SignOfFloat_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue_1 = CallFunc_Dot_VectorVector_ReturnValue_1;
	Parms.CallFunc_DegAcos_ReturnValue = CallFunc_DegAcos_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Angle != nullptr)
		*Angle = Parms.Angle;

}


// Function BP_NPC_RockDog_Character.BP_NPC_RockDog_Character_C.EnrageTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_NPC_RockDog_Character_C::EnrageTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_RockDog_Character_C", "EnrageTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPC_RockDog_Character.BP_NPC_RockDog_Character_C.EnrageTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_NPC_RockDog_Character_C::EnrageTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_RockDog_Character_C", "EnrageTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPC_RockDog_Character.BP_NPC_RockDog_Character_C.EnrageEndTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_NPC_RockDog_Character_C::EnrageEndTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_RockDog_Character_C", "EnrageEndTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPC_RockDog_Character.BP_NPC_RockDog_Character_C.EnrageEndTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_NPC_RockDog_Character_C::EnrageEndTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_RockDog_Character_C", "EnrageEndTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPC_RockDog_Character.BP_NPC_RockDog_Character_C.UpdateEnrageMaterialStrength
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Strength                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPC_RockDog_Character_C::UpdateEnrageMaterialStrength(float Strength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_RockDog_Character_C", "UpdateEnrageMaterialStrength");

	Params::ABP_NPC_RockDog_Character_C_UpdateEnrageMaterialStrength_Params Parms{};

	Parms.Strength = Strength;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPC_RockDog_Character.BP_NPC_RockDog_Character_C.StartEnrageEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NPC_RockDog_Character_C::StartEnrageEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_RockDog_Character_C", "StartEnrageEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPC_RockDog_Character.BP_NPC_RockDog_Character_C.StopEnrageEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NPC_RockDog_Character_C::StopEnrageEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_RockDog_Character_C", "StopEnrageEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPC_RockDog_Character.BP_NPC_RockDog_Character_C.OnFootstepAnimNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECreatureFootstepType   FootstepType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECreatureFootstepDirectionFootstepDirection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPC_RockDog_Character_C::OnFootstepAnimNotify(enum class ECreatureFootstepType FootstepType, enum class ECreatureFootstepDirection FootstepDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_RockDog_Character_C", "OnFootstepAnimNotify");

	Params::ABP_NPC_RockDog_Character_C_OnFootstepAnimNotify_Params Parms{};

	Parms.FootstepType = FootstepType;
	Parms.FootstepDirection = FootstepDirection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPC_RockDog_Character.BP_NPC_RockDog_Character_C.ExecuteUbergraph_BP_NPC_RockDog_Character
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_wildcard_Variable_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_wildcard_Variable_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Strength                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_wildcard_Variable_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECreatureFootstepType   K2Node_Event_FootstepType                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECreatureFootstepDirectionK2Node_Event_FootstepDirection                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    Temp_wildcard_Variable_4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_FlammableArea_Small_C*   CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPC_RockDog_Character_C::ExecuteUbergraph_BP_NPC_RockDog_Character(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class FName Temp_wildcard_Variable, class FName Temp_wildcard_Variable_1, class FName Temp_wildcard_Variable_2, float K2Node_CustomEvent_Strength, float CallFunc_Multiply_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, float Temp_wildcard_Variable_3, float CallFunc_Multiply_FloatFloat_ReturnValue_1, enum class ECreatureFootstepType K2Node_Event_FootstepType, enum class ECreatureFootstepDirection K2Node_Event_FootstepDirection, class UMaterialInstanceDynamic* Temp_wildcard_Variable_4, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_FlammableArea_Small_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_RockDog_Character_C", "ExecuteUbergraph_BP_NPC_RockDog_Character");

	Params::ABP_NPC_RockDog_Character_C_ExecuteUbergraph_BP_NPC_RockDog_Character_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.Temp_wildcard_Variable_1 = Temp_wildcard_Variable_1;
	Parms.Temp_wildcard_Variable_2 = Temp_wildcard_Variable_2;
	Parms.K2Node_CustomEvent_Strength = K2Node_CustomEvent_Strength;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_wildcard_Variable_3 = Temp_wildcard_Variable_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.K2Node_Event_FootstepType = K2Node_Event_FootstepType;
	Parms.K2Node_Event_FootstepDirection = K2Node_Event_FootstepDirection;
	Parms.Temp_wildcard_Variable_4 = Temp_wildcard_Variable_4;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


