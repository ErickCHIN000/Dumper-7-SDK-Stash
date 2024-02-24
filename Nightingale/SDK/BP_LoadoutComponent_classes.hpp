#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x1A0 - 0x178)
// BlueprintGeneratedClass BP_LoadoutComponent.BP_LoadoutComponent_C
class UBP_LoadoutComponent_C : public ULoadoutComponentBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x178(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                          RebuildCheckHandle;                                // 0x180(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bInitialized;                                      // 0x188(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnInitialized;                                     // 0x190(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_LoadoutComponent_C* GetDefaultObj();

	void UnEquipItem(enum class ELoadoutSlotType SlotType, class ABP_EquippableItemBase_C* Item, class AActor* CallFunc_GetOwner_ReturnValue, const struct FLoadoutSlot& CallFunc_GetSlotByType_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_UndoLoadout_Success, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	bool EquipItem(enum class ELoadoutSlotType SlotType, class ABP_EquippableItemBase_C* Item, class AActor* CallFunc_GetOwner_ReturnValue, const struct FLoadoutSlot& CallFunc_GetSlotByType_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void GetLoadoutSlots(TArray<struct FLoadoutSlot>* LoadoutSlots);
	void IsInitialized(bool* bInitialized);
	void CheckRebuildPolling(bool CallFunc_AttemptRebuild_Succeeded);
	void TriggerRebuild(bool CallFunc_AttemptRebuild_Succeeded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void AttemptRebuild(bool* Succeeded, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_AnimCharacter_C* K2Node_DynamicCast_AsBP_Anim_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue);
	void PerformRebuild(class ABP_AnimCharacter_C* Character, int32 Index, const struct FLoadoutSlot& Slot, const TArray<struct FS_LoadoutRebuild>& RebuildData, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, const struct FGameplayTag& Temp_struct_Variable_4, const struct FGameplayTag& Temp_struct_Variable_5, const struct FGameplayTag& Temp_struct_Variable_6, const struct FGameplayTag& Temp_struct_Variable_7, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_8, const struct FGameplayTag& Temp_struct_Variable_9, enum class ELoadoutSlotType Temp_byte_Variable, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, const struct FGameplayTag& K2Node_Select_Default, bool CallFunc_IsValid_Guid_ReturnValue, const struct FS_LoadoutRebuild& K2Node_MakeStruct_S_LoadoutRebuild, int32 CallFunc_Array_Add_ReturnValue, const struct FLoadoutSlot& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void ReceiveBeginPlay();
	void WTFFakeBeginPlay();
	void ExecuteUbergraph_BP_LoadoutComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void OnInitialized__DelegateSignature();
};

}


