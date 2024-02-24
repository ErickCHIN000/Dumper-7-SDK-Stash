#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x158 (0x498 - 0x340)
// WidgetBlueprintGeneratedClass UMG_Talent_Blueprint.UMG_Talent_Blueprint_C
class UUMG_Talent_Blueprint_C : public UUMG_Talent_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      UnlockedAnimation;                                 // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      HoverAnimation;                                    // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               CountBorder;                                       // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          Desaturator;                                       // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Glow_1;                                            // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              HoverFrame;                                        // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MainOverlay;                                       // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Numerator;                                         // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ReqLevelNumber;                                    // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ReqTextBorder;                                     // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              RequiredLevel;                                     // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Requiredlevelbase;                                 // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              SearchHighlight;                                   // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              TalentBox;                                         // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               TalentButton;                                      // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               TextBorder;                                        // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextName;                                          // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_FeatureLevelIcon_C*               UMG_FeatureLevelIcon;                              // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_TalentRequiredIcon_C*             UMG_TalentRequiredIcon;                            // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnTalentClicked;                                   // 0x3E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSlateColor                           TextColor;                                         // 0x3F8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           ButtonStateColour;                                 // 0x420(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  NodeName;                                          // 0x448(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUMG_TalentTooltip_Blueprint_C*        TalentTooltip;                                     // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            Fmod_HoveredToolTip;                               // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                    FMOD_HoveredToolTip_Ref;                           // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UUMG_TalentTooltip_Group_C*            TooltipGroup;                                      // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SearchHighlightFlag;                               // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_389[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CachedSearchString;                                // 0x488(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_Talent_Blueprint_C* GetDefaultObj();

	class FString GetStringForFilterSearch();
	void RefreshSearchHighlight();
	void UpdateTooltipAndComingSoon();
	void UpdateToolTip();
	void UpdateRequiredTalent(const struct FDLCPackageDataRowHandle& DLCRequired, const struct FDLCPackageDataRowHandle& RequiredDLC, const struct FTalentsRowHandle& RequiredTalent, bool CallFunc_IsRowHandleValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FTalentsRowHandle& CallFunc_GetRequiredCharacterTalentForBlueprintUnlock_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, TScriptInterface<class ITalentControllerInterface> CallFunc_GetController_ReturnValue, const struct FTalent& CallFunc_GetTalentsStruct_Talents, enum class EValid CallFunc_GetTalentsStruct_Paths, const struct FFeatureLevelsRowHandle& CallFunc_GetFeatureLevel_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_AreAllFlagsSet_ReturnValue, const struct FFlagsMultiRowHandle& CallFunc_Array_Get_Item, const struct FDLCPackageDataRowHandle& CallFunc_ToDLCPackageDataRowHandle_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Update_Required_Level(const struct FTalent& CallFunc_GetTalentsStruct_Talents, enum class EValid CallFunc_GetTalentsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void UpdateDesaturationMaterial(int32 CallFunc_BreakTalentModelData_Rank, int32 CallFunc_BreakTalentModelData_MaxRank, enum class ETalentState CallFunc_BreakTalentModelData_State, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void GetOverlay(class UOverlay** Overlay);
	void Set_Icon(TSoftObjectPtr<class UTexture2D> Texture, bool CallFunc_IsValidSoftObjectReference_ReturnValue, TSoftObjectPtr<class UObject> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_NotEqual_SoftObjectReference_ReturnValue);
	void SetSize(const struct FVector2D& InVec, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y);
	void Refresh_Hover_State(struct FTalentView& TalentView, enum class ETalentState Temp_byte_Variable, int32 CallFunc_BreakTalentModelData_Rank, int32 CallFunc_BreakTalentModelData_MaxRank, enum class ETalentState CallFunc_BreakTalentModelData_State, enum class E_ButtonState CallFunc_GetButtonState_State, bool K2Node_SwitchEnum_CmpSuccess, const struct FTalentHoverConfig& K2Node_Select_Default, enum class E_ButtonState CallFunc_GetButtonState_State_1, bool K2Node_SwitchEnum_CmpSuccess_1);
	void Finished_A81076484900AC102F0EE58623931564();
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void Refresh_Display();
	void Set_Hover_States(const struct FSlateColor& TextColor, const struct FSlateColor& IconColor);
	void OnStateChanged(const struct FTalentModelData& NewState);
	void OnTalentSet();
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void SetSearchHighlight(bool bHighlighted);
	void ExecuteUbergraph_UMG_Talent_Blueprint(int32 EntryPoint, const class FString& CallFunc_GenerateSearchStringForBlueprintTalent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FSlateColor& K2Node_CustomEvent_TextColor, const struct FSlateColor& K2Node_CustomEvent_IconColor, const struct FTalentModelData& K2Node_Event_NewState, const struct FTalentView& CallFunc_GetTalentViewsStruct_TalentViews, enum class EValid CallFunc_GetTalentViewsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_BreakTalentModelData_Rank, int32 CallFunc_BreakTalentModelData_MaxRank, enum class ETalentState CallFunc_BreakTalentModelData_State, bool K2Node_SwitchEnum_CmpSuccess_1, TScriptInterface<class ITalentControllerInterface> CallFunc_GetController_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_UnlockNextTalentRank_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, const struct FTalent& CallFunc_GetTalentsStruct_Talents, enum class EValid CallFunc_GetTalentsStruct_Paths, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, enum class EValid CallFunc_CastToItemableRowHandle_Paths, const struct FItemableRowHandle& CallFunc_CastToItemableRowHandle_ReturnValue, const struct FItemableData& CallFunc_GetItemableStruct_Itemable, enum class EValid CallFunc_GetItemableStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_3, bool K2Node_SwitchEnum_CmpSuccess_4, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_2, bool CallFunc_EventInstanceIsValid_ReturnValue, bool K2Node_Event_bHighlighted, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UTalentTooltipWidget* CallFunc_TryGetCurrentTooltipWidget_ReturnValue, class UUMG_TalentTooltip_Blueprint_C* K2Node_DynamicCast_AsUMG_Talent_Tooltip_Blueprint, bool K2Node_DynamicCast_bSuccess);
	void OnTalentClicked__DelegateSignature(const struct FTalentsRowHandle& Talent);
};

}


