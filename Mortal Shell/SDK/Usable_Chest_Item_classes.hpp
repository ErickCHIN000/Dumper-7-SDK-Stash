#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6A (0x3A8 - 0x33E)
// BlueprintGeneratedClass Usable_Chest_Item.Usable_Chest_Item_C
class AUsable_Chest_Item_C : public AContainer_Actor_C
{
public:
	uint8                                        Pad_2C5C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                Chest;                                             // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FDHDataTableID                        ItemId;                                            // 0x350(0x8)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	bool                                         IsOpen_;                                           // 0x358(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C67[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDHDataTableID                        ItemId_2;                                          // 0x35C(0x8)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	struct FDHDataTableID                        ItemId_3;                                          // 0x364(0x8)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	int32                                        ChestSize;                                         // 0x36C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInventoryItem>                ChestInvArray;                                     // 0x370(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UAnimMontage*                          OpenChestMontage;                                  // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OpenChestMontagePlayRate;                          // 0x388(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C7E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          SuperUpgradeNames;                                 // 0x390(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class AZero_Base_C*                          ZeroBase_Ref;                                      // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AUsable_Chest_Item_C* GetDefaultObj();

	void DualSense_OpenChest(uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ControllerAudio_C* CallFunc_FinishSpawningActor_ReturnValue);
	void Replace_Just_Once_Item(struct FDHDataTableID& DHDataTableID, bool CallFunc_IsJustOnceItem_ReturnValue, class FName CallFunc_GetJustOnceItemReplacement_ReplacementID);
	bool IsJustOnceItem(struct FDHDataTableID& DHDataTableID, bool CallFunc_IsItemJustOnceItem_bYes);
	void ContainsJustOnceItems(bool* bContains, bool CallFunc_IsJustOnceItem_ReturnValue, bool CallFunc_IsJustOnceItem_ReturnValue_1, bool CallFunc_IsJustOnceItem_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void DisableChest();
	void TryAddItemToChestInvArray(struct FDHDataTableID& ID, TArray<struct FInventoryItem>& ChestArray, int32 Temp_int_Variable, class FName CallFunc_RowName_ReturnValue, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void OnActorUsed(class APlayerController* Controller, bool* Success);
	void ContainerLooted(bool* Success, class FName CallFunc_GetUniqueDHID_ID, bool CallFunc_ContainsJustOnceItems_bContains, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, bool CallFunc_ContainerLooted_Success);
	void InitializeInventory(bool* Success, bool CallFunc_LoadInventoryItems_Success);
	void OnNotifyEnd_6D95205E477C6CE3E521019318CE71DF(class FName NotifyName);
	void OnNotifyBegin_6D95205E477C6CE3E521019318CE71DF(class FName NotifyName);
	void OnInterrupted_6D95205E477C6CE3E521019318CE71DF(class FName NotifyName);
	void OnBlendOut_6D95205E477C6CE3E521019318CE71DF(class FName NotifyName);
	void OnCompleted_6D95205E477C6CE3E521019318CE71DF(class FName NotifyName);
	void ChestUsed();
	void OpenChest(bool WasFromBeginPlay);
	void ReceiveBeginPlay();
	void ChestAlreadyOpened();
	void ChestOpenAnimPlaying(bool WasFromBeginPlay);
	void ReplaceItemsIfNeeded();
	void SetSignificanceBP(enum class EDHSignificanceLevel SignificanceLevel);
	void ExecuteUbergraph_Usable_Chest_Item(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsMyNameInChangedSet_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool K2Node_CustomEvent_WasFromBeginPlay_1, bool CallFunc_OnActorUsed_Success, bool K2Node_CustomEvent_WasFromBeginPlay, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ContainsJustOnceItems_bContains, bool CallFunc_InitializeInventory_Success, enum class EDHSignificanceLevel K2Node_Event_SignificanceLevel, bool K2Node_SwitchEnum_CmpSuccess, class FName CallFunc_GetUniqueDHID_ID, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, int32 CallFunc_GetNamedPCInt_Value, bool CallFunc_OnActorUsed_Success_1, bool CallFunc_NotEqual_IntInt_ReturnValue, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4);
};

}


