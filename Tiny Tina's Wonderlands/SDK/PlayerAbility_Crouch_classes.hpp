#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x190 - 0x188)
// BlueprintGeneratedClass PlayerAbility_Crouch.PlayerAbility_Crouch_C
class UPlayerAbility_Crouch_C : public UOakCharacterInputAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x188(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UPlayerAbility_Crouch_C* GetDefaultObj();

	void FlushCrouchInput(bool CallFunc_IsCrouchToggle_Res);
	void IsCrouchToggle(bool* Res, class UGbxProfile* CallFunc_GetPlayerProfile_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GbxInpActEvt_crouch_K2Node_GbxInputActionEvent_Discrete_3(class FName Action);
	void GbxInpActEvt_crouch_K2Node_GbxInputActionEvent_Discrete_2(class FName Action);
	void OnPaused();
	void ExecuteUbergraph_PlayerAbility_Crouch(int32 EntryPoint, class FName K2Node_GbxInputActionEvent_Discrete_Action, bool CallFunc_AttemptGroundSlam_ReturnValue, class FName Temp_name_Variable, bool CallFunc_IsMovingOnLadder_ReturnValue, bool CallFunc_IsCrouchToggle_Res, bool CallFunc_IsCrouchToggle_Res1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetWantsToCrouch_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FName K2Node_GbxInputActionEvent_Discrete_Action1, bool CallFunc_IsMovingOnLadder_ReturnValue1);
};

}


