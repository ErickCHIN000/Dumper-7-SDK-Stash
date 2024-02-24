#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x278 - 0x260)
// WidgetBlueprintGeneratedClass wid_DialogueChoice_Buttons.wid_DialogueChoice_Buttons_C
class UWid_DialogueChoice_Buttons_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_Inventory_Buttons_Entry_C*        Build;                                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Inventory_Buttons_Entry_C*        Details;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_DialogueChoice_Buttons_C* GetDefaultObj();

	void SetFont(class UWid_Inventory_Buttons_Entry_C* Widget, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void Update(const struct FStruct_Inventory_ButtonModifyInfo& Modify);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_wid_DialogueChoice_Buttons(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime);
};

}


