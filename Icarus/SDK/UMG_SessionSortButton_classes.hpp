#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30D (0x77D - 0x470)
// WidgetBlueprintGeneratedClass UMG_SessionSortButton.UMG_SessionSortButton_C
class UUMG_SessionSortButton_C : public UUMG_ButtonBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               AdditionalBorder;                                  // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            AdditionalContent;                                 // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                       BackgroundBlur_0;                                  // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ButtonText;                                        // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              HighlightFlagOverlay;                              // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_68;                                          // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ImageButton;                                       // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_TextContainer;                            // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox;                                           // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FButtonStyle                          NormalStyle;                                       // 0x4C0(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        Width;                                             // 0x738(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Height;                                            // 0x73C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class ETextJustify                      Justification;                                     // 0x740(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5520[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSessionFlagsRowHandle                HighlightFlag;                                     // 0x744(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5524[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_QuestHelper_C*                    QuestHelper;                                       // 0x760(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Blur_Strength;                                     // 0x768(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               TextPadding;                                       // 0x76C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	enum class ESessionSortType                  SortType;                                          // 0x77C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_SessionSortButton_C* GetDefaultObj();

	void UpdateSortState(enum class ESessionSortType Type, enum class ESessionSortDirection Direction, float Temp_float_Variable, float Temp_float_Variable_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, enum class ESessionSortDirection Temp_byte_Variable, float Temp_float_Variable_2, float Temp_float_Variable_3, bool Temp_bool_Variable, class UMaterialInstance* Temp_object_Variable, class UMaterialInstance* Temp_object_Variable_1, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, float K2Node_Select_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor, float K2Node_Select_Default_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class UMaterialInstance* K2Node_Select_Default_2);
	void UpdateTextColour();
	void OnHover();
	void FocusUpdated(bool bNewFocus, bool Temp_bool_Variable, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, const struct FButtonStyle& K2Node_Select_Default);
	void GetFocusWidget(bool* bValid, class UWidget** Widget, bool* bThis);
	void GetImageButton(class UButton** ImageButton);
	void GetButtonText(class UTextBlock** ButtonText);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_SessionSortButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue);
};

}


