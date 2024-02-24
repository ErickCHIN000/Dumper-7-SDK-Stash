#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x5D0 - 0x548)
// BlueprintGeneratedClass GA_CreatureAbility_Automaton_CreateChest.GA_CreatureAbility_Automaton_CreateChest_C
class UGA_CreatureAbility_Automaton_CreateChest_C : public UGA_CreatureAbility_Melee_01_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x548(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FStructureAssetReference              StructureRef;                                      // 0x550(0x80)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_Automaton_CreateChest_C* GetDefaultObj();

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_CreatureAbility_Automaton_CreateChest(int32 EntryPoint, const struct FVector& CallFunc_TryGetBlackboardVector_Value, enum class EBlackboardGetResult CallFunc_TryGetBlackboardVector_Branches, class ANWXAISpawner* CallFunc_GetSpawner_Spawner, bool K2Node_SwitchEnum_CmpSuccess, TArray<class ANWXAICharacter*>& CallFunc_GetSpawnedAICharacters_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FStructureSpawnContext& K2Node_MakeStruct_StructureSpawnContext, class UObject* CallFunc_SpawnStructure_ReturnValue);
};

}


