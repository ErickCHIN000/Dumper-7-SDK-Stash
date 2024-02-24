#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x190 - 0x188)
// BlueprintGeneratedClass PlayerAbility_Melee.PlayerAbility_Melee_C
class UPlayerAbility_Melee_C : public UOakCharacterInputAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x188(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UPlayerAbility_Melee_C* GetDefaultObj();

	void GbxInpActEvt_melee_K2Node_GbxInputActionEvent_Discrete_3(class FName Action);
	void GbxInpActEvt_melee_K2Node_GbxInputActionEvent_Discrete_2(class FName Action);
	void ExecuteUbergraph_PlayerAbility_Melee(int32 EntryPoint, class FName K2Node_GbxInputActionEvent_Discrete_Action1, class FName Temp_name_Variable, class FName K2Node_GbxInputActionEvent_Discrete_Action, TScriptInterface<class IBPInterface_PlayerInputActions_C> K2Node_DynamicCast_AsBPInterface_Player_Input_Actions, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPInterface_PlayerInputActions_C> K2Node_DynamicCast_AsBPInterface_Player_Input_Actions1, bool K2Node_DynamicCast_bSuccess1);
};

}


