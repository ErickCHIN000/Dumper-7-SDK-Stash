#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x111 - 0xE8)
// BlueprintGeneratedClass BP_Interactable_ButtonTrigger.BP_Interactable_ButtonTrigger_C
class UBP_Interactable_ButtonTrigger_C : public UInteractableBehaviour
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            OnButtonInteract;                                  // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnButtonHold;                                      // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsButtonInteractable;                              // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_Interactable_ButtonTrigger_C* GetDefaultObj();

	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, bool CallFunc_CanInteract_ReturnValue);
	void Interact(class AActor* Instigator, struct FHitResult& HitResult);
	void ExecuteUbergraph_BP_Interactable_ButtonTrigger(int32 EntryPoint, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, bool K2Node_SwitchEnum_CmpSuccess);
	void OnButtonHold__DelegateSignature();
	void OnButtonInteract__DelegateSignature();
};

}


