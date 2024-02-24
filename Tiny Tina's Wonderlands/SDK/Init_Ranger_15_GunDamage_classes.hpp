#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass Init_Ranger_15_GunDamage.Init_Ranger_15_GunDamage_C
class UInit_Ranger_15_GunDamage_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 BulletDamageHandle;                                // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_Ranger_15_GunDamage_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, float BulletDamage, float CurrentStackAmount, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue);
};

}


