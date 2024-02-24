#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x4E9 - 0x481)
// BlueprintGeneratedClass BP_Reward_Transport_Pod.BP_Reward_Transport_Pod_C
class ABP_Reward_Transport_Pod_C : public ABP_Transport_Pod_Base_C
{
public:
	uint8                                        Pad_27B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x488(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioContextComponent*                AudioContext;                                      // 0x490(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_FlareSmoke_Yellow;                              // 0x498(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_Flare_Yellow;                                   // 0x4A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   FMODAudio_FlareOneShot;                            // 0x4A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   FMODAudio_FlareLoopFizz;                           // 0x4B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight;                                        // 0x4B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene_0;                                           // 0x4C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UIcarusMapIconComponent*               IcarusMapIcon;                                     // 0x4C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FireFlareTimeline_OverrideAlpha_E47CA7614CCCF9E436A05782351C878D; // 0x4D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FireFlareTimeline_FlareLocation_E47CA7614CCCF9E436A05782351C878D; // 0x4D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FireFlareTimeline__Direction_E47CA7614CCCF9E436A05782351C878D; // 0x4D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_289[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FireFlareTimeline;                                 // 0x4E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FireFlare;                                         // 0x4E8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Reward_Transport_Pod_C* GetDefaultObj();

	void OnRep_FireFlare();
	void WorldObject_Interact(class AActor* Instigator, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1);
	void FireFlareTimeline__FinishedFunc();
	void FireFlareTimeline__UpdateFunc();
	void Flare();
	void ReceiveBeginPlay();
	void OnLanded();
	void ExecuteUbergraph_BP_Reward_Transport_Pod(int32 EntryPoint, float CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsServer_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
};

}


