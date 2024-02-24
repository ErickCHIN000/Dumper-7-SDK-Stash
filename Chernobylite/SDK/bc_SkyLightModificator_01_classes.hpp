#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0xB4 - 0xB0)
// BlueprintGeneratedClass bc_SkyLightModificator_01.bc_SkyLightModificator_01_C
class Ubc_SkyLightModificator_01_C : public UActorComponent
{
public:
	float                                        CurrentValue;                                      // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Ubc_SkyLightModificator_01_C* GetDefaultObj();

	void GetCurrentValue(float* CurrentValue);
	void AdjustMaterialForSkyLightModificator(float Modificator, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UStaticMeshComponent* CallFunc_Array_Get_Item, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


