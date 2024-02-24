#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x118 - 0xE8)
// BlueprintGeneratedClass BP_Interactable_Drink_WaterSource.BP_Interactable_Drink_WaterSource_C
class UBP_Interactable_Drink_WaterSource_C : public UInteractableBehaviour
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FModifier                             WaterCoolingBuff;                                  // 0xF0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UFMODEvent*                            InteractSound;                                     // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Interactable_Drink_WaterSource_C* GetDefaultObj();

	void WaterInteract(class ABP_IcarusPlayerCharacterSurvival_C* Player, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FAfflictionChanceRowHandle& CallFunc_MakeLiteralAfflictionChance_ReturnValue, const struct FAfflictionChance& CallFunc_GetAfflictionChanceStruct_AfflictionChance, enum class EValid CallFunc_GetAfflictionChanceStruct_Paths, class AActor* CallFunc_GetOwner_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AWaterBody* K2Node_DynamicCast_AsWater_Body, bool K2Node_DynamicCast_bSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FModifierStatesRowHandle& CallFunc_Array_Get_Item, bool CallFunc_RandomBoolWithWeight_ReturnValue, const struct FModifier& K2Node_MakeStruct_Modifier, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_AddContainerActorCapacity_ReturnValue, TArray<class UInventory*>& CallFunc_Map_Values_Values, int32 CallFunc_AddModifierState_ReturnValue, class UInventory* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, class UPlayerCharacterState* CallFunc_GetPlayerCharacterState_ReturnValue, class UInteractSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, int32 CallFunc_AddModifierState_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, const struct FGameplayTagQuery& CallFunc_MakeGameplayTagQuery_ReturnValue, TArray<struct FFindItemSlotInfo>& CallFunc_GetItems_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FFindItemSlotInfo& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_AddContainerItemCapacity_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_AddModifierState_ReturnValue_2);
	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character, bool K2Node_DynamicCast_bSuccess, enum class ECollisionChannel CallFunc_GetCollisionObjectType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UIcarusPlayerMovementComponent* K2Node_DynamicCast_AsIcarus_Player_Movement_Component, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetCurrentWaterDepth_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	void Interact(class AActor* Instigator, struct FHitResult& HitResult);
	void MULTI_PlayInteractFX(class ABP_IcarusPlayerCharacterSurvival_C* Player);
	void PlayInteractFX(class AIcarusPlayerCharacter* Player);
	void ExecuteUbergraph_BP_Interactable_Drink_WaterSource(int32 EntryPoint, class AIcarusPlayerCharacter* K2Node_CustomEvent_Player, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_CustomEvent_Player_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsLocallyControlled_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, class UBP_NetworkProxyComponentSurvival_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component_Survival, bool K2Node_DynamicCast_bSuccess_1);
};

}


