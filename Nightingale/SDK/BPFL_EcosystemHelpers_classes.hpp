#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_EcosystemHelpers.BPFL_EcosystemHelpers_C
class UBPFL_EcosystemHelpers_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_EcosystemHelpers_C* GetDefaultObj();

	void GetPlayerLocation(class UObject* __WorldContext, struct FVector* Location, const struct FVector& DefaultLocation, class UCameraComponent* Camera, class ABP_Character_C* Character, class APlayerController* Controller, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, TScriptInterface<class ICameraProviderInterface> CallFunc_GetCamera_self_CastInput, class UCameraComponent* CallFunc_GetCamera_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void GetTransformOneUnitTowardsLocalPlayer(struct FTransform& InstanceTransform, class UObject* __WorldContext, struct FTransform* ShiftedTransform, const struct FTransform& LTransform, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetPlayerLocation_Location, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void AverageGridCells(TArray<struct FGridCell>& GridCells, class UObject* __WorldContext, double* Average, double Length, double Sum, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FGridCell& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast);
};

}


