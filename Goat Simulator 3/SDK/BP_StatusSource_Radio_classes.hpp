#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0xA48 - 0x9F0)
// BlueprintGeneratedClass BP_StatusSource_Radio.BP_StatusSource_Radio_C
class ABP_StatusSource_Radio_C : public ABP_PActor_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       AudioComponent;                                    // 0x9F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGGDynamicAssetHoldingComponent*       GGDynamicAssetHolding;                             // 0xA00(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ElectricParticle;                                  // 0xA08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGGStatusEffectSourceComponent*        GGStatusEffectSource;                              // 0xA10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      SpreadSphere;                                      // 0xA18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        PitchDown_PitchUpTrack_0F8590A84BADAE26716AB09B3CD66458; // 0xA20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PitchDown_PitchDownTrack_0F8590A84BADAE26716AB09B3CD66458; // 0xA24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                PitchDown__Direction_0F8590A84BADAE26716AB09B3CD66458; // 0xA28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AF3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    PitchDown;                                         // 0xA30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayOnStart;                                       // 0xA38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShouldResetMusic;                                  // 0xA39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShouldMuteLevelMusic;                              // 0xA3A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsPitchDown;                                       // 0xA3B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UseOverrideMusic;                                  // 0xA3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AFF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             OverrideMusicCue;                                  // 0xA40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_StatusSource_Radio_C* GetDefaultObj();

	void PitchDown__FinishedFunc();
	void PitchDown__UpdateFunc();
	void ReceiveBeginPlay();
	void BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnDynamicLoadingFinished__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp);
	void BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnLostSignificance__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp);
	void ObjectWasHeadbutted(class AGGGoat* HeadbuttingGoat);
	void ModifyPitch(float NewPitch);
	void ExecuteUbergraph_BP_StatusSource_Radio(int32 EntryPoint, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue_1, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp_1, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp, bool CallFunc_IsSourceActive_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class AGGGoat* K2Node_Event_HeadbuttingGoat, bool Temp_bool_IsClosed_Variable, float K2Node_CustomEvent_NewPitch);
};

}


