#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x40 - 0x30)
// BlueprintGeneratedClass Init_Polymorph_GetInstigatorMaxHealth.Init_Polymorph_GetInstigatorMaxHealth_C
class UInit_Polymorph_GetInstigatorMaxHealth_C : public UAttributeInitializer
{
public:
	TArray<class UGameResourceData*>             HealthPools;                                       // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UInit_Polymorph_GetInstigatorMaxHealth_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, float Health, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, class AGbxCharacter* K2Node_DynamicCast_AsGbx_Character, bool K2Node_DynamicCast_bSuccess1, int32 Temp_int_Loop_Counter_Variable, class UGameResourcePoolManagerComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UGameResourceData* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, float CallFunc_Add_FloatFloat_ReturnValue);
};

}


