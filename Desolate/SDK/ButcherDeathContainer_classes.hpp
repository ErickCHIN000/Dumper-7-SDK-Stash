#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x3C8 - 0x3B8)
// BlueprintGeneratedClass ButcherDeathContainer.ButcherDeathContainer_C
class AButcherDeathContainer_C : public AAi_BaseDeathContainer_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USHQuestGraph*                         TargetGraph;                                       // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AButcherDeathContainer_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void OnUseActor(class ASHPlayerCharacter* Character);
	void ExecuteUbergraph_ButcherDeathContainer(int32 EntryPoint, class ASHPlayerCharacter* K2Node_Event_Character, class ASHQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class FName>& CallFunc_GetCompleteGraphNames_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


