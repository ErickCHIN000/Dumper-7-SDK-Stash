#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass GameSpaceEnabledCondition.GameSpaceEnabledCondition_C
class UGameSpaceEnabledCondition_C : public UVisibilityCondition
{
public:

	static class UClass* StaticClass();
	static class UGameSpaceEnabledCondition_C* GetDefaultObj();

	bool Evaluate(bool CallFunc_IsGamespaceUIEnabled_GamespaceUIEnabled);
};

}


