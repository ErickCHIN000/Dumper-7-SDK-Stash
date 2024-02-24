#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x274 - 0x260)
// WidgetBlueprintGeneratedClass UMG_CraftingProgressbar.UMG_CraftingProgressbar_C
class UUMG_CraftingProgressbar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Progress;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        CurrentProgress;                                   // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_CraftingProgressbar_C* GetDefaultObj();

	void SetProgress(float Percent);
	void ExecuteUbergraph_UMG_CraftingProgressbar(int32 EntryPoint, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_CustomEvent_Percent, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
};

}


