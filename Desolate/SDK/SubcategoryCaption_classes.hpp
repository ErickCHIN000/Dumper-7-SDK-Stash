#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x278 - 0x248)
// WidgetBlueprintGeneratedClass SubcategoryCaption.SubcategoryCaption_C
class USubcategoryCaption_C : public USHUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            CaptionText;                                       // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNavButton_C*                          NavButton;                                         // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Caption;                                           // 0x260(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class USubcategoryCaption_C* GetDefaultObj();

	void StopNotify();
	void PlayNotify();
	void OnSynchronizeProperties();
	void ExecuteUbergraph_SubcategoryCaption(int32 EntryPoint);
};

}


