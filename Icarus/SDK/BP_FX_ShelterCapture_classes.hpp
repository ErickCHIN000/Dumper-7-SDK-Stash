#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x260 - 0x220)
// BlueprintGeneratedClass BP_FX_ShelterCapture.BP_FX_ShelterCapture_C
class ABP_FX_ShelterCapture_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneCaptureComponent2D*              ShelterCaptureComponent;                           // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        Show_Only_Actors;                                  // 0x238(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	struct FTimerHandle                          RefreshActorListTimer;                             // 0x248(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        StaticShowOnlyActors;                              // 0x250(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_FX_ShelterCapture_C* GetDefaultObj();

	void CaptureScene();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_FX_ShelterCapture(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


