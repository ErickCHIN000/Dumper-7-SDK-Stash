#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x240 - 0x238)
// BlueprintGeneratedClass LockonComponent.LockonComponent_C
class ULockonComponent_C : public UTTLLockonComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ULockonComponent_C* GetDefaultObj();

	bool ListupAimingCharacter(float LockOnRange, float MissileLockonRange, TArray<struct FTTLLockonTargetUnit>& CallFunc_PreListupAimingCharacter_OutTargetUnits, bool CallFunc_PreListupAimingCharacter_ReturnValue);
	void Reset();
	void ChangeSight(class AController* CallFunc_GetController_ReturnValue, class UArsenalInstrumentHUDComponent_C* CallFunc_GetComponentByClass_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class AHUDMission_C* K2Node_DynamicCast_AsHUDMission, bool K2Node_DynamicCast_bSuccess1);
	void ChangeSightForDebug(int32 CurrentSight, bool K2Node_SwitchInteger_CmpSuccess);
	void ProcessCenterManual(TArray<class AActor*>& NewAimingCharacterList, TArray<struct FBox2D>& NewAimingBoxList, TArray<int32>& NewAimingNotSelectedTimeList, TArray<float>& NewAimingTimerList, class UDefaultCameraControlComponent_C* CameraComponent, bool IsSemiAuto, bool* IsChange, bool IsCheck, int32 Index, int32 MaxTime, int32 TargetIndex, bool CallFunc_IsValid_ReturnValue, class ATTLFloatingDecoy* K2Node_DynamicCast_AsTTLFloating_Decoy, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Find_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum1_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_LessEqual_IntInt_ReturnValue1, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item1, bool CallFunc_Less_IntInt_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, float CallFunc_Array_Get_Item2, float CallFunc_Array_Get_Item3, bool CallFunc_Greater_FloatFloat_ReturnValue, class AActor* CallFunc_Array_Get_Item4, class AActor* CallFunc_Array_Get_Item5, int32 CallFunc_Array_Length_ReturnValue4, int32 CallFunc_Array_Length_ReturnValue5, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue1, class UArsenalMovement_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue2, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1, float CallFunc_Abs_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, class AActor* CallFunc_Array_Get_Item6, int32 CallFunc_Array_Get_Item7, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue1);
	void ProcessCenterSemiAuto(TArray<class AActor*>& NewAimingCharacterList, TArray<struct FBox2D>& NewAimingBoxList, TArray<int32>& NewAimingNotSelectedTimeList, TArray<float>& NewAimingTimerList, class UDefaultCameraControlComponent_C* CameraComponent, bool* IsChange, bool CallFunc_ProcessCenterManual_IsChange, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void ListupAimingCharacter_0(float LockOnRange, float MissileLockonRange, TArray<struct FTTLLockonTargetUnit>& TargetUnits, float DistanceToTarget, bool IsPlayer, bool IsChange, int32 MaxNotSelectedTime, const TArray<int32>& NewAimingNotSelectedTimeList, bool OldStickTrigger, const TArray<float>& NewAimingOutTimerList, float OutTimer, int32 Index, float Score, const TArray<float>& NewAimingScoreList, const TArray<float>& NewAimingTimerList, const TArray<struct FBox2D>& NewAimingBoxList, const TArray<class AActor*>& NewAimingPawnList, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, int32 Temp_int_Array_Index_Variable1, const struct FTTLLockonTargetUnit& CallFunc_Array_Get_Item, class AActor* CallFunc_GetTargetParams_Actor, float CallFunc_GetTargetParams_DistanceToTarget, float CallFunc_GetTargetParams_Score, float CallFunc_GetTargetParams_OutTimer, const struct FBox2D& CallFunc_GetTargetParams_ScreenBox, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue1, int32 CallFunc_CalcInsertIndex_OldIndex, float CallFunc_CalcInsertIndex_OldTime, int32 CallFunc_CalcInsertIndex_ReturnValue, float Temp_float_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Get_Item1, int32 CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LockonRevise_TargetSwitching_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_VSize2D_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue1, int32 CallFunc_ProcessFindPriorityCharacter_Index, bool CallFunc_ProcessFindPriorityCharacter_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1);
	void ChangeSightCallFromCPlus();
	void ExecuteUbergraph_LockonComponent(int32 EntryPoint);
};

}


