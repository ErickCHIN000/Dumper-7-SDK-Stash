#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8F (0x3A1 - 0x312)
// BlueprintGeneratedClass Usable_Branching_NPC.Usable_Branching_NPC_C
class AUsable_Branching_NPC_C : public AUsable_Actor_C
{
public:
	uint8                                        Pad_30B2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      PlayerTracking_Range;                              // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UUI_Dialogue_C*                        UI_Widget;                                         // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFirstChoice;                                      // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentDialogue;                                   // 0x334(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_ChantText_C*                       UI_Chant;                                          // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          PlayerCharacter;                                   // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DialogueAutoAdvanceOffset;                         // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class FName>                            DoNotResetItemIDs;                                 // 0x350(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsEnabled;                                         // 0x3A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AUsable_Branching_NPC_C* GetDefaultObj();

	void ConstructItemID(class FName ItemId, class FName* ID, bool* bSaveToPlayer, bool Temp_bool_Variable, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Set_Contains_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FName K2Node_Select_Default);
	void DisplayNonDialogueTalk(TArray<struct FDarkFatherChantSubtitle>& ChantData, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUI_ChantText_C* CallFunc_Create_ReturnValue);
	void AddItemToPlayerInventory(class FName ItemId, bool* Success, int32* InventorySlot, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, const struct FInventoryItem& CallFunc_GetItemFromID_Item, bool CallFunc_TryToAddItemToInventory_Success, const struct FInventoryItem& CallFunc_TryToAddItemToInventory_OutItem, int32 CallFunc_TryToAddItemToInventory_AddedToSlot);
	void CheckRequirements(struct FMerchantItem& MerchantItem, bool* bAllAdded, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_IsUpgradeUnlocked_bUnlocked, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ShouldItemBeDisplayed(int32 Index, bool* bDisplay, TArray<struct FMerchantItem>& CallFunc_GetStock_NewParam, TArray<struct FMerchantItem>& CallFunc_GetStock_NewParam_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_CheckRequirements_bAllAdded, int32 CallFunc_GetNotSoldCount_NotSoldCount, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetStock(TArray<struct FMerchantItem>* NewParam, const TArray<struct FMerchantItem>& EmptyStock);
	void GetItem(struct FMerchantItem& Item, bool* bFound, struct FInventoryItem* OutRow, class FName CallFunc_RowName_ReturnValue, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void GetNotSoldCount(struct FMerchantItem& Item, int32* NotSoldCount, bool CallFunc_GetItem_bFound, const struct FInventoryItem& CallFunc_GetItem_OutRow, class FName CallFunc_ConstructItemID_ID, bool CallFunc_ConstructItemID_bSaveToPlayer, int32 CallFunc_GetMyNamedInt_ReturnValue, int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void GetItemFromIndex(int32 ItemIndex, bool* bFound, struct FInventoryItem* Item, TArray<struct FMerchantItem>& CallFunc_GetStock_NewParam, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_GetItem_bFound, const struct FInventoryItem& CallFunc_GetItem_OutRow);
	void IsArbNameInSetPure_(class FName NameToCheck, bool* IsInSet_, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, bool CallFunc_DH_CheckAbritraryNameIsInChangedSet_IsInSet_);
	void IncrementDialogCounterAndSave(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, int32 Temp_int_Variable, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue);
	void RemoveItemFromPlayerInventory(class FName ItemId, int32 AmountToRemove, bool* Success, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_InventorySlot, int32 CallFunc_HasItem_Amount, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem, bool CallFunc_RemoveFromItemAmount_WasFullAmountRemoved, const struct FInventoryItem& CallFunc_RemoveFromItemAmount_OutnventoryItem, int32 CallFunc_RemoveFromItemAmount_AmountRemoved);
	void CheckPlayerInventoryForItem(class FName ItemId, bool* Success, int32* InventorySlot, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_InventorySlot, int32 CallFunc_HasItem_Amount);
	void OnActorUsed(class APlayerController* Controller, bool* Success, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_OnActorUsed_Success, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, class UUI_Dialogue_C* CallFunc_Create_ReturnValue, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_GetMyInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue);
	void ContinueDialog();
	void OnWidgetHidden();
	void OnTradeFinished();
	void OnItemBought(int32 ItemIndex, int32 Amount);
	void StartPlayerCameraControl();
	void EndPlayerCameraControl();
	void ReceiveTick(float DeltaSeconds);
	void OnDialogueFinished();
	void BndEvt__PlayerTracking_Range_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__PlayerTracking_Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OpenTradeMenu();
	void SetSignificanceBP(enum class EDHSignificanceLevel SignificanceLevel);
	void OnOptionSelected(bool bYes);
	void ReceiveBeginPlay();
	void OnPhotModeChanged(bool bEnterred);
	void ExecuteUbergraph_Usable_Branching_NPC(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, int32 K2Node_CustomEvent_ItemIndex, int32 K2Node_CustomEvent_Amount, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_GetItemFromIndex_bFound, const struct FInventoryItem& CallFunc_GetItemFromIndex_Item, class FName CallFunc_ConstructItemID_ID, bool CallFunc_ConstructItemID_bSaveToPlayer, int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_GetMyNamedInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_GetInputAxisValue_ReturnValue, float CallFunc_GetInputAxisValue_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_GetInputAxisValue_ReturnValue_2, float CallFunc_GetInputAxisValue_ReturnValue_3, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class FText Temp_text_Variable, float CallFunc_ControllerSensitivity_OutputPin, float CallFunc_ControllerYInverted_ReturnValue, float CallFunc_ControllerSensitivity_OutputPin_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_ControllerXInverted_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_6, float CallFunc_MouseSensitivity_OutputPin, float CallFunc_Multiply_FloatFloat_ReturnValue_7, float CallFunc_MouseXInverted_OutputPin, float CallFunc_Multiply_FloatFloat_ReturnValue_8, float CallFunc_MouseSensitivity_OutputPin_1, float CallFunc_Multiply_FloatFloat_ReturnValue_9, float CallFunc_MouseYInverted_OutputPin, float CallFunc_Multiply_FloatFloat_ReturnValue_10, class FText Temp_text_Variable_1, float CallFunc_Multiply_FloatFloat_ReturnValue_11, bool Temp_bool_Variable, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class AZero_Base_C* K2Node_DynamicCast_As0_Base_1, bool K2Node_DynamicCast_bSuccess_1, class FText Temp_text_Variable_2, enum class EDHSignificanceLevel K2Node_Event_SignificanceLevel, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_CustomEvent_bYes, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_Select_Default, const struct FDHDialogueLine& K2Node_MakeStruct_DHDialogueLine, TArray<struct FDHDialogueLine>& K2Node_MakeArray_Array, class FText Temp_text_Variable_3, bool Temp_bool_Variable_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, class FText K2Node_Select_Default_1, const struct FDHDialogueLine& K2Node_MakeStruct_DHDialogueLine_1, TArray<struct FDHDialogueLine>& K2Node_MakeArray_Array_1, bool K2Node_CustomEvent_bEnterred, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2);
};

}


