#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionableBehaviour_BuildingUpgrade.BP_ActionableBehaviour_BuildingUpgrade_C
// (None)

class UClass* UBP_ActionableBehaviour_BuildingUpgrade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionableBehaviour_BuildingUpgrade_C");

	return Clss;
}


// BP_ActionableBehaviour_BuildingUpgrade_C BP_ActionableBehaviour_BuildingUpgrade.Default__BP_ActionableBehaviour_BuildingUpgrade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionableBehaviour_BuildingUpgrade_C* UBP_ActionableBehaviour_BuildingUpgrade_C::GetDefaultObj()
{
	static class UBP_ActionableBehaviour_BuildingUpgrade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionableBehaviour_BuildingUpgrade_C*>(UBP_ActionableBehaviour_BuildingUpgrade_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionableBehaviour_BuildingUpgrade.BP_ActionableBehaviour_BuildingUpgrade_C.PlaySwing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacterSurvival*TargetPlayer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_TryGetMissAnimations_TP_AnimNames                       (ReferenceParm)
// TArray<class FName>                CallFunc_TryGetMissAnimations_FP_AnimNames                       (ReferenceParm)
// TArray<class FName>                CallFunc_TryGetFailAnimations_TP_AnimNames                       (ReferenceParm)
// TArray<class FName>                CallFunc_TryGetFailAnimations_FP_AnimNames                       (ReferenceParm)
// TArray<class FName>                CallFunc_TryGetSuccessAnimations_TP_AnimNames                    (ReferenceParm)
// TArray<class FName>                CallFunc_TryGetSuccessAnimations_FP_AnimNames                    (ReferenceParm)
// float                              CallFunc_GetCooldownSpeedMultiplier_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_GetHitFromViewTraces_OutHit                             (IsPlainOldData, NoDestructor, ContainsInstancedReference)
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
// enum class ECanHitResult           CallFunc_CanHitWithSuccessType_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FValidHitTypesRowHandle     CallFunc_CanHitWithSuccessType_Out_ValidHitType                  (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_BuildingUpgrade_C::PlaySwing(class AIcarusPlayerCharacterSurvival* TargetPlayer, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class FName>& CallFunc_TryGetMissAnimations_TP_AnimNames, TArray<class FName>& CallFunc_TryGetMissAnimations_FP_AnimNames, TArray<class FName>& CallFunc_TryGetFailAnimations_TP_AnimNames, TArray<class FName>& CallFunc_TryGetFailAnimations_FP_AnimNames, TArray<class FName>& CallFunc_TryGetSuccessAnimations_TP_AnimNames, TArray<class FName>& CallFunc_TryGetSuccessAnimations_FP_AnimNames, float CallFunc_GetCooldownSpeedMultiplier_ReturnValue, const struct FHitResult& CallFunc_GetHitFromViewTraces_OutHit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, enum class ECanHitResult CallFunc_CanHitWithSuccessType_Result, const struct FValidHitTypesRowHandle& CallFunc_CanHitWithSuccessType_Out_ValidHitType, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_BuildingUpgrade_C", "PlaySwing");

	Params::UBP_ActionableBehaviour_BuildingUpgrade_C_PlaySwing_Params Parms{};

	Parms.TargetPlayer = TargetPlayer;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_TryGetMissAnimations_TP_AnimNames = CallFunc_TryGetMissAnimations_TP_AnimNames;
	Parms.CallFunc_TryGetMissAnimations_FP_AnimNames = CallFunc_TryGetMissAnimations_FP_AnimNames;
	Parms.CallFunc_TryGetFailAnimations_TP_AnimNames = CallFunc_TryGetFailAnimations_TP_AnimNames;
	Parms.CallFunc_TryGetFailAnimations_FP_AnimNames = CallFunc_TryGetFailAnimations_FP_AnimNames;
	Parms.CallFunc_TryGetSuccessAnimations_TP_AnimNames = CallFunc_TryGetSuccessAnimations_TP_AnimNames;
	Parms.CallFunc_TryGetSuccessAnimations_FP_AnimNames = CallFunc_TryGetSuccessAnimations_FP_AnimNames;
	Parms.CallFunc_GetCooldownSpeedMultiplier_ReturnValue = CallFunc_GetCooldownSpeedMultiplier_ReturnValue;
	Parms.CallFunc_GetHitFromViewTraces_OutHit = CallFunc_GetHitFromViewTraces_OutHit;
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
	Parms.CallFunc_CanHitWithSuccessType_Result = CallFunc_CanHitWithSuccessType_Result;
	Parms.CallFunc_CanHitWithSuccessType_Out_ValidHitType = CallFunc_CanHitWithSuccessType_Out_ValidHitType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_BuildingUpgrade.BP_ActionableBehaviour_BuildingUpgrade_C.GetHitFromViewTraces
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  OutHit                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetCameraRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_BuildingUpgrade_C::GetHitFromViewTraces(struct FHitResult* OutHit, TArray<class AActor*>& K2Node_MakeArray_Array, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_BuildingUpgrade_C", "GetHitFromViewTraces");

	Params::UBP_ActionableBehaviour_BuildingUpgrade_C_GetHitFromViewTraces_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_GetCameraRotation_ReturnValue = CallFunc_GetCameraRotation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutHit != nullptr)
		*OutHit = std::move(Parms.OutHit);

}


// Function BP_ActionableBehaviour_BuildingUpgrade.BP_ActionableBehaviour_BuildingUpgrade_C.GetHitFromCamera
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  OutHit                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetCameraRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_BuildingUpgrade_C::GetHitFromCamera(struct FHitResult* OutHit, TArray<class AActor*>& K2Node_MakeArray_Array, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_BuildingUpgrade_C", "GetHitFromCamera");

	Params::UBP_ActionableBehaviour_BuildingUpgrade_C_GetHitFromCamera_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_GetCameraRotation_ReturnValue = CallFunc_GetCameraRotation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutHit != nullptr)
		*OutHit = std::move(Parms.OutHit);

}


