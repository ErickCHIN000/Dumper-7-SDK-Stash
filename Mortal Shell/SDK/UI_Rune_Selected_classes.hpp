#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3B2 (0x5E2 - 0x230)
// WidgetBlueprintGeneratedClass UI_Rune_Selected.UI_Rune_Selected_C
class UUI_Rune_Selected_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_ShowToolTip;                                  // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button_Rune;                                       // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_RuneLevelUp;                         // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BackgroundFrame;                             // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_LVLUp_Arrow;                                 // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Rune_Background;                             // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Rune_BackgroundBlack;                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Rune_Border;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Rune_Icon;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Rune_Tier;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Rune_TierGlow;                               // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_UpgradeType;                                 // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_UpgradeType_Border;                          // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Ability;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_SelectedRune;                              // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Tier;                                      // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_UpgradeType;                               // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RTB_Effect;                                        // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_UpgradeType;                              // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_Description;                             // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Rune_Level_Current;                           // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Rune_LVLUp_Current;                           // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Rune_LVLUp_Next;                              // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Rune_Name;                                    // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Rune_Tier;                                    // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Rune_ToolTip_C*                    UI_Rune_ToolTip;                                   // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Rune_HasAnyInSlot;                                 // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F3D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          Rune_Offered;                                      // 0x310(0xD0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FStruct_Rune                          Rune_InSlot;                                       // 0x3E0(0xD0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FLinearColor                          Rune_TierColor;                                    // 0x4B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           Rune_TierSlateColor;                               // 0x4C0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class Enum_Rune_Category                Rune_Category;                                     // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Type                    Rune_Type;                                         // 0x4E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Tier                    Rune_Tier;                                         // 0x4EA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_RuneSlots_IDs                Rune_SlotID;                                       // 0x4EB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Rune_ID;                                           // 0x4EC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F6E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Rune_Name;                                         // 0x4F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Rune_Effect;                                       // 0x510(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        Rune_Level;                                        // 0x528(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F7B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Runes_SelectWindow_C*              UI_Rune_SelectWindow;                              // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Rune_Misc_X;                                       // 0x538(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Rune_Values                   Rune_EffectX_;                                     // 0x53C(0x14)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Rune_Values                   Rune_EffectX;                                      // 0x550(0x14)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F92[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Rune_Texture;                                      // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HideToolTip;                                       // 0x570(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DesignTime;                                        // 0x571(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_Rune_Tier                    Design_Rune_Tier;                                  // 0x572(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FB3[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Design_RuneName;                                   // 0x574(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Scrolling_Enabled;                                 // 0x57C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FBF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Offset_Target;                                     // 0x580(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Offset_Delta;                                      // 0x584(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaTime;                                         // 0x588(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Category_Randomizer     Design_Rune_Category;                              // 0x58C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FD8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class Enum_Rune_Tier, class UTexture2D*> Rune_Backgrounds;                                  // 0x590(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class Enum_UpgradeType                  UpgradeType;                                       // 0x5E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Widget_Enabled;                                    // 0x5E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_Rune_Selected_C* GetDefaultObj();

	class FString AppendPreviousMiscX(float* Rune_Misc_X, bool* IsUpgradeMisc, bool Local_Append, const class FString& Temp_string_Variable, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_GetRuneMiscX_ReturnValue, float CallFunc_GetRuneMiscX_Rune_Misc_X, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& K2Node_Select_Default);
	class FString AppendPreviousX(bool Temp_bool_Variable, const class FString& Temp_string_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_GetRuneX_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& K2Node_Select_Default);
	class FString AppendPreviousX_(bool Temp_bool_Variable, const class FString& Temp_string_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_GetRuneX__ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& K2Node_Select_Default);
	void HandleLevelUpType(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_LevelToNumber_ReturnValue, class FText CallFunc_LevelToNumber_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	class FText LevelToNumber(int32 Index, int32 Temp_int_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, const class FString& Temp_string_Variable_6, const class FString& Temp_string_Variable_7, const class FString& Temp_string_Variable_8, const class FString& Temp_string_Variable_9, const class FString& Temp_string_Variable_10, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue);
	void HandleRuneCurrentLevel(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_LevelToNumber_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default);
	void HandleUpgradeTypeImage(enum class Enum_UpgradeType Temp_byte_Variable, class UTexture* Temp_object_Variable, class UTexture* Temp_object_Variable_1, class UTexture* Temp_object_Variable_2, class UTexture* Temp_object_Variable_3, class UTexture* Temp_object_Variable_4, class UTexture* Temp_object_Variable_5, class UTexture* Temp_object_Variable_6, class UTexture* K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void HandleBackground(class UTexture2D* Local_Texture, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class Enum_Rune_Tier Temp_byte_Variable, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UTexture2D* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
	void HandleTierVisibility(enum class ESlateVisibility CallFunc_GetRuneTierVisibility_ReturnValue);
	void PreviewTooltip(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void PreviewRune(class UDataTable* CallFunc_GetRunesFromTable_ReturnValue, const struct FStruct_Rune& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FStruct_Rune& K2Node_MakeStruct_Struct_Rune);
	void HandleRuneDescription(class FText CallFunc_GetRuneEffectText_Text);
	void HandleRuneName(class FText CallFunc_GetRuneTitleText_Text);
	void CheckIfAlreadyHasOpenRune(TArray<class FName>& CallFunc_GetOpenAreasRuneIDs_IDs, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_GetHasRuneFromID_ReturnValue);
	enum class ESlateVisibility GetRuneTierVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2);
	void SetTierColor();
	void SetRuneTextureIcon(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void GetRuneEffectText(class FText* Text, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_2, float CallFunc_AppendPreviousMiscX_Rune_Misc_X, bool CallFunc_AppendPreviousMiscX_IsUpgradeMisc, const class FString& CallFunc_AppendPreviousMiscX_ReturnValue, class FText CallFunc_Rune_BuildMiscText__X_ReturnValue, const class FString& CallFunc_AppendPreviousX_ReturnValue, const class FString& CallFunc_AppendPreviousX_ReturnValue_1, const class FString& CallFunc_AppendPreviousX__ReturnValue, float K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class FText CallFunc_Rune_BuildMiscText__X_ReturnValue_1, class FText CallFunc_Rune_LegendaryEffectText_Text_Out, class FText CallFunc_Rune_BuildText_X__ReturnValue, class FText CallFunc_Rune_BuildText_X_ReturnValue, class FText CallFunc_Rune_BuildText__X_ReturnValue, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2);
	void GetAllRuneDetails(bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FStruct_Rune& CallFunc_GetSlotCurrentRune_CurrentRune, bool CallFunc_GetSlotCurrentRune_HasRune_, const struct FStruct_Rune& CallFunc_GetSlotMiscRune_Current_Rune_Misc, bool CallFunc_GetSlotMiscRune_HasRune_);
	class FText GetRuneTierText(class FText Temp_text_Variable, bool Temp_bool_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable_2, bool CallFunc_IsSpecialRune__ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2, class FText CallFunc_TextToUpper_ReturnValue);
	void GetRuneTitleText(class FText* Text, class FText CallFunc_TextToUpper_ReturnValue);
	void SetRuneTierColor(const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FLinearColor& CallFunc_GetTierColors_ReturnValue);
	void SetHighlighted(bool Condition, bool Local_Highlighted, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UMaterialInterface* K2Node_Select_Default, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetRune(const struct FStruct_Rune& Rune, bool HideToolTip, enum class Enum_UpgradeType UpgradeType);
	void BndEvt__Button_Rune_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Rune_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ScrollBox_Set();
	void Reset_Offset_Start();
	void Reset_Offset_End();
	void ExecuteUbergraph_UI_Rune_Selected(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, const struct FStruct_Rune& K2Node_CustomEvent_Rune, bool K2Node_CustomEvent_HideToolTip, enum class Enum_UpgradeType K2Node_CustomEvent_UpgradeType, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetRuneTierText_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, float CallFunc_GetScrollOffsetOfEnd_ReturnValue_1, float CallFunc_GetScrollOffsetOfEnd_ReturnValue_2, float CallFunc_FClamp_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1);
};

}


