#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0x2A9 - 0x260)
// WidgetBlueprintGeneratedClass wid_Credits_Person_Entry.wid_Credits_Person_Entry_C
class UWid_Credits_Person_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTextBlock*                            Person;                                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Position;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  PersonText;                                        // 0x278(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  PositionText;                                      // 0x290(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         RightIsPerson;                                     // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWid_Credits_Person_Entry_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_Credits_Person_Entry(int32 EntryPoint, bool Temp_bool_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable_1, class FText Temp_text_Variable_1, bool K2Node_Event_IsDesignTime, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_1, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, class FText CallFunc_TextToUpper_ReturnValue_1);
};

}


