#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA5 (0x819 - 0x774)
// BlueprintGeneratedClass BP_Radarv3.BP_Radarv3_C
class ABP_Radarv3_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_4AC2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBPQC_AnimalSwarm_Local_C*             BPQC_AnimalSwarm_Local;                            // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGenericAITargetComponent*             GenericAITarget;                                   // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioOcclusionComponent*              AudioOcclusion1;                                   // 0x790(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      Widget_RadarInterface;                             // 0x798(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionStimuliSourceComponent*   AIPerceptionStimuliSource;                         // 0x7A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   FMOD_Radar_Audio;                                  // 0x7A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOn;                                              // 0x7B0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_4AFA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Progress;                                          // 0x7B4(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                        SecondsToScan;                                     // 0x7B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B03[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AMapManager_C*                         MapManager;                                        // 0x7C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Completed;                                         // 0x7C8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_4B11[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RadarScanDiameterInKm;                             // 0x7CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RadarScanIntensity;                                // 0x7D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinimumDistanceFromOtherScan;                      // 0x7D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CantScan;                                          // 0x7D8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_4B23[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 LastInstigator;                                    // 0x7E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            RadarActivated;                                    // 0x7E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        RadarMaxEffectiveRange;                            // 0x7F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RadarScanMinArcAngle;                              // 0x7FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RadarScanMaxArcAngle;                              // 0x800(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B4F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         RadarDeployAnimation;                              // 0x808(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         RadarActiveAnimation;                              // 0x810(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RenderWidgetAfterInitialAnimation;                 // 0x818(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Radarv3_C* GetDefaultObj();

	void UpdateAnimalSpawning();
	void CalculateScanResultForDeposit(class ABP_MetaDeposit_C* Deposit, struct FRadarV3ScanData* ScanData, float ArcDirectionError, float ArcDirection, float ArcLength, float Distance, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, int32 CallFunc_GetStat_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, int32 CallFunc_GetStat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, const struct FRadarV3ScanData& K2Node_MakeStruct_RadarV3ScanData, float CallFunc_Divide_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, float CallFunc_VSize_ReturnValue);
	void OnRadarStateUpdated(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void RadarV3ArcCalcs(TArray<struct FRadarV3ScanData>* Scans, const TArray<struct FRadarV3ScanData>& ScanResults, const struct FModifier& K2Node_MakeStruct_Modifier, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class ABP_MetaDeposit_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ABP_MetaDeposit_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FRadarV3ScanData& CallFunc_CalculateScanResultForDeposit_ScanData, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, int32 CallFunc_AddModifierState_ReturnValue, bool CallFunc_IsDepleted_Depleted);
	void OnRep_Progress(float CallFunc_Divide_FloatFloat_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUMG_RadarInterface_C* K2Node_DynamicCast_AsUMG_Radar_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void ConfigureScreenText(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UUMG_RadarInterface_C* K2Node_DynamicCast_AsUMG_Radar_Interface, bool K2Node_DynamicCast_bSuccess, class UUMG_RadarInterface_C* K2Node_DynamicCast_AsUMG_Radar_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_2, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_3, class UUMG_RadarInterface_C* K2Node_DynamicCast_AsUMG_Radar_Interface_2, bool K2Node_DynamicCast_bSuccess_2, class UUMG_RadarInterface_C* K2Node_DynamicCast_AsUMG_Radar_Interface_3, bool K2Node_DynamicCast_bSuccess_3, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_4, bool CallFunc_IsSheltered_ReturnValue, class UUMG_RadarInterface_C* K2Node_DynamicCast_AsUMG_Radar_Interface_4, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_Is_Actor_Required_To_Be_Outside_MustBeOutside);
	void OnRep_Completed();
	void OnRep_CantScan();
	void PreviousScanProximityCheck(bool* bLocked, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FRadarV3ScanData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	void Deployable_Interact(class AActor* Interactor);
	void OnRep_IsOn();
	void ReceiveBeginPlay();
	void Activate(class AActor* Instigator);
	void Deactivate();
	void DeployableTick(float DeltaSeconds);
	void InitAfterExoticStorm();
	void ExecuteUbergraph_BP_Radarv3(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class AMapManager_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_CustomEvent_Instigator, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_PreviousScanProximityCheck_Blocked, bool CallFunc_PreviousScanProximityCheck_Blocked_1, bool CallFunc_PreviousScanProximityCheck_Blocked_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<struct FRadarV3ScanData>& CallFunc_RadarV3ArcCalcs_Scans, const struct FRadarV3ScanData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_GetStat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsPlaying_ReturnValue_1, float K2Node_Event_DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_IsSheltered_ReturnValue, bool CallFunc_Is_Actor_Required_To_Be_Outside_MustBeOutside, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsSheltered_ReturnValue_1, bool CallFunc_Is_Actor_Required_To_Be_Outside_MustBeOutside_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_PreviousScanProximityCheck_Blocked_3, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	void RadarActivated__DelegateSignature();
};

}


