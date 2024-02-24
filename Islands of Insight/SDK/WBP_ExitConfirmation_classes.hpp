#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x3B8 - 0x370)
// WidgetBlueprintGeneratedClass WBP_ExitConfirmation.WBP_ExitConfirmation_C
class UWBP_ExitConfirmation_C : public UNotificationWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_125;                                         // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ConfirmationModalFinal_C*         WBP_ConfirmationModalFinal;                        // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  NewVar_0;                                          // 0x388(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  NewVar_1;                                          // 0x3A0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_ExitConfirmation_C* GetDefaultObj();

	void BndEvt__WBP_ExitConfirmation_WBP_ConfirmationModalFinal_K2Node_ComponentBoundEvent_0_ClickedYes__DelegateSignature();
	void BndEvt__WBP_ExitConfirmation_WBP_ConfirmationModalFinal_K2Node_ComponentBoundEvent_3_ClickedNo__DelegateSignature();
	void ExecuteUbergraph_WBP_ExitConfirmation(int32 EntryPoint);
};

}


