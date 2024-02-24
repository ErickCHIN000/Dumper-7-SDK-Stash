#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint.SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C
// (None)

class UClass* USK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C");

	return Clss;
}


// SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint.Default__SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C* USK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class USK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C*>(USK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint.SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::USK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint.SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_92A4012B473AB4B30E1C49ADACAD368B
// (BlueprintEvent)
// Parameters:

void USK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_92A4012B473AB4B30E1C49ADACAD368B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_92A4012B473AB4B30E1C49ADACAD368B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint.SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_15087A6A449F8634B0209B8B01722CFE
// (BlueprintEvent)
// Parameters:

void USK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_15087A6A449F8634B0209B8B01722CFE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_15087A6A449F8634B0209B8B01722CFE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint.SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::USK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint.SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsThirdPerson_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionableBehaviour_Firearm_Base_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C*CallFunc_GetAmmoController_AmmoController                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAmmo_HasAmmo                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void USK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C::ExecuteUbergraph_SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_GetIsThirdPerson_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsLocalPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_Conv_BoolToFloat_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_SelectFloat_ReturnValue, float K2Node_Event_DeltaTimeX, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, class UBP_ActionableBehaviour_Firearm_Base_C* CallFunc_GetComponentByClass_ReturnValue, class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* CallFunc_GetAmmoController_AmmoController, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_HasAmmo_HasAmmo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint");

	Params::USK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C_ExecuteUbergraph_SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetIsThirdPerson_ReturnValue = CallFunc_GetIsThirdPerson_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetAmmoController_AmmoController = CallFunc_GetAmmoController_AmmoController;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_HasAmmo_HasAmmo = CallFunc_HasAmmo_HasAmmo;

	UObject::ProcessEvent(Func, &Parms);

}

}


