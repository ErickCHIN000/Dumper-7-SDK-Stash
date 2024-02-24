#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x190 - 0x188)
// BlueprintGeneratedClass PlayerAbility_Sprint.PlayerAbility_Sprint_C
class UPlayerAbility_Sprint_C : public UOakCharacterInputAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x188(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UPlayerAbility_Sprint_C* GetDefaultObj();

	void IsSprintToggle(bool* Res, class UGbxProfile* CallFunc_GetPlayerProfile_ReturnValue);
	void GbxInpActEvt_sprint_K2Node_GbxInputActionEvent_Discrete_3(class FName Action);
	void GbxInpActEvt_sprint_K2Node_GbxInputActionEvent_Discrete_2(class FName Action);
	void ExecuteUbergraph_PlayerAbility_Sprint(int32 EntryPoint, class FName K2Node_GbxInputActionEvent_Discrete_Action, class FName Temp_name_Variable, bool CallFunc_IsSprintToggle_Res, bool CallFunc_GetWantsToSprint_ReturnValue, class FName K2Node_GbxInputActionEvent_Discrete_Action1, bool CallFunc_IsSprintToggle_Res1);
};

}


