#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2A0 - 0x260)
// WidgetBlueprintGeneratedClass wid_RoomSkillTreeButton.wid_RoomSkillTreeButton_C
class UWid_RoomSkillTreeButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                               Background;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text;                                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_RoomSkillTreeButton_C*            NeightbourUp;                                      // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_RoomSkillTreeButton_C*            NeightbourDown;                                    // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DeleteRoom;                                        // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1985[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  NameKey;                                           // 0x28C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1989[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            Dictionary;                                        // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_RoomSkillTreeButton_C* GetDefaultObj();

	void SetSelected(bool NewSelected);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_wid_RoomSkillTreeButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText CallFunc_GetTextFromDictionary_Text);
};

}


