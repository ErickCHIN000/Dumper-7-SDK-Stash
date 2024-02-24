#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x4E8 - 0x480)
// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_Difficulty_Realm.WBP_CC_DynamicSubPanel_Difficulty_Realm_C
class UWBP_CC_DynamicSubPanel_Difficulty_Realm_C : public UWBP_CC_DynamicSubPanel__Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x480(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_BG;                                            // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_0;                                         // 0x490(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_0;                                     // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        Rtxt_playerHint_difficultycombo;                   // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        Rtxt_playerHint_realmPowerDescript;                // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_LoadOutScore_6;                                // 0x4B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_PanelHeader_C*              WBP_cc_sw_PanelHeader;                             // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_sw_PickerButton_C*             WBP_CC_sw_PickerButton;                            // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Tooltip_Text;                                      // 0x4D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_CC_DynamicSubPanel_Difficulty_Realm_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget();
	class UWidget* GetTooltipWidget(class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue);
	void RefreshSelectedOption(class FText L_Details_Extreme, class FText L_Details_Hard, class FText L_Details_Med, class FText L_Details_Easy, int32 Temp_int_Variable, enum class ERealmDifficulty Temp_byte_Variable, enum class ERealmDifficulty Temp_byte_Variable_1, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, enum class ERealmDifficulty Temp_byte_Variable_2, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, bool CallFunc_IsValid_ReturnValue, enum class ERealmDifficulty CallFunc_GetSelectedDifficulty_SelectedDifficulty, const struct FLinearColor& K2Node_Select_Default, class FText K2Node_Select_Default_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, int32 Temp_int_Variable_1, class FText K2Node_Select_Default_2, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, enum class ERealmDifficulty Temp_byte_Variable_3, int32 K2Node_Select_Default_3);
	class UWidget* GetDefaultFocusWidget();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__WBP_CC_DynamicSubPanel_Difficulty_Realm_WBP_CC_sw_PickerButton_K2Node_ComponentBoundEvent_6_PickerEntryUpdated__DelegateSignature(int32 Index);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_WBP_CC_DynamicSubPanel_Difficulty_Realm(int32 EntryPoint, enum class ERealmDifficulty Temp_byte_Variable, enum class ERealmDifficulty Temp_byte_Variable_1, enum class ERealmDifficulty Temp_byte_Variable_2, enum class ERealmDifficulty Temp_byte_Variable_3, bool K2Node_Event_IsDesignTime, int32 Temp_int_Variable, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, int32 K2Node_ComponentBoundEvent_Index, enum class ERealmDifficulty K2Node_Select_Default, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, bool CallFunc_IsUsingGamepad_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_IsUsingGamepad_ReturnValue_1, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
};

}


