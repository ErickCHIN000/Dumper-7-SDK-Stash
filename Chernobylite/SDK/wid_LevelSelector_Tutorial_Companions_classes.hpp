#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x61 (0x2C1 - 0x260)
// WidgetBlueprintGeneratedClass wid_LevelSelector_Tutorial_Companions.wid_LevelSelector_Tutorial_Companions_C
class UWid_LevelSelector_Tutorial_Companions_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Background;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        Text;                                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  PCTextSelection;                                   // 0x278(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ConsoleTextSelection;                              // 0x290(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  CompletionChance;                                  // 0x2A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsCompletionChance;                                // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWid_LevelSelector_Tutorial_Companions_C* GetDefaultObj();

	void UpdateBasedOnType(bool Temp_bool_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_1, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default);
	void UpdateTextBasedOnInput(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_LastInputWasFromGamepad_Gamepad, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, class FText CallFunc_KeyToIcon_OutText);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void InputDeviceChanged(bool NewInputIsGamepad);
	void Destruct();
	void ExecuteUbergraph_wid_LevelSelector_Tutorial_Companions(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class ACGGameModeBase* CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode, bool K2Node_CustomEvent_NewInputIsGamepad, class ACGGameModeBase* CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode_1);
};

}


