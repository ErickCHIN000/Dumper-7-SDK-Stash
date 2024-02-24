#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x298 - 0x260)
// WidgetBlueprintGeneratedClass UMG_TerrainButtonPromptContents.UMG_TerrainButtonPromptContents_C
class UUMG_TerrainButtonPromptContents_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_IconTextButton_C*                 BoostButton;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        BoostPanel;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            BoostText;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Checkbox_C*                       DontShowAgainCheckbox;                             // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            BoostButtonClicked;                                // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UUMG_TerrainButtonPromptContents_C* GetDefaultObj();

	void DontShowAgain(bool* DontShowAgain);
	void BndEvt__UMG_TerrainButtonPromptContents_UMG_IconTextButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
	void SetBoostPanelDetails(bool Visible, int32 PlayerLevel);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_TerrainButtonPromptContents(int32 EntryPoint, bool K2Node_CustomEvent_Visible, int32 K2Node_CustomEvent_PlayerLevel, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool K2Node_Event_IsDesignTime);
	void BoostButtonClicked__DelegateSignature();
};

}


