#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1FC (0x42C - 0x230)
// WidgetBlueprintGeneratedClass UI_Rune_Skilltree_ToolTip.UI_Rune_Skilltree_ToolTip_C
class UUI_Rune_Skilltree_ToolTip_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URichTextBlock*                        RTB_RuneEffect;                                    // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RTB_Shell_ShadeAbility;                            // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_ToolTip;                                  // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_RuneEffect;                                // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Rune_Name;                                    // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Rune_Tier;                                    // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Shade_Value;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Shell_Name;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Shell_Tagline;                                // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_SimpleToolTip;                                // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Shade;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_RuneToolTip;                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FStruct_Rune                          Rune;                                              // 0x298(0xD0)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FStruct_Rune_Values                   Rune_EffectX_;                                     // 0x368(0x14)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Rune_Values                   Rune_EffectX;                                      // 0x37C(0x14)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Rune_TierColor;                                    // 0x390(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           Rune_TierSlateColor;                               // 0x3A0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  Rune_ID;                                           // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Tier                    Rune_Tier;                                         // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Category                Rune_Category;                                     // 0x3D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E78[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Rune_Level;                                        // 0x3D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Rune_Misc_X;                                       // 0x3D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E7C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Rune_Effect;                                       // 0x3E0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Rune_Name;                                         // 0x3F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FWidgetTransform                      ToolTip_Transform;                                 // 0x410(0x1C)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUI_Rune_Skilltree_ToolTip_C* GetDefaultObj();

	void HandleShellToolTip(enum class EArmorTypes Shell, enum class Enum_ShellDye Local_Shade, enum class EArmorTypes Local_Shell, enum class Enum_ShellDye Temp_byte_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, enum class EArmorTypes Temp_byte_Variable_1, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, const class FString& Temp_string_Variable_6, const class FString& Temp_string_Variable_7, const class FString& Temp_string_Variable_8, const class FString& Temp_string_Variable_9, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetShadeNames_ReturnValue, enum class Enum_StormModeProgress CallFunc_GetStormModeProgress_Progress, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class FText CallFunc_GetShadeNames_ReturnValue_1, class FText CallFunc_GetShadeNames_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool Temp_bool_Variable, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_ShellDye CallFunc_StormMode_GetCurrentShadeForCharacter_Shade, const class FString& K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_2, const class FString& K2Node_Select_Default_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_GetShellTagline_ShellTagline, class FName CallFunc_Conv_StringToName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FStruct_ShadeAbility& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_GetShellName_ShellName, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default_2);
	enum class ESlateVisibility GetRuneTierVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void SetRuneTierColor(const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FLinearColor& CallFunc_GetTierColors_ReturnValue);
	void GetRuneNameText(class FText* Text, int32 Temp_int_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, const class FString& Temp_string_Variable_6, const class FString& Temp_string_Variable_7, const class FString& Temp_string_Variable_8, const class FString& Temp_string_Variable_9, const class FString& Temp_string_Variable_10, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default_1, class FText CallFunc_TextToUpper_ReturnValue);
	void GetRuneEffectText(class FText* Text, bool Temp_bool_Variable, class FText CallFunc_Rune_BuildMiscText__X_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_1, class FText CallFunc_Rune_BuildMiscText__X_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class FText CallFunc_Rune_LegendaryEffectText_Text_Out, class FText CallFunc_Rune_BuildText_X__ReturnValue, class FText CallFunc_Rune_BuildText_X_ReturnValue, class FText CallFunc_Rune_BuildText__X_ReturnValue, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1);
	class FText GetRuneTierText(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_ToUpper_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetRuneDetails(const struct FStruct_Rune& Rune, enum class ESlateVisibility CallFunc_GetRuneTierVisibility_ReturnValue, class FText CallFunc_GetRuneNameText_Text, class FText CallFunc_GetRuneEffectText_Text, class FText CallFunc_GetRuneTierText_ReturnValue);
	void SetRune_ToolTip(const struct FStruct_Rune& Rune);
	void SetShell_ToolTip(enum class EArmorTypes Shell);
	void SetText_ToolTip(class FText Text);
	void Construct();
	void ExecuteUbergraph_UI_Rune_Skilltree_ToolTip(int32 EntryPoint, const struct FStruct_Rune& K2Node_CustomEvent_Rune, enum class EArmorTypes K2Node_CustomEvent_Shell, class FText K2Node_CustomEvent_Text);
};

}


