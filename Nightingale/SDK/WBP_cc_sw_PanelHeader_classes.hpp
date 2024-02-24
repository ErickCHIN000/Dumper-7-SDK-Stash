#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x318 - 0x2F0)
// WidgetBlueprintGeneratedClass WBP_cc_sw_PanelHeader.WBP_cc_sw_PanelHeader_C
class UWBP_cc_sw_PanelHeader_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            Txt_PanelHeader;                                   // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  HeaderText;                                        // 0x300(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UWBP_cc_sw_PanelHeader_C* GetDefaultObj();

	void RefreshText();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_cc_sw_PanelHeader(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


