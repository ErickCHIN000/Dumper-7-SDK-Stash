#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0xB9 - 0xA0)
// BlueprintGeneratedClass BP_PlayerTrackingComponent.BP_PlayerTrackingComponent_C
class UBP_PlayerTrackingComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            SpyglassStateChanged;                              // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         SpyglassUp;                                        // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_PlayerTrackingComponent_C* GetDefaultObj();

	void SetSpyglassState(bool SpyglassUp);
	void GetSpyglassState(bool* SpyglassUp);
	void ReceiveBeginPlay();
	void SpyglassStateChanged_Event(bool SpyglassUp);
	void ExecuteUbergraph_BP_PlayerTrackingComponent(int32 EntryPoint, bool K2Node_CustomEvent_SpyglassUp, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void SpyglassStateChanged__DelegateSignature(bool SpyglassUp);
};

}


