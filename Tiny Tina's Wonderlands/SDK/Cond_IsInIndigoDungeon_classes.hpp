#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x88 - 0x88)
// BlueprintGeneratedClass Cond_IsInIndigoDungeon.Cond_IsInIndigoDungeon_C
class UCond_IsInIndigoDungeon_C : public UGbxCondition_Blueprint
{
public:

	static class UClass* StaticClass();
	static class UCond_IsInIndigoDungeon_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class AIndigoDungeon* CallFunc_GetIndigoDungeon_ReturnValue, class UCombatEncounter* CallFunc_GetCurrentEncounter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
};

}


