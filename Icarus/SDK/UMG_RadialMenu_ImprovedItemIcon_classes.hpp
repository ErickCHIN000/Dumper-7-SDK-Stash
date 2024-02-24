#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x268 - 0x260)
// WidgetBlueprintGeneratedClass UMG_RadialMenu_ImprovedItemIcon.UMG_RadialMenu_ImprovedItemIcon_C
class UUMG_RadialMenu_ImprovedItemIcon_C : public UUserWidget
{
public:
	class UImage*                                ItemIconDynamic;                                   // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_RadialMenu_ImprovedItemIcon_C* GetDefaultObj();

	void Initialise(const struct FItemData& ItemData, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_Icon, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess);
};

}


