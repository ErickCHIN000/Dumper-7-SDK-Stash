#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x290 - 0x260)
// WidgetBlueprintGeneratedClass UMG_LoadingProgress.UMG_LoadingProgress_C
class UUMG_LoadingProgress_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_LoadingIcon_C*                    LoadingIcon;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text;                                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  LoadingText;                                       // 0x278(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UUMG_LoadingProgress_C* GetDefaultObj();

	void LoadingStateChanged(bool HideLoadingIcon, class FText StateText, bool CallFunc_TextIsEmpty_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_LoadingProgress(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


