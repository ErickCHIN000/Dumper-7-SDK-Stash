#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x130 (0x3D0 - 0x2A0)
// WidgetBlueprintGeneratedClass WBP_LargeMap.WBP_LargeMap_C
class UWBP_LargeMap_C : public ULargeMapViewWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeInPanels;                                      // 0x2A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_FastTravelPrompt_C*               FastTravelPrompt;                                  // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Legend_Panel;                                      // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              SandboxModalContainer;                             // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStyledActionLabel_C*                  StyledActionLabel_MapMarker;                       // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStyledActionLabel_C*                  StyledActionLabel_SelectPan;                       // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStyledAxisLabel_C*                    StyledAxisLabel_ZoomIn;                            // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStyledAxisLabel_C*                    StyledAxisLabel_ZoomInOut;                         // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStyledAxisLabel_C*                    StyledAxisLabel_ZoomOut;                           // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LegendItem_C*                     WBP_LegendItem;                                    // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LegendItem_C*                     WBP_LegendItem_1;                                  // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LegendItem_C*                     WBP_LegendItem_2;                                  // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LegendItem_C*                     WBP_LegendItem_3;                                  // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LegendItem_C*                     WBP_LegendItem_4;                                  // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LegendItem_C*                     WBP_LegendItem_5;                                  // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LegendItem_C*                     WBP_LegendItem_6;                                  // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapPOIHUD_C*                      WBP_MapPOIHUD_6;                                   // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_QuestInfoContainer_C*             WBP_QuestContainer;                                // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SandboxCollapsed_C*               WBP_SandboxCollapsed;                              // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SandboxExpanded_C*                WBP_SandboxExpanded;                               // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ZoneMasterySummary_C*             WBP_ZoneMasterySummary;                            // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ZoneMasteryHorizontalBox;                          // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ZoneMasteryVerticalBox;                            // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ZoneNameText;                                      // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ZoneNumber_Text;                                   // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ZoneProgressSummary_C*            ZoneProgress_Campaign;                             // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ZoneProgressSummary_C*            ZoneProgress_Puzzle;                               // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ZoneProgressSummary_C*            ZoneProgress_Side;                                 // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          ZoneProgressPanel;                                 // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bInConquest;                                       // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               Ancestor;                                          // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Continue_while;                                    // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16C4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LastZoneIndex;                                     // 0x3AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_SandboxModal_C*                   CurZoneMasteryWidget;                              // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ZoneIndex;                                         // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16CB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EPuzzleCategory>           ActiveCategories;                                  // 0x3C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_LargeMap_C* GetDefaultObj();

	void Show_UI_Panels(class UZoneData* CallFunc_GetZoneData_ReturnValue, class UZoneDataEntry* CallFunc_ZoneIndex_to_Zone_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void Get_ConquestOverlay_Visibility_0();
	void Refresh_Infopanel();
	void BP_OnTick(float DeltaTime);
	void Construct();
	void OnToggleSandboxProgression(class UWBP_ZoneMasterySummary_C* Caller);
	void Destruct();
	void RefreshFastTravelPrompt();
	void RebuildZoneProgress();
	void BndEvt__WBP_LargeMap_WBP_SandboxCollapsed_K2Node_ComponentBoundEvent_0_PreviousZoneClicked__DelegateSignature();
	void BndEvt__WBP_LargeMap_WBP_SandboxCollapsed_K2Node_ComponentBoundEvent_1_NextZoneClicked__DelegateSignature();
	void BndEvt__WBP_LargeMap_WBP_SandboxCollapsed_K2Node_ComponentBoundEvent_2_ExpandClicked__DelegateSignature();
	void BndEvt__WBP_LargeMap_WBP_SandboxExpanded_K2Node_ComponentBoundEvent_3_CollapseClicked__DelegateSignature();
	void BndEvt__WBP_LargeMap_WBP_SandboxExpanded_K2Node_ComponentBoundEvent_4_PreviousZoneClicked__DelegateSignature();
	void BndEvt__WBP_LargeMap_WBP_SandboxExpanded_K2Node_ComponentBoundEvent_5_NextZoneClicked__DelegateSignature();
	void OnClose();
	void OnNewSandboxCategoryClicked(enum class EPuzzleCategory Category, enum class EMainMapZoneName ZONE);
	void BndEvt__WBP_LargeMap_WBP_SandboxCollapsed_K2Node_ComponentBoundEvent_6_SandboxCategoryClicked__DelegateSignature(enum class EPuzzleCategory Category, enum class EMainMapZoneName ZONE);
	void BndEvt__WBP_LargeMap_WBP_SandboxExpanded_K2Node_ComponentBoundEvent_7_SandboxCategoryClicked__DelegateSignature(enum class EPuzzleCategory Category, enum class EMainMapZoneName ZONE);
	void NextCategory(enum class EPuzzleCategory Category);
	void PreviousCategory(enum class EPuzzleCategory Category);
	void OnSandboxModalClosed();
	void OnRewardClaimed();
	void BPI_HideUIPanels();
	void OnSandboxCategoryClicked(enum class EPuzzleCategory Category, enum class EMainMapZoneName ZONE);
	void OnPreviousZoneClicked();
	void OnNextZoneClicked();
	void On_Reopen();
	void RefreshSandboxModal();
	void ExecuteUbergraph_WBP_LargeMap(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, float K2Node_Event_DeltaTime, int32 CallFunc_GetSelectedZoneIndex_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UWBP_ZoneMasterySummary_C* K2Node_CustomEvent_caller, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FLocationMarkerData& CallFunc_GetLastHoveredMarker_ReturnValue, class UWBP_SandboxModal_C* CallFunc_Create_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UPanelWidget* CallFunc_GetParent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UZoneData* CallFunc_GetZoneData_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UZoneDataEntry* CallFunc_ZoneIndex_to_Zone_ReturnValue, class UZoneData* CallFunc_GetZoneData_ReturnValue_1, class UZoneDataEntry* CallFunc_ZoneIndex_to_Zone_ReturnValue_1, enum class EPuzzleCategory K2Node_CustomEvent_Category_3, enum class EMainMapZoneName K2Node_CustomEvent_Zone_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UWBP_SandboxModal_C* CallFunc_Create_ReturnValue_1, class UPanelWidget* CallFunc_GetParent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, enum class EPuzzleCategory K2Node_ComponentBoundEvent_Category_1, enum class EMainMapZoneName K2Node_ComponentBoundEvent_Zone_1, enum class EPuzzleCategory K2Node_ComponentBoundEvent_Category, enum class EMainMapZoneName K2Node_ComponentBoundEvent_Zone, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, enum class EPuzzleCategory K2Node_CustomEvent_Category_2, enum class EPuzzleCategory K2Node_CustomEvent_Category_1, class UPuzzleDatabase* CallFunc_GetPuzzleDatabase_ReturnValue, TArray<class FString>& CallFunc_GetPuzzleTypesInZone_OutNames, int32 CallFunc_Array_Find_ReturnValue, TArray<enum class EPuzzleCategory>& CallFunc_GetAllDisplayTypeCategoriesForPuzzleTypes_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Find_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, enum class EPuzzleCategory CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, enum class EPuzzleCategory CallFunc_Array_Get_Item_1, class UZoneData* CallFunc_GetZoneData_ReturnValue_2, class UZoneDataEntry* CallFunc_ZoneIndex_to_Zone_ReturnValue_2, enum class EPuzzleCategory K2Node_CustomEvent_Category, enum class EMainMapZoneName K2Node_CustomEvent_Zone, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsVisible_ReturnValue_2, bool CallFunc_HasValidKey_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
};

}


