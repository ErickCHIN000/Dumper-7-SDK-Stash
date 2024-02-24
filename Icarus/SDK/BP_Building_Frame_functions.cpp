#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Building_Frame.BP_Building_Frame_C
// (Actor)

class UClass* ABP_Building_Frame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Building_Frame_C");

	return Clss;
}


// BP_Building_Frame_C BP_Building_Frame.Default__BP_Building_Frame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Building_Frame_C* ABP_Building_Frame_C::GetDefaultObj()
{
	static class ABP_Building_Frame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Building_Frame_C*>(ABP_Building_Frame_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Building_Frame.BP_Building_Frame_C.ExtraSoftHeightCalc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Log_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_Building_Frame_C::ExtraSoftHeightCalc(float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Log_ReturnValue, float CallFunc_FClamp_ReturnValue, int32 CallFunc_FTrunc_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Frame_C", "ExtraSoftHeightCalc");

	Params::ABP_Building_Frame_C_ExtraSoftHeightCalc_Params Parms{};

	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Log_ReturnValue = CallFunc_Log_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Building_Frame.BP_Building_Frame_C.ApplySoftHeightLimits
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_ExtraSoftHeightCalc_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Building_Frame_C::ApplySoftHeightLimits(int32 CallFunc_ExtraSoftHeightCalc_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Frame_C", "ApplySoftHeightLimits");

	Params::ABP_Building_Frame_C_ApplySoftHeightLimits_Params Parms{};

	Parms.CallFunc_ExtraSoftHeightCalc_ReturnValue = CallFunc_ExtraSoftHeightCalc_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Building_Frame.BP_Building_Frame_C.CalculateDistanceToRealAnchor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_Map_Values_Values                                       (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Building_Frame_C::CalculateDistanceToRealAnchor(int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<int32>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Frame_C", "CalculateDistanceToRealAnchor");

	Params::ABP_Building_Frame_C_CalculateDistanceToRealAnchor_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Building_Frame.BP_Building_Frame_C.CombineRemoteAnchorDistanceMaps
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Building_Base_C*         OtherBuilding                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Building_Frame_C*        K2Node_DynamicCast_AsBP_Building_Frame                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Building_Base_C*> CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class ABP_Building_Base_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Building_Frame_C::CombineRemoteAnchorDistanceMaps(class ABP_Building_Base_C* OtherBuilding, class ABP_Building_Frame_C* K2Node_DynamicCast_AsBP_Building_Frame, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, TArray<class ABP_Building_Base_C*>& CallFunc_Map_Keys_Keys, class ABP_Building_Base_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Frame_C", "CombineRemoteAnchorDistanceMaps");

	Params::ABP_Building_Frame_C_CombineRemoteAnchorDistanceMaps_Params Parms{};

	Parms.OtherBuilding = OtherBuilding;
	Parms.K2Node_DynamicCast_AsBP_Building_Frame = K2Node_DynamicCast_AsBP_Building_Frame;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Building_Frame.BP_Building_Frame_C.ReinitAllAbove
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Building_Base_C*> CallFunc_GetNeighbors_TouchedBuildings                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Building_Base_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Building_Frame_C*        K2Node_DynamicCast_AsBP_Building_Frame                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Building_Frame_C::ReinitAllAbove(int32 Temp_int_Array_Index_Variable, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_Building_Base_C*>& CallFunc_GetNeighbors_TouchedBuildings, int32 CallFunc_Array_Length_ReturnValue, class ABP_Building_Base_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ABP_Building_Frame_C* K2Node_DynamicCast_AsBP_Building_Frame, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Frame_C", "ReinitAllAbove");

	Params::ABP_Building_Frame_C_ReinitAllAbove_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetNeighbors_TouchedBuildings = CallFunc_GetNeighbors_TouchedBuildings;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Building_Frame = K2Node_DynamicCast_AsBP_Building_Frame;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Building_Frame.BP_Building_Frame_C.ShouldRotate
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
// enum class ERotationalDirections   WorkingDirection                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  WorkingTransform                                                 (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_2                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans                                  (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_1                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_DownShift_ShiftedLoc                                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_DownShift_ShiftedLoc_1                                  (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_DownShift_ShiftedLoc_2                                  (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_DownShift_ShiftedLoc_3                                  (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc                                   (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc                                      (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_Reverse_OutTrans                                        (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_2                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_DownShift_ShiftedLoc_4                                  (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_1                                 (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_2                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_3                             (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_4                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_DownShift_ShiftedLoc_5                                  (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_3                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_1                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_5                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_4                                (IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, ContainsInstancedReference)
// class UBP_IcarusGameUserSettings_C*CallFunc_Get_Icarus_Game_User_Settings_Settings                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_GetMultiplayerGhostBuilding_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_6                             (IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_2                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc_1                                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc_2                                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_3                                 (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc                                 (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_2                             (IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_3                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_5                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_6                                (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_7                                (IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_4                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_3                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_4                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_4                                 (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_5                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_6                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_8                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_9                                (IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_7                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_DownShift_ShiftedLoc_6                                  (IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_7                             (IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_8                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_9                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// struct FVector                     CallFunc_BreakTransform_Location_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_8                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_9                             (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_10                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_11                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_11                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_10                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_11                            (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_12                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_13                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_13                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_12                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_13                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_12                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_13                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_10                               (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_14                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_14                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_14                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_14                            (IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_5                                 (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_5                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_11                               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_9                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_12                               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_10                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_13                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_6                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_14                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_15                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_7                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_16                               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_11                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_17                               (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_15                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_15                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_16                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_16                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_15                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_15                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_16                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_Reverse_OutTrans_1                                      (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_17                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_17                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_16                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_17                            (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_18                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_18                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_17                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_18                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_18                               (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_19                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_19                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_18                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_19                            (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_20                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_20                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_20                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_19                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_20                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_19                               (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_21                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_21                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_21                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_22                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_22                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_22                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_20                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_21                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_21                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_22                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_20                               (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_23                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_23                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_23                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_22                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_23                            (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_24                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_24                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_24                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_23                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_24                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_21                               (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_10                                        (ConstParm, ReferenceParm, ContainsInstancedReference)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_8                             (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_1                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_9                             (IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_11                                        (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_12                                        (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_13                                        (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_14                                        (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_15                                        (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_16                                        (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_17                                        (ConstParm, ReferenceParm, ContainsInstancedReference)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_22                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_23                               (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_25                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_25                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_25                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_24                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_25                            (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_26                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_26                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_26                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_25                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_26                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_24                               (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_27                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_27                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_27                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_28                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_28                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_28                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_26                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_27                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_27                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_28                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_25                               (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_29                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_29                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_29                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_28                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_29                            (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_30                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_30                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_30                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_29                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_30                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_26                               (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_27                               (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_31                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_31                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_31                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_31                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_Reverse_OutTrans_2                                      (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_28                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc_3                                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_6                                 (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_DownShift_ShiftedLoc_7                                  (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc_4                                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc_5                                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_29                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_30                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_31                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc_6                                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc_7                                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_32                               (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_7                                 (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_10                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_33                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_2                               (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_19                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_34                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_11                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_35                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_12                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_13                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_36                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_37                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_14                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_38                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_39                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_40                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_41                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_42                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_43                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_15                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_16                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_17                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_18                            (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_20                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_3                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_19                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_20                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_44                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_21                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_22                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_45                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_46                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_23                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_47                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_8                                 (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_48                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc_8                                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc_9                                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_49                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc_10                                   (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_50                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc_11                                   (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_51                               (IsPlainOldData, NoDestructor)

void ABP_Building_Frame_C::ShouldRotate(enum class ERotationalDirections Direction, const struct FTransform& GridSpaceTrans, class UClass* NewBuilding, float HitDistanceFromCenter, const struct FVector& Dots, const struct FRotator& WorldRotToTest, const struct FRotator& GridspaceRotTestAgainst, const struct FVector& RawHitNormal, class ACharacter* Player, struct FTransform* Shifted, bool* WantsBlockLikePlacement, struct FTransform* BlockLikePlacementExtra, enum class ERotationalDirections WorkingDirection, const struct FTransform& WorkingTransform, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue_2, bool CallFunc_ClassIsChildOf_ReturnValue_3, bool CallFunc_ClassIsChildOf_ReturnValue_4, bool CallFunc_ClassIsChildOf_ReturnValue_5, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, const struct FTransform& CallFunc_LeftShift_ShiftedTrans, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_1, const struct FTransform& CallFunc_DownShift_ShiftedLoc, const struct FTransform& CallFunc_DownShift_ShiftedLoc_1, const struct FTransform& CallFunc_DownShift_ShiftedLoc_2, const struct FTransform& CallFunc_DownShift_ShiftedLoc_3, const struct FTransform& CallFunc_RightShift_ShiftedLoc, const struct FTransform& CallFunc_UpShift_ShiftedLoc, const struct FTransform& CallFunc_Reverse_OutTrans, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_2, const struct FTransform& CallFunc_DownShift_ShiftedLoc_4, const struct FTransform& CallFunc_RightShift_ShiftedLoc_1, const struct FTransform& CallFunc_RightShift_ShiftedLoc_2, const struct FVector& CallFunc_BreakTransform_Location_3, const struct FRotator& CallFunc_BreakTransform_Rotation_3, const struct FVector& CallFunc_BreakTransform_Scale_3, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_3, const struct FVector& CallFunc_BreakTransform_Location_4, const struct FRotator& CallFunc_BreakTransform_Rotation_4, const struct FVector& CallFunc_BreakTransform_Scale_4, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_4, const struct FTransform& CallFunc_MakeTransform_ReturnValue_4, const struct FTransform& CallFunc_DownShift_ShiftedLoc_5, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_3, const struct FVector& CallFunc_BreakTransform_Location_5, const struct FRotator& CallFunc_BreakTransform_Rotation_5, const struct FVector& CallFunc_BreakTransform_Scale_5, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_5, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_5, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_4, bool CallFunc_Less_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_1, bool CallFunc_GetMultiplayerGhostBuilding_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_6, const struct FRotator& CallFunc_BreakTransform_Rotation_6, const struct FVector& CallFunc_BreakTransform_Scale_6, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_6, const struct FTransform& CallFunc_MakeTransform_ReturnValue_6, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_2, const struct FTransform& CallFunc_UpShift_ShiftedLoc_1, const struct FTransform& CallFunc_UpShift_ShiftedLoc_2, const struct FTransform& CallFunc_RightShift_ShiftedLoc_3, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_2, bool CallFunc_Less_FloatFloat_ReturnValue_1, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_3, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_5, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_6, bool K2Node_SwitchEnum_CmpSuccess_3, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_7, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_4, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_3, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_4, const struct FTransform& CallFunc_RightShift_ShiftedLoc_4, bool K2Node_SwitchEnum_CmpSuccess_4, bool CallFunc_Less_FloatFloat_ReturnValue_2, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_5, bool CallFunc_BooleanAND_ReturnValue, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_6, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_8, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_9, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_7, bool K2Node_SwitchEnum_CmpSuccess_5, const struct FTransform& CallFunc_DownShift_ShiftedLoc_6, bool CallFunc_Less_FloatFloat_ReturnValue_3, const struct FVector& CallFunc_BreakTransform_Location_7, const struct FRotator& CallFunc_BreakTransform_Rotation_7, const struct FVector& CallFunc_BreakTransform_Scale_7, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_7, const struct FTransform& CallFunc_MakeTransform_ReturnValue_7, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_8, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_9, const struct FVector& CallFunc_BreakTransform_Location_8, const struct FRotator& CallFunc_BreakTransform_Rotation_8, const struct FVector& CallFunc_BreakTransform_Scale_8, const struct FVector& CallFunc_BreakTransform_Location_9, const struct FRotator& CallFunc_BreakTransform_Rotation_9, const struct FVector& CallFunc_BreakTransform_Scale_9, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_8, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_9, const struct FTransform& CallFunc_MakeTransform_ReturnValue_8, const struct FTransform& CallFunc_MakeTransform_ReturnValue_9, const struct FVector& CallFunc_BreakTransform_Location_10, const struct FRotator& CallFunc_BreakTransform_Rotation_10, const struct FVector& CallFunc_BreakTransform_Scale_10, const struct FVector& CallFunc_BreakTransform_Location_11, const struct FRotator& CallFunc_BreakTransform_Rotation_11, const struct FVector& CallFunc_BreakTransform_Scale_11, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_10, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_11, const struct FTransform& CallFunc_MakeTransform_ReturnValue_10, const struct FTransform& CallFunc_MakeTransform_ReturnValue_11, const struct FVector& CallFunc_BreakTransform_Location_12, const struct FRotator& CallFunc_BreakTransform_Rotation_12, const struct FVector& CallFunc_BreakTransform_Scale_12, const struct FVector& CallFunc_BreakTransform_Location_13, const struct FRotator& CallFunc_BreakTransform_Rotation_13, const struct FVector& CallFunc_BreakTransform_Scale_13, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_12, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_13, const struct FTransform& CallFunc_MakeTransform_ReturnValue_12, const struct FTransform& CallFunc_MakeTransform_ReturnValue_13, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_10, bool K2Node_SwitchEnum_CmpSuccess_6, const struct FVector& CallFunc_BreakTransform_Location_14, const struct FRotator& CallFunc_BreakTransform_Rotation_14, const struct FVector& CallFunc_BreakTransform_Scale_14, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_14, const struct FTransform& CallFunc_MakeTransform_ReturnValue_14, bool CallFunc_Less_FloatFloat_ReturnValue_4, bool CallFunc_ClassIsChildOf_ReturnValue_6, bool CallFunc_ClassIsChildOf_ReturnValue_7, bool CallFunc_ClassIsChildOf_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_1, const struct FTransform& CallFunc_RightShift_ShiftedLoc_5, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_5, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_11, bool CallFunc_ClassIsChildOf_ReturnValue_9, bool K2Node_SwitchEnum_CmpSuccess_7, bool K2Node_SwitchEnum_CmpSuccess_8, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_12, bool CallFunc_ClassIsChildOf_ReturnValue_10, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_13, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_6, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_14, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_15, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_7, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_16, bool CallFunc_ClassIsChildOf_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue_5, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_17, const struct FVector& CallFunc_BreakTransform_Location_15, const struct FRotator& CallFunc_BreakTransform_Rotation_15, const struct FVector& CallFunc_BreakTransform_Scale_15, const struct FVector& CallFunc_BreakTransform_Location_16, const struct FRotator& CallFunc_BreakTransform_Rotation_16, const struct FVector& CallFunc_BreakTransform_Scale_16, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_15, const struct FTransform& CallFunc_MakeTransform_ReturnValue_15, const struct FTransform& CallFunc_MakeTransform_ReturnValue_16, const struct FTransform& CallFunc_Reverse_OutTrans_1, bool K2Node_SwitchEnum_CmpSuccess_9, const struct FVector& CallFunc_BreakTransform_Location_17, const struct FRotator& CallFunc_BreakTransform_Rotation_17, const struct FVector& CallFunc_BreakTransform_Scale_17, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_16, const struct FTransform& CallFunc_MakeTransform_ReturnValue_17, bool K2Node_SwitchEnum_CmpSuccess_10, bool CallFunc_Less_FloatFloat_ReturnValue_6, const struct FVector& CallFunc_BreakTransform_Location_18, const struct FRotator& CallFunc_BreakTransform_Rotation_18, const struct FVector& CallFunc_BreakTransform_Scale_18, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_17, const struct FTransform& CallFunc_MakeTransform_ReturnValue_18, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_18, const struct FVector& CallFunc_BreakTransform_Location_19, const struct FRotator& CallFunc_BreakTransform_Rotation_19, const struct FVector& CallFunc_BreakTransform_Scale_19, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_18, const struct FTransform& CallFunc_MakeTransform_ReturnValue_19, const struct FVector& CallFunc_BreakTransform_Location_20, const struct FRotator& CallFunc_BreakTransform_Rotation_20, const struct FVector& CallFunc_BreakTransform_Scale_20, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_19, const struct FTransform& CallFunc_MakeTransform_ReturnValue_20, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_19, const struct FVector& CallFunc_BreakTransform_Location_21, const struct FRotator& CallFunc_BreakTransform_Rotation_21, const struct FVector& CallFunc_BreakTransform_Scale_21, const struct FVector& CallFunc_BreakTransform_Location_22, const struct FRotator& CallFunc_BreakTransform_Rotation_22, const struct FVector& CallFunc_BreakTransform_Scale_22, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_20, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_21, const struct FTransform& CallFunc_MakeTransform_ReturnValue_21, const struct FTransform& CallFunc_MakeTransform_ReturnValue_22, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_20, const struct FVector& CallFunc_BreakTransform_Location_23, const struct FRotator& CallFunc_BreakTransform_Rotation_23, const struct FVector& CallFunc_BreakTransform_Scale_23, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_22, const struct FTransform& CallFunc_MakeTransform_ReturnValue_23, const struct FVector& CallFunc_BreakTransform_Location_24, const struct FRotator& CallFunc_BreakTransform_Rotation_24, const struct FVector& CallFunc_BreakTransform_Scale_24, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_23, const struct FTransform& CallFunc_MakeTransform_ReturnValue_24, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_21, bool K2Node_SwitchEnum_CmpSuccess_11, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_10, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_8, bool K2Node_SwitchEnum_CmpSuccess_12, bool CallFunc_Less_FloatFloat_ReturnValue_7, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_1, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_9, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_11, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_12, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_13, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_14, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_15, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_16, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_17, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_22, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_23, const struct FVector& CallFunc_BreakTransform_Location_25, const struct FRotator& CallFunc_BreakTransform_Rotation_25, const struct FVector& CallFunc_BreakTransform_Scale_25, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_24, const struct FTransform& CallFunc_MakeTransform_ReturnValue_25, const struct FVector& CallFunc_BreakTransform_Location_26, const struct FRotator& CallFunc_BreakTransform_Rotation_26, const struct FVector& CallFunc_BreakTransform_Scale_26, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_25, const struct FTransform& CallFunc_MakeTransform_ReturnValue_26, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_24, const struct FVector& CallFunc_BreakTransform_Location_27, const struct FRotator& CallFunc_BreakTransform_Rotation_27, const struct FVector& CallFunc_BreakTransform_Scale_27, const struct FVector& CallFunc_BreakTransform_Location_28, const struct FRotator& CallFunc_BreakTransform_Rotation_28, const struct FVector& CallFunc_BreakTransform_Scale_28, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_26, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_27, const struct FTransform& CallFunc_MakeTransform_ReturnValue_27, const struct FTransform& CallFunc_MakeTransform_ReturnValue_28, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_25, const struct FVector& CallFunc_BreakTransform_Location_29, const struct FRotator& CallFunc_BreakTransform_Rotation_29, const struct FVector& CallFunc_BreakTransform_Scale_29, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_28, const struct FTransform& CallFunc_MakeTransform_ReturnValue_29, const struct FVector& CallFunc_BreakTransform_Location_30, const struct FRotator& CallFunc_BreakTransform_Rotation_30, const struct FVector& CallFunc_BreakTransform_Scale_30, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_29, const struct FTransform& CallFunc_MakeTransform_ReturnValue_30, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_26, bool K2Node_SwitchEnum_CmpSuccess_13, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_27, const struct FVector& CallFunc_BreakTransform_Location_31, const struct FRotator& CallFunc_BreakTransform_Rotation_31, const struct FVector& CallFunc_BreakTransform_Scale_31, const struct FTransform& CallFunc_MakeTransform_ReturnValue_31, const struct FTransform& CallFunc_Reverse_OutTrans_2, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_28, const struct FTransform& CallFunc_UpShift_ShiftedLoc_3, const struct FTransform& CallFunc_RightShift_ShiftedLoc_6, const struct FTransform& CallFunc_DownShift_ShiftedLoc_7, bool K2Node_SwitchEnum_CmpSuccess_14, bool CallFunc_Less_FloatFloat_ReturnValue_8, const struct FTransform& CallFunc_UpShift_ShiftedLoc_4, const struct FTransform& CallFunc_UpShift_ShiftedLoc_5, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_29, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_30, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_31, const struct FTransform& CallFunc_UpShift_ShiftedLoc_6, const struct FTransform& CallFunc_UpShift_ShiftedLoc_7, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_32, bool K2Node_SwitchEnum_CmpSuccess_15, bool CallFunc_Less_FloatFloat_ReturnValue_9, const struct FTransform& CallFunc_RightShift_ShiftedLoc_7, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_10, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_33, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_2, bool K2Node_SwitchEnum_CmpSuccess_16, bool K2Node_SwitchEnum_CmpSuccess_17, bool K2Node_SwitchEnum_CmpSuccess_18, bool K2Node_SwitchEnum_CmpSuccess_19, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_34, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_11, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_35, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_12, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_13, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_36, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_37, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_14, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_38, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_39, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_40, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_41, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_42, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_43, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_15, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_16, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_17, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_18, bool K2Node_SwitchEnum_CmpSuccess_20, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_3, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_19, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_20, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_44, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_21, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_22, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_45, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_46, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_23, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_47, const struct FTransform& CallFunc_RightShift_ShiftedLoc_8, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_48, const struct FTransform& CallFunc_UpShift_ShiftedLoc_8, const struct FTransform& CallFunc_UpShift_ShiftedLoc_9, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_49, const struct FTransform& CallFunc_UpShift_ShiftedLoc_10, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_50, const struct FTransform& CallFunc_UpShift_ShiftedLoc_11, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_51)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Frame_C", "ShouldRotate");

	Params::ABP_Building_Frame_C_ShouldRotate_Params Parms{};

	Parms.Direction = Direction;
	Parms.GridSpaceTrans = GridSpaceTrans;
	Parms.NewBuilding = NewBuilding;
	Parms.HitDistanceFromCenter = HitDistanceFromCenter;
	Parms.Dots = Dots;
	Parms.WorldRotToTest = WorldRotToTest;
	Parms.GridspaceRotTestAgainst = GridspaceRotTestAgainst;
	Parms.RawHitNormal = RawHitNormal;
	Parms.Player = Player;
	Parms.WorkingDirection = WorkingDirection;
	Parms.WorkingTransform = WorkingTransform;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_1 = CallFunc_ClassIsChildOf_ReturnValue_1;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_2 = CallFunc_ClassIsChildOf_ReturnValue_2;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_3 = CallFunc_ClassIsChildOf_ReturnValue_3;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_4 = CallFunc_ClassIsChildOf_ReturnValue_4;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_5 = CallFunc_ClassIsChildOf_ReturnValue_5;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_ComposeRotators_ReturnValue_1 = CallFunc_ComposeRotators_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location_2 = CallFunc_BreakTransform_Location_2;
	Parms.CallFunc_BreakTransform_Rotation_2 = CallFunc_BreakTransform_Rotation_2;
	Parms.CallFunc_BreakTransform_Scale_2 = CallFunc_BreakTransform_Scale_2;
	Parms.CallFunc_ComposeRotators_ReturnValue_2 = CallFunc_ComposeRotators_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_MakeTransform_ReturnValue_2 = CallFunc_MakeTransform_ReturnValue_2;
	Parms.CallFunc_LeftShift_ShiftedTrans = CallFunc_LeftShift_ShiftedTrans;
	Parms.CallFunc_LeftShift_ShiftedTrans_1 = CallFunc_LeftShift_ShiftedTrans_1;
	Parms.CallFunc_DownShift_ShiftedLoc = CallFunc_DownShift_ShiftedLoc;
	Parms.CallFunc_DownShift_ShiftedLoc_1 = CallFunc_DownShift_ShiftedLoc_1;
	Parms.CallFunc_DownShift_ShiftedLoc_2 = CallFunc_DownShift_ShiftedLoc_2;
	Parms.CallFunc_DownShift_ShiftedLoc_3 = CallFunc_DownShift_ShiftedLoc_3;
	Parms.CallFunc_RightShift_ShiftedLoc = CallFunc_RightShift_ShiftedLoc;
	Parms.CallFunc_UpShift_ShiftedLoc = CallFunc_UpShift_ShiftedLoc;
	Parms.CallFunc_Reverse_OutTrans = CallFunc_Reverse_OutTrans;
	Parms.CallFunc_LeftShift_ShiftedTrans_2 = CallFunc_LeftShift_ShiftedTrans_2;
	Parms.CallFunc_DownShift_ShiftedLoc_4 = CallFunc_DownShift_ShiftedLoc_4;
	Parms.CallFunc_RightShift_ShiftedLoc_1 = CallFunc_RightShift_ShiftedLoc_1;
	Parms.CallFunc_RightShift_ShiftedLoc_2 = CallFunc_RightShift_ShiftedLoc_2;
	Parms.CallFunc_BreakTransform_Location_3 = CallFunc_BreakTransform_Location_3;
	Parms.CallFunc_BreakTransform_Rotation_3 = CallFunc_BreakTransform_Rotation_3;
	Parms.CallFunc_BreakTransform_Scale_3 = CallFunc_BreakTransform_Scale_3;
	Parms.CallFunc_ComposeRotators_ReturnValue_3 = CallFunc_ComposeRotators_ReturnValue_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_MakeTransform_ReturnValue_3 = CallFunc_MakeTransform_ReturnValue_3;
	Parms.CallFunc_BreakTransform_Location_4 = CallFunc_BreakTransform_Location_4;
	Parms.CallFunc_BreakTransform_Rotation_4 = CallFunc_BreakTransform_Rotation_4;
	Parms.CallFunc_BreakTransform_Scale_4 = CallFunc_BreakTransform_Scale_4;
	Parms.CallFunc_ComposeRotators_ReturnValue_4 = CallFunc_ComposeRotators_ReturnValue_4;
	Parms.CallFunc_MakeTransform_ReturnValue_4 = CallFunc_MakeTransform_ReturnValue_4;
	Parms.CallFunc_DownShift_ShiftedLoc_5 = CallFunc_DownShift_ShiftedLoc_5;
	Parms.CallFunc_BackwardsShift_ShiftedLoc = CallFunc_BackwardsShift_ShiftedLoc;
	Parms.CallFunc_LeftShift_ShiftedTrans_3 = CallFunc_LeftShift_ShiftedTrans_3;
	Parms.CallFunc_BreakTransform_Location_5 = CallFunc_BreakTransform_Location_5;
	Parms.CallFunc_BreakTransform_Rotation_5 = CallFunc_BreakTransform_Rotation_5;
	Parms.CallFunc_BreakTransform_Scale_5 = CallFunc_BreakTransform_Scale_5;
	Parms.CallFunc_ComposeRotators_ReturnValue_5 = CallFunc_ComposeRotators_ReturnValue_5;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_1 = CallFunc_BackwardsShift_ShiftedLoc_1;
	Parms.CallFunc_MakeTransform_ReturnValue_5 = CallFunc_MakeTransform_ReturnValue_5;
	Parms.CallFunc_LeftShift_ShiftedTrans_4 = CallFunc_LeftShift_ShiftedTrans_4;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Get_Icarus_Game_User_Settings_Settings = CallFunc_Get_Icarus_Game_User_Settings_Settings;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetMultiplayerGhostBuilding_ReturnValue = CallFunc_GetMultiplayerGhostBuilding_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BreakTransform_Location_6 = CallFunc_BreakTransform_Location_6;
	Parms.CallFunc_BreakTransform_Rotation_6 = CallFunc_BreakTransform_Rotation_6;
	Parms.CallFunc_BreakTransform_Scale_6 = CallFunc_BreakTransform_Scale_6;
	Parms.CallFunc_ComposeRotators_ReturnValue_6 = CallFunc_ComposeRotators_ReturnValue_6;
	Parms.CallFunc_MakeTransform_ReturnValue_6 = CallFunc_MakeTransform_ReturnValue_6;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_UpShift_ShiftedLoc_1 = CallFunc_UpShift_ShiftedLoc_1;
	Parms.CallFunc_UpShift_ShiftedLoc_2 = CallFunc_UpShift_ShiftedLoc_2;
	Parms.CallFunc_RightShift_ShiftedLoc_3 = CallFunc_RightShift_ShiftedLoc_3;
	Parms.CallFunc_ForwardShift_ShiftedLoc = CallFunc_ForwardShift_ShiftedLoc;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_2 = CallFunc_BackwardsShift_ShiftedLoc_2;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_LeftShift_ShiftedTrans_5 = CallFunc_LeftShift_ShiftedTrans_5;
	Parms.CallFunc_LeftShift_ShiftedTrans_6 = CallFunc_LeftShift_ShiftedTrans_6;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_LeftShift_ShiftedTrans_7 = CallFunc_LeftShift_ShiftedTrans_7;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_3 = CallFunc_BackwardsShift_ShiftedLoc_3;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_4 = CallFunc_BackwardsShift_ShiftedLoc_4;
	Parms.CallFunc_RightShift_ShiftedLoc_4 = CallFunc_RightShift_ShiftedLoc_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_2 = CallFunc_Less_FloatFloat_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.CallFunc_LeftShift_ShiftedTrans_8 = CallFunc_LeftShift_ShiftedTrans_8;
	Parms.CallFunc_LeftShift_ShiftedTrans_9 = CallFunc_LeftShift_ShiftedTrans_9;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_DownShift_ShiftedLoc_6 = CallFunc_DownShift_ShiftedLoc_6;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_3 = CallFunc_Less_FloatFloat_ReturnValue_3;
	Parms.CallFunc_BreakTransform_Location_7 = CallFunc_BreakTransform_Location_7;
	Parms.CallFunc_BreakTransform_Rotation_7 = CallFunc_BreakTransform_Rotation_7;
	Parms.CallFunc_BreakTransform_Scale_7 = CallFunc_BreakTransform_Scale_7;
	Parms.CallFunc_ComposeRotators_ReturnValue_7 = CallFunc_ComposeRotators_ReturnValue_7;
	Parms.CallFunc_MakeTransform_ReturnValue_7 = CallFunc_MakeTransform_ReturnValue_7;
	Parms.K2Node_MakeArray_Array_8 = K2Node_MakeArray_Array_8;
	Parms.K2Node_MakeArray_Array_9 = K2Node_MakeArray_Array_9;
	Parms.CallFunc_BreakTransform_Location_8 = CallFunc_BreakTransform_Location_8;
	Parms.CallFunc_BreakTransform_Rotation_8 = CallFunc_BreakTransform_Rotation_8;
	Parms.CallFunc_BreakTransform_Scale_8 = CallFunc_BreakTransform_Scale_8;
	Parms.CallFunc_BreakTransform_Location_9 = CallFunc_BreakTransform_Location_9;
	Parms.CallFunc_BreakTransform_Rotation_9 = CallFunc_BreakTransform_Rotation_9;
	Parms.CallFunc_BreakTransform_Scale_9 = CallFunc_BreakTransform_Scale_9;
	Parms.CallFunc_ComposeRotators_ReturnValue_8 = CallFunc_ComposeRotators_ReturnValue_8;
	Parms.CallFunc_ComposeRotators_ReturnValue_9 = CallFunc_ComposeRotators_ReturnValue_9;
	Parms.CallFunc_MakeTransform_ReturnValue_8 = CallFunc_MakeTransform_ReturnValue_8;
	Parms.CallFunc_MakeTransform_ReturnValue_9 = CallFunc_MakeTransform_ReturnValue_9;
	Parms.CallFunc_BreakTransform_Location_10 = CallFunc_BreakTransform_Location_10;
	Parms.CallFunc_BreakTransform_Rotation_10 = CallFunc_BreakTransform_Rotation_10;
	Parms.CallFunc_BreakTransform_Scale_10 = CallFunc_BreakTransform_Scale_10;
	Parms.CallFunc_BreakTransform_Location_11 = CallFunc_BreakTransform_Location_11;
	Parms.CallFunc_BreakTransform_Rotation_11 = CallFunc_BreakTransform_Rotation_11;
	Parms.CallFunc_BreakTransform_Scale_11 = CallFunc_BreakTransform_Scale_11;
	Parms.CallFunc_ComposeRotators_ReturnValue_10 = CallFunc_ComposeRotators_ReturnValue_10;
	Parms.CallFunc_ComposeRotators_ReturnValue_11 = CallFunc_ComposeRotators_ReturnValue_11;
	Parms.CallFunc_MakeTransform_ReturnValue_10 = CallFunc_MakeTransform_ReturnValue_10;
	Parms.CallFunc_MakeTransform_ReturnValue_11 = CallFunc_MakeTransform_ReturnValue_11;
	Parms.CallFunc_BreakTransform_Location_12 = CallFunc_BreakTransform_Location_12;
	Parms.CallFunc_BreakTransform_Rotation_12 = CallFunc_BreakTransform_Rotation_12;
	Parms.CallFunc_BreakTransform_Scale_12 = CallFunc_BreakTransform_Scale_12;
	Parms.CallFunc_BreakTransform_Location_13 = CallFunc_BreakTransform_Location_13;
	Parms.CallFunc_BreakTransform_Rotation_13 = CallFunc_BreakTransform_Rotation_13;
	Parms.CallFunc_BreakTransform_Scale_13 = CallFunc_BreakTransform_Scale_13;
	Parms.CallFunc_ComposeRotators_ReturnValue_12 = CallFunc_ComposeRotators_ReturnValue_12;
	Parms.CallFunc_ComposeRotators_ReturnValue_13 = CallFunc_ComposeRotators_ReturnValue_13;
	Parms.CallFunc_MakeTransform_ReturnValue_12 = CallFunc_MakeTransform_ReturnValue_12;
	Parms.CallFunc_MakeTransform_ReturnValue_13 = CallFunc_MakeTransform_ReturnValue_13;
	Parms.CallFunc_LeftShift_ShiftedTrans_10 = CallFunc_LeftShift_ShiftedTrans_10;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;
	Parms.CallFunc_BreakTransform_Location_14 = CallFunc_BreakTransform_Location_14;
	Parms.CallFunc_BreakTransform_Rotation_14 = CallFunc_BreakTransform_Rotation_14;
	Parms.CallFunc_BreakTransform_Scale_14 = CallFunc_BreakTransform_Scale_14;
	Parms.CallFunc_ComposeRotators_ReturnValue_14 = CallFunc_ComposeRotators_ReturnValue_14;
	Parms.CallFunc_MakeTransform_ReturnValue_14 = CallFunc_MakeTransform_ReturnValue_14;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_4 = CallFunc_Less_FloatFloat_ReturnValue_4;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_6 = CallFunc_ClassIsChildOf_ReturnValue_6;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_7 = CallFunc_ClassIsChildOf_ReturnValue_7;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_8 = CallFunc_ClassIsChildOf_ReturnValue_8;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_RightShift_ShiftedLoc_5 = CallFunc_RightShift_ShiftedLoc_5;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_5 = CallFunc_BackwardsShift_ShiftedLoc_5;
	Parms.CallFunc_LeftShift_ShiftedTrans_11 = CallFunc_LeftShift_ShiftedTrans_11;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_9 = CallFunc_ClassIsChildOf_ReturnValue_9;
	Parms.K2Node_SwitchEnum_CmpSuccess_7 = K2Node_SwitchEnum_CmpSuccess_7;
	Parms.K2Node_SwitchEnum_CmpSuccess_8 = K2Node_SwitchEnum_CmpSuccess_8;
	Parms.CallFunc_LeftShift_ShiftedTrans_12 = CallFunc_LeftShift_ShiftedTrans_12;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_10 = CallFunc_ClassIsChildOf_ReturnValue_10;
	Parms.CallFunc_LeftShift_ShiftedTrans_13 = CallFunc_LeftShift_ShiftedTrans_13;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_6 = CallFunc_BackwardsShift_ShiftedLoc_6;
	Parms.CallFunc_LeftShift_ShiftedTrans_14 = CallFunc_LeftShift_ShiftedTrans_14;
	Parms.CallFunc_LeftShift_ShiftedTrans_15 = CallFunc_LeftShift_ShiftedTrans_15;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_7 = CallFunc_BackwardsShift_ShiftedLoc_7;
	Parms.CallFunc_LeftShift_ShiftedTrans_16 = CallFunc_LeftShift_ShiftedTrans_16;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_11 = CallFunc_ClassIsChildOf_ReturnValue_11;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_5 = CallFunc_Less_FloatFloat_ReturnValue_5;
	Parms.CallFunc_LeftShift_ShiftedTrans_17 = CallFunc_LeftShift_ShiftedTrans_17;
	Parms.CallFunc_BreakTransform_Location_15 = CallFunc_BreakTransform_Location_15;
	Parms.CallFunc_BreakTransform_Rotation_15 = CallFunc_BreakTransform_Rotation_15;
	Parms.CallFunc_BreakTransform_Scale_15 = CallFunc_BreakTransform_Scale_15;
	Parms.CallFunc_BreakTransform_Location_16 = CallFunc_BreakTransform_Location_16;
	Parms.CallFunc_BreakTransform_Rotation_16 = CallFunc_BreakTransform_Rotation_16;
	Parms.CallFunc_BreakTransform_Scale_16 = CallFunc_BreakTransform_Scale_16;
	Parms.CallFunc_ComposeRotators_ReturnValue_15 = CallFunc_ComposeRotators_ReturnValue_15;
	Parms.CallFunc_MakeTransform_ReturnValue_15 = CallFunc_MakeTransform_ReturnValue_15;
	Parms.CallFunc_MakeTransform_ReturnValue_16 = CallFunc_MakeTransform_ReturnValue_16;
	Parms.CallFunc_Reverse_OutTrans_1 = CallFunc_Reverse_OutTrans_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_9 = K2Node_SwitchEnum_CmpSuccess_9;
	Parms.CallFunc_BreakTransform_Location_17 = CallFunc_BreakTransform_Location_17;
	Parms.CallFunc_BreakTransform_Rotation_17 = CallFunc_BreakTransform_Rotation_17;
	Parms.CallFunc_BreakTransform_Scale_17 = CallFunc_BreakTransform_Scale_17;
	Parms.CallFunc_ComposeRotators_ReturnValue_16 = CallFunc_ComposeRotators_ReturnValue_16;
	Parms.CallFunc_MakeTransform_ReturnValue_17 = CallFunc_MakeTransform_ReturnValue_17;
	Parms.K2Node_SwitchEnum_CmpSuccess_10 = K2Node_SwitchEnum_CmpSuccess_10;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_6 = CallFunc_Less_FloatFloat_ReturnValue_6;
	Parms.CallFunc_BreakTransform_Location_18 = CallFunc_BreakTransform_Location_18;
	Parms.CallFunc_BreakTransform_Rotation_18 = CallFunc_BreakTransform_Rotation_18;
	Parms.CallFunc_BreakTransform_Scale_18 = CallFunc_BreakTransform_Scale_18;
	Parms.CallFunc_ComposeRotators_ReturnValue_17 = CallFunc_ComposeRotators_ReturnValue_17;
	Parms.CallFunc_MakeTransform_ReturnValue_18 = CallFunc_MakeTransform_ReturnValue_18;
	Parms.CallFunc_LeftShift_ShiftedTrans_18 = CallFunc_LeftShift_ShiftedTrans_18;
	Parms.CallFunc_BreakTransform_Location_19 = CallFunc_BreakTransform_Location_19;
	Parms.CallFunc_BreakTransform_Rotation_19 = CallFunc_BreakTransform_Rotation_19;
	Parms.CallFunc_BreakTransform_Scale_19 = CallFunc_BreakTransform_Scale_19;
	Parms.CallFunc_ComposeRotators_ReturnValue_18 = CallFunc_ComposeRotators_ReturnValue_18;
	Parms.CallFunc_MakeTransform_ReturnValue_19 = CallFunc_MakeTransform_ReturnValue_19;
	Parms.CallFunc_BreakTransform_Location_20 = CallFunc_BreakTransform_Location_20;
	Parms.CallFunc_BreakTransform_Rotation_20 = CallFunc_BreakTransform_Rotation_20;
	Parms.CallFunc_BreakTransform_Scale_20 = CallFunc_BreakTransform_Scale_20;
	Parms.CallFunc_ComposeRotators_ReturnValue_19 = CallFunc_ComposeRotators_ReturnValue_19;
	Parms.CallFunc_MakeTransform_ReturnValue_20 = CallFunc_MakeTransform_ReturnValue_20;
	Parms.CallFunc_LeftShift_ShiftedTrans_19 = CallFunc_LeftShift_ShiftedTrans_19;
	Parms.CallFunc_BreakTransform_Location_21 = CallFunc_BreakTransform_Location_21;
	Parms.CallFunc_BreakTransform_Rotation_21 = CallFunc_BreakTransform_Rotation_21;
	Parms.CallFunc_BreakTransform_Scale_21 = CallFunc_BreakTransform_Scale_21;
	Parms.CallFunc_BreakTransform_Location_22 = CallFunc_BreakTransform_Location_22;
	Parms.CallFunc_BreakTransform_Rotation_22 = CallFunc_BreakTransform_Rotation_22;
	Parms.CallFunc_BreakTransform_Scale_22 = CallFunc_BreakTransform_Scale_22;
	Parms.CallFunc_ComposeRotators_ReturnValue_20 = CallFunc_ComposeRotators_ReturnValue_20;
	Parms.CallFunc_ComposeRotators_ReturnValue_21 = CallFunc_ComposeRotators_ReturnValue_21;
	Parms.CallFunc_MakeTransform_ReturnValue_21 = CallFunc_MakeTransform_ReturnValue_21;
	Parms.CallFunc_MakeTransform_ReturnValue_22 = CallFunc_MakeTransform_ReturnValue_22;
	Parms.CallFunc_LeftShift_ShiftedTrans_20 = CallFunc_LeftShift_ShiftedTrans_20;
	Parms.CallFunc_BreakTransform_Location_23 = CallFunc_BreakTransform_Location_23;
	Parms.CallFunc_BreakTransform_Rotation_23 = CallFunc_BreakTransform_Rotation_23;
	Parms.CallFunc_BreakTransform_Scale_23 = CallFunc_BreakTransform_Scale_23;
	Parms.CallFunc_ComposeRotators_ReturnValue_22 = CallFunc_ComposeRotators_ReturnValue_22;
	Parms.CallFunc_MakeTransform_ReturnValue_23 = CallFunc_MakeTransform_ReturnValue_23;
	Parms.CallFunc_BreakTransform_Location_24 = CallFunc_BreakTransform_Location_24;
	Parms.CallFunc_BreakTransform_Rotation_24 = CallFunc_BreakTransform_Rotation_24;
	Parms.CallFunc_BreakTransform_Scale_24 = CallFunc_BreakTransform_Scale_24;
	Parms.CallFunc_ComposeRotators_ReturnValue_23 = CallFunc_ComposeRotators_ReturnValue_23;
	Parms.CallFunc_MakeTransform_ReturnValue_24 = CallFunc_MakeTransform_ReturnValue_24;
	Parms.CallFunc_LeftShift_ShiftedTrans_21 = CallFunc_LeftShift_ShiftedTrans_21;
	Parms.K2Node_SwitchEnum_CmpSuccess_11 = K2Node_SwitchEnum_CmpSuccess_11;
	Parms.K2Node_MakeArray_Array_10 = K2Node_MakeArray_Array_10;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_8 = CallFunc_BackwardsShift_ShiftedLoc_8;
	Parms.K2Node_SwitchEnum_CmpSuccess_12 = K2Node_SwitchEnum_CmpSuccess_12;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_7 = CallFunc_Less_FloatFloat_ReturnValue_7;
	Parms.CallFunc_ForwardShift_ShiftedLoc_1 = CallFunc_ForwardShift_ShiftedLoc_1;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_9 = CallFunc_BackwardsShift_ShiftedLoc_9;
	Parms.K2Node_MakeArray_Array_11 = K2Node_MakeArray_Array_11;
	Parms.K2Node_MakeArray_Array_12 = K2Node_MakeArray_Array_12;
	Parms.K2Node_MakeArray_Array_13 = K2Node_MakeArray_Array_13;
	Parms.K2Node_MakeArray_Array_14 = K2Node_MakeArray_Array_14;
	Parms.K2Node_MakeArray_Array_15 = K2Node_MakeArray_Array_15;
	Parms.K2Node_MakeArray_Array_16 = K2Node_MakeArray_Array_16;
	Parms.K2Node_MakeArray_Array_17 = K2Node_MakeArray_Array_17;
	Parms.CallFunc_LeftShift_ShiftedTrans_22 = CallFunc_LeftShift_ShiftedTrans_22;
	Parms.CallFunc_LeftShift_ShiftedTrans_23 = CallFunc_LeftShift_ShiftedTrans_23;
	Parms.CallFunc_BreakTransform_Location_25 = CallFunc_BreakTransform_Location_25;
	Parms.CallFunc_BreakTransform_Rotation_25 = CallFunc_BreakTransform_Rotation_25;
	Parms.CallFunc_BreakTransform_Scale_25 = CallFunc_BreakTransform_Scale_25;
	Parms.CallFunc_ComposeRotators_ReturnValue_24 = CallFunc_ComposeRotators_ReturnValue_24;
	Parms.CallFunc_MakeTransform_ReturnValue_25 = CallFunc_MakeTransform_ReturnValue_25;
	Parms.CallFunc_BreakTransform_Location_26 = CallFunc_BreakTransform_Location_26;
	Parms.CallFunc_BreakTransform_Rotation_26 = CallFunc_BreakTransform_Rotation_26;
	Parms.CallFunc_BreakTransform_Scale_26 = CallFunc_BreakTransform_Scale_26;
	Parms.CallFunc_ComposeRotators_ReturnValue_25 = CallFunc_ComposeRotators_ReturnValue_25;
	Parms.CallFunc_MakeTransform_ReturnValue_26 = CallFunc_MakeTransform_ReturnValue_26;
	Parms.CallFunc_LeftShift_ShiftedTrans_24 = CallFunc_LeftShift_ShiftedTrans_24;
	Parms.CallFunc_BreakTransform_Location_27 = CallFunc_BreakTransform_Location_27;
	Parms.CallFunc_BreakTransform_Rotation_27 = CallFunc_BreakTransform_Rotation_27;
	Parms.CallFunc_BreakTransform_Scale_27 = CallFunc_BreakTransform_Scale_27;
	Parms.CallFunc_BreakTransform_Location_28 = CallFunc_BreakTransform_Location_28;
	Parms.CallFunc_BreakTransform_Rotation_28 = CallFunc_BreakTransform_Rotation_28;
	Parms.CallFunc_BreakTransform_Scale_28 = CallFunc_BreakTransform_Scale_28;
	Parms.CallFunc_ComposeRotators_ReturnValue_26 = CallFunc_ComposeRotators_ReturnValue_26;
	Parms.CallFunc_ComposeRotators_ReturnValue_27 = CallFunc_ComposeRotators_ReturnValue_27;
	Parms.CallFunc_MakeTransform_ReturnValue_27 = CallFunc_MakeTransform_ReturnValue_27;
	Parms.CallFunc_MakeTransform_ReturnValue_28 = CallFunc_MakeTransform_ReturnValue_28;
	Parms.CallFunc_LeftShift_ShiftedTrans_25 = CallFunc_LeftShift_ShiftedTrans_25;
	Parms.CallFunc_BreakTransform_Location_29 = CallFunc_BreakTransform_Location_29;
	Parms.CallFunc_BreakTransform_Rotation_29 = CallFunc_BreakTransform_Rotation_29;
	Parms.CallFunc_BreakTransform_Scale_29 = CallFunc_BreakTransform_Scale_29;
	Parms.CallFunc_ComposeRotators_ReturnValue_28 = CallFunc_ComposeRotators_ReturnValue_28;
	Parms.CallFunc_MakeTransform_ReturnValue_29 = CallFunc_MakeTransform_ReturnValue_29;
	Parms.CallFunc_BreakTransform_Location_30 = CallFunc_BreakTransform_Location_30;
	Parms.CallFunc_BreakTransform_Rotation_30 = CallFunc_BreakTransform_Rotation_30;
	Parms.CallFunc_BreakTransform_Scale_30 = CallFunc_BreakTransform_Scale_30;
	Parms.CallFunc_ComposeRotators_ReturnValue_29 = CallFunc_ComposeRotators_ReturnValue_29;
	Parms.CallFunc_MakeTransform_ReturnValue_30 = CallFunc_MakeTransform_ReturnValue_30;
	Parms.CallFunc_LeftShift_ShiftedTrans_26 = CallFunc_LeftShift_ShiftedTrans_26;
	Parms.K2Node_SwitchEnum_CmpSuccess_13 = K2Node_SwitchEnum_CmpSuccess_13;
	Parms.CallFunc_LeftShift_ShiftedTrans_27 = CallFunc_LeftShift_ShiftedTrans_27;
	Parms.CallFunc_BreakTransform_Location_31 = CallFunc_BreakTransform_Location_31;
	Parms.CallFunc_BreakTransform_Rotation_31 = CallFunc_BreakTransform_Rotation_31;
	Parms.CallFunc_BreakTransform_Scale_31 = CallFunc_BreakTransform_Scale_31;
	Parms.CallFunc_MakeTransform_ReturnValue_31 = CallFunc_MakeTransform_ReturnValue_31;
	Parms.CallFunc_Reverse_OutTrans_2 = CallFunc_Reverse_OutTrans_2;
	Parms.CallFunc_LeftShift_ShiftedTrans_28 = CallFunc_LeftShift_ShiftedTrans_28;
	Parms.CallFunc_UpShift_ShiftedLoc_3 = CallFunc_UpShift_ShiftedLoc_3;
	Parms.CallFunc_RightShift_ShiftedLoc_6 = CallFunc_RightShift_ShiftedLoc_6;
	Parms.CallFunc_DownShift_ShiftedLoc_7 = CallFunc_DownShift_ShiftedLoc_7;
	Parms.K2Node_SwitchEnum_CmpSuccess_14 = K2Node_SwitchEnum_CmpSuccess_14;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_8 = CallFunc_Less_FloatFloat_ReturnValue_8;
	Parms.CallFunc_UpShift_ShiftedLoc_4 = CallFunc_UpShift_ShiftedLoc_4;
	Parms.CallFunc_UpShift_ShiftedLoc_5 = CallFunc_UpShift_ShiftedLoc_5;
	Parms.CallFunc_LeftShift_ShiftedTrans_29 = CallFunc_LeftShift_ShiftedTrans_29;
	Parms.CallFunc_LeftShift_ShiftedTrans_30 = CallFunc_LeftShift_ShiftedTrans_30;
	Parms.CallFunc_LeftShift_ShiftedTrans_31 = CallFunc_LeftShift_ShiftedTrans_31;
	Parms.CallFunc_UpShift_ShiftedLoc_6 = CallFunc_UpShift_ShiftedLoc_6;
	Parms.CallFunc_UpShift_ShiftedLoc_7 = CallFunc_UpShift_ShiftedLoc_7;
	Parms.CallFunc_LeftShift_ShiftedTrans_32 = CallFunc_LeftShift_ShiftedTrans_32;
	Parms.K2Node_SwitchEnum_CmpSuccess_15 = K2Node_SwitchEnum_CmpSuccess_15;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_9 = CallFunc_Less_FloatFloat_ReturnValue_9;
	Parms.CallFunc_RightShift_ShiftedLoc_7 = CallFunc_RightShift_ShiftedLoc_7;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_10 = CallFunc_BackwardsShift_ShiftedLoc_10;
	Parms.CallFunc_LeftShift_ShiftedTrans_33 = CallFunc_LeftShift_ShiftedTrans_33;
	Parms.CallFunc_ForwardShift_ShiftedLoc_2 = CallFunc_ForwardShift_ShiftedLoc_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_16 = K2Node_SwitchEnum_CmpSuccess_16;
	Parms.K2Node_SwitchEnum_CmpSuccess_17 = K2Node_SwitchEnum_CmpSuccess_17;
	Parms.K2Node_SwitchEnum_CmpSuccess_18 = K2Node_SwitchEnum_CmpSuccess_18;
	Parms.K2Node_SwitchEnum_CmpSuccess_19 = K2Node_SwitchEnum_CmpSuccess_19;
	Parms.CallFunc_LeftShift_ShiftedTrans_34 = CallFunc_LeftShift_ShiftedTrans_34;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_11 = CallFunc_BackwardsShift_ShiftedLoc_11;
	Parms.CallFunc_LeftShift_ShiftedTrans_35 = CallFunc_LeftShift_ShiftedTrans_35;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_12 = CallFunc_BackwardsShift_ShiftedLoc_12;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_13 = CallFunc_BackwardsShift_ShiftedLoc_13;
	Parms.CallFunc_LeftShift_ShiftedTrans_36 = CallFunc_LeftShift_ShiftedTrans_36;
	Parms.CallFunc_LeftShift_ShiftedTrans_37 = CallFunc_LeftShift_ShiftedTrans_37;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_14 = CallFunc_BackwardsShift_ShiftedLoc_14;
	Parms.CallFunc_LeftShift_ShiftedTrans_38 = CallFunc_LeftShift_ShiftedTrans_38;
	Parms.CallFunc_LeftShift_ShiftedTrans_39 = CallFunc_LeftShift_ShiftedTrans_39;
	Parms.CallFunc_LeftShift_ShiftedTrans_40 = CallFunc_LeftShift_ShiftedTrans_40;
	Parms.CallFunc_LeftShift_ShiftedTrans_41 = CallFunc_LeftShift_ShiftedTrans_41;
	Parms.CallFunc_LeftShift_ShiftedTrans_42 = CallFunc_LeftShift_ShiftedTrans_42;
	Parms.CallFunc_LeftShift_ShiftedTrans_43 = CallFunc_LeftShift_ShiftedTrans_43;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_15 = CallFunc_BackwardsShift_ShiftedLoc_15;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_16 = CallFunc_BackwardsShift_ShiftedLoc_16;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_17 = CallFunc_BackwardsShift_ShiftedLoc_17;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_18 = CallFunc_BackwardsShift_ShiftedLoc_18;
	Parms.K2Node_SwitchEnum_CmpSuccess_20 = K2Node_SwitchEnum_CmpSuccess_20;
	Parms.CallFunc_ForwardShift_ShiftedLoc_3 = CallFunc_ForwardShift_ShiftedLoc_3;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_19 = CallFunc_BackwardsShift_ShiftedLoc_19;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_20 = CallFunc_BackwardsShift_ShiftedLoc_20;
	Parms.CallFunc_LeftShift_ShiftedTrans_44 = CallFunc_LeftShift_ShiftedTrans_44;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_21 = CallFunc_BackwardsShift_ShiftedLoc_21;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_22 = CallFunc_BackwardsShift_ShiftedLoc_22;
	Parms.CallFunc_LeftShift_ShiftedTrans_45 = CallFunc_LeftShift_ShiftedTrans_45;
	Parms.CallFunc_LeftShift_ShiftedTrans_46 = CallFunc_LeftShift_ShiftedTrans_46;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_23 = CallFunc_BackwardsShift_ShiftedLoc_23;
	Parms.CallFunc_LeftShift_ShiftedTrans_47 = CallFunc_LeftShift_ShiftedTrans_47;
	Parms.CallFunc_RightShift_ShiftedLoc_8 = CallFunc_RightShift_ShiftedLoc_8;
	Parms.CallFunc_LeftShift_ShiftedTrans_48 = CallFunc_LeftShift_ShiftedTrans_48;
	Parms.CallFunc_UpShift_ShiftedLoc_8 = CallFunc_UpShift_ShiftedLoc_8;
	Parms.CallFunc_UpShift_ShiftedLoc_9 = CallFunc_UpShift_ShiftedLoc_9;
	Parms.CallFunc_LeftShift_ShiftedTrans_49 = CallFunc_LeftShift_ShiftedTrans_49;
	Parms.CallFunc_UpShift_ShiftedLoc_10 = CallFunc_UpShift_ShiftedLoc_10;
	Parms.CallFunc_LeftShift_ShiftedTrans_50 = CallFunc_LeftShift_ShiftedTrans_50;
	Parms.CallFunc_UpShift_ShiftedLoc_11 = CallFunc_UpShift_ShiftedLoc_11;
	Parms.CallFunc_LeftShift_ShiftedTrans_51 = CallFunc_LeftShift_ShiftedTrans_51;

	UObject::ProcessEvent(Func, &Parms);

	if (Shifted != nullptr)
		*Shifted = std::move(Parms.Shifted);

	if (WantsBlockLikePlacement != nullptr)
		*WantsBlockLikePlacement = Parms.WantsBlockLikePlacement;

	if (BlockLikePlacementExtra != nullptr)
		*BlockLikePlacementExtra = std::move(Parms.BlockLikePlacementExtra);

}


// Function BP_Building_Frame.BP_Building_Frame_C.OptionallyRotateCenterUpToInpactNormal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     HitNormal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CenterWorldRotation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    ZRotatedDifference                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ImpactWasAlreadyRotated                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_OptionallyRotateCenterUpToInpactNormal_CenterWorldRotation(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_OptionallyRotateCenterUpToInpactNormal_ZRotatedDifference(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OptionallyRotateCenterUpToInpactNormal_ImpactWasAlreadyRotated(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_OptionallyRotateCenterUpToInpactNormal_CenterWorldRotation_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_OptionallyRotateCenterUpToInpactNormal_ZRotatedDifference_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OptionallyRotateCenterUpToInpactNormal_ImpactWasAlreadyRotated_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetRightVector_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromXZ_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotationFromAxes_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_SelectRotator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Building_Frame_C::OptionallyRotateCenterUpToInpactNormal(const struct FVector& HitNormal, struct FRotator* CenterWorldRotation, struct FRotator* ZRotatedDifference, bool* ImpactWasAlreadyRotated, const struct FRotator& CallFunc_OptionallyRotateCenterUpToInpactNormal_CenterWorldRotation, const struct FRotator& CallFunc_OptionallyRotateCenterUpToInpactNormal_ZRotatedDifference, bool CallFunc_OptionallyRotateCenterUpToInpactNormal_ImpactWasAlreadyRotated, const struct FRotator& CallFunc_OptionallyRotateCenterUpToInpactNormal_CenterWorldRotation_1, const struct FRotator& CallFunc_OptionallyRotateCenterUpToInpactNormal_ZRotatedDifference_1, bool CallFunc_OptionallyRotateCenterUpToInpactNormal_ImpactWasAlreadyRotated_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromXZ_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue_2, const struct FRotator& CallFunc_MakeRotationFromAxes_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, bool CallFunc_EqualEqual_VectorVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue_3, bool CallFunc_EqualEqual_VectorVector_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const struct FRotator& CallFunc_SelectRotator_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Frame_C", "OptionallyRotateCenterUpToInpactNormal");

	Params::ABP_Building_Frame_C_OptionallyRotateCenterUpToInpactNormal_Params Parms{};

	Parms.HitNormal = HitNormal;
	Parms.CallFunc_OptionallyRotateCenterUpToInpactNormal_CenterWorldRotation = CallFunc_OptionallyRotateCenterUpToInpactNormal_CenterWorldRotation;
	Parms.CallFunc_OptionallyRotateCenterUpToInpactNormal_ZRotatedDifference = CallFunc_OptionallyRotateCenterUpToInpactNormal_ZRotatedDifference;
	Parms.CallFunc_OptionallyRotateCenterUpToInpactNormal_ImpactWasAlreadyRotated = CallFunc_OptionallyRotateCenterUpToInpactNormal_ImpactWasAlreadyRotated;
	Parms.CallFunc_OptionallyRotateCenterUpToInpactNormal_CenterWorldRotation_1 = CallFunc_OptionallyRotateCenterUpToInpactNormal_CenterWorldRotation_1;
	Parms.CallFunc_OptionallyRotateCenterUpToInpactNormal_ZRotatedDifference_1 = CallFunc_OptionallyRotateCenterUpToInpactNormal_ZRotatedDifference_1;
	Parms.CallFunc_OptionallyRotateCenterUpToInpactNormal_ImpactWasAlreadyRotated_1 = CallFunc_OptionallyRotateCenterUpToInpactNormal_ImpactWasAlreadyRotated_1;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_GetRightVector_ReturnValue = CallFunc_GetRightVector_ReturnValue;
	Parms.CallFunc_MakeRotFromXZ_ReturnValue = CallFunc_MakeRotFromXZ_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue_1 = CallFunc_GetForwardVector_ReturnValue_1;
	Parms.CallFunc_NormalizedDeltaRotator_ReturnValue = CallFunc_NormalizedDeltaRotator_ReturnValue;
	Parms.CallFunc_GetUpVector_ReturnValue = CallFunc_GetUpVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue_2 = CallFunc_GetForwardVector_ReturnValue_2;
	Parms.CallFunc_MakeRotationFromAxes_ReturnValue = CallFunc_MakeRotationFromAxes_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue_3 = CallFunc_GetForwardVector_ReturnValue_3;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue_1 = CallFunc_EqualEqual_VectorVector_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_SelectRotator_ReturnValue = CallFunc_SelectRotator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CenterWorldRotation != nullptr)
		*CenterWorldRotation = std::move(Parms.CenterWorldRotation);

	if (ZRotatedDifference != nullptr)
		*ZRotatedDifference = std::move(Parms.ZRotatedDifference);

	if (ImpactWasAlreadyRotated != nullptr)
		*ImpactWasAlreadyRotated = Parms.ImpactWasAlreadyRotated;

}


// Function BP_Building_Frame.BP_Building_Frame_C.GrabLowerAnchorBaseReferences
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Building_Base_C*> CallFunc_GetNeighbors_TouchedBuildings                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Building_Base_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Building_Base_C*> CallFunc_AppendUniqueBuildingArray_Array1UniquelyAddedTo2        (ReferenceParm)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Building_Frame_C*        K2Node_DynamicCast_AsBP_Building_Frame                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Building_Frame_C::GrabLowerAnchorBaseReferences(float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, TArray<class ABP_Building_Base_C*>& CallFunc_GetNeighbors_TouchedBuildings, int32 CallFunc_Array_Length_ReturnValue, class ABP_Building_Base_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, TArray<class ABP_Building_Base_C*>& CallFunc_AppendUniqueBuildingArray_Array1UniquelyAddedTo2, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABP_Building_Frame_C* K2Node_DynamicCast_AsBP_Building_Frame, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Frame_C", "GrabLowerAnchorBaseReferences");

	Params::ABP_Building_Frame_C_GrabLowerAnchorBaseReferences_Params Parms{};

	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GetNeighbors_TouchedBuildings = CallFunc_GetNeighbors_TouchedBuildings;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_AppendUniqueBuildingArray_Array1UniquelyAddedTo2 = CallFunc_AppendUniqueBuildingArray_Array1UniquelyAddedTo2;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Building_Frame = K2Node_DynamicCast_AsBP_Building_Frame;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Building_Frame.BP_Building_Frame_C.SpreadAnchorBaseReferencesUp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Building_Base_C*> CallFunc_GetNeighbors_TouchedBuildings                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Building_Base_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Building_Frame_C*        K2Node_DynamicCast_AsBP_Building_Frame                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Building_Base_C*> CallFunc_AppendUniqueBuildingArray_Array1UniquelyAddedTo2        (ReferenceParm)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Building_Frame_C*        K2Node_DynamicCast_AsBP_Building_Frame_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesBuildingArrayContainBuildingArray_ContainedInnerArray(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Building_Frame_C::SpreadAnchorBaseReferencesUp(float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 Temp_int_Variable, TArray<class ABP_Building_Base_C*>& CallFunc_GetNeighbors_TouchedBuildings, int32 CallFunc_Array_Length_ReturnValue, class ABP_Building_Base_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ABP_Building_Frame_C* K2Node_DynamicCast_AsBP_Building_Frame, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, TArray<class ABP_Building_Base_C*>& CallFunc_AppendUniqueBuildingArray_Array1UniquelyAddedTo2, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, class ABP_Building_Frame_C* K2Node_DynamicCast_AsBP_Building_Frame_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_DoesBuildingArrayContainBuildingArray_ContainedInnerArray, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Frame_C", "SpreadAnchorBaseReferencesUp");

	Params::ABP_Building_Frame_C_SpreadAnchorBaseReferencesUp_Params Parms{};

	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetNeighbors_TouchedBuildings = CallFunc_GetNeighbors_TouchedBuildings;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Building_Frame = K2Node_DynamicCast_AsBP_Building_Frame;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_AppendUniqueBuildingArray_Array1UniquelyAddedTo2 = CallFunc_AppendUniqueBuildingArray_Array1UniquelyAddedTo2;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Building_Frame_1 = K2Node_DynamicCast_AsBP_Building_Frame_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_DoesBuildingArrayContainBuildingArray_ContainedInnerArray = CallFunc_DoesBuildingArrayContainBuildingArray_ContainedInnerArray;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Building_Frame.BP_Building_Frame_C.StartDestruction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerController*     TriggeringPlayer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildingDestroyReason  DestroyReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Building_Frame_C::StartDestruction(class AIcarusPlayerController* TriggeringPlayer, enum class EBuildingDestroyReason DestroyReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Frame_C", "StartDestruction");

	Params::ABP_Building_Frame_C_StartDestruction_Params Parms{};

	Parms.TriggeringPlayer = TriggeringPlayer;
	Parms.DestroyReason = DestroyReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Building_Frame.BP_Building_Frame_C.InitAnchorStability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Building_Frame_C::InitAnchorStability()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Frame_C", "InitAnchorStability");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Building_Frame.BP_Building_Frame_C.ExecuteUbergraph_BP_Building_Frame
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     K2Node_Event_TriggeringPlayer                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildingDestroyReason  K2Node_Event_DestroyReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Building_Frame_C::ExecuteUbergraph_BP_Building_Frame(int32 EntryPoint, class AIcarusPlayerController* K2Node_Event_TriggeringPlayer, enum class EBuildingDestroyReason K2Node_Event_DestroyReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Frame_C", "ExecuteUbergraph_BP_Building_Frame");

	Params::ABP_Building_Frame_C_ExecuteUbergraph_BP_Building_Frame_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_TriggeringPlayer = K2Node_Event_TriggeringPlayer;
	Parms.K2Node_Event_DestroyReason = K2Node_Event_DestroyReason;

	UObject::ProcessEvent(Func, &Parms);

}

}


