#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2F (0x398 - 0x369)
// BlueprintGeneratedClass Fog_Chest_StormMode.Fog_Chest_StormMode_C
class AFog_Chest_StormMode_C : public AFog_chest_consumable_container_C
{
public:
	uint8                                        Pad_2B30[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URuneRandomizerComponent_C*            RuneRandomizerComponent;                           // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class Enum_PillarType                   EChestType;                                        // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B37[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TarCost;                                           // 0x384(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x388(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFog_Chest_StormMode_C* GetDefaultObj();

	void AskRandomUpgrade(struct FStruct_Rune* Upgrade);
	void AskRandomWeaponUpgrade(enum class Enum_Rune_Tier Tier, struct FStruct_Rune* Upgrade);
	void AskRandomDarkFormUpgrade(struct FStruct_Rune* Rune);
	void RemoveTar(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void HandleCurrencyType(const class FString& CallFunc_Conv_IntToString_ReturnValue, class FName Temp_name_Variable, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void AddRandomMortalInstinct();
	void OnActorUsed(class APlayerController* Controller, bool* Success, int32 CallFunc_GetNamedPCInt_Value, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_CheckForNearbyEnemies_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void InitInteractText();
	void UserConstructionScript(enum class Enum_PillarType Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue_1);
	void InitiliazeSeed(int32 SeedID, int32 InitialSeed);
	void SetObjectMainChance_(float Rune_Chance, float Item_Chance);
	void RemoveObject();
	void SetPillarType(enum class Enum_PillarType Type);
	void SetObjectAsTaken();
	void ReRandomizeEnemy(int32 NewSeed, float Delay);
	void ReceiveBeginPlay();
	void OnFogChestOpen();
	void ExecuteUbergraph_Fog_Chest_StormMode(int32 EntryPoint, int32 K2Node_Event_SeedID, int32 K2Node_Event_InitialSeed, float K2Node_Event_Rune_Chance, float K2Node_Event_Item_Chance, enum class Enum_PillarType K2Node_Event_Type, int32 K2Node_Event_NewSeed, float K2Node_Event_Delay, bool CallFunc_IsMyNameInChangedSet_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess);
};

}


