#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x74 (0x7E8 - 0x774)
// BlueprintGeneratedClass BP_Radar.BP_Radar_C
class ABP_Radar_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_B58[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UIcarusMapIconComponent*               IcarusMapIcon;                                     // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   FMOD_Radar_Audio;                                  // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight;                                        // 0x790(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Cube;                                              // 0x798(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOn;                                              // 0x7A0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_B68[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ScanningTileX;                                     // 0x7A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ScanningTileY;                                     // 0x7A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Progress;                                          // 0x7AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SecondsToScan;                                     // 0x7B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B74[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AMapManager_C*                         MapManager;                                        // 0x7B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SpiralRadiusMax;                                   // 0x7C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SpiralRadiusCurrent;                               // 0x7C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SpiralLastX;                                       // 0x7C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SpiralLastY;                                       // 0x7CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Completed;                                         // 0x7D0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B89[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            RadarActivated;                                    // 0x7D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_Radar_C* GetDefaultObj();

	void Deployable_Interact(class AActor* Interactor);
	void OnRep_IsOn(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, bool CallFunc_IsPlaying_ReturnValue);
	void NextSpiralScanLocation(bool* Success, int32 RadarYLoc, int32 RadarXLoc, int32 Temp_int_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_WorldSpaceToTile_X, int32 CallFunc_WorldSpaceToTile_Y, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_1, bool CallFunc_TryToGetUnscannedTileAtCoords_FoundUnscanned, int32 CallFunc_TryToGetUnscannedTileAtCoords_Unscanned_X, int32 CallFunc_TryToGetUnscannedTileAtCoords_Unscanned_Y, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 Temp_int_Variable_2, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue_2, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_3, int32 CallFunc_Multiply_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue_5, int32 CallFunc_Multiply_IntInt_ReturnValue_6, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue_7, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, int32 CallFunc_Multiply_IntInt_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_NotEqual_IntInt_ReturnValue_3, int32 Temp_int_Variable_3, int32 CallFunc_Multiply_IntInt_ReturnValue_9, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_3);
	void ReceiveBeginPlay();
	void Activate(class AActor* Instigator);
	void DeployableTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Radar(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class AMapManager_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable, bool CallFunc_NextSpiralScanLocation_Success, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class AActor* K2Node_CustomEvent_Instigator, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult);
	void RadarActivated__DelegateSignature();
};

}


