#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x78 - 0x78)
// BlueprintGeneratedClass GC_Impact_Shared_Projectile.GC_Impact_Shared_Projectile_C
class UGC_Impact_Shared_Projectile_C : public UGC_Impact_Shared_C
{
public:

	static class UClass* StaticClass();
	static class UGC_Impact_Shared_Projectile_C* GetDefaultObj();

	void GetSourceTagFromActor(class AActor* StrikingActor, struct FGameplayTag* SourceTag, class ABP_ProjectileBase_C* K2Node_DynamicCast_AsBP_Projectile_Base, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& CallFunc_Get_Source_Tag_ImpactTag);
	void GetElementTagFromActor(class AActor* Actor, struct FGameplayTag* ElementalTag, class ABP_ProjectileBase_C* K2Node_DynamicCast_AsBP_Projectile_Base, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& CallFunc_Get_Element_Tag_ElementTag);
	void Get_Impact_Tag(class UObject* Object, struct FGameplayTag* Tag, class ABP_ProjectileBase_C* K2Node_DynamicCast_AsBP_Projectile_Base, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& CallFunc_Get_Impact_Tag_ImpactTag);
};

}


