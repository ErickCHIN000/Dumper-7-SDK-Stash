#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_CreatureAbilityZones.BPFL_CreatureAbilityZones_C
class UBPFL_CreatureAbilityZones_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_CreatureAbilityZones_C* GetDefaultObj();

	void Get_Zone_Reference_Info(class AActor* Reference, const struct FS_CreatureAbilityZoneDefinition& ZoneDefinition, class UObject* __WorldContext, struct FVector* ZoneOrigin, struct FVector* ReferenceForward, struct FVector2D* ZoneDirectionXY, const struct FVector2D& LZoneDirectionXY, const struct FVector& LReferenceForward, const struct FVector& LZoneOrigin, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_DoesSocketExist_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue);
};

}


