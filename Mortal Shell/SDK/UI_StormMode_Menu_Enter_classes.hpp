#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4D1 (0x701 - 0x230)
// WidgetBlueprintGeneratedClass UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C
class UUI_StormMode_Menu_Enter_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_Slot_BG;                                     // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_StormMode_Menu_ApplyButton_C*      UI_StormMode_Menu_Enter;                           // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_StormMode_Menu_SettingButton_C*    UI_StormMode_Menu_RunPlaytime;                     // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_StormMode_Menu_SettingButton_C*    UI_StormMode_Menu_Seed;                            // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_StormMode_Menu_SettingButton_C*    UI_StormMode_Menu_Shell;                           // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_StormMode_Menu_SettingButton_C*    UI_StormMode_Menu_Weapon;                          // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_StormMode_SaveSlot_C*              UI_StormMode_SaveSlot;                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget*                               Widget_Parent;                                     // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UServerSaveGame_C*                     SaveGameRef;                                       // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                SlotName;                                          // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        SaveSlot;                                          // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F7B[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_StormModeSave                 StormModeSave;                                     // 0x2A0(0x458)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_1F7F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EArmorTypes                       Character;                                         // 0x700(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_StormMode_Menu_Enter_C* GetDefaultObj();

	void GetSelectedCharacter(enum class EArmorTypes* Character);
	void GetVerticalIndex(int32* Index);
	class FText GetShade(enum class Enum_ShellDye Temp_byte_Variable, class FText Temp_text_Variable, enum class EArmorTypes Temp_byte_Variable_1, class FText CallFunc_GetShadeNames_ReturnValue, class FText CallFunc_GetShadeNames_ReturnValue_1, class FText CallFunc_GetShadeNames_ReturnValue_2, enum class Enum_ShellDye K2Node_Select_Default, class FText K2Node_Select_Default_1);
	void GetSaveData(class UServerSaveGame_C* SaveGameRef, const class FString& SlotName, int32 SlotNumber);
	void SetSelectedWeapon(bool Temp_bool_Variable, class FText Temp_text_Variable, bool CallFunc_HasRunStarted_ReturnValue, class FText CallFunc_GetWeaponNames_ReturnValue, class FText K2Node_Select_Default, TArray<class FText>& K2Node_MakeArray_Array, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateSettingValues_self_CastInput);
	void SetSelectedShell(class FName Temp_name_Variable, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText CallFunc_GetShade_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetShellNameSimple_ShellName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, enum class EArmorTypes CallFunc_GetShellFromNameID_Shell, class FText CallFunc_Format_ReturnValue, bool CallFunc_HasRunStarted_ReturnValue, class FText K2Node_Select_Default, TArray<class FText>& K2Node_MakeArray_Array_1, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateSettingValues_self_CastInput);
	void SetRunPlaytime(bool Temp_bool_Variable, class FText Temp_text_Variable, bool CallFunc_HasRunStarted_ReturnValue, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, const class FString& CallFunc_FixDateTime_TimeOut, const class FString& CallFunc_FixDateTime_TimeOut_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_FixDateTime_TimeOut_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default, TArray<class FText>& K2Node_MakeArray_Array, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateSettingValues_self_CastInput);
	void SetSeedButton(bool Temp_bool_Variable, class FText Temp_text_Variable, bool CallFunc_HasRunStarted_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText K2Node_Select_Default, TArray<class FText>& K2Node_MakeArray_Array, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateSettingValues_self_CastInput);
	bool HasRunStarted(bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void NavLeft();
	void OnCharacterHighlighted(enum class EArmorTypes Character);
	void OnWeaponHighlighted(enum class EComboTypes Weapon);
	void NavRight();
	void NavUp();
	void NavDown();
	void NavBack();
	void OnClose();
	void SetSeedManager(class ABP_SeedManager_C* SeedManager);
	void OnCharacterSelected(enum class EArmorTypes Character);
	void OnSettingConfirmed(int32 Value);
	void OnWeaponSelected(enum class EComboTypes Weapon);
	void OnRiposteHighlighted(enum class ERiposteTypes Riposte);
	void OnRiposteSelected(enum class ERiposteTypes Riposte);
	void OnButtonHovered(class UUserWidget* Widget);
	void NavSpecialButton();
	void OnOpen();
	void NavConfirm();
	void SetParentWidget(class UWidget* Widget);
	void SetSaveGameRef(int32 Slot, class UServerSaveGame_C* SaveGame, const class FString& SlotName, class UMapState_C* MapStateSaveGame, const class FString& SlotName_MapState);
	void BndEvt__UI_StormMode_Menu_Enter_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
	void ExecuteUbergraph_UI_StormMode_Menu_Enter(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UUI_StormMode_Menu_C* K2Node_DynamicCast_AsUI_Storm_Mode_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, enum class EArmorTypes K2Node_Event_Character_1, enum class EComboTypes K2Node_Event_Weapon_1, class ABP_SeedManager_C* K2Node_Event_SeedManager, enum class EArmorTypes K2Node_Event_Character, int32 K2Node_Event_Value, enum class EComboTypes K2Node_Event_Weapon, enum class ERiposteTypes K2Node_Event_Riposte_1, enum class ERiposteTypes K2Node_Event_Riposte, class UUserWidget* K2Node_Event_Widget_1, class UWidget* K2Node_Event_Widget, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput, int32 K2Node_Event_Slot, class UServerSaveGame_C* K2Node_Event_SaveGame, const class FString& K2Node_Event_SlotName, class UMapState_C* K2Node_Event_MapStateSaveGame, const class FString& K2Node_Event_SlotName_MapState, bool CallFunc_IsValid_ReturnValue_2);
};

}


