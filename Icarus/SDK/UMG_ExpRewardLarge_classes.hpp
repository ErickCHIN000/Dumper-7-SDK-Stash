#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x274 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ExpRewardLarge.UMG_ExpRewardLarge_C
class UUMG_ExpRewardLarge_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            Number;                                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Amount;                                            // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_ExpRewardLarge_C* GetDefaultObj();

	void Construct();
	void UpdateValue(int32 Amount);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_ExpRewardLarge(int32 EntryPoint, bool K2Node_Event_IsDesignTime, int32 K2Node_CustomEvent_Amount, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1);
};

}


