#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x35 (0x4B5 - 0x480)
// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_BG.WBP_CC_DynamicSubPanel_BG_C
class UWBP_CC_DynamicSubPanel_BG_C : public UWBP_CC_DynamicSubPanel__Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x480(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URichTextBlock*                        RichTextBlock_description;                         // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Label_SelectedLoadout;                         // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_PanelHeader_C*              WBP_cc_sw_PanelHeader;                             // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_sw_PickerButton_C*             WBP_CC_sw_PickerButton;                            // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        ActiveBGIndex;                                     // 0x4B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayerBackground                 CachedBackground;                                  // 0x4B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CC_DynamicSubPanel_BG_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget();
	void CollectPanelValues(TMap<class FString, struct FCharacterCreateTelemetryValuePairs>* OutValues, class FString* OutPanelName, enum class EPlayerBackground CallFunc_GetPlayerBackground_OutBackground, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs, TMap<class FString, struct FCharacterCreateTelemetryValuePairs> K2Node_MakeMap_Map);
	void CacheStartingPanelValues(enum class EPlayerBackground CallFunc_GetPlayerBackground_OutBackground);
	void UpdateText(int32 ListIndex, int32 Temp_int_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText K2Node_Select_Default);
	void RefreshSelectedOption(enum class EPlayerBackground Temp_byte_Variable, enum class EPlayerBackground Temp_byte_Variable_1, enum class EPlayerBackground Temp_byte_Variable_2, enum class EPlayerBackground Temp_byte_Variable_3, enum class EPlayerBackground Temp_byte_Variable_4, enum class EPlayerBackground Temp_byte_Variable_5, enum class EPlayerBackground Temp_byte_Variable_6, int32 Temp_int_Variable, enum class EPlayerBackground K2Node_Select_Default);
	void RefreshPanel();
	void BndEvt__WBP_CC_DynamicSubPanel_BG_WBP_CC_sw_PickerButton_K2Node_ComponentBoundEvent_0_PickerEntryUpdated__DelegateSignature(int32 Index);
	void RandomizePanelContent();
	void PreConstruct(bool IsDesignTime);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void Construct();
	void ExecuteUbergraph_WBP_CC_DynamicSubPanel_BG(int32 EntryPoint, enum class EPlayerBackground Temp_byte_Variable, enum class EPlayerBackground Temp_byte_Variable_1, enum class EPlayerBackground Temp_byte_Variable_2, enum class EPlayerBackground Temp_byte_Variable_3, enum class EPlayerBackground Temp_byte_Variable_4, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, int32 K2Node_ComponentBoundEvent_Index, bool CallFunc_IsValid_ReturnValue_2, enum class EPlayerBackground CallFunc_GetPlayerBackground_OutBackground, int32 CallFunc_Conv_ByteToInt_ReturnValue, enum class EPlayerBackground Temp_byte_Variable_5, int32 CallFunc_RandomIntegerInRange_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, bool K2Node_Event_IsDesignTime, uint8 CallFunc_GetValidValue_ReturnValue, enum class EPlayerBackground Temp_byte_Variable_6, int32 Temp_int_Variable, enum class EPlayerBackground K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_3, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, bool CallFunc_IsUsingGamepad_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_IsUsingGamepad_ReturnValue_1, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
};

}


