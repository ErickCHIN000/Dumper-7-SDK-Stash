#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass UMG_FeatureLevelIndicator.UMG_FeatureLevelIndicator_C
class UUMG_FeatureLevelIndicator_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            FeatureText;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_FeatureLevelIndicator_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_UMG_FeatureLevelIndicator(int32 EntryPoint, const struct FFeatureLevelsRowHandle& CallFunc_GetCurrentFeatureLevel_ReturnValue, const struct FFeatureLevelData& CallFunc_GetFeatureLevelsStruct_FeatureLevels, enum class EValid CallFunc_GetFeatureLevelsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess);
};

}


