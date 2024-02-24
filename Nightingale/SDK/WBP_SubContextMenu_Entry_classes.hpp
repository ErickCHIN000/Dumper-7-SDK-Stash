#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x380 - 0x340)
// WidgetBlueprintGeneratedClass WBP_SubContextMenu_Entry.WBP_SubContextMenu_Entry_C
class UWBP_SubContextMenu_Entry_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Common_Button_Base_C*             WBP_Common_Button_Base;                            // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            SubContextEntry_Selected;                          // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FGameplayTag                          GameplayTag_UI;                                    // 0x360(0x8)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  Button_Label;                                      // 0x368(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWBP_SubContextMenu_Entry_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void BndEvt__WBP_SubContextMenu_Entry_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_SubContextMenu_Entry_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_2_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected);
	void ExecuteUbergraph_WBP_SubContextMenu_Entry(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool K2Node_ComponentBoundEvent_Selected, bool K2Node_Event_IsDesignTime, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1);
	void SubContextEntry_Selected__DelegateSignature(const struct FGameplayTag& UIGameplayTag);
};

}


