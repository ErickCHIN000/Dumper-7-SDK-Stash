#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x26C - 0x260)
// WidgetBlueprintGeneratedClass WBP_AreaHighlightIndividual.WBP_AreaHighlightIndividual_C
class UWBP_AreaHighlightIndividual_C : public UUserWidget
{
public:
	class UImage*                                Image_0;                                           // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        KeyTime;                                           // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_AreaHighlightIndividual_C* GetDefaultObj();

	void UpdateKeyTime(float NewKeyTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
};

}


