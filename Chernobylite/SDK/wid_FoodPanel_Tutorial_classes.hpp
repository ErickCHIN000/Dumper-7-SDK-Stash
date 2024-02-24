#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x79 (0x2D9 - 0x260)
// WidgetBlueprintGeneratedClass wid_FoodPanel_Tutorial.wid_FoodPanel_Tutorial_C
class UWid_FoodPanel_Tutorial_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Background;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        Text;                                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  PCText;                                            // 0x278(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ConsoleText;                                       // 0x290(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  PCText2;                                           // 0x2A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ConsoleText2;                                      // 0x2C0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsMissionTutorial;                                 // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_FoodPanel_Tutorial_C* GetDefaultObj();

	void SetType(bool IsMissionTutorial);
	void UpdateTextBasedOnInput(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool CallFunc_LastInputWasFromGamepad_Gamepad, class FText K2Node_Select_Default, bool CallFunc_LastInputWasFromGamepad_Gamepad_1, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2, class FText CallFunc_KeyToIcon_OutText);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void InputDeviceChanged(bool NewInputIsGamepad);
	void Destruct();
	void ExecuteUbergraph_wid_FoodPanel_Tutorial(int32 EntryPoint, class ACGGameModeBase* CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class ACGGameModeBase* CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode_1, bool K2Node_CustomEvent_NewInputIsGamepad);
};

}


