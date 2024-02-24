#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass DHBlueprintFunctionLib_Safe.DHBlueprintFunctionLib_Safe_C
class UDHBlueprintFunctionLib_Safe_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UDHBlueprintFunctionLib_Safe_C* GetDefaultObj();

	void SkinIDToDropID(enum class Enum_Skins SkinID, class UObject* __WorldContext, class FString* DropID, enum class Enum_Skins Temp_byte_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, const class FString& K2Node_Select_Default);
	void GetSkinID(enum class Enum_Skins Skin, class UObject* __WorldContext, class FName* ID, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
	bool GetArbNameForLevelFromSaveGame(class FName LevelName, class FName ArbName, class UObject* __WorldContext, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GameModeUtils_GetArbNameForLevelFromSaveGame_ReturnValue);
	void SequencerSetDye(class ASkeletalMeshActor* SkMeshActor, class UObject* __WorldContext);
	void GetJustOnceItemReplacement(class FName ItemId, class UObject* __WorldContext, class FName* ReplacementID, int32 Temp_int_Variable, bool K2Node_SwitchName_CmpSuccess, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, int32 CallFunc_RandomInteger_ReturnValue, class FName K2Node_Select_Default);
	void IsItemJustOnceItem(class FName ID, class UObject* __WorldContext, bool* bYes, const TArray<class FName>& JustOnceItems, TArray<class FName>& K2Node_MakeArray_Array, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetShellBondingPointsEverGainedName(enum class EArmorTypes Shell, class UObject* __WorldContext, class FName* Name, enum class EArmorTypes Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName K2Node_Select_Default);
	void IncreaseAchievementProgress(enum class EDHAchievement EDHAchievement, int32 NCount, class UObject* __WorldContext, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class UDHAchievementSystem* CallFunc_GetDHAchievementSystem_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
	class UBriefFadeToBlack_C* SpawnFadeToBlackWidget(class UObject* __WorldContext, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UBriefFadeToBlack_C* CallFunc_Create_ReturnValue);
	void GetMousePosFromCenterOfScreen(class UObject* __WorldContext, struct FVector2D* Position, const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue, float CallFunc_GetViewportScale_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue);
	void GetWeaponNameFromID(int32 ID, class UObject* __WorldContext, class FName* WeaponName, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void IsReactiveWaterDisabled(class UObject* __WorldContext, bool* bDisabled);
	void Get_Shell_Bonding_Points_Name(enum class EArmorTypes Shell, class UObject* __WorldContext, class FName* Name, enum class EArmorTypes Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName K2Node_Select_Default, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StormModeIsActive_ReturnValue);
	void GetKeyboardModeNotifier(class UObject* __WorldContext, class UKeyboardModeNotifierComponent_C** KeyboardModeNotifier, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class UKeyboardModeNotifierComponent_C* CallFunc_GetComponentByClass_ReturnValue);
	class FName GetLocalizedEmissiveMinDistName(int32 Index, class UObject* __WorldContext, int32 Temp_int_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName K2Node_Select_Default);
	class FName GetLocalizedEmissiveMaxDistName(int32 Index, class UObject* __WorldContext, int32 Temp_int_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName K2Node_Select_Default);
	class FName GetLocalizedEmissiveSourceName(int32 Index, class UObject* __WorldContext, int32 Temp_int_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName K2Node_Select_Default);
	void RemoveArbNameFromChangedSet(class FName Name, class UObject* __WorldContext, bool* bIsInSet, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GameModeUtils_RemoveAbritraryNameFromChangedSet_bSuccessful);
	int32 GetAverageFamiliarity(int32 Familiarity, int32 MaxFamiliarity, class UObject* __WorldContext, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_NormalizeToRange_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue);
	class FString CreateExtendedDescription(int32 Familiarity, int32 MaxFamiliarity, class FText& ExtendedDescription, class UObject* __WorldContext, bool* OutputPin, class FText Local_ExtendedDescription, int32 Local_MaxFamiliarity, int32 Local_Familiarity, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool Temp_bool_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_SelectString_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText K2Node_Select_Default, const class FString& CallFunc_Conv_TextToString_ReturnValue_4);
	void SetArbNameInChangedSet(class FName Name, class UObject* __WorldContext, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface_1, bool K2Node_DynamicCast_bSuccess_1);
	void GetLocationNameFromMapName(class FName MapName, class UObject* __WorldContext, class FText* Location, bool K2Node_SwitchName_CmpSuccess);
	void GetArbNameInChangedSetPure(class FName Name, class UObject* __WorldContext, bool* bIsInSet, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GameModeUtils_IsAbritraryNameInSet_bIsInSet);
	void GetGameInstanceAsGameInfoInstance(class UObject* __WorldContext, class UGameInfoInstance_C** AsGame_Info_Instance, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess);
};

}


