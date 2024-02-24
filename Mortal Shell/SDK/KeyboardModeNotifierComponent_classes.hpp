#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12 (0xC2 - 0xB0)
// BlueprintGeneratedClass KeyboardModeNotifierComponent.KeyboardModeNotifierComponent_C
class UKeyboardModeNotifierComponent_C : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnKeyboardModeChanged;                             // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsKeyboardMode;                                    // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsVirtualCursor;                                   // 0xC1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UKeyboardModeNotifierComponent_C* GetDefaultObj();

	void OnKeyboardModeChanged__DelegateSignature(bool KeyboardMode);
};

}


