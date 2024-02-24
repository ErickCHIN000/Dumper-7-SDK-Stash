#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4D (0x7C1 - 0x774)
// BlueprintGeneratedClass BP_Basic_Fishing_Trap.BP_Basic_Fishing_Trap_C
class ABP_Basic_Fishing_Trap_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_699D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_UIProjectionLocation_C*            BP_UIProjectionLocation;                           // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOverlapAudioComponent*                OverlapAudio;                                      // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      Camera;                                            // 0x790(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Fish;                                              // 0x798(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_BuoyancyComponent_C*               BP_BuoyancyComponent;                              // 0x7A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        InitialTimeToCatch;                                // 0x7A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_69A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory*                            InventoryRef;                                      // 0x7B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer;                                             // 0x7B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowFish;                                          // 0x7C0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Basic_Fishing_Trap_C* GetDefaultObj();

	void WearLure(enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UInventory* CallFunc_GetInventory_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_DealDamageToInventoryItem_ReturnValue);
	void OnRep_ShowFish(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue);
	void GetTimeToCatch(float* TimeToCatch, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
	void TimerCatchFish(class UFishingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, int32 CallFunc_GetChanceToCatch_ChanceToCatch, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, enum class ERollResult CallFunc_BP_RollChance_Paths, class UInventory* CallFunc_GetInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_DealDamageToInventoryItem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate_1, enum class EValid CallFunc_GetItemTemplateStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate_2, enum class EValid CallFunc_GetItemTemplateStruct_Paths_2, enum class ERollResult CallFunc_BP_RollChance_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_4, bool K2Node_SwitchEnum_CmpSuccess_5, const struct FItemData& CallFunc_CatchFish_Fish, bool CallFunc_CatchFish_ReturnValue);
	void FishingLureChanged(class UInventory* Inventory, int32 Location, TMap<struct FStatsEnum, int32> LocalStats, bool Temp_bool_Variable, const struct FItemData& CallFunc_GetItem_ReturnValue, const struct FIcarusAttachment& CallFunc_GetItemAttachmentData_Attachment, enum class EDataValid CallFunc_GetItemAttachmentData_Paths, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, const struct FAlteration& CallFunc_GetAlterationsStruct_Alterations, enum class EValid CallFunc_GetAlterationsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, TArray<struct FStatsEnum>& CallFunc_Map_Keys_Keys, const struct FStatsEnum& CallFunc_Array_Get_Item, bool CallFunc_AddStats_BP_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_RemoveStats_BP_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, float CallFunc_GetTimeToCatch_TimeToCatch, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void GetChanceToCatch(int32* ChanceToCatch);
	void AddToInventory(const struct FItemData& Item, const struct FItemData& CallFunc_CreateItem_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, TArray<struct FItemData>& K2Node_MakeArray_Array, class UInventory* CallFunc_GetInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FItemData>& CallFunc_ForceAddItems_RemainingItems);
	void Deployable_Interact(class AActor* Interactor, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1);
	void DeployableTick(float DeltaSeconds);
	void IcarusBeginPlay();
	void OnInventoryUpdated(class UInventory* Inventory, int32 Location);
	void ExecuteUbergraph_BP_Basic_Fishing_Trap(int32 EntryPoint, float CallFunc_GetGameTimeInSeconds_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Cos_ReturnValue, float CallFunc_Sin_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_4, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, float CallFunc_Cos_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_GetGameTimeInSeconds_ReturnValue_2, float CallFunc_Sin_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_6, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue_8, float CallFunc_Multiply_FloatFloat_ReturnValue_9, float CallFunc_Cos_ReturnValue_2, float CallFunc_Sin_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_4, float K2Node_Event_DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue_10, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, class UInventory* K2Node_CustomEvent_Inventory, int32 K2Node_CustomEvent_Location, class UInventory* CallFunc_GetInventory_ReturnValue, TArray<struct FFindItemSlotInfo>& CallFunc_GetItems_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess);
};

}


