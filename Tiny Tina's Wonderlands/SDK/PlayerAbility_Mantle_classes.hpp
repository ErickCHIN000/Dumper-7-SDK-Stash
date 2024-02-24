#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x190 - 0x188)
// BlueprintGeneratedClass PlayerAbility_Mantle.PlayerAbility_Mantle_C
class UPlayerAbility_Mantle_C : public UOakCharacterInputAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x188(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UPlayerAbility_Mantle_C* GetDefaultObj();

	void GbxInpActEvt_jump_K2Node_GbxInputActionEvent_Discrete_3(class FName Action);
	void GbxInpActEvt_jump_K2Node_GbxInputActionEvent_Discrete_2(class FName Action);
	void OnPaused();
	void ExecuteUbergraph_PlayerAbility_Mantle(int32 EntryPoint, class FName K2Node_GbxInputActionEvent_Discrete_Action1, class FName K2Node_GbxInputActionEvent_Discrete_Action, class FName Temp_name_Variable);
};

}


