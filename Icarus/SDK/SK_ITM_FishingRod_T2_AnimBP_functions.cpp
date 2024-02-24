#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_ITM_FishingRod_T2_AnimBP.SK_ITM_FishingRod_T2_AnimBP_C
// (None)

class UClass* USK_ITM_FishingRod_T2_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_ITM_FishingRod_T2_AnimBP_C");

	return Clss;
}


// SK_ITM_FishingRod_T2_AnimBP_C SK_ITM_FishingRod_T2_AnimBP.Default__SK_ITM_FishingRod_T2_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_ITM_FishingRod_T2_AnimBP_C* USK_ITM_FishingRod_T2_AnimBP_C::GetDefaultObj()
{
	static class USK_ITM_FishingRod_T2_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_ITM_FishingRod_T2_AnimBP_C*>(USK_ITM_FishingRod_T2_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_ITM_FishingRod_T2_AnimBP.SK_ITM_FishingRod_T2_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USK_ITM_FishingRod_T2_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_ITM_FishingRod_T2_AnimBP_C", "AnimGraph");

	Params::USK_ITM_FishingRod_T2_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SK_ITM_FishingRod_T2_AnimBP.SK_ITM_FishingRod_T2_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_ITM_FishingRod_T2_AnimBP_AnimGraphNode_ModifyBone_99CC83BD479B6388B303B6AA9641FEBC
// (BlueprintEvent)
// Parameters:

void USK_ITM_FishingRod_T2_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_ITM_FishingRod_T2_AnimBP_AnimGraphNode_ModifyBone_99CC83BD479B6388B303B6AA9641FEBC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_ITM_FishingRod_T2_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_ITM_FishingRod_T2_AnimBP_AnimGraphNode_ModifyBone_99CC83BD479B6388B303B6AA9641FEBC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_ITM_FishingRod_T2_AnimBP.SK_ITM_FishingRod_T2_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_ITM_FishingRod_T2_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_ITM_FishingRod_T2_AnimBP_C", "BlueprintUpdateAnimation");

	Params::USK_ITM_FishingRod_T2_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_ITM_FishingRod_T2_AnimBP.SK_ITM_FishingRod_T2_AnimBP_C.ExecuteUbergraph_SK_ITM_FishingRod_T2_AnimBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SkeletalItem_Fishing_Rod_C*K2Node_DynamicCast_AsBP_Skeletal_Item_Fishing_Rod                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActionableComponent*        CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetOwningIcarusPlayerCharacter_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTraitBehaviour*             CallFunc_GetFirstBehaviourOfType_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_ActionableBehaviour_Fishing_Rod_C*K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fishing_Rod         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldPlayReelingAnimation_ShouldPlay                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_SkeletalItem_Fishing_Rod_C*CallFunc_GetFishingRod_BP_Skeletal_Item_Fishing_Rod              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCasted_Casted                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Fishing_Rod_Lure_C*      CallFunc_GetLure_Lure                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_CalculateVelocityFromPositionHistory_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetFirstPersonMesh_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetVisibleCharacterMesh_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)

void USK_ITM_FishingRod_T2_AnimBP_C::ExecuteUbergraph_SK_ITM_FishingRod_T2_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, bool Temp_bool_Variable, float CallFunc_Conv_BoolToFloat_ReturnValue, class FName Temp_name_Variable, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue_1, class ABP_SkeletalItem_Fishing_Rod_C* K2Node_DynamicCast_AsBP_Skeletal_Item_Fishing_Rod, bool K2Node_DynamicCast_bSuccess, enum class EValid CallFunc_GetTrait_Paths, class UActionableComponent* CallFunc_GetTrait_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetOwningIcarusPlayerCharacter_ReturnValue, class UTraitBehaviour* CallFunc_GetFirstBehaviourOfType_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_ActionableBehaviour_Fishing_Rod_C* K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fishing_Rod, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_ShouldPlayReelingAnimation_ShouldPlay, class ABP_SkeletalItem_Fishing_Rod_C* CallFunc_GetFishingRod_BP_Skeletal_Item_Fishing_Rod, bool CallFunc_IsCasted_Casted, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, float CallFunc_Divide_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_FMax_ReturnValue, class ABP_Fishing_Rod_Lure_C* CallFunc_GetLure_Lure, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_K2_CalculateVelocityFromPositionHistory_ReturnValue, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class USkeletalMeshComponent* CallFunc_GetVisibleCharacterMesh_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float Temp_wildcard_Variable, float CallFunc_FMin_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class FName Temp_name_Variable_1, class FName K2Node_Select_Default, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_ITM_FishingRod_T2_AnimBP_C", "ExecuteUbergraph_SK_ITM_FishingRod_T2_AnimBP");

	Params::USK_ITM_FishingRod_T2_AnimBP_C_ExecuteUbergraph_SK_ITM_FishingRod_T2_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue_1 = CallFunc_GetOwningActor_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Skeletal_Item_Fishing_Rod = K2Node_DynamicCast_AsBP_Skeletal_Item_Fishing_Rod;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_GetOwningIcarusPlayerCharacter_ReturnValue = CallFunc_GetOwningIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetFirstBehaviourOfType_ReturnValue = CallFunc_GetFirstBehaviourOfType_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fishing_Rod = K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fishing_Rod;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_ShouldPlayReelingAnimation_ShouldPlay = CallFunc_ShouldPlayReelingAnimation_ShouldPlay;
	Parms.CallFunc_GetFishingRod_BP_Skeletal_Item_Fishing_Rod = CallFunc_GetFishingRod_BP_Skeletal_Item_Fishing_Rod;
	Parms.CallFunc_IsCasted_Casted = CallFunc_IsCasted_Casted;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_GetLure_Lure = CallFunc_GetLure_Lure;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_CalculateVelocityFromPositionHistory_ReturnValue = CallFunc_K2_CalculateVelocityFromPositionHistory_ReturnValue;
	Parms.CallFunc_GetFirstPersonMesh_ReturnValue = CallFunc_GetFirstPersonMesh_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetVisibleCharacterMesh_ReturnValue = CallFunc_GetVisibleCharacterMesh_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


