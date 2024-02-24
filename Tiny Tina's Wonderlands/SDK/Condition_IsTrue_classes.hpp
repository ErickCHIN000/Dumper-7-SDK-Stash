#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x89 - 0x88)
// BlueprintGeneratedClass Condition_IsTrue.Condition_IsTrue_C
class UCondition_IsTrue_C : public UGbxCondition_Blueprint
{
public:
	bool                                         True_;                                             // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UCondition_IsTrue_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext);
};

}


