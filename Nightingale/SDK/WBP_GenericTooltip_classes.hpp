#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x368 - 0x340)
// WidgetBlueprintGeneratedClass WBP_GenericTooltip.WBP_GenericTooltip_C
class UWBP_GenericTooltip_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonRichTextBlock*                  Txt;                                               // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Tooltip_Text;                                      // 0x350(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWBP_GenericTooltip_C* GetDefaultObj();

	void SetNewTooltipText(class FText NewText, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_GetStringWithOutMarkUp_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Construct();
	void ExecuteUbergraph_WBP_GenericTooltip(int32 EntryPoint);
};

}


