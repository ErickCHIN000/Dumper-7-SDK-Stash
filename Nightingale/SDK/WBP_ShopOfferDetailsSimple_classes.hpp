#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x360 - 0x350)
// WidgetBlueprintGeneratedClass WBP_ShopOfferDetailsSimple.WBP_ShopOfferDetailsSimple_C
class UWBP_ShopOfferDetailsSimple_C : public UNWXShopOfferDetailsSimpleWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      ItemDescriptionLabel;                              // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ShopOfferDetailsSimple_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_WBP_ShopOfferDetailsSimple(int32 EntryPoint, class FText CallFunc_GetItemDescription_ReturnValue);
};

}


