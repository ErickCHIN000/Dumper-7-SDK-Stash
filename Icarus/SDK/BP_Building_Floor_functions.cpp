#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Building_Floor.BP_Building_Floor_C
// (Actor)

class UClass* ABP_Building_Floor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Building_Floor_C");

	return Clss;
}


// BP_Building_Floor_C BP_Building_Floor.Default__BP_Building_Floor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Building_Floor_C* ABP_Building_Floor_C::GetDefaultObj()
{
	static class ABP_Building_Floor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Building_Floor_C*>(ABP_Building_Floor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Building_Floor.BP_Building_Floor_C.ShouldRotate
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERotationalDirections   Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  GridSpaceTrans                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class UClass*                      NewBuilding                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HitDistanceFromCenter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Dots                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    WorldRotToTest                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    GridspaceRotTestAgainst                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     RawHitNormal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Shifted                                                          (Parm, OutParm, IsPlainOldData, NoDestructor)
// bool                               WantsBlockLikePlacement                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  BlockLikePlacementExtra                                          (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FVector                     RelativeFootprint                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERotationalDirections   WorkingDirection                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  WorkingTransform                                                 (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans                                  (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc                                 (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc                                   (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc                               (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_1                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_2                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_Reverse_OutTrans                                        (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_1                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_Reverse_OutTrans_1                                      (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_1                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_2                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_Reverse_OutTrans_2                                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_3                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_2                               (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_4                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_3                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_4                                (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_5                             (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_2                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_1                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_6                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_Reverse_OutTrans_3                                      (IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_7                             (IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_5                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_6                                (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_3                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_7                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_8                             (IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_9                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_2                                 (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_8                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_10                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_9                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_10                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_Reverse_OutTrans_4                                      (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_DownShift_ShiftedLoc                                    (IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_9                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_10                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_11                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_12                               (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_4                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_5                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_6                             (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_11                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_11                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_Reverse_OutTrans_5                                      (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_3                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_12                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_3                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_12                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_Reverse_OutTrans_6                                      (IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_2                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_10                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_13                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_14                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_15                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_16                               (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_7                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_8                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_9                             (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_13                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_13                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_11                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_13                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_Reverse_OutTrans_7                                      (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_4                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_14                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_14                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_12                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_4                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_14                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_Reverse_OutTrans_8                                      (IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_11                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_DownShift_ShiftedLoc_1                                  (IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_3                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_17                               (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_15                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_15                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_13                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_15                            (IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_12                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_18                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_19                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_20                               (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_10                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_11                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_Reverse_OutTrans_9                                      (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_5                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_16                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_16                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_14                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_5                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_16                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_Reverse_OutTrans_10                                     (IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_4                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_13                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_5                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_6                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_7                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_6                                 (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_12                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_21                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_6                               (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_17                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_17                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_15                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_17                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_22                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_23                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_24                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_25                               (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_13                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_14                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_15                            (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_18                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_18                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_16                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_18                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_Reverse_OutTrans_11                                     (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_7                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_19                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_19                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_17                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_7                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_19                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_Reverse_OutTrans_12                                     (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_26                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_27                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_28                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_29                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_30                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_31                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_32                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_33                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_16                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_17                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_18                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_19                            (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_20                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_21                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_22                            (IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_8                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_14                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_20                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_20                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_20                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_18                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_20                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_Reverse_OutTrans_13                                     (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_8                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_21                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_21                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_21                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_19                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_8                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_21                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_Reverse_OutTrans_14                                     (IsPlainOldData, NoDestructor)

void ABP_Building_Floor_C::ShouldRotate(enum class ERotationalDirections Direction, const struct FTransform& GridSpaceTrans, class UClass* NewBuilding, float HitDistanceFromCenter, const struct FVector& Dots, const struct FRotator& WorldRotToTest, const struct FRotator& GridspaceRotTestAgainst, const struct FVector& RawHitNormal, class ACharacter* Player, struct FTransform* Shifted, bool* WantsBlockLikePlacement, struct FTransform* BlockLikePlacementExtra, const struct FVector& RelativeFootprint, enum class ERotationalDirections WorkingDirection, const struct FTransform& WorkingTransform, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue_2, bool CallFunc_ClassIsChildOf_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_LeftShift_ShiftedTrans, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_1, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FTransform& CallFunc_RightShift_ShiftedLoc, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_2, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, const struct FTransform& CallFunc_Reverse_OutTrans, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_1, const struct FTransform& CallFunc_Reverse_OutTrans_1, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_1, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_2, const struct FTransform& CallFunc_Reverse_OutTrans_2, const struct FVector& CallFunc_BreakTransform_Location_3, const struct FRotator& CallFunc_BreakTransform_Rotation_3, const struct FVector& CallFunc_BreakTransform_Scale_3, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_3, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_2, const struct FVector& CallFunc_BreakTransform_Location_4, const struct FRotator& CallFunc_BreakTransform_Rotation_4, const struct FVector& CallFunc_BreakTransform_Scale_4, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_4, const struct FTransform& CallFunc_MakeTransform_ReturnValue_4, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_3, const struct FVector& CallFunc_BreakTransform_Location_5, const struct FRotator& CallFunc_BreakTransform_Rotation_5, const struct FVector& CallFunc_BreakTransform_Scale_5, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_4, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_5, const struct FTransform& CallFunc_MakeTransform_ReturnValue_5, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_2, const struct FTransform& CallFunc_RightShift_ShiftedLoc_1, const struct FVector& CallFunc_BreakTransform_Location_6, const struct FRotator& CallFunc_BreakTransform_Rotation_6, const struct FVector& CallFunc_BreakTransform_Scale_6, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_6, const struct FTransform& CallFunc_MakeTransform_ReturnValue_6, const struct FTransform& CallFunc_Reverse_OutTrans_3, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array, bool CallFunc_ClassIsChildOf_ReturnValue_5, bool CallFunc_ClassIsChildOf_ReturnValue_6, const struct FVector& CallFunc_BreakTransform_Location_7, const struct FRotator& CallFunc_BreakTransform_Rotation_7, const struct FVector& CallFunc_BreakTransform_Scale_7, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_7, const struct FTransform& CallFunc_MakeTransform_ReturnValue_7, bool CallFunc_Less_FloatFloat_ReturnValue_1, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_1, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_5, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_6, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_3, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_7, const struct FVector& CallFunc_BreakTransform_Location_8, const struct FRotator& CallFunc_BreakTransform_Rotation_8, const struct FVector& CallFunc_BreakTransform_Scale_8, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_8, bool K2Node_SwitchEnum_CmpSuccess_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_8, bool CallFunc_ClassIsChildOf_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_ClassIsChildOf_ReturnValue_8, bool CallFunc_ClassIsChildOf_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_4, const struct FTransform& CallFunc_RightShift_ShiftedLoc_2, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_8, const struct FVector& CallFunc_BreakTransform_Location_9, const struct FRotator& CallFunc_BreakTransform_Rotation_9, const struct FVector& CallFunc_BreakTransform_Scale_9, const struct FVector& CallFunc_BreakTransform_Location_10, const struct FRotator& CallFunc_BreakTransform_Rotation_10, const struct FVector& CallFunc_BreakTransform_Scale_10, const struct FTransform& CallFunc_MakeTransform_ReturnValue_9, const struct FTransform& CallFunc_MakeTransform_ReturnValue_10, const struct FTransform& CallFunc_Reverse_OutTrans_4, const struct FTransform& CallFunc_DownShift_ShiftedLoc, bool CallFunc_Less_FloatFloat_ReturnValue_2, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_9, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_10, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_11, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_12, bool K2Node_SwitchEnum_CmpSuccess_4, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_4, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_5, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_6, const struct FVector& CallFunc_BreakTransform_Location_11, const struct FRotator& CallFunc_BreakTransform_Rotation_11, const struct FVector& CallFunc_BreakTransform_Scale_11, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_9, const struct FTransform& CallFunc_MakeTransform_ReturnValue_11, const struct FTransform& CallFunc_Reverse_OutTrans_5, const struct FTransform& CallFunc_RightShift_ShiftedLoc_3, const struct FVector& CallFunc_BreakTransform_Location_12, const struct FRotator& CallFunc_BreakTransform_Rotation_12, const struct FVector& CallFunc_BreakTransform_Scale_12, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_10, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_12, const struct FTransform& CallFunc_Reverse_OutTrans_6, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_2, bool CallFunc_ClassIsChildOf_ReturnValue_10, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_13, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_14, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_15, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_16, bool K2Node_SwitchEnum_CmpSuccess_5, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_7, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_8, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_9, const struct FVector& CallFunc_BreakTransform_Location_13, const struct FRotator& CallFunc_BreakTransform_Rotation_13, const struct FVector& CallFunc_BreakTransform_Scale_13, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_11, const struct FTransform& CallFunc_MakeTransform_ReturnValue_13, const struct FTransform& CallFunc_Reverse_OutTrans_7, const struct FTransform& CallFunc_RightShift_ShiftedLoc_4, const struct FVector& CallFunc_BreakTransform_Location_14, const struct FRotator& CallFunc_BreakTransform_Rotation_14, const struct FVector& CallFunc_BreakTransform_Scale_14, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_12, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_4, const struct FTransform& CallFunc_MakeTransform_ReturnValue_14, const struct FTransform& CallFunc_Reverse_OutTrans_8, bool CallFunc_ClassIsChildOf_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_5, const struct FTransform& CallFunc_DownShift_ShiftedLoc_1, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_Less_FloatFloat_ReturnValue_3, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_3, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_17, const struct FVector& CallFunc_BreakTransform_Location_15, const struct FRotator& CallFunc_BreakTransform_Rotation_15, const struct FVector& CallFunc_BreakTransform_Scale_15, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_13, const struct FTransform& CallFunc_MakeTransform_ReturnValue_15, bool CallFunc_ClassIsChildOf_ReturnValue_12, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_18, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_19, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_20, bool K2Node_SwitchEnum_CmpSuccess_6, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_10, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_11, const struct FTransform& CallFunc_Reverse_OutTrans_9, const struct FTransform& CallFunc_RightShift_ShiftedLoc_5, const struct FVector& CallFunc_BreakTransform_Location_16, const struct FRotator& CallFunc_BreakTransform_Rotation_16, const struct FVector& CallFunc_BreakTransform_Scale_16, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_14, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_5, const struct FTransform& CallFunc_MakeTransform_ReturnValue_16, const struct FTransform& CallFunc_Reverse_OutTrans_10, bool CallFunc_Less_FloatFloat_ReturnValue_4, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_4, bool CallFunc_ClassIsChildOf_ReturnValue_13, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_5, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_6, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_7, bool CallFunc_Less_FloatFloat_ReturnValue_5, const struct FTransform& CallFunc_RightShift_ShiftedLoc_6, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_12, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_21, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_6, bool K2Node_SwitchEnum_CmpSuccess_7, const struct FVector& CallFunc_BreakTransform_Location_17, const struct FRotator& CallFunc_BreakTransform_Rotation_17, const struct FVector& CallFunc_BreakTransform_Scale_17, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_15, bool CallFunc_Less_FloatFloat_ReturnValue_6, const struct FTransform& CallFunc_MakeTransform_ReturnValue_17, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_22, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_23, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_24, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_25, bool K2Node_SwitchEnum_CmpSuccess_8, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_13, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_14, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_15, const struct FVector& CallFunc_BreakTransform_Location_18, const struct FRotator& CallFunc_BreakTransform_Rotation_18, const struct FVector& CallFunc_BreakTransform_Scale_18, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_16, const struct FTransform& CallFunc_MakeTransform_ReturnValue_18, const struct FTransform& CallFunc_Reverse_OutTrans_11, const struct FTransform& CallFunc_RightShift_ShiftedLoc_7, const struct FVector& CallFunc_BreakTransform_Location_19, const struct FRotator& CallFunc_BreakTransform_Rotation_19, const struct FVector& CallFunc_BreakTransform_Scale_19, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_17, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_7, const struct FTransform& CallFunc_MakeTransform_ReturnValue_19, const struct FTransform& CallFunc_Reverse_OutTrans_12, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_26, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_27, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_28, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_29, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_30, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_31, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_32, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_33, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_16, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_17, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_18, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_19, bool K2Node_SwitchEnum_CmpSuccess_9, bool K2Node_SwitchEnum_CmpSuccess_10, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_20, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_21, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_22, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_8, bool CallFunc_ClassIsChildOf_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue_7, const struct FVector& CallFunc_BreakTransform_Location_20, const struct FRotator& CallFunc_BreakTransform_Rotation_20, const struct FVector& CallFunc_BreakTransform_Scale_20, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_18, const struct FTransform& CallFunc_MakeTransform_ReturnValue_20, const struct FTransform& CallFunc_Reverse_OutTrans_13, const struct FTransform& CallFunc_RightShift_ShiftedLoc_8, const struct FVector& CallFunc_BreakTransform_Location_21, const struct FRotator& CallFunc_BreakTransform_Rotation_21, const struct FVector& CallFunc_BreakTransform_Scale_21, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_19, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_8, const struct FTransform& CallFunc_MakeTransform_ReturnValue_21, const struct FTransform& CallFunc_Reverse_OutTrans_14)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Floor_C", "ShouldRotate");

	Params::ABP_Building_Floor_C_ShouldRotate_Params Parms{};

	Parms.Direction = Direction;
	Parms.GridSpaceTrans = GridSpaceTrans;
	Parms.NewBuilding = NewBuilding;
	Parms.HitDistanceFromCenter = HitDistanceFromCenter;
	Parms.Dots = Dots;
	Parms.WorldRotToTest = WorldRotToTest;
	Parms.GridspaceRotTestAgainst = GridspaceRotTestAgainst;
	Parms.RawHitNormal = RawHitNormal;
	Parms.Player = Player;
	Parms.RelativeFootprint = RelativeFootprint;
	Parms.WorkingDirection = WorkingDirection;
	Parms.WorkingTransform = WorkingTransform;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_1 = CallFunc_ClassIsChildOf_ReturnValue_1;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_2 = CallFunc_ClassIsChildOf_ReturnValue_2;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_3 = CallFunc_ClassIsChildOf_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_4 = CallFunc_ClassIsChildOf_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_LeftShift_ShiftedTrans = CallFunc_LeftShift_ShiftedTrans;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_ComposeRotators_ReturnValue_1 = CallFunc_ComposeRotators_ReturnValue_1;
	Parms.CallFunc_ForwardShift_ShiftedLoc = CallFunc_ForwardShift_ShiftedLoc;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_RightShift_ShiftedLoc = CallFunc_RightShift_ShiftedLoc;
	Parms.CallFunc_BackwardsShift_ShiftedLoc = CallFunc_BackwardsShift_ShiftedLoc;
	Parms.CallFunc_BreakTransform_Location_2 = CallFunc_BreakTransform_Location_2;
	Parms.CallFunc_BreakTransform_Rotation_2 = CallFunc_BreakTransform_Rotation_2;
	Parms.CallFunc_BreakTransform_Scale_2 = CallFunc_BreakTransform_Scale_2;
	Parms.CallFunc_ComposeRotators_ReturnValue_2 = CallFunc_ComposeRotators_ReturnValue_2;
	Parms.CallFunc_ForwardShift_ShiftedLoc_1 = CallFunc_ForwardShift_ShiftedLoc_1;
	Parms.CallFunc_MakeTransform_ReturnValue_2 = CallFunc_MakeTransform_ReturnValue_2;
	Parms.CallFunc_Reverse_OutTrans = CallFunc_Reverse_OutTrans;
	Parms.CallFunc_LeftShift_ShiftedTrans_1 = CallFunc_LeftShift_ShiftedTrans_1;
	Parms.CallFunc_Reverse_OutTrans_1 = CallFunc_Reverse_OutTrans_1;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_1 = CallFunc_BackwardsShift_ShiftedLoc_1;
	Parms.CallFunc_LeftShift_ShiftedTrans_2 = CallFunc_LeftShift_ShiftedTrans_2;
	Parms.CallFunc_Reverse_OutTrans_2 = CallFunc_Reverse_OutTrans_2;
	Parms.CallFunc_BreakTransform_Location_3 = CallFunc_BreakTransform_Location_3;
	Parms.CallFunc_BreakTransform_Rotation_3 = CallFunc_BreakTransform_Rotation_3;
	Parms.CallFunc_BreakTransform_Scale_3 = CallFunc_BreakTransform_Scale_3;
	Parms.CallFunc_ComposeRotators_ReturnValue_3 = CallFunc_ComposeRotators_ReturnValue_3;
	Parms.CallFunc_MakeTransform_ReturnValue_3 = CallFunc_MakeTransform_ReturnValue_3;
	Parms.CallFunc_ForwardShift_ShiftedLoc_2 = CallFunc_ForwardShift_ShiftedLoc_2;
	Parms.CallFunc_BreakTransform_Location_4 = CallFunc_BreakTransform_Location_4;
	Parms.CallFunc_BreakTransform_Rotation_4 = CallFunc_BreakTransform_Rotation_4;
	Parms.CallFunc_BreakTransform_Scale_4 = CallFunc_BreakTransform_Scale_4;
	Parms.CallFunc_ComposeRotators_ReturnValue_4 = CallFunc_ComposeRotators_ReturnValue_4;
	Parms.CallFunc_MakeTransform_ReturnValue_4 = CallFunc_MakeTransform_ReturnValue_4;
	Parms.CallFunc_LeftShift_ShiftedTrans_3 = CallFunc_LeftShift_ShiftedTrans_3;
	Parms.CallFunc_BreakTransform_Location_5 = CallFunc_BreakTransform_Location_5;
	Parms.CallFunc_BreakTransform_Rotation_5 = CallFunc_BreakTransform_Rotation_5;
	Parms.CallFunc_BreakTransform_Scale_5 = CallFunc_BreakTransform_Scale_5;
	Parms.CallFunc_LeftShift_ShiftedTrans_4 = CallFunc_LeftShift_ShiftedTrans_4;
	Parms.CallFunc_ComposeRotators_ReturnValue_5 = CallFunc_ComposeRotators_ReturnValue_5;
	Parms.CallFunc_MakeTransform_ReturnValue_5 = CallFunc_MakeTransform_ReturnValue_5;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_2 = CallFunc_BackwardsShift_ShiftedLoc_2;
	Parms.CallFunc_RightShift_ShiftedLoc_1 = CallFunc_RightShift_ShiftedLoc_1;
	Parms.CallFunc_BreakTransform_Location_6 = CallFunc_BreakTransform_Location_6;
	Parms.CallFunc_BreakTransform_Rotation_6 = CallFunc_BreakTransform_Rotation_6;
	Parms.CallFunc_BreakTransform_Scale_6 = CallFunc_BreakTransform_Scale_6;
	Parms.CallFunc_ComposeRotators_ReturnValue_6 = CallFunc_ComposeRotators_ReturnValue_6;
	Parms.CallFunc_MakeTransform_ReturnValue_6 = CallFunc_MakeTransform_ReturnValue_6;
	Parms.CallFunc_Reverse_OutTrans_3 = CallFunc_Reverse_OutTrans_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_5 = CallFunc_ClassIsChildOf_ReturnValue_5;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_6 = CallFunc_ClassIsChildOf_ReturnValue_6;
	Parms.CallFunc_BreakTransform_Location_7 = CallFunc_BreakTransform_Location_7;
	Parms.CallFunc_BreakTransform_Rotation_7 = CallFunc_BreakTransform_Rotation_7;
	Parms.CallFunc_BreakTransform_Scale_7 = CallFunc_BreakTransform_Scale_7;
	Parms.CallFunc_ComposeRotators_ReturnValue_7 = CallFunc_ComposeRotators_ReturnValue_7;
	Parms.CallFunc_MakeTransform_ReturnValue_7 = CallFunc_MakeTransform_ReturnValue_7;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_LeftShift_ShiftedTrans_5 = CallFunc_LeftShift_ShiftedTrans_5;
	Parms.CallFunc_LeftShift_ShiftedTrans_6 = CallFunc_LeftShift_ShiftedTrans_6;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_3 = CallFunc_BackwardsShift_ShiftedLoc_3;
	Parms.CallFunc_LeftShift_ShiftedTrans_7 = CallFunc_LeftShift_ShiftedTrans_7;
	Parms.CallFunc_BreakTransform_Location_8 = CallFunc_BreakTransform_Location_8;
	Parms.CallFunc_BreakTransform_Rotation_8 = CallFunc_BreakTransform_Rotation_8;
	Parms.CallFunc_BreakTransform_Scale_8 = CallFunc_BreakTransform_Scale_8;
	Parms.CallFunc_ComposeRotators_ReturnValue_8 = CallFunc_ComposeRotators_ReturnValue_8;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_MakeTransform_ReturnValue_8 = CallFunc_MakeTransform_ReturnValue_8;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_7 = CallFunc_ClassIsChildOf_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_8 = CallFunc_ClassIsChildOf_ReturnValue_8;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_9 = CallFunc_ClassIsChildOf_ReturnValue_9;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_RightShift_ShiftedLoc_2 = CallFunc_RightShift_ShiftedLoc_2;
	Parms.CallFunc_LeftShift_ShiftedTrans_8 = CallFunc_LeftShift_ShiftedTrans_8;
	Parms.CallFunc_BreakTransform_Location_9 = CallFunc_BreakTransform_Location_9;
	Parms.CallFunc_BreakTransform_Rotation_9 = CallFunc_BreakTransform_Rotation_9;
	Parms.CallFunc_BreakTransform_Scale_9 = CallFunc_BreakTransform_Scale_9;
	Parms.CallFunc_BreakTransform_Location_10 = CallFunc_BreakTransform_Location_10;
	Parms.CallFunc_BreakTransform_Rotation_10 = CallFunc_BreakTransform_Rotation_10;
	Parms.CallFunc_BreakTransform_Scale_10 = CallFunc_BreakTransform_Scale_10;
	Parms.CallFunc_MakeTransform_ReturnValue_9 = CallFunc_MakeTransform_ReturnValue_9;
	Parms.CallFunc_MakeTransform_ReturnValue_10 = CallFunc_MakeTransform_ReturnValue_10;
	Parms.CallFunc_Reverse_OutTrans_4 = CallFunc_Reverse_OutTrans_4;
	Parms.CallFunc_DownShift_ShiftedLoc = CallFunc_DownShift_ShiftedLoc;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_2 = CallFunc_Less_FloatFloat_ReturnValue_2;
	Parms.CallFunc_LeftShift_ShiftedTrans_9 = CallFunc_LeftShift_ShiftedTrans_9;
	Parms.CallFunc_LeftShift_ShiftedTrans_10 = CallFunc_LeftShift_ShiftedTrans_10;
	Parms.CallFunc_LeftShift_ShiftedTrans_11 = CallFunc_LeftShift_ShiftedTrans_11;
	Parms.CallFunc_LeftShift_ShiftedTrans_12 = CallFunc_LeftShift_ShiftedTrans_12;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_4 = CallFunc_BackwardsShift_ShiftedLoc_4;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_5 = CallFunc_BackwardsShift_ShiftedLoc_5;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_6 = CallFunc_BackwardsShift_ShiftedLoc_6;
	Parms.CallFunc_BreakTransform_Location_11 = CallFunc_BreakTransform_Location_11;
	Parms.CallFunc_BreakTransform_Rotation_11 = CallFunc_BreakTransform_Rotation_11;
	Parms.CallFunc_BreakTransform_Scale_11 = CallFunc_BreakTransform_Scale_11;
	Parms.CallFunc_ComposeRotators_ReturnValue_9 = CallFunc_ComposeRotators_ReturnValue_9;
	Parms.CallFunc_MakeTransform_ReturnValue_11 = CallFunc_MakeTransform_ReturnValue_11;
	Parms.CallFunc_Reverse_OutTrans_5 = CallFunc_Reverse_OutTrans_5;
	Parms.CallFunc_RightShift_ShiftedLoc_3 = CallFunc_RightShift_ShiftedLoc_3;
	Parms.CallFunc_BreakTransform_Location_12 = CallFunc_BreakTransform_Location_12;
	Parms.CallFunc_BreakTransform_Rotation_12 = CallFunc_BreakTransform_Rotation_12;
	Parms.CallFunc_BreakTransform_Scale_12 = CallFunc_BreakTransform_Scale_12;
	Parms.CallFunc_ComposeRotators_ReturnValue_10 = CallFunc_ComposeRotators_ReturnValue_10;
	Parms.CallFunc_ForwardShift_ShiftedLoc_3 = CallFunc_ForwardShift_ShiftedLoc_3;
	Parms.CallFunc_MakeTransform_ReturnValue_12 = CallFunc_MakeTransform_ReturnValue_12;
	Parms.CallFunc_Reverse_OutTrans_6 = CallFunc_Reverse_OutTrans_6;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_10 = CallFunc_ClassIsChildOf_ReturnValue_10;
	Parms.CallFunc_LeftShift_ShiftedTrans_13 = CallFunc_LeftShift_ShiftedTrans_13;
	Parms.CallFunc_LeftShift_ShiftedTrans_14 = CallFunc_LeftShift_ShiftedTrans_14;
	Parms.CallFunc_LeftShift_ShiftedTrans_15 = CallFunc_LeftShift_ShiftedTrans_15;
	Parms.CallFunc_LeftShift_ShiftedTrans_16 = CallFunc_LeftShift_ShiftedTrans_16;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_7 = CallFunc_BackwardsShift_ShiftedLoc_7;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_8 = CallFunc_BackwardsShift_ShiftedLoc_8;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_9 = CallFunc_BackwardsShift_ShiftedLoc_9;
	Parms.CallFunc_BreakTransform_Location_13 = CallFunc_BreakTransform_Location_13;
	Parms.CallFunc_BreakTransform_Rotation_13 = CallFunc_BreakTransform_Rotation_13;
	Parms.CallFunc_BreakTransform_Scale_13 = CallFunc_BreakTransform_Scale_13;
	Parms.CallFunc_ComposeRotators_ReturnValue_11 = CallFunc_ComposeRotators_ReturnValue_11;
	Parms.CallFunc_MakeTransform_ReturnValue_13 = CallFunc_MakeTransform_ReturnValue_13;
	Parms.CallFunc_Reverse_OutTrans_7 = CallFunc_Reverse_OutTrans_7;
	Parms.CallFunc_RightShift_ShiftedLoc_4 = CallFunc_RightShift_ShiftedLoc_4;
	Parms.CallFunc_BreakTransform_Location_14 = CallFunc_BreakTransform_Location_14;
	Parms.CallFunc_BreakTransform_Rotation_14 = CallFunc_BreakTransform_Rotation_14;
	Parms.CallFunc_BreakTransform_Scale_14 = CallFunc_BreakTransform_Scale_14;
	Parms.CallFunc_ComposeRotators_ReturnValue_12 = CallFunc_ComposeRotators_ReturnValue_12;
	Parms.CallFunc_ForwardShift_ShiftedLoc_4 = CallFunc_ForwardShift_ShiftedLoc_4;
	Parms.CallFunc_MakeTransform_ReturnValue_14 = CallFunc_MakeTransform_ReturnValue_14;
	Parms.CallFunc_Reverse_OutTrans_8 = CallFunc_Reverse_OutTrans_8;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_11 = CallFunc_ClassIsChildOf_ReturnValue_11;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_DownShift_ShiftedLoc_1 = CallFunc_DownShift_ShiftedLoc_1;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_3 = CallFunc_Less_FloatFloat_ReturnValue_3;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_LeftShift_ShiftedTrans_17 = CallFunc_LeftShift_ShiftedTrans_17;
	Parms.CallFunc_BreakTransform_Location_15 = CallFunc_BreakTransform_Location_15;
	Parms.CallFunc_BreakTransform_Rotation_15 = CallFunc_BreakTransform_Rotation_15;
	Parms.CallFunc_BreakTransform_Scale_15 = CallFunc_BreakTransform_Scale_15;
	Parms.CallFunc_ComposeRotators_ReturnValue_13 = CallFunc_ComposeRotators_ReturnValue_13;
	Parms.CallFunc_MakeTransform_ReturnValue_15 = CallFunc_MakeTransform_ReturnValue_15;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_12 = CallFunc_ClassIsChildOf_ReturnValue_12;
	Parms.CallFunc_LeftShift_ShiftedTrans_18 = CallFunc_LeftShift_ShiftedTrans_18;
	Parms.CallFunc_LeftShift_ShiftedTrans_19 = CallFunc_LeftShift_ShiftedTrans_19;
	Parms.CallFunc_LeftShift_ShiftedTrans_20 = CallFunc_LeftShift_ShiftedTrans_20;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_10 = CallFunc_BackwardsShift_ShiftedLoc_10;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_11 = CallFunc_BackwardsShift_ShiftedLoc_11;
	Parms.CallFunc_Reverse_OutTrans_9 = CallFunc_Reverse_OutTrans_9;
	Parms.CallFunc_RightShift_ShiftedLoc_5 = CallFunc_RightShift_ShiftedLoc_5;
	Parms.CallFunc_BreakTransform_Location_16 = CallFunc_BreakTransform_Location_16;
	Parms.CallFunc_BreakTransform_Rotation_16 = CallFunc_BreakTransform_Rotation_16;
	Parms.CallFunc_BreakTransform_Scale_16 = CallFunc_BreakTransform_Scale_16;
	Parms.CallFunc_ComposeRotators_ReturnValue_14 = CallFunc_ComposeRotators_ReturnValue_14;
	Parms.CallFunc_ForwardShift_ShiftedLoc_5 = CallFunc_ForwardShift_ShiftedLoc_5;
	Parms.CallFunc_MakeTransform_ReturnValue_16 = CallFunc_MakeTransform_ReturnValue_16;
	Parms.CallFunc_Reverse_OutTrans_10 = CallFunc_Reverse_OutTrans_10;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_4 = CallFunc_Less_FloatFloat_ReturnValue_4;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_13 = CallFunc_ClassIsChildOf_ReturnValue_13;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_5 = CallFunc_Less_FloatFloat_ReturnValue_5;
	Parms.CallFunc_RightShift_ShiftedLoc_6 = CallFunc_RightShift_ShiftedLoc_6;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_12 = CallFunc_BackwardsShift_ShiftedLoc_12;
	Parms.CallFunc_LeftShift_ShiftedTrans_21 = CallFunc_LeftShift_ShiftedTrans_21;
	Parms.CallFunc_ForwardShift_ShiftedLoc_6 = CallFunc_ForwardShift_ShiftedLoc_6;
	Parms.K2Node_SwitchEnum_CmpSuccess_7 = K2Node_SwitchEnum_CmpSuccess_7;
	Parms.CallFunc_BreakTransform_Location_17 = CallFunc_BreakTransform_Location_17;
	Parms.CallFunc_BreakTransform_Rotation_17 = CallFunc_BreakTransform_Rotation_17;
	Parms.CallFunc_BreakTransform_Scale_17 = CallFunc_BreakTransform_Scale_17;
	Parms.CallFunc_ComposeRotators_ReturnValue_15 = CallFunc_ComposeRotators_ReturnValue_15;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_6 = CallFunc_Less_FloatFloat_ReturnValue_6;
	Parms.CallFunc_MakeTransform_ReturnValue_17 = CallFunc_MakeTransform_ReturnValue_17;
	Parms.CallFunc_LeftShift_ShiftedTrans_22 = CallFunc_LeftShift_ShiftedTrans_22;
	Parms.CallFunc_LeftShift_ShiftedTrans_23 = CallFunc_LeftShift_ShiftedTrans_23;
	Parms.CallFunc_LeftShift_ShiftedTrans_24 = CallFunc_LeftShift_ShiftedTrans_24;
	Parms.CallFunc_LeftShift_ShiftedTrans_25 = CallFunc_LeftShift_ShiftedTrans_25;
	Parms.K2Node_SwitchEnum_CmpSuccess_8 = K2Node_SwitchEnum_CmpSuccess_8;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_13 = CallFunc_BackwardsShift_ShiftedLoc_13;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_14 = CallFunc_BackwardsShift_ShiftedLoc_14;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_15 = CallFunc_BackwardsShift_ShiftedLoc_15;
	Parms.CallFunc_BreakTransform_Location_18 = CallFunc_BreakTransform_Location_18;
	Parms.CallFunc_BreakTransform_Rotation_18 = CallFunc_BreakTransform_Rotation_18;
	Parms.CallFunc_BreakTransform_Scale_18 = CallFunc_BreakTransform_Scale_18;
	Parms.CallFunc_ComposeRotators_ReturnValue_16 = CallFunc_ComposeRotators_ReturnValue_16;
	Parms.CallFunc_MakeTransform_ReturnValue_18 = CallFunc_MakeTransform_ReturnValue_18;
	Parms.CallFunc_Reverse_OutTrans_11 = CallFunc_Reverse_OutTrans_11;
	Parms.CallFunc_RightShift_ShiftedLoc_7 = CallFunc_RightShift_ShiftedLoc_7;
	Parms.CallFunc_BreakTransform_Location_19 = CallFunc_BreakTransform_Location_19;
	Parms.CallFunc_BreakTransform_Rotation_19 = CallFunc_BreakTransform_Rotation_19;
	Parms.CallFunc_BreakTransform_Scale_19 = CallFunc_BreakTransform_Scale_19;
	Parms.CallFunc_ComposeRotators_ReturnValue_17 = CallFunc_ComposeRotators_ReturnValue_17;
	Parms.CallFunc_ForwardShift_ShiftedLoc_7 = CallFunc_ForwardShift_ShiftedLoc_7;
	Parms.CallFunc_MakeTransform_ReturnValue_19 = CallFunc_MakeTransform_ReturnValue_19;
	Parms.CallFunc_Reverse_OutTrans_12 = CallFunc_Reverse_OutTrans_12;
	Parms.CallFunc_LeftShift_ShiftedTrans_26 = CallFunc_LeftShift_ShiftedTrans_26;
	Parms.CallFunc_LeftShift_ShiftedTrans_27 = CallFunc_LeftShift_ShiftedTrans_27;
	Parms.CallFunc_LeftShift_ShiftedTrans_28 = CallFunc_LeftShift_ShiftedTrans_28;
	Parms.CallFunc_LeftShift_ShiftedTrans_29 = CallFunc_LeftShift_ShiftedTrans_29;
	Parms.CallFunc_LeftShift_ShiftedTrans_30 = CallFunc_LeftShift_ShiftedTrans_30;
	Parms.CallFunc_LeftShift_ShiftedTrans_31 = CallFunc_LeftShift_ShiftedTrans_31;
	Parms.CallFunc_LeftShift_ShiftedTrans_32 = CallFunc_LeftShift_ShiftedTrans_32;
	Parms.CallFunc_LeftShift_ShiftedTrans_33 = CallFunc_LeftShift_ShiftedTrans_33;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_16 = CallFunc_BackwardsShift_ShiftedLoc_16;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_17 = CallFunc_BackwardsShift_ShiftedLoc_17;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_18 = CallFunc_BackwardsShift_ShiftedLoc_18;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_19 = CallFunc_BackwardsShift_ShiftedLoc_19;
	Parms.K2Node_SwitchEnum_CmpSuccess_9 = K2Node_SwitchEnum_CmpSuccess_9;
	Parms.K2Node_SwitchEnum_CmpSuccess_10 = K2Node_SwitchEnum_CmpSuccess_10;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_20 = CallFunc_BackwardsShift_ShiftedLoc_20;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_21 = CallFunc_BackwardsShift_ShiftedLoc_21;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_22 = CallFunc_BackwardsShift_ShiftedLoc_22;
	Parms.K2Node_MakeArray_Array_8 = K2Node_MakeArray_Array_8;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_14 = CallFunc_ClassIsChildOf_ReturnValue_14;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.CallFunc_BreakTransform_Location_20 = CallFunc_BreakTransform_Location_20;
	Parms.CallFunc_BreakTransform_Rotation_20 = CallFunc_BreakTransform_Rotation_20;
	Parms.CallFunc_BreakTransform_Scale_20 = CallFunc_BreakTransform_Scale_20;
	Parms.CallFunc_ComposeRotators_ReturnValue_18 = CallFunc_ComposeRotators_ReturnValue_18;
	Parms.CallFunc_MakeTransform_ReturnValue_20 = CallFunc_MakeTransform_ReturnValue_20;
	Parms.CallFunc_Reverse_OutTrans_13 = CallFunc_Reverse_OutTrans_13;
	Parms.CallFunc_RightShift_ShiftedLoc_8 = CallFunc_RightShift_ShiftedLoc_8;
	Parms.CallFunc_BreakTransform_Location_21 = CallFunc_BreakTransform_Location_21;
	Parms.CallFunc_BreakTransform_Rotation_21 = CallFunc_BreakTransform_Rotation_21;
	Parms.CallFunc_BreakTransform_Scale_21 = CallFunc_BreakTransform_Scale_21;
	Parms.CallFunc_ComposeRotators_ReturnValue_19 = CallFunc_ComposeRotators_ReturnValue_19;
	Parms.CallFunc_ForwardShift_ShiftedLoc_8 = CallFunc_ForwardShift_ShiftedLoc_8;
	Parms.CallFunc_MakeTransform_ReturnValue_21 = CallFunc_MakeTransform_ReturnValue_21;
	Parms.CallFunc_Reverse_OutTrans_14 = CallFunc_Reverse_OutTrans_14;

	UObject::ProcessEvent(Func, &Parms);

	if (Shifted != nullptr)
		*Shifted = std::move(Parms.Shifted);

	if (WantsBlockLikePlacement != nullptr)
		*WantsBlockLikePlacement = Parms.WantsBlockLikePlacement;

	if (BlockLikePlacementExtra != nullptr)
		*BlockLikePlacementExtra = std::move(Parms.BlockLikePlacementExtra);

}

}


