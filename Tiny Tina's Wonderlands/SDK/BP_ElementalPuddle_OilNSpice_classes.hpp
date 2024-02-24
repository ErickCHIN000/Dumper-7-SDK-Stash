#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x634 - 0x628)
// BlueprintGeneratedClass BP_ElementalPuddle_OilNSpice.BP_ElementalPuddle_OilNSpice_C
class ABP_ElementalPuddle_OilNSpice_C : public AElementalPuddle_Decal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x628(0x8)(Transient, DuplicateTransient)
	float                                        FireOilSplatLifetime;                              // 0x630(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ElementalPuddle_OilNSpice_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_0_ElementalInteractionStartedEvent__DelegateSignature_BP_ElementalPuddle_Decal_Oil(class UElementalInteractionData* State, bool bIsInitialState);
	void ExecuteUbergraph_BP_ElementalPuddle_OilNSpice(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UElementalInteractionData* K2Node_ComponentBoundEvent_State, bool K2Node_ComponentBoundEvent_bIsInitialState, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, const struct FHitResult& Temp_struct_Variable, class ABPChar_Player_C* K2Node_DynamicCast_AsBPChar_Player, bool K2Node_DynamicCast_bSuccess, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, class AWeapon* CallFunc_GetActiveWeapon_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


