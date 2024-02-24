#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A (0x362 - 0x348)
// BlueprintGeneratedClass ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C
class Aba_RepairBench_InteractiveObject_C : public Aba_InteractableCustom_01_NoSave_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_Storage_v2_Main_C*                Widget;                                            // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FPressedTime;                                      // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FPressDelay;                                       // 0x35C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseButtonPressed;                                  // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         RepairPending;                                     // 0x361(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class Aba_RepairBench_InteractiveObject_C* GetDefaultObj();

	void RepairItem(class FName LocalResourceName, const struct FInventoryEntry& LocalItem, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AMainPawnCpp* CallFunc_GetCGPawnBase_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class AMainPawnCpp* CallFunc_GetCGPawnBase_ReturnValue_1, class AMainPawnCpp* CallFunc_GetCGPawnBase_ReturnValue_2, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostEvent_ReturnValue, const struct FInventoryEntry& CallFunc_GetByIndex_ReturnValue, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew_1, const struct FCraftingRecipe& CallFunc_GetCraftingRecipe_Recipe, class FName CallFunc_GetInternalItemId_ReturnValue, TArray<class FName>& CallFunc_Map_Keys_Keys, bool CallFunc_CanBeRepaired_Result, class FName CallFunc_Array_Get_Item, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Remove_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Remove_ReturnValue_1);
	float GetResourceCountOnPlayerAndStorage(class FName Item, class AMainPawnCpp* CallFunc_GetCGPawnBase_ReturnValue, float CallFunc_CountUID_ReturnValue, float CallFunc_CountUID_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue);
	void CanBeRepaired(bool* Result, class FName LocalResourceName, const struct FInventoryEntry& LocalItem, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetResourceCountOnPlayerAndStorage_ReturnValue, const struct FCraftingRecipe& CallFunc_GetCraftingRecipe_Recipe, const struct FItemEntry& CallFunc_GetItemData_Data, TArray<class FName>& CallFunc_Map_Keys_Keys, class FName CallFunc_Array_Get_Item, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, TSubclassOf<class ACGWeapon> K2Node_ClassDynamicCast_AsCGWeapon, bool K2Node_ClassDynamicCast_bSuccess, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew_1, class FName CallFunc_GetInternalItemId_ReturnValue, float CallFunc_GetWeaponDurability_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FInventoryEntry& CallFunc_GetByIndex_ReturnValue);
	void InpActEvt_PC_Interaction_Use_K2Node_InputActionEvent_32(const struct FKey& Key);
	void InpActEvt_PC_Interaction_Use_K2Node_InputActionEvent_31(const struct FKey& Key);
	void InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_30(const struct FKey& Key);
	void InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_29(const struct FKey& Key);
	void InpActEvt_Console_Movement_Reloading_K2Node_InputActionEvent_28(const struct FKey& Key);
	void InpActEvt_Console_Movement_Reloading_K2Node_InputActionEvent_27(const struct FKey& Key);
	void InpActEvt_PC_Shortcuts_Grab_K2Node_InputActionEvent_26(const struct FKey& Key);
	void InpActEvt_PC_Shortcuts_Grab_K2Node_InputActionEvent_25(const struct FKey& Key);
	void InpActEvt_PC_Interaction_Attack_K2Node_InputActionEvent_24(const struct FKey& Key);
	void InpActEvt_PC_Movement_Up_K2Node_InputActionEvent_23(const struct FKey& Key);
	void InpActEvt_Console_Movement_Up_K2Node_InputActionEvent_22(const struct FKey& Key);
	void InpActEvt_Console_Shortcuts_QuickUse1_K2Node_InputActionEvent_21(const struct FKey& Key);
	void InpActEvt_PC_Movement_Down_K2Node_InputActionEvent_20(const struct FKey& Key);
	void InpActEvt_Console_Movement_Down_K2Node_InputActionEvent_19(const struct FKey& Key);
	void InpActEvt_Console_Shortcuts_QuickUse3_K2Node_InputActionEvent_18(const struct FKey& Key);
	void InpActEvt_PC_Movement_Left_K2Node_InputActionEvent_17(const struct FKey& Key);
	void InpActEvt_PC_Movement_Left_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_Console_Shortcuts_QuickUse4_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_Console_Shortcuts_QuickUse4_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_Console_Movement_Left_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_Console_Movement_Left_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_PC_Movement_Right_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_PC_Movement_Right_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_Console_Shortcuts_QuickUse2_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_Console_Shortcuts_QuickUse2_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_Console_Movement_Right_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_Console_Movement_Right_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_PC_Interaction_Scrap_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Console_Interaction_Scrap_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_PC_Interaction_AlternativeAttack_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_PC_Interaction_UI_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Console_Movement_Crouch_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_PC_Shortcuts_Pause_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InputTryRepair();
	void OnInteractionPressedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void CloseWidget();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_ba_RepairBench_InteractiveObject(int32 EntryPoint, const struct FKey& K2Node_InputActionEvent_Key_12, const struct FKey& Temp_struct_Variable, const struct FKey& K2Node_InputActionEvent_Key_11, const struct FKey& K2Node_InputActionEvent_Key_10, const struct FKey& Temp_struct_Variable_1, const struct FKey& K2Node_InputActionEvent_Key_9, const struct FKey& K2Node_InputActionEvent_Key_8, const struct FKey& Temp_struct_Variable_2, const struct FKey& K2Node_InputActionEvent_Key_7, const struct FKey& K2Node_InputActionEvent_Key_6, const struct FKey& Temp_struct_Variable_3, const struct FKey& K2Node_InputActionEvent_Key_5, const struct FKey& K2Node_InputActionEvent_Key_4, const struct FKey& K2Node_InputActionEvent_Key_3, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_4, FDelegateProperty_ Temp_delegate_Variable, const struct FKey& K2Node_InputActionEvent_Key_2, const struct FKey& K2Node_InputActionEvent_Key_1, const struct FKey& K2Node_InputActionEvent_Key, bool Temp_bool_Variable, TSubclassOf<class ACGMovementState> Temp_class_Variable, TSubclassOf<class ACGMovementState> Temp_class_Variable_1, const struct FKey& K2Node_InputActionEvent_Key_15, const struct FKey& Temp_struct_Variable_5, const struct FKey& K2Node_InputActionEvent_Key_16, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_BuildSystemGetHasEnoughPower_ReturnValue, bool CallFunc_BuildSystemGetHasEnoughPower_ReturnValue_1, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_17, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_18, const struct FKey& K2Node_InputActionEvent_Key_19, const struct FKey& K2Node_InputActionEvent_Key_20, const struct FKey& K2Node_InputActionEvent_Key_21, const struct FKey& K2Node_InputActionEvent_Key_22, const struct FKey& K2Node_InputActionEvent_Key_23, const struct FKey& K2Node_InputActionEvent_Key_24, const struct FKey& Temp_struct_Variable_6, const struct FKey& K2Node_InputActionEvent_Key_25, const struct FKey& K2Node_InputActionEvent_Key_26, const struct FKey& Temp_struct_Variable_7, const struct FKey& K2Node_InputActionEvent_Key_27, const struct FKey& K2Node_InputActionEvent_Key_28, const struct FKey& Temp_struct_Variable_8, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FKey& K2Node_InputActionEvent_Key_29, int32 CallFunc_PostEvent_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_30, const struct FKey& K2Node_InputActionEvent_Key_13, bool CallFunc_CanBeRepaired_Result, class AMainPawnCpp* K2Node_Event_PlayerPawn, class UActorComponent* K2Node_Event_ComponentHit, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class UWid_Storage_v2_Main_C* CallFunc_Create_ReturnValue, const struct FKey& Temp_struct_Variable_9, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue, const struct FKey& Temp_struct_Variable_10, const struct FKey& K2Node_InputActionEvent_Key_14, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TSubclassOf<class ACGMovementState> K2Node_Select_Default, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_1, const struct FKey& K2Node_InputActionEvent_Key_31, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, const struct FKey& K2Node_InputActionEvent_Key_32, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float K2Node_Event_DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
};

}


