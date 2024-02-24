#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0xF0 - 0xA0)
// BlueprintGeneratedClass BP_CreatureTrackingComponent.BP_CreatureTrackingComponent_C
class UBP_CreatureTrackingComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         GlobalDisableTracking;                             // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_275C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_CreatureBase_C*                    OwningCreature;                                    // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Initialized;                                       // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2766[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          LocationHistoryTimer;                              // 0xC0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       LocationHistory;                                   // 0xC8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       LocationHistoryInterval;                           // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int32                                        LocationHistoryLength;                             // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         LoggingEnabled;                                    // 0xE4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AutoStartTracking;                                 // 0xE5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_277B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LocationPointsPerNode;                             // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_CreatureTrackingComponent_C* GetDefaultObj();

	void ClearLocationHistory();
	struct FVector GetAverageDirection(const struct FVector& CallFunc_GetVectorArrayAverage_ReturnValue);
	void TrackingLog(const class FString& LogMessage, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsServer_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
	void IsTrackingActive(bool* TrackingActive, bool CallFunc_K2_IsValidTimerHandle_ReturnValue);
	void GetLocationSplineData(TArray<struct FSplinePoint>* LocationSplineData, const TArray<struct FSplinePoint>& LocationSplinePoints, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FSplinePoint& K2Node_MakeStruct_SplinePoint, int32 CallFunc_Array_Add_ReturnValue, float K2Node_MakeStruct_InputKey_ImplicitCast);
	bool StopLocationHistory(bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void StartLocationHistory(bool* Success, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void RecordLocation(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void InitializeTrackingForLeader(bool* Success, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_IsLeader_ReturnValue, class UBP_SquadTrackingComponent_C* CallFunc_GetComponentByClass_ReturnValue, double CallFunc_GetNodeSpawnInterval_NodeSpawnInterval, bool CallFunc_IsValid_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void InitializeTracking(bool* Success, bool CallFunc_InitializeTrackingForLeader_Success, bool CallFunc_StartLocationHistory_Success, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CreatureTrackingComponent(int32 EntryPoint, bool CallFunc_InitializeTracking_Success);
};

}


