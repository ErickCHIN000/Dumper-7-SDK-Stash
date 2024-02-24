#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3F (0x118 - 0xD9)
// BlueprintGeneratedClass Rune_LuteAbility.Rune_LuteAbility_C
class URune_LuteAbility_C : public URuneUpgradeBase_C
{
public:
	uint8                                        Pad_2975[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        IconID;                                            // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasIcon;                                           // 0xEC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class Enum_LuteType                     LuteType;                                          // 0xED(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_298C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Timer_Heal;                                        // 0xF0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AGameplayGM_C*                         GameplayGM;                                        // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Uses;                                              // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Initialized;                                       // 0x104(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_299E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  EquippedLute;                                      // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBuffObjectStaggerImmunity_C*          ImperviousBuff;                                    // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URune_LuteAbility_C* GetDefaultObj();

	void OnReachedMaxUses(class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, int32 CallFunc_LuteAbilities_Params_Active_Uses, int32 CallFunc_LuteAbilities_Params_Active_Minutes, int32 CallFunc_Subtract_IntInt_ReturnValue, enum class Enum_LuteType Temp_byte_Variable, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class FName K2Node_Select_Default, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_LuteAbilities_Params_Active_Uses_1, int32 CallFunc_LuteAbilities_Params_Active_Minutes_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FToolTipInfo& K2Node_MakeStruct_ToolTipInfo, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess);
	void IncreaseUse(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue);
	void AddIcon(int32 Local_UsesLeft, enum class Enum_LuteType Temp_byte_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UTexture2D* Temp_object_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* K2Node_Select_Default, int32 CallFunc_AddStatusIcon_IconID, int32 CallFunc_LuteAbilities_Params_Active_Uses, int32 CallFunc_LuteAbilities_Params_Active_Minutes, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void RemoveIcon();
	void HasLute(bool* HasIt, enum class Enum_LuteType* Lute, bool* EnablePassive, class FName Local_ItemName, enum class Enum_LuteType Local_Lute, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool K2Node_SwitchName_CmpSuccess, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetNamedPCInt_Value, class FName CallFunc_StormMode_GetEquippedLute_Lute, int32 CallFunc_LuteAbilities_Params_Active_Uses, int32 CallFunc_LuteAbilities_Params_Active_Minutes, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue, bool CallFunc_CheckPlayerInventoryForItem_Success, bool CallFunc_BooleanAND_ReturnValue);
	void Rune_Enable();
	void Rune_Disable();
	void OnLuteChanged();
	void InitializeLute();
	void OnLuteMusicPlay();
	void SimpleLute_HealTimer();
	void OnLuteMusicStop();
	void LutePlay_Unbind();
	void LuteStop_Unbind();
	void ExecuteUbergraph_Rune_LuteAbility(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_HasLute_HasIt, enum class Enum_LuteType CallFunc_HasLute_Lute, bool CallFunc_HasLute_EnablePassive, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, enum class Enum_StormModeProgress CallFunc_GetStormModeProgress_Progress, bool CallFunc_NotEqual_ByteByte_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, bool K2Node_SwitchEnum_CmpSuccess_1, class UBuffObjectStaggerImmunity_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_GetNamedPCInt_Value, bool CallFunc_GetImmediateRuneFromID_IsValid_, const struct FStruct_Rune& CallFunc_GetImmediateRuneFromID_Rune, int32 CallFunc_GetNamedPCInt_Value_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_StormMode_GetSelectedShell_HasSelected, enum class EArmorTypes CallFunc_StormMode_GetSelectedShell_Shell, enum class EArmorTypes CallFunc_0_Base_GetCurrentArmor_CurrentArmorType, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2, bool K2Node_DynamicCast_bSuccess_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess_5);
};

}


