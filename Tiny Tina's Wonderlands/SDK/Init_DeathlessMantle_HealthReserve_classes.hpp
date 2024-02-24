#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass Init_DeathlessMantle_HealthReserve.Init_DeathlessMantle_HealthReserve_C
class UInit_DeathlessMantle_HealthReserve_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 HealthReserveCalc;                                 // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_DeathlessMantle_HealthReserve_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, float CallFunc_GetValueOfAttribute_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue);
};

}


