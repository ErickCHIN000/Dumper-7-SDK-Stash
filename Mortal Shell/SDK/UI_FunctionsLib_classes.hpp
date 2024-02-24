#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass UI_FunctionsLib.UI_FunctionsLib_C
class UUI_FunctionsLib_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UUI_FunctionsLib_C* GetDefaultObj();

	class FText GetPlaytimeFromTimeSpan(const struct FTimespan& Timespan, class UObject* __WorldContext, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, const class FString& CallFunc_FixDateTime_TimeOut, const class FString& CallFunc_FixDateTime_TimeOut_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_FixDateTime_TimeOut_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue);
	void GetNoText(class UObject* __WorldContext, class FText* No);
	void GetYesText(class UObject* __WorldContext, class FText* Yes);
	void UI_DisableButton(class UWidget* Button, enum class ESlateVisibility Visibility, class UObject* __WorldContext, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	class FText GetPlaytimeFromDate(const struct FDateTime& Date, class UObject* __WorldContext, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, const class FString& CallFunc_FixDateTime_TimeOut, const class FString& CallFunc_FixDateTime_TimeOut_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_FixDateTime_TimeOut_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue);
	void FixDateTime(int32 TimeIn, class UObject* __WorldContext, class FString* Timeout, bool Temp_bool_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& K2Node_Select_Default);
	class UAudioComponent* Spawn2DControllerSound(class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class UObject* __WorldContext, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool CallFunc_GetDebugDualSenseAudio_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void Play2DControllerSound(class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class UObject* __WorldContext, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetDebugDualSenseAudio_ReturnValue, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	class FText GetShadeNames(enum class EArmorTypes Shell, int32 Shade, class UObject* __WorldContext, enum class EArmorTypes Local_Shell, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, int32 Temp_int_Variable, enum class EArmorTypes Temp_byte_Variable, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, enum class EArmorTypes Temp_byte_Variable_1, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, class FText Temp_text_Variable_16, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, class FText Temp_text_Variable_17, enum class EArmorTypes Temp_byte_Variable_2, class FText K2Node_Select_Default_2, class FText K2Node_Select_Default_3);
	void GetForcePS4Icons(class UObject* __WorldContext, bool* ForcePS4Icons, class UDHGameInstance* CallFunc_GetInstance_ReturnValue);
	void GetInputAxis(class UObject* __WorldContext, TArray<struct FInputAxis>* Array, const struct FInputAxis& Local_MoveLeft, const struct FInputAxis& Local_MoveRight, const struct FInputAxis& Local_MoveBackward, const struct FInputAxis& Local_MoveForward, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FInputAxis>& K2Node_MakeArray_Array, TArray<struct FInputAxis>& CallFunc_GetAllBindedInputAxis_InputAxis, const struct FInputAxis& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchString_CmpSuccess, const class FString& CallFunc_Conv_FloatToString_ReturnValue, bool CallFunc_Key_IsGamepadKey_ReturnValue, bool K2Node_SwitchString_CmpSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchString_CmpSuccess_2);
	void GetKeyAsIcon(const struct FKey& Key, bool Gamepad, class UObject* __WorldContext, class UTexture2D** Icon, bool* Found, const struct FKey& Local_Key, TMap<struct FKey, class UTexture2D*> Local_Icons_PC, TMap<struct FKey, class UTexture2D*> Local_Icons_PS4, TMap<struct FKey, class UTexture2D*> Local_Icons_Xbox, class UDataTable* Temp_object_Variable, const class FString& CallFunc_GetCompressedKeyString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class UDataTable* Temp_object_Variable_1, class UDataTable* Temp_object_Variable_2, class UDataTable* Temp_object_Variable_3, class UDataTable* Temp_object_Variable_4, class UDataTable* Temp_object_Variable_5, class UDataTable* Temp_object_Variable_6, bool Temp_bool_Variable, class UDataTable* Temp_object_Variable_7, TMap<struct FKey, class UTexture2D*> K2Node_MakeVariable_MakeVariableOutput, TMap<struct FKey, class UTexture2D*> K2Node_MakeVariable_MakeVariableOutput_1, TMap<struct FKey, class UTexture2D*> K2Node_MakeVariable_MakeVariableOutput_2, enum class EPlatformGamepadType Temp_byte_Variable, enum class EPlatformGamepadType CallFunc_GetPlatformGamepadType_ReturnValue, class UDataTable* K2Node_Select_Default, class UDataTable* K2Node_Select_Default_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FUI_Icon& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void GetAllRebindableInputActions(class UObject* __WorldContext, TArray<struct FInputAction>* Actions, const TArray<struct FInputAction>& Local_AllBindedInputActions, const struct FInputAction& Local_Action, const TArray<struct FInputAction>& Local_InputActions_All, const TArray<struct FInputAction>& Local_InputActions_Controller, const TArray<struct FInputAction>& Local_InputActions_KBM, int32 Temp_int_Array_Index_Variable, const struct FInputAction& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchString_CmpSuccess, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<struct FInputAction>& CallFunc_GetAllBindedInputActions_Actions, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	float GetBrightnessRange(float Value, class UObject* __WorldContext, float CallFunc_FClamp_ReturnValue);
	void GetKeyAsTexture(const class FString& KeyAsString, const struct FKey& Key, class UObject* __WorldContext, bool* KeyFound, class UTexture2D** Texture, class FString* KeyString, bool Local_KeyFound, bool Temp_bool_Variable, const class FString& CallFunc_GetCompressedKeyString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class UDataTable* Temp_object_Variable, enum class EPlatformGamepadType Temp_byte_Variable, class UDataTable* Temp_object_Variable_1, class UDataTable* Temp_object_Variable_2, class UDataTable* Temp_object_Variable_3, class UDataTable* Temp_object_Variable_4, class UDataTable* Temp_object_Variable_5, class UDataTable* Temp_object_Variable_6, class UDataTable* Temp_object_Variable_7, enum class EPlatformGamepadType CallFunc_GetPlatformGamepadType_ReturnValue, class UDataTable* K2Node_Select_Default, class UDataTable* K2Node_Select_Default_1, const struct FUI_Icon& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void GetInputActions(class UObject* __WorldContext, TMap<class FString, struct FInputAction>* InputActionsKBM, TMap<class FString, struct FInputAction>* InputActionController, TMap<class FString, struct FInputAction> Local_InputActions_Controller, TMap<class FString, struct FInputAction> Local_InputActions_KBM, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FInputAction>& CallFunc_GetAllBindedInputActions_Actions, int32 CallFunc_Array_Length_ReturnValue, const struct FInputAction& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Key_IsGamepadKey_ReturnValue, bool K2Node_SwitchString_CmpSuccess);
	class FText CheckItemName(class FText ItemName, class UObject* __WorldContext, const struct FInventoryItem& Local_Item, class FText Local_EffigyName_Unknown, class FText Local_ItemName_Return, class FText Local_ItemName_Current, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue_1, bool CallFunc_EqualEqual_TextText_ReturnValue_2, bool CallFunc_EqualEqual_TextText_ReturnValue_3, bool CallFunc_EqualEqual_TextText_ReturnValue_4, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, bool CallFunc_IsShellNameKnown_bUnlocked, class FText K2Node_Select_Default, bool CallFunc_IsShellNameKnown_bUnlocked_1, class FText K2Node_Select_Default_1, bool CallFunc_IsShellNameKnown_bUnlocked_2, class FText K2Node_Select_Default_2, bool CallFunc_IsShellNameKnown_bUnlocked_3, class FText K2Node_Select_Default_3, bool CallFunc_IsShellNameKnown_bUnlocked_4, class FText K2Node_Select_Default_4);
	void UI_SoundHover(class UObject* __WorldContext);
	void UI_SoundCantDo(class UObject* __WorldContext);
	enum class Enum_InventoryItem_CanUse GetCanUseItem(class FName ID, bool UsableInDarkForm, class APlayerController* GameplayPC, class UObject* __WorldContext, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_InventoryItem_CanUse CallFunc_InventoryUtil_GetCanUseItem_ReturnValue);
	void ItemDetailBuildString(const class FString& EffectDescription, const class FString& ExtendedDescription, class FText& Description, bool HasFamiliarity_, bool NoSpace, class UObject* __WorldContext, class FString* ItemEffects, class FString* ItemDescription, const class FString& Temp_string_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable, const class FString& Temp_string_Variable_2, bool Temp_bool_Variable_1, const class FString& K2Node_Select_Default, const class FString& Temp_string_Variable_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, bool Temp_bool_Variable_2, const class FString& K2Node_Select_Default_1, const class FString& Temp_string_Variable_4, const class FString& K2Node_Select_Default_2, bool Temp_bool_Variable_3, const class FString& K2Node_Select_Default_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6);
	void GetCredits(class UObject* __WorldContext, TArray<class FText>* Return_Value, const TArray<class FText>& Local_Credits, TArray<class FText>& K2Node_MakeArray_Array);
	void GetCostColor(bool Condition, class UObject* __WorldContext, struct FSlateColor* SlateColor, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	class UTexture2D* GetUpgradesIcons(bool Unlocked, int32 Index, enum class EArmorTypes Armor, class UObject* __WorldContext, const TArray<class UTexture2D*>& Hadern_Icons_Inactive, const TArray<class UTexture2D*>& Hadern_Icons_Active, const TArray<class UTexture2D*>& Light_Icons_Active, const TArray<class UTexture2D*>& Heavy_Icons_Active, const TArray<class UTexture2D*>& Fluted_Icons_Active, const TArray<class UTexture2D*>& Balanced_Icons_Active, const TArray<class UTexture2D*>& Light_Icons_Inactive, const TArray<class UTexture2D*>& Heavy_Icons_Inactive, const TArray<class UTexture2D*>& Fluted_Icons_Inactive, const TArray<class UTexture2D*>& Balanced_Icons_Inactive, TArray<class UTexture2D*>& Temp_object_Variable, enum class EArmorTypes Temp_byte_Variable, TArray<class UTexture2D*>& Temp_object_Variable_1, bool Temp_bool_Variable, TArray<class UTexture2D*>& K2Node_MakeArray_Array, TArray<class UTexture2D*>& K2Node_MakeArray_Array_1, TArray<class UTexture2D*>& K2Node_MakeArray_Array_2, TArray<class UTexture2D*>& K2Node_MakeArray_Array_3, TArray<class UTexture2D*>& K2Node_MakeArray_Array_4, TArray<class UTexture2D*>& K2Node_MakeArray_Array_5, TArray<class UTexture2D*>& K2Node_MakeArray_Array_6, TArray<class UTexture2D*>& K2Node_MakeArray_Array_7, TArray<class UTexture2D*>& K2Node_MakeArray_Array_8, TArray<class UTexture2D*>& K2Node_MakeArray_Array_9, enum class EArmorTypes Temp_byte_Variable_1, TArray<class UTexture2D*>& K2Node_Select_Default, TArray<class UTexture2D*>& K2Node_Select_Default_1, class UTexture2D* CallFunc_Array_Get_Item, class UTexture2D* CallFunc_Array_Get_Item_1, class UTexture2D* K2Node_Select_Default_2);
	void GetButtonIcon(enum class EControllerButton ButtonType, class UObject* __WorldContext, class UTexture2D** Texture, class FName Local_RowName, bool Local_InKeyboardMode, enum class EControllerButton Local_ButtonType, class UDataTable* Temp_object_Variable, class UDataTable* Temp_object_Variable_1, class UDataTable* Temp_object_Variable_2, class UDataTable* Temp_object_Variable_3, class UDataTable* Temp_object_Variable_4, class UDataTable* Temp_object_Variable_5, class UDataTable* Temp_object_Variable_6, enum class EPlatformGamepadType Temp_byte_Variable, enum class EPlatformGamepadType CallFunc_GetPlatformGamepadType_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class UDataTable* K2Node_Select_Default, TScriptInterface<class IGamePlayGameStateInterface_C> K2Node_DynamicCast_AsGame_Play_Game_State_Interface, bool K2Node_DynamicCast_bSuccess, const struct FUI_Icon& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsInKeyboardMode_InKeyboardMode, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
	void UI_ClearTimer(const struct FTimerHandle& Timer, class UObject* __WorldContext, bool CallFunc_K2_IsValidTimerHandle_ReturnValue);
	struct FTimerHandle UI_HoldTimer(FDelegateProperty_ Event, float Time, class UObject* __WorldContext, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}

