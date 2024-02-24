#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2B0 - 0x298)
// BlueprintGeneratedClass BP_ProjectileMaster.BP_ProjectileMaster_C
class ABP_ProjectileMaster_C : public AActor
{
public:
	class UCapsuleComponent*                     Capsule;                                           // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*          ProjectileMovement;                                // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_MainFirearmClass_C*                WeaponOwner;                                       // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ProjectileMaster_C* GetDefaultObj();

	void SpawnCombatText(const struct FVector& Location, double Damage, class UCombatText_C* CallFunc_Create_ReturnValue, bool CallFunc_GetBoolCVar_ReturnValue, const struct FLinearColor& Temp_struct_Variable);
	void UserConstructionScript();
};

}


