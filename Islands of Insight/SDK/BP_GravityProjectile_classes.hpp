#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2B8 - 0x290)
// BlueprintGeneratedClass BP_GravityProjectile.BP_GravityProjectile_C
class ABP_GravityProjectile_C : public AGravityBallProjectile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Trail;                                             // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          In_Value;                                          // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpawnTime;                                         // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LocalSpawnTime;                                    // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_GravityProjectile_C* GetDefaultObj();

	void OnNewProjectile();
	void ReceiveTick(float DeltaSeconds);
	void BP_StopTrail();
	void BP_StartVFX(bool IsSolved);
	void BP_ImpactedObstacle(const struct FVector& ImpactLoc);
	void ExecuteUbergraph_BP_GravityProjectile(int32 EntryPoint, const struct FVector& K2Node_Event_ImpactLoc, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, bool Temp_bool_Variable, float Temp_float_Variable, float CallFunc_GetGameTimeInSeconds_ReturnValue, float K2Node_Event_DeltaSeconds, bool K2Node_Event_IsSolved, float K2Node_Select_Default);
};

}


