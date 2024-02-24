#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x164 (0x5E4 - 0x480)
// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C
class UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C : public UWBP_CC_DynamicSubPanel__Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x480(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_BG;                                            // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_0;                                     // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        Rtxt_playerHint_difficulty_trunc;                  // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        Rtxt_playerHint_difficultycombo;                   // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        Rtxt_playerHint_loadout_description;               // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Label_SelectedLoadout;                         // 0x4B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Label_SelectedLoadout_1;                       // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_loadoutScore_Top;                              // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_PanelHeader_C*              WBP_cc_sw_PanelHeader;                             // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_sw_PickerButton_C*             WBP_CC_sw_PickerButton;                            // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Tooltip_Text_Easy;                                 // 0x4E0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Tooltip_Text_Med;                                  // 0x4F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Tooltip_Text_Hard;                                 // 0x510(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Tooltip_Text_Extreme;                              // 0x528(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPlayerLoadoutDataReference           Loadout_Handle_1;                                  // 0x540(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FPlayerLoadoutDataReference           Loadout_Handle_2;                                  // 0x568(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FPlayerLoadoutDataReference           Loadout_Handle_3;                                  // 0x590(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FPlayerLoadoutDataReference           Loadout_Handle_4;                                  // 0x5B8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        bg;                                                // 0x5E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget();
	void SetLoadoutStoryCombinedText(int32 Loadout, enum class EPlayerBackground Background, class FText Story7_Loadout_4, class FText Story7_Loadout_3, class FText Story7_Loadout_2, class FText Story7_Loadout_1, class FText Story6_Loadout_4, class FText Story6_Loadout_3, class FText Story6_Loadout_2, class FText Story6_Loadout_1, class FText Story5_Loadout_4, class FText Story5_Loadout_3, class FText Story5_Loadout_2, class FText Story5_Loadout_1, class FText Story4_Loadout_4, class FText Story4_Loadout_3, class FText Story4_Loadout_2, class FText Story4_Loadout_1, class FText Story3_Loadout_4, class FText Story3_Loadout_3, class FText Story3_Loadout_2, class FText Story3_Loadout_1, class FText Story2_Loadout_4, class FText Story2_Loadout_3, class FText Story2_Loadout_2, class FText Story2_Loadout_1, class FText Story1_Loadout4, class FText Story1_Loadout3, class FText Story1_Loadout2, class FText Story1_Loadout1, enum class EPlayerBackground Temp_byte_Variable, int32 Temp_int_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, int32 Temp_int_Variable_6, int32 Temp_int_Variable_7, int32 CallFunc_Conv_ByteToInt_ReturnValue, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2, class FText K2Node_Select_Default_3, class FText K2Node_Select_Default_4, class FText K2Node_Select_Default_5, class FText K2Node_Select_Default_6, class FText K2Node_Select_Default_7, class FText K2Node_Select_Default_8);
	class FText GetLoadoutScore(const struct FPlayerLoadoutDataReference& InputPin, const struct FPlayerLoadout& CallFunc_TryGetPlayerLoadoutData_OutLoadoutData, enum class EGetResult CallFunc_TryGetPlayerLoadoutData_OutBranches, int32 CallFunc_GetLoadoutScore_Score, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_Conv_IntToText_ReturnValue);
	class UWidget* Get_Extreme_ToolTipWidget(class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue);
	class UWidget* Get_Hard_ToolTipWidget(class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue);
	class UWidget* Get_Medium_ToolTipWidget(class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue);
	class UWidget* Get_Easy_ToolTipWidget(class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue);
	void RefreshSelectedOption(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EPlayerBackground CallFunc_GetPlayerBackground_OutBackground, const struct FPlayerLoadoutDataReference& CallFunc_GetSelectedInitialLoadout_SelectedInitialLoadout, const struct FPlayerLoadout& CallFunc_TryGetPlayerLoadoutData_OutLoadoutData, enum class EGetResult CallFunc_TryGetPlayerLoadoutData_OutBranches, class FText CallFunc_GetLoadoutScore_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_UI_Text_TruncationCheck_ReturnValue, TArray<struct FPlayerLoadoutDataReference>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FPlayerLoadoutDataReference& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_FPlayerLoadoutDataReference_ReturnValue);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void RefreshPanel();
	void BndEvt__WBP_CC_DynamicSubPanel_Difficulty_Equipment_WBP_CC_sw_PickerButton_K2Node_ComponentBoundEvent_4_PickerEntryUpdated__DelegateSignature(int32 Index);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_WBP_CC_DynamicSubPanel_Difficulty_Equipment(int32 EntryPoint, int32 Temp_int_Variable, enum class ERealmDifficulty Temp_byte_Variable, enum class ERealmDifficulty Temp_byte_Variable_1, enum class ERealmDifficulty Temp_byte_Variable_2, enum class ERealmDifficulty Temp_byte_Variable_3, bool K2Node_Event_IsDesignTime, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_IsValid_ReturnValue, int32 K2Node_ComponentBoundEvent_Index, enum class ERealmDifficulty K2Node_Select_Default, int32 Temp_int_Variable_1, const struct FPlayerLoadoutDataReference& K2Node_Select_Default_1, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, bool CallFunc_IsUsingGamepad_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_IsUsingGamepad_ReturnValue_1, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
};

}


