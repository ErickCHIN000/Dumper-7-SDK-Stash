#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x7F1 - 0x7C8)
// BlueprintGeneratedClass BP_Faction_Mission_Prototype_Laser.BP_Faction_Mission_Prototype_Laser_C
class ABP_Faction_Mission_Prototype_Laser_C : public ABP_Faction_Mission_Laser_C
{
public:
	class UNiagaraComponent*                     NS_HeatHaze;                                       // 0x7C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_LaserImpact1;                                   // 0x7D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                       Decal1;                                            // 0x7D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_LaserBeam1;                                     // 0x7E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       LaserSource1;                                      // 0x7E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Burning;                                           // 0x7F0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Faction_Mission_Prototype_Laser_C* GetDefaultObj();

	void OnRep_Burning(enum class EValid CallFunc_GetTrait_Paths, class UThermalComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FModifier& K2Node_MakeStruct_Modifier, int32 CallFunc_AddModifierState_ReturnValue);
	void GetLaserSourceLocation(struct FVector* Location, struct FVector* ForwardVector, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& CallFunc_VLerp_ReturnValue);
	void SetPoweredMaterial(bool On, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* K2Node_Select_Default);
	TArray<class UNiagaraComponent*> GetLaserImpacts(TArray<class UNiagaraComponent*>& K2Node_MakeArray_Array);
	TArray<class UDecalComponent*> GetLaserDecals(TArray<class UDecalComponent*>& K2Node_MakeArray_Array);
	TArray<class UNiagaraComponent*> GetLaserBeams(TArray<class UNiagaraComponent*>& K2Node_MakeArray_Array);
};

}


