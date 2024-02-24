#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x98 - 0x88)
// BlueprintGeneratedClass Condition_GunMage_Passive08_IsElement.Condition_GunMage_Passive08_IsElement_C
class UCondition_GunMage_Passive08_IsElement_C : public UGbxCondition_Blueprint
{
public:
	uint8                                        UseMode;                                           // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2710[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                DamageType;                                        // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCondition_GunMage_Passive08_IsElement_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class UGbxDamageType* CallFunc_GetDamageTypeFromClass_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess1, class AWeapon* CallFunc_GetWeapon_ReturnValue, class UGbxDamageType* CallFunc_GetDamageType_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

}


