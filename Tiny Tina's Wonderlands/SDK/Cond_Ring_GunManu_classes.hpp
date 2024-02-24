#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x90 - 0x88)
// BlueprintGeneratedClass Cond_Ring_GunManu.Cond_Ring_GunManu_C
class UCond_Ring_GunManu_C : public UGbxCondition_Blueprint
{
public:
	class UObject*                               ActiveWeaponManu;                                  // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCond_Ring_GunManu_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess1, class AWeapon* CallFunc_GetWeapon_ReturnValue, class AOakWeapon* K2Node_DynamicCast_AsOak_Weapon, bool K2Node_DynamicCast_bSuccess2, class UManufacturerData* CallFunc_GetManufacturer_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

}


