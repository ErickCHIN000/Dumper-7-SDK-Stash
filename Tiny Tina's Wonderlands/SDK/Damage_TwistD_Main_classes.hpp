#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x350 - 0x350)
// BlueprintGeneratedClass Damage_TwistD_Main.Damage_TwistD_Main_C
class UDamage_TwistD_Main_C : public UOakDamageData
{
public:

	static class UClass* StaticClass();
	static class UDamage_TwistD_Main_C* GetDefaultObj();

	void OnHitEnemy(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, struct FDamageDataEventDetails& Details, const struct FDataTableValueHandle& StatusDurationBaseHandle, TArray<struct FGbxActionRegister>& Temp_struct_Variable, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UGbxAction* CallFunc_K2Play_ReturnValue);
};

}


