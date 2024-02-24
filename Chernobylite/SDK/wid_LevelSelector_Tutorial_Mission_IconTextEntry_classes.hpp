#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x2B8 - 0x260)
// WidgetBlueprintGeneratedClass wid_LevelSelector_Tutorial_Mission_IconTextEntry.wid_LevelSelector_Tutorial_Mission_IconTextEntry_C
class UWid_LevelSelector_Tutorial_Mission_IconTextEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                ImageWidget;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x278(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x2A0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWid_LevelSelector_Tutorial_Mission_IconTextEntry_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_LevelSelector_Tutorial_Mission_IconTextEntry(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


