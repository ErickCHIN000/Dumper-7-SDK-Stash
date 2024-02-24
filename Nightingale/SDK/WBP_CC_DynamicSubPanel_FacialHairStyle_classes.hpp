#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x520 - 0x480)
// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_FacialHairStyle.WBP_CC_DynamicSubPanel_FacialHairStyle_C
class UWBP_CC_DynamicSubPanel_FacialHairStyle_C : public UWBP_CC_DynamicSubPanel__Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x480(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_CC_Appearance_CategoryButton_C*   Hairstyles;                                        // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_PanelHeader_C*              WBP_cc_sw_PanelHeader;                             // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PanelConfigButtons_C*             WBP_PanelConfigButtons;                            // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        Pad_259A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHairDataReference                    CachedData;                                        // 0x4B0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CC_DynamicSubPanel_FacialHairStyle_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue);
	void RefreshMenu(const struct FHairDataReference& CallFunc_GetHairData_OutData, const struct FHairData& CallFunc_TryGetHairData_OutData, enum class EGetResult CallFunc_TryGetHairData_OutBranches, bool K2Node_SwitchEnum_CmpSuccess);
	class UWidget* GetDefaultFocusWidget();
	void CollectPanelValues(TMap<class FString, struct FCharacterCreateTelemetryValuePairs>* OutValues, class FString* OutPanelName, const struct FHairDataReference& CallFunc_GetHairData_OutData, const struct FGuid& CallFunc_GetHairDataId_ReturnValue, const struct FGuid& CallFunc_GetHairDataId_ReturnValue_1, const class FString& CallFunc_Conv_GuidToString_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue_1, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs, TMap<class FString, struct FCharacterCreateTelemetryValuePairs> K2Node_MakeMap_Map);
	void CacheStartingPanelValues(const struct FHairDataReference& CallFunc_GetHairData_OutData);
	void BndEvt__WBP_CC_DynamicSubPanel_Hair_Style_hairstyles_K2Node_ComponentBoundEvent_2_CC_HairDataSelected__DelegateSignature(const struct FHairDataReference& Hair_DA, int32 GridIndex, enum class EHairAssetType Hair_TYpe);
	void ResetPanelContent();
	void RandomizePanelContent();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WBP_CC_DynamicSubPanel_FacialHairStyle_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_1_OnResetSelected__DelegateSignature();
	void BndEvt__WBP_CC_DynamicSubPanel_FacialHairStyle_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_3_OnRandomizeSelected__DelegateSignature();
	void Construct();
	void BP_OnActivated();
	void BP_OnDeactivated();
	void ExecuteUbergraph_WBP_CC_DynamicSubPanel_FacialHairStyle(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FHairDataReference& K2Node_ComponentBoundEvent_Hair_DA, int32 K2Node_ComponentBoundEvent_GridIndex, enum class EHairAssetType K2Node_ComponentBoundEvent_Hair_TYpe, bool K2Node_Event_IsDesignTime, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
};

}


