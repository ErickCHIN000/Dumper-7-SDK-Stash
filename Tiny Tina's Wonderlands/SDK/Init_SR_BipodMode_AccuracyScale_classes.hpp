#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x34 - 0x30)
// BlueprintGeneratedClass Init_SR_BipodMode_AccuracyScale.Init_SR_BipodMode_AccuracyScale_C
class UInit_SR_BipodMode_AccuracyScale_C : public UAttributeInitializer
{
public:
	float                                        AccuracyScale;                                     // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UInit_SR_BipodMode_AccuracyScale_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, class AWeapon* CallFunc_GetWeapon_ReturnValue, class AOakWeapon* K2Node_DynamicCast_AsOak_Weapon, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


