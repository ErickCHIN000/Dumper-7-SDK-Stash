#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2B8 - 0x2B0)
// BlueprintGeneratedClass BP_IIMProxy.BP_IIMProxy_C
class ABP_IIMProxy_C : public AInteractiveInstancedMeshProxyActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_IIMProxy_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_IIMProxy(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue);
};

}


