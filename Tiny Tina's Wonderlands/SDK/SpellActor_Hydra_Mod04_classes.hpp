#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x828 - 0x820)
// BlueprintGeneratedClass SpellActor_Hydra_Mod04.SpellActor_Hydra_Mod04_C
class ASpellActor_Hydra_Mod04_C : public ASpellActor_Hydra_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x820(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ASpellActor_Hydra_Mod04_C* GetDefaultObj();

	void UserConstructionScript();
	void HydraMod04_OnCausedDeath(class UDamageComponent* Damaged, struct FCausedDeathDetails& Details);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_SpellActor_Hydra_Mod04(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UOakDamageCauserComponent* CallFunc_GetComponentByClass_ReturnValue, class UDamageComponent* K2Node_CustomEvent_Damaged, const struct FCausedDeathDetails& K2Node_CustomEvent_Details, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FRotator& CallFunc_MakeRotationFromAxes_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FStatusEffectQuery& K2Node_MakeStruct_StatusEffectQuery, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, const struct FStatusEffectQueryResult& CallFunc_QueryStatusEffect_ReturnValue, int32 CallFunc_SpawnActorAsync_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue);
};

}