// Function BP_ActionableBehaviour_BuildingUpgrade.BP_ActionableBehaviour_BuildingUpgrade_C.GetContextMenuItems
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FContextMenuItemData>MenuItems                                                        (Parm, OutParm, ContainsInstancedReference)
// struct FItemData                   K2Node_MakeStruct_ItemData                                       (ContainsInstancedReference)
// struct FItemData                   K2Node_MakeStruct_ItemData_1                                     (ContainsInstancedReference)
// struct FItemableData               CallFunc_GetItemableData_ItemableData                            (None)
// enum class EDataValid              CallFunc_GetItemableData_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemableData               CallFunc_GetItemableData_ItemableData_1                          (None)
// enum class EDataValid              CallFunc_GetItemableData_Paths_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FContextMenuItemData        K2Node_MakeStruct_ContextMenuItemData                            (ContainsInstancedReference)
// struct FContextMenuItemData        K2Node_MakeStruct_ContextMenuItemData_1                          (ContainsInstancedReference)
// struct FItemData                   K2Node_MakeStruct_ItemData_2                                     (ContainsInstancedReference)
// struct FItemData                   K2Node_MakeStruct_ItemData_3                                     (ContainsInstancedReference)
// struct FItemableData               CallFunc_GetItemableData_ItemableData_2                          (None)
// enum class EDataValid              CallFunc_GetItemableData_Paths_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemableData               CallFunc_GetItemableData_ItemableData_3                          (None)
// enum class EDataValid              CallFunc_GetItemableData_Paths_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FContextMenuItemData        K2Node_MakeStruct_ContextMenuItemData_2                          (ContainsInstancedReference)
// struct FContextMenuItemData        K2Node_MakeStruct_ContextMenuItemData_3                          (ContainsInstancedReference)
// struct FItemData                   K2Node_MakeStruct_ItemData_4                                     (ContainsInstancedReference)
// struct FItemData                   K2Node_MakeStruct_ItemData_5                                     (ContainsInstancedReference)
// struct FItemableData               CallFunc_GetItemableData_ItemableData_4                          (None)
// enum class EDataValid              CallFunc_GetItemableData_Paths_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemableData               CallFunc_GetItemableData_ItemableData_5                          (None)
// enum class EDataValid              CallFunc_GetItemableData_Paths_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FContextMenuItemData        K2Node_MakeStruct_ContextMenuItemData_4                          (ContainsInstancedReference)
// struct FContextMenuItemData        K2Node_MakeStruct_ContextMenuItemData_5                          (ContainsInstancedReference)
// struct FItemData                   K2Node_MakeStruct_ItemData_6                                     (ContainsInstancedReference)
// struct FItemData                   K2Node_MakeStruct_ItemData_7                                     (ContainsInstancedReference)
// struct FItemableData               CallFunc_GetItemableData_ItemableData_6                          (None)
// enum class EDataValid              CallFunc_GetItemableData_Paths_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemableData               CallFunc_GetItemableData_ItemableData_7                          (None)
// enum class EDataValid              CallFunc_GetItemableData_Paths_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FContextMenuItemData        K2Node_MakeStruct_ContextMenuItemData_6                          (ContainsInstancedReference)
// struct FContextMenuItemData        K2Node_MakeStruct_ContextMenuItemData_7                          (ContainsInstancedReference)
// struct FItemData                   K2Node_MakeStruct_ItemData_8                                     (ContainsInstancedReference)
// struct FItemData                   K2Node_MakeStruct_ItemData_9                                     (ContainsInstancedReference)
// struct FItemableData               CallFunc_GetItemableData_ItemableData_8                          (None)
// enum class EDataValid              CallFunc_GetItemableData_Paths_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemableData               CallFunc_GetItemableData_ItemableData_9                          (None)
// enum class EDataValid              CallFunc_GetItemableData_Paths_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FContextMenuItemData        K2Node_MakeStruct_ContextMenuItemData_8                          (ContainsInstancedReference)
// struct FContextMenuItemData        K2Node_MakeStruct_ContextMenuItemData_9                          (ContainsInstancedReference)
// TArray<struct FContextMenuItemData>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void UBP_ActionableBehaviour_BuildingUpgrade_C::GetContextMenuItems(TArray<struct FContextMenuItemData>* MenuItems, const struct FItemData& K2Node_MakeStruct_ItemData, const struct FItemData& K2Node_MakeStruct_ItemData_1, const struct FItemableData& CallFunc_GetItemableData_ItemableData, enum class EDataValid CallFunc_GetItemableData_Paths, const struct FItemableData& CallFunc_GetItemableData_ItemableData_1, enum class EDataValid CallFunc_GetItemableData_Paths_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FContextMenuItemData& K2Node_MakeStruct_ContextMenuItemData, const struct FContextMenuItemData& K2Node_MakeStruct_ContextMenuItemData_1, const struct FItemData& K2Node_MakeStruct_ItemData_2, const struct FItemData& K2Node_MakeStruct_ItemData_3, const struct FItemableData& CallFunc_GetItemableData_ItemableData_2, enum class EDataValid CallFunc_GetItemableData_Paths_2, const struct FItemableData& CallFunc_GetItemableData_ItemableData_3, enum class EDataValid CallFunc_GetItemableData_Paths_3, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, const struct FContextMenuItemData& K2Node_MakeStruct_ContextMenuItemData_2, const struct FContextMenuItemData& K2Node_MakeStruct_ContextMenuItemData_3, const struct FItemData& K2Node_MakeStruct_ItemData_4, const struct FItemData& K2Node_MakeStruct_ItemData_5, const struct FItemableData& CallFunc_GetItemableData_ItemableData_4, enum class EDataValid CallFunc_GetItemableData_Paths_4, const struct FItemableData& CallFunc_GetItemableData_ItemableData_5, enum class EDataValid CallFunc_GetItemableData_Paths_5, bool K2Node_SwitchEnum_CmpSuccess_4, bool K2Node_SwitchEnum_CmpSuccess_5, const struct FContextMenuItemData& K2Node_MakeStruct_ContextMenuItemData_4, const struct FContextMenuItemData& K2Node_MakeStruct_ContextMenuItemData_5, const struct FItemData& K2Node_MakeStruct_ItemData_6, const struct FItemData& K2Node_MakeStruct_ItemData_7, const struct FItemableData& CallFunc_GetItemableData_ItemableData_6, enum class EDataValid CallFunc_GetItemableData_Paths_6, const struct FItemableData& CallFunc_GetItemableData_ItemableData_7, enum class EDataValid CallFunc_GetItemableData_Paths_7, bool K2Node_SwitchEnum_CmpSuccess_6, bool K2Node_SwitchEnum_CmpSuccess_7, const struct FContextMenuItemData& K2Node_MakeStruct_ContextMenuItemData_6, const struct FContextMenuItemData& K2Node_MakeStruct_ContextMenuItemData_7, const struct FItemData& K2Node_MakeStruct_ItemData_8, const struct FItemData& K2Node_MakeStruct_ItemData_9, const struct FItemableData& CallFunc_GetItemableData_ItemableData_8, enum class EDataValid CallFunc_GetItemableData_Paths_8, const struct FItemableData& CallFunc_GetItemableData_ItemableData_9, enum class EDataValid CallFunc_GetItemableData_Paths_9, bool K2Node_SwitchEnum_CmpSuccess_8, bool K2Node_SwitchEnum_CmpSuccess_9, const struct FContextMenuItemData& K2Node_MakeStruct_ContextMenuItemData_8, const struct FContextMenuItemData& K2Node_MakeStruct_ContextMenuItemData_9, TArray<struct FContextMenuItemData>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_BuildingUpgrade_C", "GetContextMenuItems");

	Params::UBP_ActionableBehaviour_BuildingUpgrade_C_GetContextMenuItems_Params Parms{};

	Parms.K2Node_MakeStruct_ItemData = K2Node_MakeStruct_ItemData;
	Parms.K2Node_MakeStruct_ItemData_1 = K2Node_MakeStruct_ItemData_1;
	Parms.CallFunc_GetItemableData_ItemableData = CallFunc_GetItemableData_ItemableData;
	Parms.CallFunc_GetItemableData_Paths = CallFunc_GetItemableData_Paths;
	Parms.CallFunc_GetItemableData_ItemableData_1 = CallFunc_GetItemableData_ItemableData_1;
	Parms.CallFunc_GetItemableData_Paths_1 = CallFunc_GetItemableData_Paths_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_MakeStruct_ContextMenuItemData = K2Node_MakeStruct_ContextMenuItemData;
	Parms.K2Node_MakeStruct_ContextMenuItemData_1 = K2Node_MakeStruct_ContextMenuItemData_1;
	Parms.K2Node_MakeStruct_ItemData_2 = K2Node_MakeStruct_ItemData_2;
	Parms.K2Node_MakeStruct_ItemData_3 = K2Node_MakeStruct_ItemData_3;
	Parms.CallFunc_GetItemableData_ItemableData_2 = CallFunc_GetItemableData_ItemableData_2;
	Parms.CallFunc_GetItemableData_Paths_2 = CallFunc_GetItemableData_Paths_2;
	Parms.CallFunc_GetItemableData_ItemableData_3 = CallFunc_GetItemableData_ItemableData_3;
	Parms.CallFunc_GetItemableData_Paths_3 = CallFunc_GetItemableData_Paths_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.K2Node_MakeStruct_ContextMenuItemData_2 = K2Node_MakeStruct_ContextMenuItemData_2;
	Parms.K2Node_MakeStruct_ContextMenuItemData_3 = K2Node_MakeStruct_ContextMenuItemData_3;
	Parms.K2Node_MakeStruct_ItemData_4 = K2Node_MakeStruct_ItemData_4;
	Parms.K2Node_MakeStruct_ItemData_5 = K2Node_MakeStruct_ItemData_5;
	Parms.CallFunc_GetItemableData_ItemableData_4 = CallFunc_GetItemableData_ItemableData_4;
	Parms.CallFunc_GetItemableData_Paths_4 = CallFunc_GetItemableData_Paths_4;
	Parms.CallFunc_GetItemableData_ItemableData_5 = CallFunc_GetItemableData_ItemableData_5;
	Parms.CallFunc_GetItemableData_Paths_5 = CallFunc_GetItemableData_Paths_5;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.K2Node_MakeStruct_ContextMenuItemData_4 = K2Node_MakeStruct_ContextMenuItemData_4;
	Parms.K2Node_MakeStruct_ContextMenuItemData_5 = K2Node_MakeStruct_ContextMenuItemData_5;
	Parms.K2Node_MakeStruct_ItemData_6 = K2Node_MakeStruct_ItemData_6;
	Parms.K2Node_MakeStruct_ItemData_7 = K2Node_MakeStruct_ItemData_7;
	Parms.CallFunc_GetItemableData_ItemableData_6 = CallFunc_GetItemableData_ItemableData_6;
	Parms.CallFunc_GetItemableData_Paths_6 = CallFunc_GetItemableData_Paths_6;
	Parms.CallFunc_GetItemableData_ItemableData_7 = CallFunc_GetItemableData_ItemableData_7;
	Parms.CallFunc_GetItemableData_Paths_7 = CallFunc_GetItemableData_Paths_7;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;
	Parms.K2Node_SwitchEnum_CmpSuccess_7 = K2Node_SwitchEnum_CmpSuccess_7;
	Parms.K2Node_MakeStruct_ContextMenuItemData_6 = K2Node_MakeStruct_ContextMenuItemData_6;
	Parms.K2Node_MakeStruct_ContextMenuItemData_7 = K2Node_MakeStruct_ContextMenuItemData_7;
	Parms.K2Node_MakeStruct_ItemData_8 = K2Node_MakeStruct_ItemData_8;
	Parms.K2Node_MakeStruct_ItemData_9 = K2Node_MakeStruct_ItemData_9;
	Parms.CallFunc_GetItemableData_ItemableData_8 = CallFunc_GetItemableData_ItemableData_8;
	Parms.CallFunc_GetItemableData_Paths_8 = CallFunc_GetItemableData_Paths_8;
	Parms.CallFunc_GetItemableData_ItemableData_9 = CallFunc_GetItemableData_ItemableData_9;
	Parms.CallFunc_GetItemableData_Paths_9 = CallFunc_GetItemableData_Paths_9;
	Parms.K2Node_SwitchEnum_CmpSuccess_8 = K2Node_SwitchEnum_CmpSuccess_8;
	Parms.K2Node_SwitchEnum_CmpSuccess_9 = K2Node_SwitchEnum_CmpSuccess_9;
	Parms.K2Node_MakeStruct_ContextMenuItemData_8 = K2Node_MakeStruct_ContextMenuItemData_8;
	Parms.K2Node_MakeStruct_ContextMenuItemData_9 = K2Node_MakeStruct_ContextMenuItemData_9;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (MenuItems != nullptr)
		*MenuItems = std::move(Parms.MenuItems);

}


