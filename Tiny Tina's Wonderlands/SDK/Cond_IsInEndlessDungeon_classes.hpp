#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x88 - 0x88)
// BlueprintGeneratedClass Cond_IsInEndlessDungeon.Cond_IsInEndlessDungeon_C
class UCond_IsInEndlessDungeon_C : public UGbxCondition_Blueprint
{
public:

	static class UClass* StaticClass();
	static class UCond_IsInEndlessDungeon_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class AEndlessdungeon* CallFunc_GetEndlessDungeon_ReturnValue, enum class ERunnerType CallFunc_GetCurrentRunnerType_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


