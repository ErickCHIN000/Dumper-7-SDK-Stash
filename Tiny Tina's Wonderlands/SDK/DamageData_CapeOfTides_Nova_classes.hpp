#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x350 - 0x350)
// BlueprintGeneratedClass DamageData_CapeOfTides_Nova.DamageData_CapeOfTides_Nova_C
class UDamageData_CapeOfTides_Nova_C : public UOakDamageData
{
public:

	static class UClass* StaticClass();
	static class UDamageData_CapeOfTides_Nova_C* GetDefaultObj();

	void OnHitEnemy(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, struct FDamageDataEventDetails& Details, const struct FDataTableValueHandle& StatusDurationBaseHandle, float StatusDuration, TArray<struct FGbxActionRegister>& Temp_struct_Variable, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UGbxAction* CallFunc_K2Play_ReturnValue);
};

}


