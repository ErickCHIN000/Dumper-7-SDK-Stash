#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x190 - 0x188)
// BlueprintGeneratedClass PlayerAbility_Weapon.PlayerAbility_Weapon_C
class UPlayerAbility_Weapon_C : public UOakCharacterInputAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x188(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UPlayerAbility_Weapon_C* GetDefaultObj();

	void QuickSelectWeapon(class UInventorySlotData* InvSlot, class UWeaponSlotData* WeaponSlot, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, class AWeapon* K2Node_DynamicCast_AsWeapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsActive_ReturnValue);
	void GbxInpActEvt_fire_K2Node_GbxInputActionEvent_Discrete_27(class FName Action);
	void GbxInpActEvt_fire_K2Node_GbxInputActionEvent_Discrete_26(class FName Action);
	void GbxInpActEvt_zoom_K2Node_GbxInputActionEvent_Discrete_25(class FName Action);
	void GbxInpActEvt_zoom_K2Node_GbxInputActionEvent_Discrete_24(class FName Action);
	void GbxInpActEvt_reload_K2Node_GbxInputActionEvent_Discrete_23(class FName Action);
	void GbxInpActEvt_drop_weapon_K2Node_GbxInputActionEvent_Discrete_22(class FName Action);
	void GbxInpActEvt_weapon_mode_K2Node_GbxInputActionEvent_Discrete_21(class FName Action);
	void GbxInpActEvt_prev_weapon_K2Node_GbxInputActionEvent_Discrete_20(class FName Action);
	void GbxInpActEvt_next_weapon_K2Node_GbxInputActionEvent_Discrete_19(class FName Action);
	void GbxInpActEvt_select_weapon1_K2Node_GbxInputActionEvent_Discrete_18(class FName Action);
	void GbxInpActEvt_select_weapon2_K2Node_GbxInputActionEvent_Discrete_17(class FName Action);
	void GbxInpActEvt_select_weapon3_K2Node_GbxInputActionEvent_Discrete_16(class FName Action);
	void GbxInpActEvt_select_weapon4_K2Node_GbxInputActionEvent_Discrete_15(class FName Action);
	void GbxInpActEvt_pre_weaponPlustoggle_K2Node_GbxInputActionEvent_Discrete_14(class FName Action);
	void OnPaused();
	void ExecuteUbergraph_PlayerAbility_Weapon(int32 EntryPoint, class FName K2Node_GbxInputActionEvent_Discrete_Action7, class FName K2Node_GbxInputActionEvent_Discrete_Action6, class FName K2Node_GbxInputActionEvent_Discrete_Action5, class FName K2Node_GbxInputActionEvent_Discrete_Action4, class FName K2Node_GbxInputActionEvent_Discrete_Action3, class FName K2Node_GbxInputActionEvent_Discrete_Action2, class FName K2Node_GbxInputActionEvent_Discrete_Action1, class FName K2Node_GbxInputActionEvent_Discrete_Action, class FName K2Node_GbxInputActionEvent_Discrete_Action8, class FName K2Node_GbxInputActionEvent_Discrete_Action9, class FName Temp_name_Variable, class FName K2Node_GbxInputActionEvent_Discrete_Action10, class FName K2Node_GbxInputActionEvent_Discrete_Action11, class FName Temp_name_Variable1, class FName K2Node_GbxInputActionEvent_Discrete_Action12, class FName K2Node_GbxInputActionEvent_Discrete_Action13);
};

}


