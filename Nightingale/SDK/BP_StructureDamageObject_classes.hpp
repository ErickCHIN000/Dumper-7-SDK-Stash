#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_StructureDamageObject.BP_StructureDamageObject_C
class UBP_StructureDamageObject_C : public UStructureDamageObject
{
public:

	static class UClass* StaticClass();
	static class UBP_StructureDamageObject_C* GetDefaultObj();

	void DoStructureDestroy(class UObject* Structure, class AActor* DestructionSource, bool* Success);
	void PreStructureDestroy(class UObject* Structure, class AActor* DestructionSource, TScriptInterface<class IBPI_StructureComponentOwner_C> K2Node_DynamicCast_AsBPI_Structure_Component_Owner, bool K2Node_DynamicCast_bSuccess, class UStructureEventsObject* CallFunc_GetEventsObject_EventObject);
	void SetDeconstructState(class UObject* Structure, enum class EDeconstructionResourceReturn ResourceReturn, TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C> K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C> K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_1, bool K2Node_DynamicCast_bSuccess_1, const struct FGameplayTag& CallFunc_DropNoneResourcesTag_DropNoneTag, const struct FGameplayTag& CallFunc_DropPartialResourcesTag_DropPartialTag, const struct FGameplayTag& CallFunc_DropAllResourcesTag_DropAllTag, const struct FGameplayTag& CallFunc_DropNoneResourcesTag_DropNoneTag_1, const struct FGameplayTag& CallFunc_DropPartialResourcesTag_DropPartialTag_1, TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C> K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C> K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_3, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C> K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_4, bool K2Node_DynamicCast_bSuccess_4, enum class EDeconstructionResourceReturn Temp_byte_Variable, bool CallFunc_IsServer_ReturnValue, const struct FGameplayTag& K2Node_Select_Default, bool CallFunc_OwnerHasAuthority_ReturnValue, const struct FGameplayTag& CallFunc_DeconstructTag_DeconstructTag, const struct FGameplayTag& CallFunc_DropAllResourcesTag_DropAllTag_1);
	void DestroyStructure(class UObject* Structure, class AActor* DestructionSource, bool* bSuccess, bool CallFunc_IsStructureValidForUse_ReturnValue, bool CallFunc_DoStructureDestroy_Success, TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C> K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System, bool K2Node_DynamicCast_bSuccess);
	bool IsAtMinHealth(class UObject* Structure, TScriptInterface<class IStructureHealthInterface> K2Node_DynamicCast_AsStructure_Health_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IStructureHealthInterface> K2Node_DynamicCast_AsStructure_Health_Interface_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetCurrentHealth_ReturnValue, float CallFunc_GetMinHealth_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast);
	void OnStructureDamageReceived(class UObject* Structure, double Damage, class AActor* Target, class AActor* Source, const struct FGameplayTagContainer& EffectTags, const struct FHitResult& HitResult, const struct FTagValueContainer& TagValueContainer, int32 PieceId, class UObject* CallFunc_GetPieceInfoFromStructureObject_OutOwner, int32 CallFunc_GetPieceInfoFromStructureObject_OutPieceId, const struct FStructureHealthChangedContext& K2Node_MakeStruct_StructureHealthChangedContext, TScriptInterface<class IBPI_StructureComponentOwner_C> K2Node_DynamicCast_AsBPI_Structure_Component_Owner, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsObjectHailDamageSource_ReturnValue, TScriptInterface<class IBPI_StructureComponentOwner_C> K2Node_DynamicCast_AsBPI_Structure_Component_Owner_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IStructureDestroyableInterface> K2Node_DynamicCast_AsStructure_Destroyable_Interface, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_ExecuteDestroyStructure_Success, bool CallFunc_OwnerHasAuthority_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FStructureHealthChangedContext& K2Node_MakeStruct_StructureHealthChangedContext_1, bool CallFunc_IsAtMinHealth_ReturnValue, float K2Node_MakeStruct_HealthDelta_ImplicitCast, float CallFunc_Telemetry_StructureDamagedEvent_Damage_ImplicitCast, float K2Node_MakeStruct_HealthDelta_ImplicitCast_1);
};

}


