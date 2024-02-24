#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xC0 - 0xB0)
// BlueprintGeneratedClass PCInputDispatcherComponent.PCInputDispatcherComponent_C
class UPCInputDispatcherComponent_C : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnEscapeMenuPressed;                               // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UPCInputDispatcherComponent_C* GetDefaultObj();

	void OnEscapeMenuPressed__DelegateSignature(bool Close);
};

}


