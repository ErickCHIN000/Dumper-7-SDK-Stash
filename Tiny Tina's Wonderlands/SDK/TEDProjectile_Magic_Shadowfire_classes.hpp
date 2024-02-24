#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0xC1C - 0xC00)
// BlueprintGeneratedClass TEDProjectile_Magic_Shadowfire.TEDProjectile_Magic_Shadowfire_C
class ATEDProjectile_Magic_Shadowfire_C : public ATEDProjectile_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC00(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              ShadowfireProjectile;                              // 0xC08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               NewVar_0_0;                                        // 0xC10(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ATEDProjectile_Magic_Shadowfire_C* GetDefaultObj();

	void UserConstructionScript();
	void TryEndPlayEvents();
	void StartTedioreBombTransform();
	void ExecuteUbergraph_TEDProjectile_Magic_Shadowfire(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue);
};

}


