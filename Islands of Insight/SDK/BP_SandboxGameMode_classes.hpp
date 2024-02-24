#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x5F0 - 0x5D0)
// BlueprintGeneratedClass BP_SandboxGameMode.BP_SandboxGameMode_C
class ABP_SandboxGameMode_C : public ASandboxGameMode
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x5D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnPlayerJoined;                                    // 0x5E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_SandboxGameMode_C* GetDefaultObj();

	class AActor* ChoosePlayerStart(class AController* Player, class UGISProgression* CallFunc_GetGameInstanceSubsystem_ReturnValue, class AActor* CallFunc_ChoosePlayerStart_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_NotEqualExactly_VectorVector_ReturnValue, class AActor* CallFunc_ChoosePlayerStart_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APlayerStart* CallFunc_FinishSpawningActor_ReturnValue);
	void K2_PostLogin(class APlayerController* NewPlayer);
	void ReceiveBeginPlay();
	void CustomEvent_0();
	void ExecuteUbergraph_BP_SandboxGameMode(int32 EntryPoint, class APlayerController* K2Node_Event_NewPlayer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void OnplayerJoined__DelegateSignature();
};

}


