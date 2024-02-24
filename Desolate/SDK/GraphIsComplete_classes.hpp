#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// BlueprintGeneratedClass GraphIsComplete.GraphIsComplete_C
class UGraphIsComplete_C : public USHQuestGraphRequirement
{
public:
	class USHQuestGraph*                         TargetGraph;                                       // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGraphIsComplete_C* GetDefaultObj();

	bool CheckResult(class USHQuestGraph* Graph, const class FString& CallFunc_GetObjectName_ReturnValue, class ASHQuestManager* CallFunc_GetQuestManager_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class FName>& CallFunc_GetCompleteGraphNames_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
};

}


