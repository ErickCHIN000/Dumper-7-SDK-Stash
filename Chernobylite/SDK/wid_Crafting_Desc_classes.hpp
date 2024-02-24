#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5C (0x2BC - 0x260)
// WidgetBlueprintGeneratedClass wid_Crafting_Desc.wid_Crafting_Desc_C
class UWid_Crafting_Desc_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USizeBox*                              ContentSizebox;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        Description;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            DescTitle;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Owned;                                             // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            Scroll;                                            // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ScrollSizeBox;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          TextBox;                                           // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Title;                                             // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        BottomMargin;                                      // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_Crafting_Desc_C* GetDefaultObj();

	void UpdateUpgradeDesc(class FName Name, enum class EUpgradeType Type, class FName UpradeID, bool Temp_bool_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, const struct FUpgradeCategory& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class FText CallFunc_MakeLiteralText_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FUnlockedUpgrades& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class FText Temp_text_Variable, int32 K2Node_Select_Default, bool Temp_bool_Variable_4, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_GetUpgradeInfo_isVaid, const struct FUpgradeEntry& CallFunc_GetUpgradeInfo_ReturnValue, class FText K2Node_Select_Default_3, class FText K2Node_Select_Default_4, class FText CallFunc_TextToUpper_ReturnValue_1, class FText CallFunc_FormatText_Output);
	void Update(class FName Name, class AMainPawnCpp* CallFunc_GetCGPawnBase_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool CallFunc_EqualEqual_NameName_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const class FString& CallFunc_Concat_StrStr_ReturnValue, float CallFunc_Count_ReturnValue, float CallFunc_Count_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FCraftingRecipe& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class FText CallFunc_FormatText_Output, class FText CallFunc_TextToUpper_ReturnValue_1);
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_wid_Crafting_Desc(int32 EntryPoint, class FText CallFunc_GetText_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


