#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x248 (0x2F8 - 0xB0)
// BlueprintGeneratedClass AC_DCSAbilityTree.AC_DCSAbilityTree_C
class UAC_DCSAbilityTree_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_AbilityTree_C*                     AbilityTree_Ref;                                   // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAbilityWidgetOpen_;                              // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BF3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_AbilitiesWindow_C*                 AbilitiesWindow_Ref;                               // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Particle_Slot1;                                    // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Particle_Slot2;                                    // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Particle_Slot3;                                    // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Particle_Slot4;                                    // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Particle_Slot5;                                    // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWB_AbilityTreeSlot_C*>         ArrayAbilities;                                    // 0xF8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        AbilityPoints;                                     // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C0E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_AbilityBarSlot_C*                  ActiveSlot_Ref;                                    // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<int32, struct FS_AbilityData>           AbilitiesInBar;                                    // 0x118(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWB_RadialAbilityBarWindow_C*          RadialWindow_Ref;                                  // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSet<class UClass*>                          Activated;                                         // 0x170(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSet<class UClass*>                          Unlocked;                                          // 0x1C0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSet<class UClass*>                          PermanentlyUnlocked;                               // 0x210(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                AbilitySlot1;                                      // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                AbilitySlot2;                                      // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                AbilitySlot3;                                      // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                AbilitySlot4;                                      // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                AbilitySlot5;                                      // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_AbilityData                        PickedAbility;                                     // 0x288(0x70)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAC_DCSAbilityTree_C* GetDefaultObj();

	void InitializeAbilitiesWindow(class UWB_AbilitiesWindow_C* CallFunc_Create_ReturnValue);
	void UpdateActiveSlotAbility(const struct FS_AbilityData& AbilityData, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue);
	void GotEnoughAbilityPoints_(const struct FS_AbilityData& AbilityData, bool* Got, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void HasBeenPermanentlyUnlocked_(const struct FS_AbilityData& AbilityData, bool* Unlocked, bool CallFunc_Set_Contains_ReturnValue);
	void HasBeenUnlocked_(const struct FS_AbilityData& AbilityData, bool* Unlocked, bool CallFunc_Set_Contains_ReturnValue);
	void HasBeenActivated_(const struct FS_AbilityData& AbilityData, bool* Activated, bool CallFunc_Set_Contains_ReturnValue);
	void AddAbilityPoints(int32 PointsToAdd, int32 CallFunc_Add_IntInt_ReturnValue);
	void RemoveAbilityPoints(int32 PointsToRemove, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void ActivateAbility(class UClass* Ability);
	void UnlockAbility(class UClass* Ability, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, class UWB_AbilityTreeSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UpdateActiveSlotBorder(class UClass* Ability, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player);
	void UnlockAbilityFromItem(class UClass* Ability, struct FS_AbilityData* AbilityData, bool* AlreadyUnlocked, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, class UWB_AbilityTreeSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_Set_Contains_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void RefreshAbilityTree();
	void RefreshAbilityBar(class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player);
	void RemoveAbilityFromSlot(int32 SlotIndex, bool K2Node_SwitchInteger_CmpSuccess);
	void AssignAbilityToSlot(int32 SlotIndex, const struct FS_AbilityData& AbilityData, bool K2Node_SwitchInteger_CmpSuccess);
	void RemoveAbilitiesWidget(class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1);
	void OpenAbilitiesWidget(class UWB_AbilitiesWindow_C* CallFunc_Create_ReturnValue, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1);
	void InitializeAbilityTree(class UWB_AbilityTree_C* CallFunc_Create_ReturnValue);
	void ReceiveBeginPlay();
	void Reset_Ability_Points();
	void OnPressedRadialAbilityBar();
	void OnReleasedRadialAbilityBar();
	void ExecuteUbergraph_AC_DCSAbilityTree(int32 EntryPoint, class FText Temp_text_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, bool CallFunc_CanUseOrSwitchItem_Result, int32 Temp_int_Array_Index_Variable_1, class UWB_AbilityTreeSlot_C* CallFunc_Array_Get_Item, bool CallFunc_HasBeenActivated__Activated, int32 CallFunc_Add_IntInt_ReturnValue_2, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player_1, TArray<class UWB_AbilityBarSlot_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UWB_AbilityBarSlot_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UWB_RadialAbilityBarWindow_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWB_InventoryNotify_C* CallFunc_Create_ReturnValue_1, bool CallFunc_Is_Game_Paused__Paused, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1);
};

}


