#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xCB8 - 0xCB0)
// BlueprintGeneratedClass BPCryoFreezeComponent.BPCryoFreezeComponent_C
class UBPCryoFreezeComponent_C : public UCryoDestructibleComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xCB0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBPCryoFreezeComponent_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void OnGbxComponentFracture_Event_0(struct FVector& FractureCentroid, struct FVector& HitDirection, float FracturePercent, bool bSilentFracture);
	void ExecuteUbergraph_BPCryoFreezeComponent(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& K2Node_CustomEvent_FractureCentroid, const struct FVector& K2Node_CustomEvent_HitDirection, float K2Node_CustomEvent_FracturePercent, bool K2Node_CustomEvent_bSilentFracture, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class UWwiseAudioComponent* CallFunc_SpawnWwiseComponentAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue);
};

}


