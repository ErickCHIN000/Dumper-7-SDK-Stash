#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2E0 - 0x2D8)
// BlueprintGeneratedClass BP_HarvestableObject_Rocks.BP_HarvestableObject_Rocks_C
class ABP_HarvestableObject_Rocks_C : public ABP_HarvestableObject_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_HarvestableObject_Rocks_C* GetDefaultObj();

	void SetMaxHits(class UTechTreeComponent_C* CallFunc_GetSkillTreeManager_TechTree, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_IsTechnologyUnlocked_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1);
	void UserConstructionScript(bool CallFunc_SetStaticMesh_ReturnValue);
	void HitHarvestableObject(const struct FVector& HitLocation);
	void ReceiveBeginPlay();
	void MC_PlaySound(const struct FVector& Location);
	void Svr_PlaySound(const struct FVector& Location);
	void Svr_SetMaxHits();
	void ExecuteUbergraph_BP_HarvestableObject_Rocks(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Add_DoubleDouble_ReturnValue, int32 Temp_int_Variable, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FVector& K2Node_Event_HitLocation, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FVector& K2Node_CustomEvent_Location_1, const struct FVector& K2Node_CustomEvent_Location);
};

}


