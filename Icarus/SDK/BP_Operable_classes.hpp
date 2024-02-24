#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3F (0x350 - 0x311)
// BlueprintGeneratedClass BP_Operable.BP_Operable_C
class ABP_Operable_C : public ABP_WorldObject_C
{
public:
	uint8                                        Pad_E09[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_InputCaptureComponent_C*           BP_InputCaptureComponent;                          // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnBeginInteract;                                   // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  InstructionsText;                                  // 0x338(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_Operable_C* GetDefaultObj();

	void EndInputCapture(class UBP_InputCaptureComponent_C* CaptureComponent, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_IcarusPlayerControllerSpace_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space, bool K2Node_DynamicCast_bSuccess);
	void WorldObject_Interact(class AActor* Instigator, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class ABP_IcarusPlayerControllerSpace_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space, bool K2Node_DynamicCast_bSuccess_1);
	void LookX(float Scale);
	void LookY(float Scale);
	void PrimaryFire(bool Press);
	void AltFire(bool Press);
	void Jump();
	void BndEvt__BP_InputCaptureComponent_K2Node_ComponentBoundEvent_1_OnEndInputCapture__DelegateSignature(class UBP_InputCaptureComponent_C* CaptureComponent);
	void ExecuteUbergraph_BP_Operable(int32 EntryPoint, class UBP_InputCaptureComponent_C* K2Node_ComponentBoundEvent_CaptureComponent, float K2Node_Event_Scale_1, float K2Node_Event_Scale, bool K2Node_Event_Press_1, bool K2Node_Event_Press);
	void OnBeginInteract__DelegateSignature();
};

}


