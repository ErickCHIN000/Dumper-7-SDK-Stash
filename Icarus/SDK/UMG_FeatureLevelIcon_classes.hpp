#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x274 - 0x260)
// WidgetBlueprintGeneratedClass UMG_FeatureLevelIcon.UMG_FeatureLevelIcon_C
class UUMG_FeatureLevelIcon_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Icon;                                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        IconSize;                                          // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_FeatureLevelIcon_C* GetDefaultObj();

	void SetFeatureLevel(const struct FFeatureLevelsRowHandle& FeatureLevel);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_FeatureLevelIcon(int32 EntryPoint, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FFeatureLevelsRowHandle& K2Node_CustomEvent_FeatureLevel, const struct FFeatureLevelData& CallFunc_GetFeatureLevelsStruct_FeatureLevels, enum class EValid CallFunc_GetFeatureLevelsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool K2Node_Event_IsDesignTime, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess);
};

}


