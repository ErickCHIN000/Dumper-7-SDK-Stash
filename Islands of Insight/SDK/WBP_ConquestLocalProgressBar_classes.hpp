#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x310 - 0x300)
// WidgetBlueprintGeneratedClass WBP_ConquestLocalProgressBar.WBP_ConquestLocalProgressBar_C
class UWBP_ConquestLocalProgressBar_C : public UConquestLocalProgressBar
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_67;                                          // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ConquestLocalProgressBar_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_WBP_ConquestLocalProgressBar(int32 EntryPoint);
};

}


