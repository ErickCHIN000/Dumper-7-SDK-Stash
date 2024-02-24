#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x140 - 0xB0)
// BlueprintGeneratedClass BP_InputCaptureComponent.BP_InputCaptureComponent_C
class UBP_InputCaptureComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            OnLookUp;                                          // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnLookRight;                                       // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFire;                                            // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnAltFire;                                         // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnEndInputCapture;                                 // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnBeginInputCapture;                               // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnMoveForward;                                     // 0x118(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         InputCaptureActive;                                // 0x128(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D85[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnJump;                                            // 0x130(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_InputCaptureComponent_C* GetDefaultObj();

	bool ShouldBlockInput();
	void EndInputCapture(class UBP_InputCaptureComponent_C* CaptureComponent);
	void BeginInputCapture(class UBP_InputCaptureComponent_C* CaptureComponent, class AActor* Instigator);
	void ServerLookUp(float AxisValue);
	void ServerLookRight(float AxisValue);
	void ServerFire(bool Pressed);
	void ServerAltFire(bool Pressed);
	void ServerMoveForward(float AxisValue);
	void ServerJump(bool Pressed);
	void ExecuteUbergraph_BP_InputCaptureComponent(int32 EntryPoint, class UBP_InputCaptureComponent_C* K2Node_CustomEvent_CaptureComponent_1, class UBP_InputCaptureComponent_C* K2Node_CustomEvent_CaptureComponent, class AActor* K2Node_CustomEvent_Instigator, float K2Node_CustomEvent_AxisValue_2, float K2Node_CustomEvent_AxisValue_1, bool K2Node_CustomEvent_Pressed_2, bool K2Node_CustomEvent_Pressed_1, float K2Node_CustomEvent_AxisValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, bool K2Node_CustomEvent_Pressed, float CallFunc_SelectFloat_ReturnValue_2);
	void OnJump__DelegateSignature(bool Pressed);
	void OnMoveForward__DelegateSignature(float AxisValue);
	void OnBeginInputCapture__DelegateSignature(class UBP_InputCaptureComponent_C* CaptureComponent, class AActor* Instigator);
	void OnEndInputCapture__DelegateSignature(class UBP_InputCaptureComponent_C* CaptureComponent);
	void OnAltFire__DelegateSignature(bool Pressed);
	void OnFire__DelegateSignature(bool Pressed);
	void OnLookRight__DelegateSignature(float AxisValue);
	void OnLookUp__DelegateSignature(float AxisValue);
};

}


