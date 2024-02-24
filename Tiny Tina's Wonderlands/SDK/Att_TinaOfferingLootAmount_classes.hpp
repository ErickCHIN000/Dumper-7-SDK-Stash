#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x34 - 0x30)
// BlueprintGeneratedClass Att_TinaOfferingLootAmount.Att_TinaOfferingLootAmount_C
class UAtt_TinaOfferingLootAmount_C : public UAttributeInitializer
{
public:
	float                                        NewVar_0;                                          // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAtt_TinaOfferingLootAmount_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, TScriptInterface<class IBPI_TinaOffering_C> K2Node_DynamicCast_AsBPI_Tina_Offering, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetLootAmount_LootAmount, float CallFunc_Conv_IntToFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue);
};

}


