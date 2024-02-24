#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x520 - 0x480)
// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_Hair_EyeBrows.WBP_CC_DynamicSubPanel_Hair_EyeBrows_C
class UWBP_CC_DynamicSubPanel_Hair_EyeBrows_C : public UWBP_CC_DynamicSubPanel__Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x480(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_CC_Appearance_CategoryButton_C*   Hairstyles;                                        // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_PanelHeader_C*              WBP_cc_sw_PanelHeader;                             // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PanelConfigButtons_C*             WBP_PanelConfigButtons;                            // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        Pad_4FA4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHairDataReference                    CachedData;                                        // 0x4B0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CC_DynamicSubPanel_Hair_EyeBrows_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue);
	void RefreshMenu(const struct FHairDataReference& CallFunc_GetHairData_OutData, const struct FHairData& CallFunc_TryGetHairData_OutData, enum class EGetResult CallFunc_TryGetHairData_OutBranches, bool K2Node_SwitchEnum_CmpSuccess);
	class UWidget* GetDefaultFocusWidget();
	void CollectPanelValues(TMap<class FString, struct FCharacterCreateTelemetryValuePairs>* OutValues, class FString* OutPanelName, const struct FHairDataReference& CallFunc_GetHairData_OutData, const struct FGuid& CallFunc_GetHairDataId_ReturnValue, const struct FGuid& CallFunc_GetHairDataId_ReturnValue_1, const class FString& CallFunc_Conv_GuidToString_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue_1, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs, TMap<class FString, struct FCharacterCreateTelemetryValuePairs> K2Node_MakeMap_Map);
	void CacheStartingPanelValues(const struct FHairDataReference& CallFunc_GetHairData_OutData);
	void ClearHairHatMorphs(TScriptInterface<class IBPI_NPCCustomization_C> CallFunc_GetClothes_Head_self_CastInput, class USkeletalMeshComponent* CallFunc_GetClothes_Head_HatComponent, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult);
	void BndEvt__WBP_CC_DynamicSubPanel_Hair_Style_hairstyles_K2Node_ComponentBoundEvent_2_CC_HairDataSelected__DelegateSignature(const struct FHairDataReference& Hair_DA, int32 GridIndex, enum class EHairAssetType Hair_TYpe);
	void RandomizePanelContent();
	void ResetPanelContent();
	void BndEvt__WBP_CC_DynamicSubPanel_Hair_EyeBrows_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_1_OnResetSelected__DelegateSignature();
	void BndEvt__WBP_CC_DynamicSubPanel_Hair_EyeBrows_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_3_OnRandomizeSelected__DelegateSignature();
	void BP_OnActivated();
	void BP_OnDeactivated();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_WBP_CC_DynamicSubPanel_Hair_EyeBrows(int32 EntryPoint, const struct FHairDataReference& K2Node_ComponentBoundEvent_Hair_DA, int32 K2Node_ComponentBoundEvent_GridIndex, enum class EHairAssetType K2Node_ComponentBoundEvent_Hair_TYpe, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue_1, bool K2Node_Event_IsDesignTime, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IBPI_NPCCustomization_C> CallFunc_GetClothes_Head_self_CastInput, class USkeletalMeshComponent* CallFunc_GetClothes_Head_HatComponent, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
};

}


