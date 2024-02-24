#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3D8 - 0x3D0)
// BlueprintGeneratedClass GrenadeBullet.GrenadeBullet_C
class AGrenadeBullet_C : public ACatchableActorBase_C
{
public:
	class UTTLDamageParameterComponent*          DamageParameter;                                   // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGrenadeBullet_C* GetDefaultObj();

	void UserConstructionScript(class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UTTLLongRangeWeaponParameter* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class UTTLBasicStatusComponent* CallFunc_FindOwnerStatus_ReturnValue, class UTTLDamageParameterComponent* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_IsValid_ReturnValue3, class AGrenade_C* K2Node_DynamicCast_AsGrenade, bool K2Node_DynamicCast_bSuccess, class UTTLDamageParameterComponent* CallFunc_GetComponentByClass_ReturnValue2, bool CallFunc_IsValid_ReturnValue4);
};

}


