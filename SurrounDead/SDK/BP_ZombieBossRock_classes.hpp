#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2B8 - 0x298)
// BlueprintGeneratedClass BP_ZombieBossRock.BP_ZombieBossRock_C
class ABP_ZombieBossRock_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UProjectileMovementComponent*          ProjectileMovement;                                // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ZombieBossRock_C* GetDefaultObj();

	void Launch(const struct FVector& Origin, const struct FVector& Target);
	void ExecuteUbergraph_BP_ZombieBossRock(int32 EntryPoint, const struct FVector& K2Node_CustomEvent_Origin, const struct FVector& K2Node_CustomEvent_Target, const struct FVector& CallFunc_BlueprintSuggestProjectileVelocity_TossVelocity, bool CallFunc_BlueprintSuggestProjectileVelocity_ReturnValue);
};

}


