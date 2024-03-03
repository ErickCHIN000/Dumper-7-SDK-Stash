#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x710 - 0x6F0)
// BlueprintGeneratedClass BP_CursedOneAI-Summoned.BP_CursedOneAI-Summoned_C
class ABP_CursedOneAIMinusSummoned_C : public ABP_BaseAI_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class FName>                          CollisionSockets;                                  // 0x6F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        Duration;                                          // 0x708(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        AnimationVersion;                                  // 0x70C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CursedOneAIMinusSummoned_C* GetDefaultObj();

	bool CanEffectBeApplied(enum class E_EffectType Type, class AActor* Applier, bool CallFunc_CanEffectBeApplied_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void GetMontages(enum class E_MontageAction Action, class UDataTable** Montages, bool K2Node_SwitchInteger_CmpSuccess);
	void UserConstructionScript(bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_RandomIntegerInRange_ReturnValue);
	void OnCollisionActivated(enum class E_CollisionPart Selection);
	void ReceiveBeginPlay();
	void DissolveInCharacterMesh();
	void OnOwnerStateChanged(enum class E_State PrevState, enum class E_State NewState);
	void DeathSummon();
	void ExecuteUbergraph_BP_CursedOneAIMinusSummoned(int32 EntryPoint, enum class E_CollisionPart K2Node_Event_Selection, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UStateManagerComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class E_State K2Node_CustomEvent_PrevState, enum class E_State K2Node_CustomEvent_NewState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class E_State CallFunc_GetState_State, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class E_State CallFunc_GetState_State_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_SetIsInCombat_Dummy, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
};

}


