#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x870 - 0x7C0)
// BlueprintGeneratedClass RadiateDamageActor_Melee_MageStaff.RadiateDamageActor_Melee_MageStaff_C
class ARadiateDamageActor_Melee_MageStaff_C : public AOakRadiateDamageActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7C0(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x7C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWwiseAudioComponent*                  ProjAudio;                                         // 0x7D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         EffectCollision;                                   // 0x7D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x7E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                EffectCollection;                                  // 0x7E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EOakElementalType, class UWwiseEvent*> Audio_ProjLp;                                      // 0x7F0(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UWwiseEvent*                           Audio_ProjLpStop;                                  // 0x840(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamagedActor;                                      // 0x848(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageMultiplier;                                  // 0x850(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2A42[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                DamageType;                                        // 0x858(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                MeleeWeaponInfo;                                   // 0x860(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter_Player*                  OakCharacterPlayerRef;                             // 0x868(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ARadiateDamageActor_Melee_MageStaff_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_RadiateDamageActor_Melee_MageStaff(int32 EntryPoint, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, class UInventoryBalanceStateComponent* CallFunc_GetInventoryBalanceState_ReturnValue, class UClass* CallFunc_GetDamageType_ReturnValue, class AActor* K2Node_Event_OtherActor, TScriptInterface<class IBPI_Destructible_C> K2Node_DynamicCast_AsBPI_Destructible, bool K2Node_DynamicCast_bSuccess, class AGbxDestructibleActor* K2Node_DynamicCast_AsGbx_Destructible_Actor, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsFracturable_ReturnValue, bool CallFunc_K2_EvaluateConditionType_ReturnValue, class UParticleSystem* CallFunc_StaticGetParticleEffectAndWwiseEvent_ParticleEffect, class UWwiseEvent* CallFunc_StaticGetParticleEffectAndWwiseEvent_WwiseEvent, enum class EEndPlayReason K2Node_Event_EndPlayReason, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FHitResult& Temp_struct_Variable, class APawn* CallFunc_GetInstigator_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess2, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
};

}


