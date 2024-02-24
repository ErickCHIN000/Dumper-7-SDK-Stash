#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x370 - 0x348)
// WidgetBlueprintGeneratedClass WBP_PlayerMarker_Tooltip.WBP_PlayerMarker_Tooltip_C
class UWBP_PlayerMarker_Tooltip_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonRichTextBlock*                  Txt;                                               // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Tooltip_Text;                                      // 0x358(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWBP_PlayerMarker_Tooltip_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_WBP_PlayerMarker_Tooltip(int32 EntryPoint, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_GetStringWithOutMarkUp_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}


