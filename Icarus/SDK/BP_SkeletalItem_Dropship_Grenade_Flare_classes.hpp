#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3A (0x5B2 - 0x578)
// BlueprintGeneratedClass BP_SkeletalItem_Dropship_Grenade_Flare.BP_SkeletalItem_Dropship_Grenade_Flare_C
class ABP_SkeletalItem_Dropship_Grenade_Flare_C : public ASkeletalItem
{
public:
	uint8                                        Pad_618F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x580(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFMODAudioComponent*                   FMODAudio_FlareFire;                               // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_FlareSmoke;                                     // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_Flare;                                          // 0x598(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight_Small;                                  // 0x5A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight_Large;                                  // 0x5A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPreviewActor;                                    // 0x5B0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EPreviewActorType                 PreviewType;                                       // 0x5B1(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkeletalItem_Dropship_Grenade_Flare_C* GetDefaultObj();

	void OnRep_PreviewType();
	void ReceiveBeginPlay();
	void InitArrow();
	void OnProjectileFired(const struct FVector& Impulse, const struct FVector& InstigatorVelocity, const struct FProjectileFireParams& AdvancedParameters);
	void SetItemVisible(bool bVisible);
	void ReceiveTick(float DeltaSeconds);
	void Multicast_HideFlareEffects();
	void ExecuteUbergraph_BP_SkeletalItem_Dropship_Grenade_Flare(int32 EntryPoint, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, enum class EPreviewActorType Temp_wildcard_Variable, bool CallFunc_IsServer_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UBP_BallisticBehaviour_Base_C* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, const struct FVector& K2Node_CustomEvent_Impulse, const struct FVector& K2Node_CustomEvent_InstigatorVelocity, const struct FProjectileFireParams& K2Node_CustomEvent_AdvancedParameters, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool K2Node_Event_bVisible, float K2Node_Event_DeltaSeconds, float CallFunc_GetLifeSpan_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1);
};

}


