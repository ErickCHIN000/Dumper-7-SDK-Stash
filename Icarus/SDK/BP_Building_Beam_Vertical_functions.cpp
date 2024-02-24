#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Building_Beam_Vertical.BP_Building_Beam_Vertical_C
// (Actor)

class UClass* ABP_Building_Beam_Vertical_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Building_Beam_Vertical_C");

	return Clss;
}


// BP_Building_Beam_Vertical_C BP_Building_Beam_Vertical.Default__BP_Building_Beam_Vertical_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Building_Beam_Vertical_C* ABP_Building_Beam_Vertical_C::GetDefaultObj()
{
	static class ABP_Building_Beam_Vertical_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Building_Beam_Vertical_C*>(ABP_Building_Beam_Vertical_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Building_Beam_Vertical.BP_Building_Beam_Vertical_C.DecideShifting
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    RotationToTest_world_                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    RotationTestingAgainst_gridspace_                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  GridSpaceLOCHitPlaneRot                                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class UClass*                      Building_Class                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DistanceBetweenHitAndCenter                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     RawHitNormal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  GridSpaceLOCWithGridSpaceRot                                     (Parm, OutParm, IsPlainOldData, NoDestructor)
// enum class ERotationalDirections   RelativeRotationEnum                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WantsBlockLikePlacement                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  BlockLikePlacementExtraDelta                                     (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_DecideShifting_GridSpaceLOCWithGridSpaceRot             (IsPlainOldData, NoDestructor)
// enum class ERotationalDirections   CallFunc_DecideShifting_RelativeRotationEnum                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DecideShifting_WantsBlockLikePlacement                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_DecideShifting_BlockLikePlacementExtraDelta             (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)

void ABP_Building_Beam_Vertical_C::DecideShifting(const struct FRotator& RotationToTest_world_, const struct FRotator& RotationTestingAgainst_gridspace_, const struct FTransform& GridSpaceLOCHitPlaneRot, class UClass* Building_Class, float DistanceBetweenHitAndCenter, const struct FVector& RawHitNormal, class ACharacter* Player, struct FTransform* GridSpaceLOCWithGridSpaceRot, enum class ERotationalDirections* RelativeRotationEnum, bool* WantsBlockLikePlacement, struct FTransform* BlockLikePlacementExtraDelta, const struct FTransform& CallFunc_DecideShifting_GridSpaceLOCWithGridSpaceRot, enum class ERotationalDirections CallFunc_DecideShifting_RelativeRotationEnum, bool CallFunc_DecideShifting_WantsBlockLikePlacement, const struct FTransform& CallFunc_DecideShifting_BlockLikePlacementExtraDelta, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Beam_Vertical_C", "DecideShifting");

	Params::ABP_Building_Beam_Vertical_C_DecideShifting_Params Parms{};

	Parms.RotationToTest_world_ = RotationToTest_world_;
	Parms.RotationTestingAgainst_gridspace_ = RotationTestingAgainst_gridspace_;
	Parms.GridSpaceLOCHitPlaneRot = GridSpaceLOCHitPlaneRot;
	Parms.Building_Class = Building_Class;
	Parms.DistanceBetweenHitAndCenter = DistanceBetweenHitAndCenter;
	Parms.RawHitNormal = RawHitNormal;
	Parms.Player = Player;
	Parms.CallFunc_DecideShifting_GridSpaceLOCWithGridSpaceRot = CallFunc_DecideShifting_GridSpaceLOCWithGridSpaceRot;
	Parms.CallFunc_DecideShifting_RelativeRotationEnum = CallFunc_DecideShifting_RelativeRotationEnum;
	Parms.CallFunc_DecideShifting_WantsBlockLikePlacement = CallFunc_DecideShifting_WantsBlockLikePlacement;
	Parms.CallFunc_DecideShifting_BlockLikePlacementExtraDelta = CallFunc_DecideShifting_BlockLikePlacementExtraDelta;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (GridSpaceLOCWithGridSpaceRot != nullptr)
		*GridSpaceLOCWithGridSpaceRot = std::move(Parms.GridSpaceLOCWithGridSpaceRot);

	if (RelativeRotationEnum != nullptr)
		*RelativeRotationEnum = Parms.RelativeRotationEnum;

	if (WantsBlockLikePlacement != nullptr)
		*WantsBlockLikePlacement = Parms.WantsBlockLikePlacement;

	if (BlockLikePlacementExtraDelta != nullptr)
		*BlockLikePlacementExtraDelta = std::move(Parms.BlockLikePlacementExtraDelta);

}


// Function BP_Building_Beam_Vertical.BP_Building_Beam_Vertical_C.ShouldRotate
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
// struct FTransform                  ExtraGridSpaceRotation                                           (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// struct FTransform                  WorkingTrans                                                     (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// enum class ERotationalDirections   WorkingDirection                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_NegateRotator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_InverseTransformRotation_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc                               (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Building_Beam_Vertical_C::ShouldRotate(enum class ERotationalDirections Direction, const struct FTransform& GridSpaceTrans, class UClass* NewBuilding, float HitDistanceFromCenter, const struct FVector& Dots, const struct FRotator& WorldRotToTest, const struct FRotator& GridspaceRotTestAgainst, const struct FVector& RawHitNormal, class ACharacter* Player, struct FTransform* Shifted, bool* WantsBlockLikePlacement, struct FTransform* BlockLikePlacementExtra, const struct FTransform& ExtraGridSpaceRotation, const struct FTransform& WorkingTrans, enum class ERotationalDirections WorkingDirection, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue_2, const struct FRotator& CallFunc_NegateRotator_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_3, bool CallFunc_ClassIsChildOf_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FRotator& CallFunc_InverseTransformRotation_ReturnValue, const struct FRotator& CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc, bool K2Node_SwitchEnum_CmpSuccess, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array, bool CallFunc_ClassIsChildOf_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Beam_Vertical_C", "ShouldRotate");

	Params::ABP_Building_Beam_Vertical_C_ShouldRotate_Params Parms{};

	Parms.Direction = Direction;
	Parms.GridSpaceTrans = GridSpaceTrans;
	Parms.NewBuilding = NewBuilding;
	Parms.HitDistanceFromCenter = HitDistanceFromCenter;
	Parms.Dots = Dots;
	Parms.WorldRotToTest = WorldRotToTest;
	Parms.GridspaceRotTestAgainst = GridspaceRotTestAgainst;
	Parms.RawHitNormal = RawHitNormal;
	Parms.Player = Player;
	Parms.ExtraGridSpaceRotation = ExtraGridSpaceRotation;
	Parms.WorkingTrans = WorkingTrans;
	Parms.WorkingDirection = WorkingDirection;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_1 = CallFunc_ClassIsChildOf_ReturnValue_1;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_2 = CallFunc_ClassIsChildOf_ReturnValue_2;
	Parms.CallFunc_NegateRotator_ReturnValue = CallFunc_NegateRotator_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_3 = CallFunc_ClassIsChildOf_ReturnValue_3;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_4 = CallFunc_ClassIsChildOf_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_MakeRotFromX_ReturnValue = CallFunc_MakeRotFromX_ReturnValue;
	Parms.CallFunc_InverseTransformRotation_ReturnValue = CallFunc_InverseTransformRotation_ReturnValue;
	Parms.CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot = CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_ComposeRotators_ReturnValue_1 = CallFunc_ComposeRotators_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_BackwardsShift_ShiftedLoc = CallFunc_BackwardsShift_ShiftedLoc;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_5 = CallFunc_ClassIsChildOf_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	if (Shifted != nullptr)
		*Shifted = std::move(Parms.Shifted);

	if (WantsBlockLikePlacement != nullptr)
		*WantsBlockLikePlacement = Parms.WantsBlockLikePlacement;

	if (BlockLikePlacementExtra != nullptr)
		*BlockLikePlacementExtra = std::move(Parms.BlockLikePlacementExtra);

}


// Function BP_Building_Beam_Vertical.BP_Building_Beam_Vertical_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Building_Beam_Vertical_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Beam_Vertical_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Building_Beam_Vertical.BP_Building_Beam_Vertical_C.ExecuteUbergraph_BP_Building_Beam_Vertical
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Building_Beam_Vertical_C::ExecuteUbergraph_BP_Building_Beam_Vertical(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Beam_Vertical_C", "ExecuteUbergraph_BP_Building_Beam_Vertical");

	Params::ABP_Building_Beam_Vertical_C_ExecuteUbergraph_BP_Building_Beam_Vertical_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


