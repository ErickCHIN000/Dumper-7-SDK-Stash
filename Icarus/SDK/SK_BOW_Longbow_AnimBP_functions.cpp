#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C
// (None)

class UClass* USK_BOW_Longbow_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_BOW_Longbow_AnimBP_C");

	return Clss;
}


// SK_BOW_Longbow_AnimBP_C SK_BOW_Longbow_AnimBP.Default__SK_BOW_Longbow_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_BOW_Longbow_AnimBP_C* USK_BOW_Longbow_AnimBP_C::GetDefaultObj()
{
	static class USK_BOW_Longbow_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_BOW_Longbow_AnimBP_C*>(USK_BOW_Longbow_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USK_BOW_Longbow_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_BOW_Longbow_AnimBP_C", "AnimGraph");

	Params::USK_BOW_Longbow_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C.CacheHandArrowPlacement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_BOW_Longbow_AnimBP_C::CacheHandArrowPlacement(bool Temp_bool_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class AActor* CallFunc_GetOwningActor_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class FName K2Node_Select_Default, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_BOW_Longbow_AnimBP_C", "CacheHandArrowPlacement");

	Params::USK_BOW_Longbow_AnimBP_C_CacheHandArrowPlacement_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C.CacheStringPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetFirstPersonMesh_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)

void USK_BOW_Longbow_AnimBP_C::CacheStringPosition(bool Temp_bool_Variable, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue, class USceneComponent* K2Node_Select_Default, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_BOW_Longbow_AnimBP_C", "CacheStringPosition");

	Params::USK_BOW_Longbow_AnimBP_C_CacheStringPosition_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetFirstPersonMesh_ReturnValue = CallFunc_GetFirstPersonMesh_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C.CacheThirdPerson
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsThirdPerson_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void USK_BOW_Longbow_AnimBP_C::CacheThirdPerson(class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue, bool CallFunc_GetIsThirdPerson_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_BOW_Longbow_AnimBP_C", "CacheThirdPerson");

	Params::USK_BOW_Longbow_AnimBP_C_CacheThirdPerson_Params Parms{};

	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.CallFunc_GetIsThirdPerson_ReturnValue = CallFunc_GetIsThirdPerson_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C.CacheFocusing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_FocusableBehaviour_C*    CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void USK_BOW_Longbow_AnimBP_C::CacheFocusing(bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UBP_FocusableBehaviour_C* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_BOW_Longbow_AnimBP_C", "CacheFocusing");

	Params::USK_BOW_Longbow_AnimBP_C_CacheFocusing_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C.IsHandConnectedToString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHandConnectedToString_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHandConnectedToString_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReloading_IsReloading                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHandConnectedToString_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool USK_BOW_Longbow_AnimBP_C::IsHandConnectedToString(bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsHandConnectedToString_ReturnValue, bool CallFunc_IsHandConnectedToString_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsReloading_IsReloading, bool CallFunc_IsHandConnectedToString_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_BOW_Longbow_AnimBP_C", "IsHandConnectedToString");

	Params::USK_BOW_Longbow_AnimBP_C_IsHandConnectedToString_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsHandConnectedToString_ReturnValue = CallFunc_IsHandConnectedToString_ReturnValue;
	Parms.CallFunc_IsHandConnectedToString_ReturnValue_1 = CallFunc_IsHandConnectedToString_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsReloading_IsReloading = CallFunc_IsReloading_IsReloading;
	Parms.CallFunc_IsHandConnectedToString_ReturnValue_2 = CallFunc_IsHandConnectedToString_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_BlendListByBool_D7940AD64B37E8BEA845C2A18C4FD86C
// (BlueprintEvent)
// Parameters:

void USK_BOW_Longbow_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_BlendListByBool_D7940AD64B37E8BEA845C2A18C4FD86C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_BOW_Longbow_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_BlendListByBool_D7940AD64B37E8BEA845C2A18C4FD86C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_SequencePlayer_4A2404824A08E424DAF3A4BA753A97BE
// (BlueprintEvent)
// Parameters:

void USK_BOW_Longbow_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_SequencePlayer_4A2404824A08E424DAF3A4BA753A97BE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_BOW_Longbow_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_SequencePlayer_4A2404824A08E424DAF3A4BA753A97BE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_BlendListByBool_D3E8A1FE4BB1A8BC9F8CFC80F89D5E09
// (BlueprintEvent)
// Parameters:

void USK_BOW_Longbow_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_BlendListByBool_D3E8A1FE4BB1A8BC9F8CFC80F89D5E09()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_BOW_Longbow_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_BlendListByBool_D3E8A1FE4BB1A8BC9F8CFC80F89D5E09");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_SequenceEvaluator_595421C94D66207DCDE8EFA1D2C571C7
// (BlueprintEvent)
// Parameters:

void USK_BOW_Longbow_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_SequenceEvaluator_595421C94D66207DCDE8EFA1D2C571C7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_BOW_Longbow_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_SequenceEvaluator_595421C94D66207DCDE8EFA1D2C571C7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_SequenceEvaluator_9CA2EBF6477B6F236BD1439AF9F9EE08
// (BlueprintEvent)
// Parameters:

void USK_BOW_Longbow_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_SequenceEvaluator_9CA2EBF6477B6F236BD1439AF9F9EE08()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_BOW_Longbow_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_SequenceEvaluator_9CA2EBF6477B6F236BD1439AF9F9EE08");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_BOW_Longbow_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_BOW_Longbow_AnimBP_C", "BlueprintUpdateAnimation");

	Params::USK_BOW_Longbow_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C.AnimNotify_Bow_AttachArrow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USK_BOW_Longbow_AnimBP_C::AnimNotify_Bow_AttachArrow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_BOW_Longbow_AnimBP_C", "AnimNotify_Bow_AttachArrow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C.AnimNotify_Bow_DetachArrow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USK_BOW_Longbow_AnimBP_C::AnimNotify_Bow_DetachArrow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_BOW_Longbow_AnimBP_C", "AnimNotify_Bow_DetachArrow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_SequencePlayer_E32111814FB4E3E3640C89B10C4AEEAA
// (BlueprintEvent)
// Parameters:

void USK_BOW_Longbow_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_SequencePlayer_E32111814FB4E3E3640C89B10C4AEEAA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_BOW_Longbow_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_SequencePlayer_E32111814FB4E3E3640C89B10C4AEEAA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C.ExecuteUbergraph_SK_BOW_Longbow_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_DynamicCast_AsAnim_Sequence                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimSequence*               K2Node_DynamicCast_AsAnim_Sequence_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_DynamicCast_AsAnim_Sequence_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_DynamicCast_AsAnim_Sequence_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_ActionableBehaviour_Firearm_C*K2Node_DynamicCast_AsBP_Actionable_Behaviour_Firearm             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_ActionableBehaviour_Firearm_Base_C*K2Node_DynamicCast_AsBP_Actionable_Behaviour_Firearm_Base        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHandConnectedToString_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_ActionableBehaviour_Firearm_AimController_Base_C*CallFunc_GetAimController_AimController                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C*CallFunc_GetAmmoController_AmmoController                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionableBehaviour_FireArm_FireController_Base_C*CallFunc_GetFireController_FireController                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsADS_ADS                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAiming_IsAiming                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_ActionableBehaviour_FireArm_FireController_Charge_C*K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fire_Arm_Fire_Controller_Charge(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurrentChargePower_ChargePower                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_BOW_Longbow_AnimBP_C::ExecuteUbergraph_SK_BOW_Longbow_AnimBP(int32 EntryPoint, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UAnimSequence* K2Node_DynamicCast_AsAnim_Sequence, bool K2Node_DynamicCast_bSuccess, class UAnimSequence* K2Node_DynamicCast_AsAnim_Sequence_1, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class UAnimSequence* K2Node_DynamicCast_AsAnim_Sequence_2, bool K2Node_DynamicCast_bSuccess_2, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3, class UAnimSequence* K2Node_DynamicCast_AsAnim_Sequence_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_ActionableBehaviour_Firearm_C* K2Node_DynamicCast_AsBP_Actionable_Behaviour_Firearm, bool K2Node_DynamicCast_bSuccess_4, class UBP_ActionableBehaviour_Firearm_Base_C* K2Node_DynamicCast_AsBP_Actionable_Behaviour_Firearm_Base, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsHandConnectedToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UBP_ActionableBehaviour_Firearm_AimController_Base_C* CallFunc_GetAimController_AimController, class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* CallFunc_GetAmmoController_AmmoController, class UBP_ActionableBehaviour_FireArm_FireController_Base_C* CallFunc_GetFireController_FireController, float K2Node_Event_DeltaTimeX, bool CallFunc_IsADS_ADS, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsAiming_IsAiming, class UBP_ActionableBehaviour_FireArm_FireController_Charge_C* K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fire_Arm_Fire_Controller_Charge, bool K2Node_DynamicCast_bSuccess_6, float CallFunc_GetCurrentChargePower_ChargePower)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_BOW_Longbow_AnimBP_C", "ExecuteUbergraph_SK_BOW_Longbow_AnimBP");

	Params::USK_BOW_Longbow_AnimBP_C_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAnim_Sequence = K2Node_DynamicCast_AsAnim_Sequence;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsAnim_Sequence_1 = K2Node_DynamicCast_AsAnim_Sequence_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsAnim_Sequence_2 = K2Node_DynamicCast_AsAnim_Sequence_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsAnim_Sequence_3 = K2Node_DynamicCast_AsAnim_Sequence_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Actionable_Behaviour_Firearm = K2Node_DynamicCast_AsBP_Actionable_Behaviour_Firearm;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsBP_Actionable_Behaviour_Firearm_Base = K2Node_DynamicCast_AsBP_Actionable_Behaviour_Firearm_Base;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_IsHandConnectedToString_ReturnValue = CallFunc_IsHandConnectedToString_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetAimController_AimController = CallFunc_GetAimController_AimController;
	Parms.CallFunc_GetAmmoController_AmmoController = CallFunc_GetAmmoController_AmmoController;
	Parms.CallFunc_GetFireController_FireController = CallFunc_GetFireController_FireController;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_IsADS_ADS = CallFunc_IsADS_ADS;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsAiming_IsAiming = CallFunc_IsAiming_IsAiming;
	Parms.K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fire_Arm_Fire_Controller_Charge = K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fire_Arm_Fire_Controller_Charge;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetCurrentChargePower_ChargePower = CallFunc_GetCurrentChargePower_ChargePower;

	UObject::ProcessEvent(Func, &Parms);

}

}


