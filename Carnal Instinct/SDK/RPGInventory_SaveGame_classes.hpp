#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x528 (0x550 - 0x28)
// BlueprintGeneratedClass RPGInventory_SaveGame.RPGInventory_SaveGame_C
class URPGInventory_SaveGame_C : public USaveGame
{
public:
	TArray<struct FS_SaveInteractables>          Interactables;                                     // 0x28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FS_InventoryPanelData                 InventoryP1;                                       // 0x38(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InventoryPanelData                 InventoryP2;                                       // 0x50(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InventoryPanelData                 InventoryP3;                                       // 0x68(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InventoryPanelData                 InventoryP4;                                       // 0x80(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InventoryPanelData                 InventoryP5;                                       // 0x98(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InventoryPanelData                 InventoryP6;                                       // 0xB0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InventoryPanelData                 InventoryP7;                                       // 0xC8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InventoryPanelData                 InventoryP8;                                       // 0xE0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InventoryPanelData                 InventoryP9;                                       // 0xF8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InventoryPanelData                 InventoryP10;                                      // 0x110(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InventoryPanelData                 InventoryP11;                                      // 0x128(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InventoryPanelData                 InventoryP12;                                      // 0x140(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<struct FS_ItemData>                   Equipment;                                         // 0x158(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FS_SaveStats                          Stats;                                             // 0x168(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FS_SaveSlotDetails                    SaveSlot;                                          // 0x190(0x58)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_2765[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Player_Transform;                                  // 0x1F0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FS_SaveCheckpoints>            Checkpoints;                                       // 0x220(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FS_SaveBuffs>                  CurrentBuffs;                                      // 0x230(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FS_SaveElevators>              MovableObjects;                                    // 0x240(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FS_SavePlayerVariables                Player_Variables;                                  // 0x250(0xF0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FS_SaveEnemies>                Enemies;                                           // 0x340(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FS_SaveAbilities                      Abilities;                                         // 0x350(0x1B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FS_TargetIndicator>            TargetIndicators;                                  // 0x508(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class FString                                Version;                                           // 0x518(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FS_LevelingSystem                     Player_Level_Exp;                                  // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_CampUnlocks>                Player_Camp_Items;                                 // 0x530(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class FString>                        Destroyed_Interactables_String;                    // 0x540(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class URPGInventory_SaveGame_C* GetDefaultObj();

};

}


