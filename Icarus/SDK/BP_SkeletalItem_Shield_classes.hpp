#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x5A0 - 0x578)
// BlueprintGeneratedClass BP_SkeletalItem_Shield.BP_SkeletalItem_Shield_C
class ABP_SkeletalItem_Shield_C : public ASkeletalItem
{
public:
	uint8                                        Pad_759[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x580(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       AudioLocation;                                     // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            DamagedSound;                                      // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            BrokenSound;                                       // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkeletalItem_Shield_C* GetDefaultObj();

	void CacheAudioRefs(const struct FItemStaticData& CallFunc_GetStaticItemData_StaticData, enum class EDataValid CallFunc_GetStaticItemData_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemAudioData& CallFunc_GetItemAudioDataStruct_ItemAudioData, enum class EValid CallFunc_GetItemAudioDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent_1, bool K2Node_DynamicCast_bSuccess_1);
	void PlayBrokenAudio(bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue);
	void PlayDamagedAudio(int32 DamageAmount, enum class EIcarusDamageType DamageType, enum class EDamageTypeFMODParam CallFunc_GetDamageTypeFMODParam_FMODParamValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, bool CallFunc_EventInstanceIsValid_ReturnValue);
	void ReceiveBeginPlay();
	void EventDamaged(class UActorState* ActorState, int32 DamageTaken, struct FDamageEvent& DamageEvent, class AController* Instigator, class AActor* DamageCauser);
	void EventBroken();
	void MULTI_PlayBrokenEffects();
	void ExecuteUbergraph_BP_SkeletalItem_Shield(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UActorState* K2Node_CustomEvent_ActorState, int32 K2Node_CustomEvent_DamageTaken, const struct FDamageEvent& K2Node_CustomEvent_DamageEvent, class AController* K2Node_CustomEvent_Instigator, class AActor* K2Node_CustomEvent_DamageCauser, enum class EIcarusDamageType CallFunc_GetDamageTypeFromEvent_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UDurableComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}


