#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0xA4 - 0xA0)
// BlueprintGeneratedClass BTD_RandomChance.BTD_RandomChance_C
class UBTD_RandomChance_C : public UBTDecorator_BlueprintBase
{
public:
	float                                        Chance;                                            // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTD_RandomChance_C* GetDefaultObj();

	bool PerformConditionCheck(class AActor* OwnerActor, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
};

}


