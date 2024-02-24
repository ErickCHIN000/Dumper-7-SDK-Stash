#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x148 (0x488 - 0x340)
// WidgetBlueprintGeneratedClass UMG_Talent_Player.UMG_Talent_Player_C
class UUMG_Talent_Player_C : public UUMG_Talent_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      CompleteAnimation;                                 // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      UnlockedAnimation;                                 // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      HoverAnimation;                                    // 0x358(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                              ComingSoonOverlay;                                 // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          CompleteFrameBar;                                  // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               CountBorder;                                       // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Denominator;                                       // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          Desaturator;                                       // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Glow;                                              // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              HoverCorners;                                      // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_48;                                          // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MainOverlay;                                       // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MissingRewards;                                    // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Numerator;                                         // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RankDesaturator;                                   // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RankIcon;                                          // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              SearchHighlight;                                   // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Separator;                                         // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              TalentBox;                                         // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               TalentButton;                                      // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Talent_ComingSoon_C*              UMG_Talent_ComingSoon;                             // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          UnlockedBar;                                       // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          UnlockedCount;                                     // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnTalentClicked;                                   // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSlateColor                           TextColor;                                         // 0x430(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTalentRanksRowHandle                 Talent_Rank;                                       // 0x458(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         SearchHighlightFlag;                               // 0x470(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_637E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CachedSearchString;                                // 0x478(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_Talent_Player_C* GetDefaultObj();

	void RefreshSearchHighlight();
	class FString GetStringForFilterSearch();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_IsOnProspect_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void GetOverlay(class UOverlay** Overlay);
	void UpdateDesaturationMaterial(int32 CallFunc_BreakTalentModelData_Rank, int32 CallFunc_BreakTalentModelData_MaxRank, enum class ETalentState CallFunc_BreakTalentModelData_State, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void Set_Icon(TSoftObjectPtr<class UTexture2D> SoftTexture, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void Refresh_Hover_State(struct FTalentView& TalentView, enum class ETalentState Temp_byte_Variable, int32 CallFunc_BreakTalentModelData_Rank, int32 CallFunc_BreakTalentModelData_MaxRank, enum class ETalentState CallFunc_BreakTalentModelData_State, enum class E_ButtonState CallFunc_GetButtonState_State, bool K2Node_SwitchEnum_CmpSuccess, const struct FTalentHoverConfig& K2Node_Select_Default, enum class E_ButtonState CallFunc_GetButtonState_State_1, bool K2Node_SwitchEnum_CmpSuccess_1);
	void Finished_3C782BCA44885C4331A270B17A1E04E8();
	void OnTalentSet();
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void Refresh_Display();
	void Set_Hover_States(const struct FSlateColor& TextColor, const struct FSlateColor& IconColor);
	void OnStateChanged(const struct FTalentModelData& NewState);
	void Setup_Talent_Rank();
	void RequestRefund();
	void Nothing();
	void Confirm();
	void DoNothing();
	void AlsoNothing();
	void CustomEvent();
	void SetSearchHighlight(bool bHighlighted);
	void FillTooltip(class UTalentTooltipWidget* NewTooltipWidget);
	void ExecuteUbergraph_UMG_Talent_Player(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class ERefundTalentResponse Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, int32 Temp_wildcard_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FTalent& CallFunc_GetTalentsStruct_Talents, enum class EValid CallFunc_GetTalentsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FTalentReward& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FBaseStatsEnum>& CallFunc_Map_Keys_Keys, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FSlateColor& K2Node_CustomEvent_TextColor, const struct FSlateColor& K2Node_CustomEvent_IconColor, const struct FTalentModelData& K2Node_Event_NewState, const struct FTalentView& CallFunc_GetTalentViewsStruct_TalentViews, enum class EValid CallFunc_GetTalentViewsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_BreakTalentModelData_Rank, int32 CallFunc_BreakTalentModelData_MaxRank, enum class ETalentState CallFunc_BreakTalentModelData_State, class FText CallFunc_Conv_IntToText_ReturnValue_1, int32 CallFunc_BreakTalentModelData_Rank_1, int32 CallFunc_BreakTalentModelData_MaxRank_1, enum class ETalentState CallFunc_BreakTalentModelData_State_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_5, TScriptInterface<class ITalentControllerInterface> CallFunc_GetController_ReturnValue, bool CallFunc_UnlockNextTalentRank_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_6, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, const struct FTalentRank& CallFunc_GetTalentRanksStruct_TalentRanks, enum class EValid CallFunc_GetTalentRanksStruct_Paths, class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FTalentTreesRowHandle& CallFunc_GetTalentTree_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, int32 CallFunc_GetSpentPointsForTree_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsHovered_ReturnValue_1, const struct FTalentRanksRowHandle& CallFunc_FindRequiredTalentRank_ReturnValue, bool CallFunc_CanUnlock_Result, bool CallFunc_CanUnlock_Result_1, int32 Temp_int_Array_Index_Variable, const struct FBaseStatsEnum& CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_EnumEnum_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsWithEditor_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, bool Temp_bool_Variable_2, const struct FRowMetadata& CallFunc_GetMetadata_ReturnValue, const struct FSlateColor& K2Node_Select_Default_1, bool CallFunc_IsFeatureLevelEnabled_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_1, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget_1, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, int32 CallFunc_GetAvailableMetaResource_ReturnValue, bool Temp_bool_Variable_3, bool CallFunc_Greater_IntInt_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_3, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, const struct FPlayerCharacterID& CallFunc_GetPlayerCharacterID_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_4, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, int32 CallFunc_BreakTalentModelData_Rank_2, int32 CallFunc_BreakTalentModelData_MaxRank_2, enum class ETalentState CallFunc_BreakTalentModelData_State_2, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_2, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_2, bool K2Node_DynamicCast_bSuccess_2, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_2, bool K2Node_SwitchEnum_CmpSuccess_5, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget_2, TScriptInterface<class ITalentControllerInterface> CallFunc_GetController_ReturnValue_1, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails_1, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, TScriptInterface<class ITalentControllerInterface> K2Node_DynamicCast_AsTalent_Controller_Interface, bool K2Node_DynamicCast_bSuccess_3, enum class ERefundTalentResponse CallFunc_CanRefundTalent_SuccessOrFailureReason, bool CallFunc_CanRefundTalent_ReturnValue, const struct FTalentRank& CallFunc_GetTalentRanksStruct_TalentRanks_1, enum class EValid CallFunc_GetTalentRanksStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_6, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FMetaCurrency& CallFunc_GetMetaCurrencyStruct_MetaCurrency, enum class EValid CallFunc_GetMetaCurrencyStruct_Paths, class FText CallFunc_MakeLiteralText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_7, class FText K2Node_Select_Default_4, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails_2, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FTalent& CallFunc_GetTalentsStruct_Talents_1, enum class EValid CallFunc_GetTalentsStruct_Paths_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool K2Node_SwitchEnum_CmpSuccess_8, class FText CallFunc_Format_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue_1, class FText CallFunc_Format_ReturnValue_2, int32 CallFunc_GetSpentPointsForTree_ReturnValue_1, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails_3, int32 CallFunc_Subtract_IntInt_ReturnValue, bool K2Node_Event_bHighlighted, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UTalentTooltipWidget* CallFunc_TryGetCurrentTooltipWidget_ReturnValue, class UTalentTooltipWidget* K2Node_Event_NewTooltipWidget, class UUMG_TalentTooltip_Player_C* K2Node_DynamicCast_AsUMG_Talent_Tooltip_Player, bool K2Node_DynamicCast_bSuccess_4, class UUMG_TalentTooltip_Player_C* K2Node_DynamicCast_AsUMG_Talent_Tooltip_Player_1, bool K2Node_DynamicCast_bSuccess_5, const class FString& CallFunc_GenerateSearchStringForPlayerTalent_ReturnValue);
	void OnTalentClicked__DelegateSignature(const struct FTalentsRowHandle& Talent);
};

}

