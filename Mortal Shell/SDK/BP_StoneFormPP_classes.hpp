#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x298 - 0x220)
// BlueprintGeneratedClass BP_StoneFormPP.BP_StoneFormPP_C
class ABP_StoneFormPP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       StoneFormHeartBeat_LowPass;                        // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 StoneForm;                                         // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Heartbeat_Heartbeat_E139B4B6451C8474375588B45D47D172; // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Heartbeat__Direction_E139B4B6451C8474375588B45D47D172; // 0x244(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Heartbeat;                                         // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ReverseTImeline_WhiteFlash_3B36483A43CED40C4D99D58E0D8908FB; // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ReverseTImeline_DistortionDistanceAlpha_3B36483A43CED40C4D99D58E0D8908FB; // 0x254(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ReverseTImeline_TimeDilation_3B36483A43CED40C4D99D58E0D8908FB; // 0x258(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ReverseTImeline_Alpha_3B36483A43CED40C4D99D58E0D8908FB; // 0x25C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ReverseTImeline__Direction_3B36483A43CED40C4D99D58E0D8908FB; // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ReverseTImeline;                                   // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EffectTimeline_WhiteFlash_4CFDC92F4DC52209FD03FEB00ED88F11; // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EffectTimeline_DistortionDistanceAlpha_4CFDC92F4DC52209FD03FEB00ED88F11; // 0x274(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EffectTimeline_TimeDilation_4CFDC92F4DC52209FD03FEB00ED88F11; // 0x278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EffectTimeline_Alpha_4CFDC92F4DC52209FD03FEB00ED88F11; // 0x27C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                EffectTimeline__Direction_4CFDC92F4DC52209FD03FEB00ED88F11; // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    EffectTimeline;                                    // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              StornFormPPMat;                                    // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_StoneFormPP_C* GetDefaultObj();

	void EffectTimeline__FinishedFunc();
	void EffectTimeline__UpdateFunc();
	void ReverseTImeline__FinishedFunc();
	void ReverseTImeline__UpdateFunc();
	void Heartbeat__FinishedFunc();
	void Heartbeat__UpdateFunc();
	void ReceiveBeginPlay();
	void StartStoneFormEffect();
	void StopAndDestroy();
	void CancelStartEffect();
	void CancelHeartbeatEffect();
	void ExecuteUbergraph_BP_StoneFormPP(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1);
};

}


