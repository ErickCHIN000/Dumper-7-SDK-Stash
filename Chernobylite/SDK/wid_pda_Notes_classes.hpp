#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2C0 - 0x2A0)
// WidgetBlueprintGeneratedClass wid_pda_Notes.wid_pda_Notes_C
class UWid_pda_Notes_C : public UWid_pda_IFullScreen_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_pda_Notes_Buttons_C*              Buttons;                                           // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_pda_NotesList_C*                  NotesList;                                         // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_pda_Notes_C* GetDefaultObj();

	void SetAppTab(int32 Index, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void GetName(int32 AltNameID, class FText* Name, int32 Temp_int_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText K2Node_Select_Default, class FText CallFunc_TextToUpper_ReturnValue);
	void Construct();
	void InputUp();
	void InputDown();
	void InputFaceRight();
	void InputLeft();
	void InputRight();
	void SwitchToMapApp(class Abp_MinimapTag_C* Tag);
	void InputFaceDown();
	void InputFaceLeft();
	void InputFaceUp();
	void DPadLeft();
	void DPadRight();
	void DPadDown();
	void DPadUp();
	void AppClosed();
	void Back_Button_Clicked();
	void AppOpened();
	void ExecuteUbergraph_wid_pda_Notes(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetMousePosition_LocationX, float CallFunc_GetMousePosition_LocationY, bool CallFunc_GetMousePosition_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_CloseInventory_ReturnValue, class Abp_MinimapTag_C* K2Node_Event_Tag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


