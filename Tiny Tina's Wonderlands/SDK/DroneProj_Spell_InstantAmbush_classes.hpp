#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0xDE8 - 0xD90)
// BlueprintGeneratedClass DroneProj_Spell_InstantAmbush.DroneProj_Spell_InstantAmbush_C
class ADroneProj_Spell_InstantAmbush_C : public ADroneProj_Hydra_Spell_Mod01_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD90(0x8)(Transient, DuplicateTransient)
	class USocketComponent*                      Socket_BowMuzzle;                                  // 0xD98(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USocketComponent*                      Socket_BowFire;                                    // 0xDA0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_GenericTrail_Default;                           // 0xDA8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGameplayTasksComponent*               GameplayTasks;                                     // 0xDB0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FDataTableValueHandle                 PincusionDuration;                                 // 0xDB8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableValueHandle                 PincusionDamageValue;                              // 0xDD0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class ADroneProj_Spell_InstantAmbush_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void FireDroneWeapon();
	void FireHydraArrowFromAction();
	void ExecuteUbergraph_DroneProj_Spell_InstantAmbush(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasValidTarget_Res, float Temp_float_Variable, bool CallFunc_Greater_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanAND_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTransform& CallFunc_GetActorSocket_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_RandomUnitVector_ReturnValue, const struct FTransform& CallFunc_GetActorSocket_ReturnValue1, const struct FVector& CallFunc_BreakTransform_Location1, const struct FRotator& CallFunc_BreakTransform_Rotation1, const struct FVector& CallFunc_BreakTransform_Scale1, int32 CallFunc_Subtract_IntInt_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue1, TArray<struct FGbxActionRegister>& Temp_struct_Variable, float Temp_float_Variable1, class UGbxAction* CallFunc_K2Play_ReturnValue, class UClass* CallFunc_CheckClawElement_ReturnedElement, bool CallFunc_CheckClawElement_bIsValidElement, bool Temp_bool_Variable1, class UClass* K2Node_Select_Default, TArray<struct FGbxActionRegister>& Temp_struct_Variable1, float K2Node_Select1_Default, class UGbxAction* CallFunc_K2Play_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue2, const struct FSpellLightProjectileInitializationData& K2Node_MakeStruct_SpellLightProjectileInitializationData);
};

}


