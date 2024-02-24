#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0x399 - 0x38E)
// BlueprintGeneratedClass GenericCarContainer.GenericCarContainer_C
class AGenericCarContainer_C : public AGlobalLootContainer_C
{
public:
	uint8                                        Pad_1A65[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bMustShowOutline;                                  // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AGenericCarContainer_C* GetDefaultObj();

	bool ShouldNotBeExplored(class ASHPlayerCharacter* PlayerCharacter, bool CallFunc_isCarBreakerLearned_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void GetSelectionInfo(class AActor* TargetActor, struct FS_Selection* Result, const struct FS_Selection& CallFunc_GetSelectionInfo_result, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FS_Selection& K2Node_MakeStruct_S_Selection, TScriptInterface<class IICharacterStatObserver_C> K2Node_DynamicCast_AsICharacter_Stat_Observer, bool K2Node_DynamicCast_bSuccess, class USHPlayerStat_Skills* CallFunc_GetSkills_Skills, bool CallFunc_isCarBreakerLearned_ReturnValue);
	void OnUseActor(class ASHPlayerCharacter* Character);
	void Outline(bool IsHighlighted);
	void ExecuteUbergraph_GenericCarContainer(int32 EntryPoint, class ASHPlayerCharacter* K2Node_Event_Character, bool K2Node_Event_isHighlighted, bool CallFunc_IsValid_ReturnValue, bool CallFunc_isCarBreakerLearned_ReturnValue);
};

}


