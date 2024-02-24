#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x340 - 0x288)
// WidgetBlueprintGeneratedClass UMG_Talent_Base.UMG_Talent_Base_C
class UUMG_Talent_Base_C : public UTalentWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTalentViewsRowHandle                 ViewData;                                          // 0x290(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTalentModelData                      CurrentState;                                      // 0x2A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UTalentViewInterface*                  View;                                              // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         QueueRefresh;                                      // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A9F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnHover;                                           // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhover;                                         // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<struct FTalentsRowHandle, struct FSessionFlagsRowHandle> TalentHightlightFlagMap;                           // 0x2E8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUMG_WidgetHighlightBase_C*            CachedHighlightWidget;                             // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_Talent_Base_C* GetDefaultObj();

	void GetOverlay(class UOverlay** Overlay);
	void CanUnlock(bool* Result, int32 CallFunc_BreakTalentModelData_Rank, int32 CallFunc_BreakTalentModelData_MaxRank, enum class ETalentState CallFunc_BreakTalentModelData_State, class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_CanUnlockTalent_ReturnValue);
	void Set_View(class UTalentViewInterface* View);
	void Set_State(const struct FTalentModelData& New_State);
	void OnStateChanged(const struct FTalentModelData& NewState);
	void RefreshState();
	void OnTalentSet();
	void Set_Zoom_Level(int32 Level, float Scale);
	void ExecuteUbergraph_UMG_Talent_Base(int32 EntryPoint, int32 K2Node_CustomEvent_Level, float K2Node_CustomEvent_Scale, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UTalentViewInterface* K2Node_CustomEvent_View, const struct FTalentModelData& K2Node_CustomEvent_New_State, const struct FTalentViewsRowHandle& CallFunc_GetViewData_ReturnValue, const struct FTalentModelData& K2Node_CustomEvent_NewState, const struct FTalent& CallFunc_GetTalentsStruct_Talents, enum class EValid CallFunc_GetTalentsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue, const struct FTalent& CallFunc_GetTalentsStruct_Talents_1, enum class EValid CallFunc_GetTalentsStruct_Paths_1, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue, const struct FTalentModelData& CallFunc_GetTalentState_OutData, bool CallFunc_GetTalentState_ReturnValue, class UOverlay* CallFunc_GetOverlay_Overlay);
	void OnUnhover__DelegateSignature();
	void OnHover__DelegateSignature(class UUMG_Talent_Base_C* Talent);
};

}


