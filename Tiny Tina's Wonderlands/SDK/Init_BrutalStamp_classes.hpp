#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x50 - 0x30)
// BlueprintGeneratedClass Init_BrutalStamp.Init_BrutalStamp_C
class UInit_BrutalStamp_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 BonusHandle;                                       // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UClass*                                AbilityToUse;                                      // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UInit_BrutalStamp_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess1, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_GetTotalCompanionsAndSummonedUnits_Res, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class UAbility_Brutal_Parent_C* K2Node_DynamicCast_AsAbility_Brutal_Parent, bool K2Node_DynamicCast_bSuccess2, int32 CallFunc_GetManagedActorCount_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


