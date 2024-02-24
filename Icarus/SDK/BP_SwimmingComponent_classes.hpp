#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x84 (0x16C - 0xE8)
// BlueprintGeneratedClass BP_SwimmingComponent.BP_SwimmingComponent_C
class UBP_SwimmingComponent_C : public UFloatableComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsOverlappingWater;                                // 0xF0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         CharacterIsDead_;                                  // 0xF1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DF1[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SurfacingVelocity;                                 // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SwimUp;                                            // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SlowImpact;                                        // 0xF9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DF6[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SwimmingModifierUID;                               // 0xFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SwimHeight;                                        // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WetHeight;                                         // 0x104(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        WetModifierUID;                                    // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WetActive;                                         // 0x10C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DFD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LavaModifierUID;                                   // 0x110(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E01[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FModifierStatesRowHandle, int32> WetModifiers;                                      // 0x118(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        ShallowModifierUID;                                // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_SwimmingComponent_C* GetDefaultObj();

	void TryRemoveModifier(int32& UIDRef, bool CallFunc_IsServer_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_RemoveModifierState_ReturnValue);
	void TryAddModifier(int32& UIDRef, const struct FModifierStatesRowHandle& Modifier, bool CallFunc_IsServer_ReturnValue, const struct FModifier& K2Node_MakeStruct_Modifier, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_AddModifierState_ReturnValue);
	void AddWetModifier(const struct FModifierStatesRowHandle& Modifier, const struct FModifier& K2Node_MakeStruct_Modifier, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_AddModifierState_ReturnValue);
	void GetOverlapSetup(struct FWaterSetupRowHandle* Setup, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPrimitiveComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AWaterBody* K2Node_DynamicCast_AsWater_Body, bool K2Node_DynamicCast_bSuccess);
	void TryRemoveWetModifiers(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<int32>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_RemoveModifierState_ReturnValue);
	void TryAddWetModifiers(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UPlayerSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, TArray<struct FWaterSetupRowHandle>& CallFunc_GetWaterSetupsFromOverlaps_ReturnValue, const struct FWaterSetupRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FWaterSetup& CallFunc_GetWaterSetupStruct_WaterSetup, enum class EValid CallFunc_GetWaterSetupStruct_Paths, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FModifierStatesRowHandle& CallFunc_Array_Get_Item_1, bool CallFunc_Map_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void UpdateSwimmingState(bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue_2, class UIcarusPlayerMovementComponent* K2Node_DynamicCast_AsIcarus_Player_Movement_Component, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetCurrentWaterDepth_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_GetCurrentWaterDepth_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsSwimming_ReturnValue, float CallFunc_GetCurrentWaterDepth_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsServer_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue_1, class ACharacter* K2Node_DynamicCast_AsCharacter_1, bool K2Node_DynamicCast_bSuccess_2, class UIcarusPlayerMovementComponent* K2Node_DynamicCast_AsIcarus_Player_Movement_Component_1, bool K2Node_DynamicCast_bSuccess_3);
	void OnRep_IsOverlappingWater();
	void StopSwimming(class AActor* CallFunc_GetOwner_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, class UIcarusPlayerMovementComponent* K2Node_DynamicCast_AsIcarus_Player_Movement_Component, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsSwimming_ReturnValue);
	void UpdateState(const struct FStruct_SwimmingCharacterStructure& SwimCharacterIndex, class ACharacter* Character, bool NewSwimming, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void UpdateOverlappedState();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void MovementModeChanged(class ACharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void ExecuteUbergraph_BP_SwimmingComponent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetOwner_ReturnValue, class ACharacter* K2Node_CustomEvent_Character, enum class EMovementMode K2Node_CustomEvent_PrevMovementMode, uint8 K2Node_CustomEvent_PreviousCustomMode, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess);
};

}


