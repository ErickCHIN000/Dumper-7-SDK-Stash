#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2C8 - 0x2C0)
// BlueprintGeneratedClass BP_GenericNPC_LazyWorker.BP_GenericNPC_LazyWorker_C
class ABP_GenericNPC_LazyWorker_C : public ABP_GenericNPC_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_GenericNPC_LazyWorker_C* GetDefaultObj();

	void OnNotifyEnd_C1F2542F44275B0F0A984299000BF76A(class FName NotifyName);
	void OnNotifyBegin_C1F2542F44275B0F0A984299000BF76A(class FName NotifyName);
	void OnInterrupted_C1F2542F44275B0F0A984299000BF76A(class FName NotifyName);
	void OnBlendOut_C1F2542F44275B0F0A984299000BF76A(class FName NotifyName);
	void OnCompleted_C1F2542F44275B0F0A984299000BF76A(class FName NotifyName);
	void SpawnNPC(const struct FVector& Impulse, const struct FVector& OffsetLoc);
	void ExecuteUbergraph_BP_GenericNPC_LazyWorker(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, const struct FVector& K2Node_Event_Impulse, const struct FVector& K2Node_Event_OffsetLoc, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AGGNPC* CallFunc_SpawnCivilianNPC_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


