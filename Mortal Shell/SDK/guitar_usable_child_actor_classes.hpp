#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x32A - 0x312)
// BlueprintGeneratedClass guitar_usable_child_actor.guitar_usable_child_actor_C
class AGuitar_usable_child_actor_C : public AUsable_Actor_C
{
public:
	uint8                                        Pad_2960[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class Abp_small_physics_prop_guitar_C*       ParentActor;                                       // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayerHadLuteInInventory;                          // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class Enum_LuteType                     ELuteType;                                         // 0x329(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGuitar_usable_child_actor_C* GetDefaultObj();

	void MoveBackToInventory(const struct FInventoryItem& Local_Item, enum class Enum_LuteType Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class FName K2Node_Select_Default, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_TryToAddItemToInventory_Success, const struct FInventoryItem& CallFunc_TryToAddItemToInventory_OutItem, int32 CallFunc_TryToAddItemToInventory_AddedToSlot);
	bool CheckIfCanPickupLute(enum class Enum_LuteType Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StormModeIsActive_ReturnValue, class FName K2Node_Select_Default, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, TArray<struct FInventoryItem>& CallFunc_GetInventoryItems_InventoryItems, int32 CallFunc_Array_Length_ReturnValue, const struct FInventoryItem& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void OnActorUsed(class APlayerController* Controller, bool* Success, enum class Enum_LuteType Temp_byte_Variable, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, bool CallFunc_CheckIfCanPickupLute_ReturnValue, class FName K2Node_Select_Default, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_TryToAddItemToInventory_Success, const struct FInventoryItem& CallFunc_TryToAddItemToInventory_OutItem, int32 CallFunc_TryToAddItemToInventory_AddedToSlot);
	void ReceiveBeginPlay();
	void CheckIfPlayerHasGuitarInInventory();
	void ExecuteUbergraph_guitar_usable_child_actor(int32 EntryPoint, bool CallFunc_IsMyNameInChangedSet_ReturnValue, bool CallFunc_CheckIfCanPickupLute_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


