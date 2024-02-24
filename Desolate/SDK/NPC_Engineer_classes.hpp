#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1220 - 0x1218)
// BlueprintGeneratedClass NPC_Engineer.NPC_Engineer_C
class ANPC_Engineer_C : public AGenericQuestNPC_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1218(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ANPC_Engineer_C* GetDefaultObj();

	void OnUseActor(class ASHPlayerCharacter* Character);
	void ExecuteUbergraph_NPC_Engineer(int32 EntryPoint, class ASHPlayerCharacter* K2Node_Event_Character, TScriptInterface<class IICharacterStatObserver_C> K2Node_DynamicCast_AsICharacter_Stat_Observer, bool K2Node_DynamicCast_bSuccess, class USHQuestDiaryComponent* CallFunc_GetQuestDiary_Return, bool CallFunc_HaveActiveQuestTask_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HaveActiveQuestTask_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1);
};

}


