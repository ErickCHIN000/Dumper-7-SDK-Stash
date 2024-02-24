#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x148 - 0x12C)
// BlueprintGeneratedClass BP_Flammable_Building.BP_Flammable_Building_C
class UBP_Flammable_Building_C : public UBP_Flammable_Actor_C
{
public:
	uint8                                        Pad_2AFE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Building_Base_C*                   OwnerBuilding;                                     // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UModifierStateComponent*               ModiferStateComponent;                             // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Flammable_Building_C* GetDefaultObj();

	struct FBoxSphereBounds GetLocalBounds(const struct FBoxSphereBounds& NewLocalVar_0, bool CallFunc_IsValid_ReturnValue, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue);
	bool CanPropagate(enum class EFlammablePropagationType PropagationType, bool K2Node_SwitchEnum_CmpSuccess);
	void TeardownCosmetics(bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class UNiagaraComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UNiagaraComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void SetupCosmetics();
	void ReceiveBeginPlay();
	void SetupBuildingCosmetics();
	void OnFlammableInstanceState_Combusting_Tick(class UFlammableInstance* Instance, class UFlammableState* State, float DeltaSeconds);
	void OnFlammableInstanceState_Combusting_Enter(class UFlammableInstance* Instance, class UFlammableState* State);
	void ExecuteUbergraph_BP_Flammable_Building(int32 EntryPoint, class UFlammableInstance* K2Node_Event_Instance, class UFlammableState* K2Node_Event_State, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class ABuildingBase* K2Node_DynamicCast_AsBuilding_Base, bool K2Node_DynamicCast_bSuccess_2, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Building_Base_C* K2Node_DynamicCast_AsBP_Building_Base, bool K2Node_DynamicCast_bSuccess_3, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsServer_ReturnValue, class AWorldSettings* CallFunc_GetWorldSettings_ReturnValue, float CallFunc_GetGameTimeSinceCreation_ReturnValue, float CallFunc_GetGameTimeSinceCreation_ReturnValue_1, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetNumChildrenComponents_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool Temp_bool_IsClosed_Variable_1, class UFlammableInstance* K2Node_CustomEvent_Instance, class UFlammableState* K2Node_CustomEvent_State, float K2Node_CustomEvent_DeltaSeconds, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UModifierCosmetic_Flaming_C* K2Node_DynamicCast_AsModifier_Cosmetic_Flaming, bool K2Node_DynamicCast_bSuccess_4, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, class AActor* CallFunc_GetOwner_ReturnValue_1, class UModifierStateComponent* CallFunc_GetModifierStateByUID_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class URoofSnow_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, int32 Temp_int_Array_Index_Variable, class USceneComponent* CallFunc_Array_Get_Item, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System, bool K2Node_DynamicCast_bSuccess_5, class UPlayerSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UPlayerSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_8);
};

}


