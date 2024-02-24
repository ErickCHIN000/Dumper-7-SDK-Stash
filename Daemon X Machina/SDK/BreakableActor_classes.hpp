#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x108 - 0xF0)
// BlueprintGeneratedClass BreakableActor.BreakableActor_C
class UBreakableActor_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF0(0x8)(Transient, DuplicateTransient)
	UMulticastDelegateProperty_                  BreakDispatcher;                                   // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBreakableActor_C* GetDefaultObj();

	void OnBreak();
	void ExecuteUbergraph_BreakableActor(int32 EntryPoint);
	void BreakDispatcher__DelegateSignature();
};

}


