#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xF0 - 0xE8)
// BlueprintGeneratedClass BP_Interactable_OpenClose_Window.BP_Interactable_OpenClose_Window_C
class UBP_Interactable_OpenClose_Window_C : public UInteractableBehaviour
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Interactable_OpenClose_Window_C* GetDefaultObj();

	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Window_Base_C* K2Node_DynamicCast_AsBP_Window_Base, bool K2Node_DynamicCast_bSuccess);
	void Interact(class AActor* Instigator, struct FHitResult& HitResult);
	void ExecuteUbergraph_BP_Interactable_OpenClose_Window(int32 EntryPoint, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Window_Base_C* K2Node_DynamicCast_AsBP_Window_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Open_Close_Window_Success);
};

}


