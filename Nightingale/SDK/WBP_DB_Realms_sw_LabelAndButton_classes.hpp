#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x378 - 0x340)
// WidgetBlueprintGeneratedClass WBP_DB_Realms_sw_LabelAndButton.WBP_DB_Realms_sw_LabelAndButton_C
class UWBP_DB_Realms_sw_LabelAndButton_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_58;                                         // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BasicText_OneLine_C*              WBP_BasicText_OneLine;                             // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            DeleteButtonClicked;                               // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                LabelText;                                         // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_DB_Realms_sw_LabelAndButton_C* GetDefaultObj();

	void Construct();
	void BndEvt__WBP_SW_RealmScreen_LabelAndButton_Button_58_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_DB_Realms_sw_LabelAndButton(int32 EntryPoint, class FText CallFunc_Conv_StringToText_ReturnValue);
	void DeleteButtonClicked__DelegateSignature(class UWBP_DB_Realms_sw_LabelAndButton_C* LabelButton);
};

}


