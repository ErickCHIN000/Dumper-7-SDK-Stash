#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x7DC - 0x7D8)
// BlueprintGeneratedClass Projectile_SG_HYP_Magic.Projectile_SG_HYP_Magic_C
class AProjectile_SG_HYP_Magic_C : public AProjectile_SG_Magic_Base_C
{
public:
	int32                                        FireComponentShotsFired;                           // 0x7D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProjectile_SG_HYP_Magic_C* GetDefaultObj();

	void ScaleByShotsFired(float ScaleToIncrease, float* FinalScale, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue1, const class FString& CallFunc_Concat_StrStr_ReturnValue2, const class FString& CallFunc_Concat_StrStr_ReturnValue3, const class FString& CallFunc_Concat_StrStr_ReturnValue4);
	void UserConstructionScript(bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UBPWeaponFireProjectile_Magic_HYP_C* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_ScaleByShotsFired_FinalScale, const struct FVector& CallFunc_MakeVector_ReturnValue);
};

}


