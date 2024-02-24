#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x288 - 0x260)
// WidgetBlueprintGeneratedClass wid_pda_Map_Buttons.wid_pda_Map_Buttons_C
class UWid_pda_Map_Buttons_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_MainMenu_Buttons_Entry_C*         BackBtn;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Inventory_Buttons_Entry_C*        DetailsBtn;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons_Entry_C*         ZoomIn;                                            // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons_Entry_C*         ZoomOut;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_pda_Map_Buttons_C* GetDefaultObj();

	void UpdatePadding();
	void UppercaseMenuButton(class UWid_MainMenu_Buttons_Entry_C* Button, class FText CallFunc_GetText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue);
	void UppercaseButtonLabels();
	void UppercaseButtonLabel(class UWid_Inventory_Buttons_Entry_C* Target, class FText CallFunc_GetText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue);
	void Update(const struct FStruct_Map_ButtonsInfo& Info, class FText CallFunc_TextToUpper_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_wid_pda_Map_Buttons(int32 EntryPoint, const struct FStruct_Map_Button& K2Node_MakeStruct_struct_Map_Button, const struct FStruct_Map_Button& K2Node_MakeStruct_struct_Map_Button_1, const struct FStruct_Map_Button& K2Node_MakeStruct_struct_Map_Button_2, const struct FStruct_Map_Button& K2Node_MakeStruct_struct_Map_Button_3, const struct FStruct_Map_ButtonsInfo& K2Node_MakeStruct_struct_Map_ButtonsInfo, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


