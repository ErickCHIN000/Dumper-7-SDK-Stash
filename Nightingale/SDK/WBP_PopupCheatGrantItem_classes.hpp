#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x5C8 - 0x5C0)
// WidgetBlueprintGeneratedClass WBP_PopupCheatGrantItem.WBP_PopupCheatGrantItem_C
class UWBP_PopupCheatGrantItem_C : public UWBP_Popup_DebugItemActionConfirm_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UWBP_PopupCheatGrantItem_C* GetDefaultObj();

	void GetMaxItemCount(const struct FItemDataReference& ItemId, int32* MaxItemCount);
	void UpdateConfirmText(const struct FItemDataReference& ItemId);
	void ExecuteUbergraph_WBP_PopupCheatGrantItem(int32 EntryPoint, const struct FItemDataReference& K2Node_Event_ItemID, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
};

}