// Function BP_ActionableBehaviour_BuildingUpgrade.BP_ActionableBehaviour_BuildingUpgrade_C.ReplaceBuilding
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Building_Base_C*         BuildingToReplace                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildingResourceType   ResourceType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_BuildingUpgrade_C::ReplaceBuilding(class ABP_Building_Base_C* BuildingToReplace, enum class EBuildingResourceType ResourceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_BuildingUpgrade_C", "ReplaceBuilding");

	Params::UBP_ActionableBehaviour_BuildingUpgrade_C_ReplaceBuilding_Params Parms{};

	Parms.BuildingToReplace = BuildingToReplace;
	Parms.ResourceType = ResourceType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_BuildingUpgrade.BP_ActionableBehaviour_BuildingUpgrade_C.SwapBuilding
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Building_Base_C*         HitBuilding                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildingResourceType   ReplaceMentResrouce                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_BuildingUpgrade_C::SwapBuilding(class ABP_Building_Base_C* HitBuilding, enum class EBuildingResourceType ReplaceMentResrouce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_BuildingUpgrade_C", "SwapBuilding");

	Params::UBP_ActionableBehaviour_BuildingUpgrade_C_SwapBuilding_Params Parms{};

	Parms.HitBuilding = HitBuilding;
	Parms.ReplaceMentResrouce = ReplaceMentResrouce;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_BuildingUpgrade.BP_ActionableBehaviour_BuildingUpgrade_C.PerformAction
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      InvokingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableEventType    OnActionType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableTrigger      ActionTrigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_BuildingUpgrade_C::PerformAction(class AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_BuildingUpgrade_C", "PerformAction");

	Params::UBP_ActionableBehaviour_BuildingUpgrade_C_PerformAction_Params Parms{};

	Parms.InvokingActor = InvokingActor;
	Parms.OnActionType = OnActionType;
	Parms.ActionTrigger = ActionTrigger;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_BuildingUpgrade.BP_ActionableBehaviour_BuildingUpgrade_C.MenuItemSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemIdentifier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemPayload                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_BuildingUpgrade_C::MenuItemSelected(class FName ItemIdentifier, int32 ItemPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_BuildingUpgrade_C", "MenuItemSelected");

	Params::UBP_ActionableBehaviour_BuildingUpgrade_C_MenuItemSelected_Params Parms{};

	Parms.ItemIdentifier = ItemIdentifier;
	Parms.ItemPayload = ItemPayload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_BuildingUpgrade.BP_ActionableBehaviour_BuildingUpgrade_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_BuildingUpgrade_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_BuildingUpgrade_C", "ReceiveTick");

	Params::UBP_ActionableBehaviour_BuildingUpgrade_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_BuildingUpgrade.BP_ActionableBehaviour_BuildingUpgrade_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_BuildingUpgrade_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_BuildingUpgrade_C", "ReceiveEndPlay");

	Params::UBP_ActionableBehaviour_BuildingUpgrade_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_BuildingUpgrade.BP_ActionableBehaviour_BuildingUpgrade_C.ExecuteUbergraph_BP_ActionableBehaviour_BuildingUpgrade
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Building_Base_C*         K2Node_CustomEvent_HitBuilding                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildingResourceType   K2Node_CustomEvent_ReplaceMentResrouce                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_InvokingActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableEventType    K2Node_Event_OnActionType                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableTrigger      K2Node_Event_ActionTrigger                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LocalOrServer_Local                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_ItemIdentifier                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_ItemPayload                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_GetHitFromViewTraces_OutHit                             (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Building_Base_C*         K2Node_DynamicCast_AsBP_Building_Base                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Building_Base_C*         K2Node_DynamicCast_AsBP_Building_Base_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetHealth_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxHealth_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Building_Base_C*         K2Node_CustomEvent_BuildingToReplace                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildingResourceType   K2Node_CustomEvent_ResourceType                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AttemptToSwapBuilding_Success                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_BuildingUpgrade_C::ExecuteUbergraph_BP_ActionableBehaviour_BuildingUpgrade(int32 EntryPoint, class ABP_Building_Base_C* K2Node_CustomEvent_HitBuilding, enum class EBuildingResourceType K2Node_CustomEvent_ReplaceMentResrouce, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_InvokingActor, enum class EActionableEventType K2Node_Event_OnActionType, enum class EActionableTrigger K2Node_Event_ActionTrigger, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, class FName K2Node_Event_ItemIdentifier, int32 K2Node_Event_ItemPayload, class AActor* CallFunc_GetOwner_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_3, uint8 CallFunc_Conv_IntToByte_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_1, bool K2Node_DynamicCast_bSuccess_1, uint8 CallFunc_GetValidValue_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FHitResult& CallFunc_GetHitFromViewTraces_OutHit, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, class ABP_Building_Base_C* K2Node_DynamicCast_AsBP_Building_Base, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, class ABP_Building_Base_C* K2Node_DynamicCast_AsBP_Building_Base_1, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_GetHealth_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_GetMaxHealth_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AActor* CallFunc_GetOwner_ReturnValue_4, class AActor* CallFunc_GetOwner_ReturnValue_5, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class ABP_Building_Base_C* K2Node_CustomEvent_BuildingToReplace, enum class EBuildingResourceType K2Node_CustomEvent_ResourceType, bool CallFunc_AttemptToSwapBuilding_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_BuildingUpgrade_C", "ExecuteUbergraph_BP_ActionableBehaviour_BuildingUpgrade");

	Params::UBP_ActionableBehaviour_BuildingUpgrade_C_ExecuteUbergraph_BP_ActionableBehaviour_BuildingUpgrade_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_HitBuilding = K2Node_CustomEvent_HitBuilding;
	Parms.K2Node_CustomEvent_ReplaceMentResrouce = K2Node_CustomEvent_ReplaceMentResrouce;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_InvokingActor = K2Node_Event_InvokingActor;
	Parms.K2Node_Event_OnActionType = K2Node_Event_OnActionType;
	Parms.K2Node_Event_ActionTrigger = K2Node_Event_ActionTrigger;
	Parms.CallFunc_LocalOrServer_Local = CallFunc_LocalOrServer_Local;
	Parms.CallFunc_LocalOrServer_Server = CallFunc_LocalOrServer_Server;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_Event_ItemIdentifier = K2Node_Event_ItemIdentifier;
	Parms.K2Node_Event_ItemPayload = K2Node_Event_ItemPayload;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue_3 = CallFunc_GetOwner_ReturnValue_3;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_1 = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetHitFromViewTraces_OutHit = CallFunc_GetHitFromViewTraces_OutHit;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
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
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Building_Base = K2Node_DynamicCast_AsBP_Building_Base;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_BreakHitResult_bBlockingHit_1 = CallFunc_BreakHitResult_bBlockingHit_1;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_1 = CallFunc_BreakHitResult_bInitialOverlap_1;
	Parms.CallFunc_BreakHitResult_Time_1 = CallFunc_BreakHitResult_Time_1;
	Parms.CallFunc_BreakHitResult_Distance_1 = CallFunc_BreakHitResult_Distance_1;
	Parms.CallFunc_BreakHitResult_Location_1 = CallFunc_BreakHitResult_Location_1;
	Parms.CallFunc_BreakHitResult_ImpactPoint_1 = CallFunc_BreakHitResult_ImpactPoint_1;
	Parms.CallFunc_BreakHitResult_Normal_1 = CallFunc_BreakHitResult_Normal_1;
	Parms.CallFunc_BreakHitResult_ImpactNormal_1 = CallFunc_BreakHitResult_ImpactNormal_1;
	Parms.CallFunc_BreakHitResult_PhysMat_1 = CallFunc_BreakHitResult_PhysMat_1;
	Parms.CallFunc_BreakHitResult_HitActor_1 = CallFunc_BreakHitResult_HitActor_1;
	Parms.CallFunc_BreakHitResult_HitComponent_1 = CallFunc_BreakHitResult_HitComponent_1;
	Parms.CallFunc_BreakHitResult_HitBoneName_1 = CallFunc_BreakHitResult_HitBoneName_1;
	Parms.CallFunc_BreakHitResult_HitItem_1 = CallFunc_BreakHitResult_HitItem_1;
	Parms.CallFunc_BreakHitResult_ElementIndex_1 = CallFunc_BreakHitResult_ElementIndex_1;
	Parms.CallFunc_BreakHitResult_FaceIndex_1 = CallFunc_BreakHitResult_FaceIndex_1;
	Parms.CallFunc_BreakHitResult_TraceStart_1 = CallFunc_BreakHitResult_TraceStart_1;
	Parms.CallFunc_BreakHitResult_TraceEnd_1 = CallFunc_BreakHitResult_TraceEnd_1;
	Parms.K2Node_DynamicCast_AsBP_Building_Base_1 = K2Node_DynamicCast_AsBP_Building_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetMaxHealth_ReturnValue = CallFunc_GetMaxHealth_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_GetOwner_ReturnValue_4 = CallFunc_GetOwner_ReturnValue_4;
	Parms.CallFunc_GetOwner_ReturnValue_5 = CallFunc_GetOwner_ReturnValue_5;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_CustomEvent_BuildingToReplace = K2Node_CustomEvent_BuildingToReplace;
	Parms.K2Node_CustomEvent_ResourceType = K2Node_CustomEvent_ResourceType;
	Parms.CallFunc_AttemptToSwapBuilding_Success = CallFunc_AttemptToSwapBuilding_Success;

	UObject::ProcessEvent(Func, &Parms);

}

}


