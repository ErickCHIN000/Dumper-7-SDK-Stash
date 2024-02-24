#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x4C8 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_Subtitle_Window.WBP_Subtitle_Window_C
class UWBP_Subtitle_Window_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_SubtitleText_C*                   WBP_SubtitleText;                                  // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Subtitle_Window_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_WBP_Subtitle_Window(int32 EntryPoint);
};

}


