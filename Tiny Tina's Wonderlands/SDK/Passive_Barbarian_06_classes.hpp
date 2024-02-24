#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x220 - 0x200)
// BlueprintGeneratedClass Passive_Barbarian_06.Passive_Barbarian_06_C
class UPassive_Barbarian_06_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x200(0x8)(Transient, DuplicateTransient)
	struct FGameResourcePoolReference            RageResource;                                      // 0x208(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UPassive_Barbarian_06_C* GetDefaultObj();

	void GetManualHUDIconValues(int32* OutStackCount, float* OutDuration, float* OutTimeRemaining, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, bool CallFunc_BreakResourcePoolReference_bValid1, float CallFunc_BreakResourcePoolReference_CurrentValue1, float CallFunc_BreakResourcePoolReference_MinValue1, float CallFunc_BreakResourcePoolReference_MaxValue1, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_GetManualHUDIconValues_outStackCount, float CallFunc_GetManualHUDIconValues_outDuration, float CallFunc_GetManualHUDIconValues_outTimeRemaining);
	void OnActivated();
	void ExecuteUbergraph_Passive_Barbarian_06(int32 EntryPoint, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue);
};

}


