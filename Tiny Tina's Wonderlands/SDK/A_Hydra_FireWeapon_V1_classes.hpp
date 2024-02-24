#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x229 - 0x220)
// BlueprintGeneratedClass A_Hydra_FireWeapon_V1.A_Hydra_FireWeapon_V1_C
class UA_Hydra_FireWeapon_V1_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)
	enum class EHydraHeads                       HydraHead;                                         // 0x228(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UA_Hydra_FireWeapon_V1_C* GetDefaultObj();

	void Notify_FireProjectile();
	void Notify_FireProjectile_A();
	void Notify_FireProjectile_B();
	void Notify_FireProjectile_C();
	void ExecuteUbergraph_A_Hydra_FireWeapon_V1(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, TScriptInterface<class IBPI_SpellActor_Hydra_C> K2Node_DynamicCast_AsBPI_Spell_Actor_Hydra, bool K2Node_DynamicCast_bSuccess);
};

}


