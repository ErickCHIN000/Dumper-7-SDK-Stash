#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x9B8 - 0x958)
// BlueprintGeneratedClass BPWeaFireProjComp_SR_Tiabolt.BPWeaFireProjComp_SR_Tiabolt_C
class UBPWeaFireProjComp_SR_Tiabolt_C : public UWeaponFireProjectileComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x958(0x8)(Transient, DuplicateTransient)
	class ABPWeap_SR_DAL_Tiabolt_C*              Weapon;                                            // 0x960(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UClass*, class UParticleSystem*>  DamageTypes;                                       // 0x968(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBPWeaFireProjComp_SR_Tiabolt_C* GetDefaultObj();

	void UpdateDamageType(class UClass* New_Damage_Type, class UParticleSystem* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FWeaponRegisterAttachmentEffectData& K2Node_MakeStruct_WeaponRegisterAttachmentEffectData);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPWeaFireProjComp_SR_Tiabolt(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ABPWeap_SR_DAL_Tiabolt_C* K2Node_DynamicCast_AsBPWeap_SR_DAL_Tiabolt, bool K2Node_DynamicCast_bSuccess);
};

}


