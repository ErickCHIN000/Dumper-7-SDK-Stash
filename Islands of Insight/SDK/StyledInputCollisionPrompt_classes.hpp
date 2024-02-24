#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x340 - 0x330)
// WidgetBlueprintGeneratedClass StyledInputCollisionPrompt.StyledInputCollisionPrompt_C
class UStyledInputCollisionPrompt_C : public UInputCollisionWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_InputCollisionConfimationModal_C* WBP_InputCollisionConfimationModal;                // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStyledInputCollisionPrompt_C* GetDefaultObj();

	void BndEvt__StyledInputCollisionPrompt_WBP_InputCollisionConfimationModal_K2Node_ComponentBoundEvent_0_ClickedKeep__DelegateSignature();
	void BndEvt__StyledInputCollisionPrompt_WBP_InputCollisionConfimationModal_K2Node_ComponentBoundEvent_1_ClickedErase__DelegateSignature();
	void BndEvt__StyledInputCollisionPrompt_WBP_InputCollisionConfimationModal_K2Node_ComponentBoundEvent_2_ClickedCancel__DelegateSignature();
	void ExecuteUbergraph_StyledInputCollisionPrompt(int32 EntryPoint);
};

}


