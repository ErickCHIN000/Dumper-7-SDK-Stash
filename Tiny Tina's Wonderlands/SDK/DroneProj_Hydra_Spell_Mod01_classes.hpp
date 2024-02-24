#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xD90 - 0xD84)
// BlueprintGeneratedClass DroneProj_Hydra_Spell_Mod01.DroneProj_Hydra_Spell_Mod01_C
class ADroneProj_Hydra_Spell_Mod01_C : public ADroneProj_Hydra_C
{
public:
	uint8                                        Pad_2DAB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD88(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ADroneProj_Hydra_Spell_Mod01_C* GetDefaultObj();

	void UserConstructionScript();
	void FireDroneWeapon();
	void ExecuteUbergraph_DroneProj_Hydra_Spell_Mod01(int32 EntryPoint, float Temp_float_Variable, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTransform& CallFunc_GetActorSocket_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue, class FName CallFunc_GetDroneHydraFireSocket_Res, const struct FVector& CallFunc_RandomUnitVector_ReturnValue, const struct FTransform& CallFunc_GetActorSocket_ReturnValue1, const struct FVector& CallFunc_BreakTransform_Location1, const struct FRotator& CallFunc_BreakTransform_Rotation1, const struct FVector& CallFunc_BreakTransform_Scale1, int32 CallFunc_Subtract_IntInt_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UClass* CallFunc_CheckClawElement_ReturnedElement, bool CallFunc_CheckClawElement_bIsValidElement, float Temp_float_Variable1, class UClass* K2Node_Select_Default, bool CallFunc_HasValidTarget_Res, bool Temp_bool_Variable1, bool CallFunc_Greater_IntInt_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, float K2Node_Select1_Default, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FSpellLightProjectileInitializationData& K2Node_MakeStruct_SpellLightProjectileInitializationData);
};

}


