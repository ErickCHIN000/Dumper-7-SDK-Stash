#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x300 - 0x2E8)
// WidgetBlueprintGeneratedClass VerticalRadioSelect.VerticalRadioSelect_C
class UVerticalRadioSelect_C : public URadioSelect
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FString                                Value;                                             // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UVerticalRadioSelect_C* GetDefaultObj();

	void Construct();
	void CustomEvent_0(const class FString& Value);
	void ExecuteUbergraph_VerticalRadioSelect(int32 EntryPoint, const class FString& K2Node_CustomEvent_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


