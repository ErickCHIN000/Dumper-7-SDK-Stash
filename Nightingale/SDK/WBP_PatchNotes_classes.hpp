#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x4E8 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_PatchNotes.WBP_PatchNotes_C
class UWBP_PatchNotes_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_button_base_C*                    BU_Close;                                          // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_linebreak;                                     // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_linebreak_1;                                   // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Motd_Border;                                       // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_body;                                          // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PatchNotes_C* GetDefaultObj();

	class UWidget* GetDefaultFocusWidget();
	void Get_Patch_Notes(struct FGetNewsResponse& Response, struct FOnlineServiceStatus& Status, const struct FNewsItem& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void MOTD_Original(struct FGetMessageOfTheDayResponse& Response, struct FOnlineServiceStatus& Status, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Construct();
	void BndEvt__WBP_button_base_293_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature();
	void ExecuteUbergraph_WBP_PatchNotes(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGetNewsRequest& K2Node_MakeStruct_GetNewsRequest);
};

}


