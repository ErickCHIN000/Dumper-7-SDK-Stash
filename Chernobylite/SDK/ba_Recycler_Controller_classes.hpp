#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x3CD - 0x2DD)
// BlueprintGeneratedClass ba_Recycler_Controller.ba_Recycler_Controller_C
class Aba_Recycler_Controller_C : public Aba_ia_BaseInteractableObject_01_C
{
public:
	uint8                                        Pad_2B94[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                  Cube;                                              // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Mesh;                                              // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        InteractionDistance;                               // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2B9E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnInteractionWith;                                 // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ANote*                                 PlaceRoomHere;                                     // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStaticMeshActor*                      Door;                                              // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Aba_RoomSelection_C*                   Room_Selection;                                    // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Room_Index;                                        // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BA3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Aba_RoomUpgrades_C*                    RoomUpgrades;                                      // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnRoomBuild;                                       // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Is_opened;                                         // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BAC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnShowTutorial;                                    // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWid_Storage_v2_Main_C*                Storage;                                           // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FPressedTime;                                      // 0x368(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseButtonPressed;                                  // 0x36C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BB5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FPressDelay;                                       // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMapMarkerActiveAtStart;                          // 0x374(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BB8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StorageID;                                         // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Columns;                                           // 0x37C(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnStorageClosed;                                   // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FInventoryEntry>               ItemsInStorage;                                    // 0x390(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Is_ParentValid;                                    // 0x3A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BBD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseBuildSystemEntity_01_C*           Parent;                                            // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RecyclingPending;                                  // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BBF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SelectedItemToRecycle;                             // 0x3B4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ItemToRecycleUID;                                  // 0x3BC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ItemToRecyclePosition;                             // 0x3C4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DoesRequirePower;                                  // 0x3CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class Aba_Recycler_Controller_C* GetDefaultObj();

	void HideActiveItemIfNeeded(class FName UniqueId, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, const struct FFPAnimQuery& K2Node_MakeStruct_FPAnimQuery, float CallFunc_CountUID_ReturnValue, bool CallFunc_QueryActivity_OutQueryResult, TArray<struct FFPAnimQuery>& CallFunc_QueryActivity_OutQueryQueue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACGWeapon* K2Node_DynamicCast_AsCGWeapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void TryToRecycle(const struct FInventoryEntry& CachedItem, float StartCount, bool Removed, FDelegateProperty_ Temp_delegate_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, class FName CallFunc_GetInternalItemId_ReturnValue, const struct FInventoryEntry& CallFunc_GetItemWithInternalId_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool Temp_bool_IsClosed_Variable, const struct FCraftingRecipe& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<int32>& CallFunc_Map_Values_Values, TArray<class FName>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Get_Item, class FName CallFunc_Array_Get_Item_1, float CallFunc_Conv_IntToFloat_ReturnValue, enum class Enum_ItemNames CallFunc_NameIDToitemEnum_Output, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FItemEntry& CallFunc_GetItemData_Data, bool CallFunc_DoesDataTableRowExist_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, float CallFunc_AquireItem_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, float CallFunc_FMax_ReturnValue, int32 CallFunc_PostEvent_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, float CallFunc_Count_ReturnValue, float CallFunc_Remove_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FInventoryEntry& CallFunc_GetByIndex_ReturnValue, float CallFunc_RemoveAt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1);
	void UpdateItems(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, TArray<struct FInventoryEntry>& CallFunc_GetItems_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	bool IsInteractionUnlocked(bool CallFunc_IsInteractionUnlocked_ReturnValue);
	float MaxInteractionDistance();
	void SetActive(bool InNewActive, bool CallFunc_Not_PreBool_ReturnValue);
	void UserConstructionScript();
	void InpActEvt_Console_Movement_Reloading_K2Node_InputActionEvent_32(const struct FKey& Key);
	void InpActEvt_Console_Movement_Reloading_K2Node_InputActionEvent_31(const struct FKey& Key);
	void InpActEvt_PC_Shortcuts_Grab_K2Node_InputActionEvent_30(const struct FKey& Key);
	void InpActEvt_PC_Shortcuts_Grab_K2Node_InputActionEvent_29(const struct FKey& Key);
	void InpActEvt_PC_Interaction_Attack_K2Node_InputActionEvent_28(const struct FKey& Key);
	void InpActEvt_PC_Interaction_UI_K2Node_InputActionEvent_27(const struct FKey& Key);
	void InpActEvt_Console_Movement_Crouch_K2Node_InputActionEvent_26(const struct FKey& Key);
	void InpActEvt_PC_Interaction_Use_K2Node_InputActionEvent_25(const struct FKey& Key);
	void InpActEvt_PC_Interaction_Use_K2Node_InputActionEvent_24(const struct FKey& Key);
	void InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_23(const struct FKey& Key);
	void InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_22(const struct FKey& Key);
	void InpActEvt_PC_Movement_Up_K2Node_InputActionEvent_21(const struct FKey& Key);
	void InpActEvt_Console_Movement_Up_K2Node_InputActionEvent_20(const struct FKey& Key);
	void InpActEvt_Console_Shortcuts_QuickUse1_K2Node_InputActionEvent_19(const struct FKey& Key);
	void InpActEvt_PC_Movement_Down_K2Node_InputActionEvent_18(const struct FKey& Key);
	void InpActEvt_Console_Movement_Down_K2Node_InputActionEvent_17(const struct FKey& Key);
	void InpActEvt_Console_Shortcuts_QuickUse3_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_PC_Movement_Left_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_PC_Movement_Left_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_Console_Shortcuts_QuickUse4_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_Console_Shortcuts_QuickUse4_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_Console_Movement_Left_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_Console_Movement_Left_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_PC_Movement_Right_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_PC_Movement_Right_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_Console_Shortcuts_QuickUse2_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_Console_Shortcuts_QuickUse2_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_Console_Movement_Right_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Console_Movement_Right_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_PC_Interaction_Scrap_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Console_Interaction_Scrap_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_PC_Interaction_AlternativeAttack_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_PC_Shortcuts_Pause_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InputActivateTutorial();
	void InputOpenPDA();
	void OnPlayerFocusGainedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void OnPlayerFocusLostComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void OnInteractionPressedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void InternalOnInteractionLockedStateChanged();
	void Hide_Indicator();
	void Show_Indicator();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void CloseRecycler();
	void RemoveGasmaskIfMissing();
	void ExecuteUbergraph_ba_Recycler_Controller(int32 EntryPoint, const struct FKey& Temp_struct_Variable, const struct FKey& K2Node_InputActionEvent_Key_13, const struct FKey& K2Node_InputActionEvent_Key_12, const struct FKey& Temp_struct_Variable_1, const struct FKey& K2Node_InputActionEvent_Key_11, const struct FKey& K2Node_InputActionEvent_Key_10, const struct FKey& Temp_struct_Variable_2, const struct FKey& K2Node_InputActionEvent_Key_9, const struct FKey& K2Node_InputActionEvent_Key_8, const struct FKey& Temp_struct_Variable_3, const struct FKey& K2Node_InputActionEvent_Key_7, const struct FKey& K2Node_InputActionEvent_Key_6, const struct FKey& Temp_struct_Variable_4, const struct FKey& K2Node_InputActionEvent_Key_5, const struct FKey& K2Node_InputActionEvent_Key_4, const struct FKey& Temp_struct_Variable_5, const struct FKey& K2Node_InputActionEvent_Key_3, const struct FKey& K2Node_InputActionEvent_Key_2, const struct FKey& K2Node_InputActionEvent_Key_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_6, FDelegateProperty_ Temp_delegate_Variable, const struct FKey& K2Node_InputActionEvent_Key, bool Temp_bool_Variable, TSubclassOf<class ACGMovementState> Temp_class_Variable, TSubclassOf<class ACGMovementState> Temp_class_Variable_1, const struct FKey& K2Node_InputActionEvent_Key_14, const struct FKey& K2Node_InputActionEvent_Key_15, const struct FKey& K2Node_InputActionEvent_Key_16, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FKey& K2Node_InputActionEvent_Key_17, const struct FKey& K2Node_InputActionEvent_Key_18, const struct FKey& K2Node_InputActionEvent_Key_19, const struct FKey& K2Node_InputActionEvent_Key_20, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_BuildSystemGetHasEnoughPower_ReturnValue, bool CallFunc_BuildSystemGetHasEnoughPower_ReturnValue_1, const struct FKey& K2Node_InputActionEvent_Key_21, class AMainPawnCpp* K2Node_Event_PlayerPawn_2, class UActorComponent* K2Node_Event_ComponentHit_2, class AMainPawnCpp* K2Node_Event_PlayerPawn_1, class UActorComponent* K2Node_Event_ComponentHit_1, class AMainPawnCpp* K2Node_Event_PlayerPawn, class UActorComponent* K2Node_Event_ComponentHit, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_Storage_v2_Main_C* CallFunc_Create_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, const struct FKey& Temp_struct_Variable_7, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, TSubclassOf<class ACGMovementState> K2Node_Select_Default, float CallFunc_GetTimeSeconds_ReturnValue, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_1, float CallFunc_GetTimeSeconds_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, const struct FKey& K2Node_InputActionEvent_Key_22, const struct FKey& K2Node_InputActionEvent_Key_23, const struct FKey& Temp_struct_Variable_8, const struct FKey& K2Node_InputActionEvent_Key_24, const struct FKey& K2Node_InputActionEvent_Key_25, const struct FKey& K2Node_InputActionEvent_Key_26, const struct FKey& K2Node_InputActionEvent_Key_27, const struct FKey& K2Node_InputActionEvent_Key_28, const struct FKey& Temp_struct_Variable_9, const struct FKey& K2Node_InputActionEvent_Key_29, const struct FKey& K2Node_InputActionEvent_Key_30, const struct FKey& Temp_struct_Variable_10, const struct FKey& K2Node_InputActionEvent_Key_31, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, const struct FKey& K2Node_InputActionEvent_Key_32, const struct FVector2D& CallFunc_GetSize_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FInventoryEntry& CallFunc_GetByIndex_ReturnValue, const struct FCraftingRecipe& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FItemEntry& CallFunc_GetItemData_Data, bool CallFunc_DoesDataTableRowExist_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, int32 CallFunc_PostEvent_ReturnValue);
	void OnStorageClosed__DelegateSignature(int32 MaxCapacity, TArray<struct FInventoryEntry>& ItemsInStorage);
	void OnShowTutorial__DelegateSignature();
	void OnRoomBuild__DelegateSignature();
	void OnInteractionWith__DelegateSignature();
};

}


