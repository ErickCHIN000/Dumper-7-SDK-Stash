#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1CC (0x6B4 - 0x4E8)
// BlueprintGeneratedClass Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C
class AConfigurable_Glowing_Pickup_StormMode_C : public AConfigurable_Glowing_Pickup_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URuneRandomizerComponent_C*            RuneRandomizerComponent;                           // 0x4F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FStruct_DropType_Percentages          Main_Chance;                                       // 0x4F8(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class Enum_StormModeItemList, float> ItemPool;                                          // 0x500(0x50)(Edit, BlueprintVisible, BlueprintReadOnly)
	struct FRandomStream                         MySeed;                                            // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor)
	struct FInventoryItem                        ItemInventory_Randomized;                          // 0x558(0x132)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_2E7E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  RandomizedIDName;                                  // 0x690(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                RamdomizedIDString;                                // 0x698(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	enum class EBoss_Glimpse_Types               BossRuneType;                                      // 0x6A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         WorldItem;                                         // 0x6A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         DroppedByEnemy;                                    // 0x6AA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         DroppedByMiniBoss;                                 // 0x6AB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	class FName                                  EnemyID;                                           // 0x6AC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AConfigurable_Glowing_Pickup_StormMode_C* GetDefaultObj();

	void AskRandomDarkFormUpgrade(struct FStruct_Rune* Rune);
	void AskRandomWeaponUpgrade(enum class Enum_Rune_Tier Tier, struct FStruct_Rune* Upgrade);
	void AskRandomUpgrade(struct FStruct_Rune* Upgrade);
	void CheckForPermanentUpgrades(enum class EArmorTypes Local_SelectedShell, bool Local_HasSelectedShell, float Temp_float_Variable, bool Temp_bool_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float Temp_float_Variable_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StormMode_GetSelectedShell_HasSelected, enum class EArmorTypes CallFunc_StormMode_GetSelectedShell_Shell, bool CallFunc_Not_PreBool_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, bool Temp_bool_Variable_2, class FName K2Node_Select_Default, int32 CallFunc_GetPermanentUpgradeRankLevel_Level, float K2Node_Select_Default_1, float CallFunc_Multiply_IntFloat_ReturnValue, float K2Node_Select_Default_2, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void GetUnidentifiedText(class FText* UnidentifiedText, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void GetUseActionText(class FText* ActionText, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void AddRandomItemToInventory(class APlayerController* PC, bool* Success, int32 Local_Slot, const struct FInventoryItem& Local_Item, bool Local_Success, class AGameplayPC_C* Local_GameplayPC, class APlayerController* Local_Controller, bool CallFunc_HasAuthority_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TryToAddItemToInventory_Success, const struct FInventoryItem& CallFunc_TryToAddItemToInventory_OutItem, int32 CallFunc_TryToAddItemToInventory_AddedToSlot);
	void OnActorUsed(class APlayerController* Controller, bool* Success, int32 Local_ItemIndex, class APlayerController* Local_Controller, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_GetInventoryItemSimple_Success, bool CallFunc_AddRandomItemToInventory_Success, TArray<enum class Enum_StormModeItemList>& CallFunc_Map_Keys_Keys, TArray<float>& CallFunc_Map_Values_Values, enum class Enum_StormModeItemList CallFunc_Array_Get_Item, int32 CallFunc_Randomizer_FloatToInt_Result, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, TArray<float>& K2Node_MakeArray_Array, int32 CallFunc_Randomizer_FloatToInt_Result_1, bool K2Node_SwitchInteger_CmpSuccess);
	void GetInventoryItemSimple(bool* Success, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void UserConstructionScript();
	void RemoveObject();
	void SetPillarType(enum class Enum_PillarType Type);
	void ReRandomizeEnemy(int32 NewSeed, float Delay);
	void ReceiveBeginPlay();
	void PickupItem_Respawn();
	void InitiliazeSeed(int32 SeedID, int32 InitialSeed);
	void OnItemPickedUp();
	void BndEvt__RuneRandomizerComponent_K2Node_ComponentBoundEvent_0_OnUpgradesSelected__DelegateSignature(enum class Enum_Rune_Category_Randomizer Category, class FName ID);
	void SetObjectMainChance_(float Rune_Chance, float Item_Chance);
	void BndEvt__RuneRandomizerComponent_K2Node_ComponentBoundEvent_1_OnSeedInitialized__DelegateSignature();
	void SetObjectAsTaken();
	void ExecuteUbergraph_Configurable_Glowing_Pickup_StormMode(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_PillarType K2Node_Event_Type, int32 K2Node_Event_NewSeed, float K2Node_Event_Delay, int32 K2Node_Event_SeedID, int32 K2Node_Event_InitialSeed, bool CallFunc_IsMyNameInChangedSet_ReturnValue, enum class Enum_Rune_Category_Randomizer K2Node_ComponentBoundEvent_Category, class FName K2Node_ComponentBoundEvent_ID, float K2Node_Event_Rune_Chance, float K2Node_Event_Item_Chance, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
};

}


