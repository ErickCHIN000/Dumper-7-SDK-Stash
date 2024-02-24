#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass Init_Necromancer_03.Init_Necromancer_03_C
class UInit_Necromancer_03_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 IncreasedDamageDealtHandle;                        // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_Necromancer_03_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetDataTableValueFromHandle_ReturnValue, int32 CallFunc_GetTotalCompanionsAndSummonedUnits_Res, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess1, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class UPassive_Necromancer_03_C* K2Node_DynamicCast_AsPassive_Necromancer_03, bool K2Node_DynamicCast_bSuccess2, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_GetManagedActorCount_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1);
};

}


