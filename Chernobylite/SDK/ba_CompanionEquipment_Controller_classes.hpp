#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x258 - 0x220)
// BlueprintGeneratedClass ba_CompanionEquipment_Controller.ba_CompanionEquipment_Controller_C
class Aba_CompanionEquipment_Controller_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UWid_CompanionEquipment_MainWidget_C*  Storage;                                           // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FPressedTime;                                      // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseButtonPressed;                                  // 0x23C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FPressDelay;                                       // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CompanionID;                                       // 0x244(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_27CB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Aba_ch_npc_00_C*                       Companion;                                         // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_CompanionEquipment_Controller_C* GetDefaultObj();

	void InpActEvt_Console_Movement_Reloading_K2Node_InputActionEvent_29(const struct FKey& Key);
	void InpActEvt_Console_Movement_Reloading_K2Node_InputActionEvent_28(const struct FKey& Key);
	void InpActEvt_PC_Shortcuts_Grab_K2Node_InputActionEvent_27(const struct FKey& Key);
	void InpActEvt_PC_Shortcuts_Grab_K2Node_InputActionEvent_26(const struct FKey& Key);
	void InpActEvt_PC_Interaction_Attack_K2Node_InputActionEvent_25(const struct FKey& Key);
	void InpActEvt_PC_Interaction_AlternativeAttack_K2Node_InputActionEvent_24(const struct FKey& Key);
	void InpActEvt_PC_Interaction_UI_K2Node_InputActionEvent_23(const struct FKey& Key);
	void InpActEvt_Console_Movement_Crouch_K2Node_InputActionEvent_22(const struct FKey& Key);
	void InpActEvt_PC_Interaction_Use_K2Node_InputActionEvent_21(const struct FKey& Key);
	void InpActEvt_PC_Interaction_Use_K2Node_InputActionEvent_20(const struct FKey& Key);
	void InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_19(const struct FKey& Key);
	void InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_18(const struct FKey& Key);
	void InpActEvt_PC_Movement_Up_K2Node_InputActionEvent_17(const struct FKey& Key);
	void InpActEvt_Console_Movement_Up_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_Console_Shortcuts_QuickUse1_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_PC_Movement_Down_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_Console_Movement_Down_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_Console_Shortcuts_QuickUse3_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_PC_Movement_Left_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_PC_Movement_Left_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_Console_Shortcuts_QuickUse4_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_Console_Shortcuts_QuickUse4_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_Console_Movement_Left_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_Console_Movement_Left_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_PC_Movement_Right_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Console_Shortcuts_QuickUse2_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Console_Movement_Right_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_PC_Interaction_Scrap_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Console_Interaction_Scrap_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_PC_Shortcuts_Pause_K2Node_InputActionEvent_0(const struct FKey& Key);
	void ReceiveTick(float DeltaSeconds);
	void CloseStorage();
	void HideItemIfMissing();
	void RemoveGasmaskIfMissing();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ba_CompanionEquipment_Controller(int32 EntryPoint, const struct FKey& K2Node_InputActionEvent_Key_16, const struct FKey& K2Node_InputActionEvent_Key_15, const struct FKey& K2Node_InputActionEvent_Key_14, const struct FKey& K2Node_InputActionEvent_Key_13, const struct FKey& K2Node_InputActionEvent_Key_12, const struct FKey& K2Node_InputActionEvent_Key_11, const struct FKey& K2Node_InputActionEvent_Key_10, const struct FKey& Temp_struct_Variable, const struct FKey& K2Node_InputActionEvent_Key_9, const struct FKey& K2Node_InputActionEvent_Key_8, const struct FKey& Temp_struct_Variable_1, const struct FKey& K2Node_InputActionEvent_Key_7, const struct FKey& K2Node_InputActionEvent_Key_6, const struct FKey& Temp_struct_Variable_2, const struct FKey& K2Node_InputActionEvent_Key_5, const struct FKey& K2Node_InputActionEvent_Key_4, const struct FKey& K2Node_InputActionEvent_Key_3, const struct FKey& K2Node_InputActionEvent_Key_2, const struct FKey& K2Node_InputActionEvent_Key_1, const struct FKey& K2Node_InputActionEvent_Key, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_1, float CallFunc_GetTimeSeconds_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_GetTimeSeconds_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWid_CompanionEquipment_MainWidget_C* CallFunc_Create_ReturnValue, const struct FKey& Temp_struct_Variable_3, const struct FKey& K2Node_InputActionEvent_Key_18, const struct FKey& K2Node_InputActionEvent_Key_19, const struct FKey& Temp_struct_Variable_4, const struct FKey& K2Node_InputActionEvent_Key_20, const struct FKey& K2Node_InputActionEvent_Key_21, const struct FKey& K2Node_InputActionEvent_Key_22, const struct FKey& K2Node_InputActionEvent_Key_23, const struct FKey& K2Node_InputActionEvent_Key_24, const struct FKey& K2Node_InputActionEvent_Key_25, const struct FKey& Temp_struct_Variable_5, const struct FKey& K2Node_InputActionEvent_Key_26, const struct FKey& K2Node_InputActionEvent_Key_27, const struct FKey& Temp_struct_Variable_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FFPAnimQuery& K2Node_MakeStruct_FPAnimQuery, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class ACGWeapon* K2Node_DynamicCast_AsCGWeapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_QueryActivity_OutQueryResult, TArray<struct FFPAnimQuery>& CallFunc_QueryActivity_OutQueryQueue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, float CallFunc_CountUID_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APawn* CallFunc_GetPlayerPawn_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_28, const struct FKey& K2Node_InputActionEvent_Key_29, const struct FKey& K2Node_InputActionEvent_Key_17, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1);
};

}


