#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x240 (0x470 - 0x230)
// WidgetBlueprintGeneratedClass UI_Rune_ToolTip.UI_Rune_ToolTip_C
class UUI_Rune_ToolTip_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_Rune_Background;                             // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Rune_BackgroundBlack;                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Rune_Border;                                 // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Rune_Icon;                                   // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Rune_Tier;                                   // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Rune_TierGlow;                               // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Ability;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Tier;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RTB_Effect;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Effect;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Header;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Rune_Name;                                    // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Rune_Tier;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FStruct_Rune                          Rune_InSlot;                                       // 0x2A0(0xD0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         Rune_HasAnyInSlot;                                 // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2603[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Rune_ID;                                           // 0x374(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Category                Rune_Category;                                     // 0x37C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Type                    Rune_Type;                                         // 0x37D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Tier                    Rune_Tier;                                         // 0x37E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_261C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Rune_Level;                                        // 0x380(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Rune_Misc_X;                                       // 0x384(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Rune_Name;                                         // 0x388(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Rune_Effect;                                       // 0x3A0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FStruct_Rune_Values                   Rune_EffectX_;                                     // 0x3B8(0x14)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Rune_Values                   Rune_EffectX;                                      // 0x3CC(0x14)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Rune_TierColor;                                    // 0x3E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           Rune_TierSlateColor;                               // 0x3F0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                            Rune_Texture;                                      // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class Enum_Rune_Tier, class UTexture2D*> Rune_Backgrounds;                                  // 0x420(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUI_Rune_ToolTip_C* GetDefaultObj();

	void HandleBackground(class UTexture2D* Local_Texture, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class Enum_Rune_Tier Temp_byte_Variable, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UTexture2D* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
	void SetHeaderText();
	bool GetIsMisc(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void SetTierColor();
	enum class ESlateVisibility GetRuneTierVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
	void GetRuneTierText(class FText* Text, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_ToUpper_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetRuneTier(class FText CallFunc_GetRuneTierText_Text);
	void SetRuneTextureIcon(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void SetRuneEffect(class FText CallFunc_GetRuneEffectText_Text);
	void GetRuneEffectText(class FText* Text, bool Temp_bool_Variable, class FText CallFunc_Rune_BuildMiscText__X_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_1, class FText CallFunc_Rune_BuildMiscText__X_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class FText CallFunc_Rune_LegendaryEffectText_Text_Out, class FText CallFunc_Rune_BuildText_X__ReturnValue, class FText CallFunc_Rune_BuildText_X_ReturnValue, class FText CallFunc_Rune_BuildText__X_ReturnValue, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1);
	void GetRuneNameText(class FText* Text, int32 Temp_int_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, const class FString& Temp_string_Variable_6, const class FString& Temp_string_Variable_7, const class FString& Temp_string_Variable_8, const class FString& Temp_string_Variable_9, const class FString& Temp_string_Variable_10, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default_1, class FText CallFunc_TextToUpper_ReturnValue);
	void SetRuneName(class FText CallFunc_GetRuneNameText_Text);
	void SetRuneTierColor(const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FLinearColor& CallFunc_GetTierColors_ReturnValue);
	void GetAllRuneDetails();
	void SetCurrentRune(enum class Enum_Rune_Type RuneType, enum class Enum_Rune_Category RuneCategory, const struct FStruct_Rune& CurrentRune, bool HasRune_);
	void ExecuteUbergraph_UI_Rune_ToolTip(int32 EntryPoint, enum class Enum_Rune_Type K2Node_CustomEvent_RuneType, enum class Enum_Rune_Category K2Node_CustomEvent_RuneCategory, const struct FStruct_Rune& K2Node_CustomEvent_CurrentRune, bool K2Node_CustomEvent_HasRune_, class FText Temp_text_Variable, class FText Temp_text_Variable_1, enum class ESlateVisibility CallFunc_GetRuneTierVisibility_ReturnValue, bool Temp_bool_Variable, bool CallFunc_GetIsMisc_ReturnValue, class FText K2Node_Select_Default);
};

}


