#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x70 - 0x68)
// BlueprintGeneratedClass IEft_AddHealth.IEft_AddHealth_C
class UIEft_AddHealth_C : public UBPItemEffectBase_C
{
public:
	int32                                        HealthChange;                                      // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HealthChangeIfFamiliar;                            // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UIEft_AddHealth_C* GetDefaultObj();

	void OnAppliedBPMightFail(class ABarbarous_C* Barbarous, class AGameplayPC_C* GameplayPC, bool bFamiliarityUnlocked, bool* bSuccess, bool Temp_bool_Variable, int32 K2Node_Select_Default, bool CallFunc_ServerSetHealth_Success, bool CallFunc_NotEqual_IntInt_ReturnValue);
};

}


