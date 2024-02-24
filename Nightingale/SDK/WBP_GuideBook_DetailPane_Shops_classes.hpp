#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x388 - 0x360)
// WidgetBlueprintGeneratedClass WBP_GuideBook_DetailPane_Shops.WBP_GuideBook_DetailPane_Shops_C
class UWBP_GuideBook_DetailPane_Shops_C : public UNWXGuidebookDetailPane
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                            Scrollbox_description;                             // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_body;                                          // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TXT_Title;                                         // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             WBP_Common_Button_Base;                            // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_GuideBook_DetailPane_Shops_C* GetDefaultObj();

	void OnExecuteCategoryOperation(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UNWXMenuDataEntryShop* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Shop, bool K2Node_DynamicCast_bSuccess, class UWBP_ShopScreen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, class UShopDescriptorDataAsset* CallFunc_GetLoadedShopDescriptor_ReturnValue);
	void InitializeDesignerPreview();
	void UpdateCosmetics(class FText CallFunc_GetDescription_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue);
	void ResetCosmetics();
	void Construct();
	void BndEvt__WBP_GuideBook_DetailPane_Shops_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_GuideBook_DetailPane_Shops(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button);
};

}


