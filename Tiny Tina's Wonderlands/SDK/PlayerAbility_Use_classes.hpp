#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x190 - 0x188)
// BlueprintGeneratedClass PlayerAbility_Use.PlayerAbility_Use_C
class UPlayerAbility_Use_C : public UOakCharacterInputAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x188(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UPlayerAbility_Use_C* GetDefaultObj();

	void StopGiveUpInner(class UFightForYourLifeComponent* CallFunc_GetFFYLComponent_Res);
	void StartGiveUpInner(class UFightForYourLifeComponent* CallFunc_GetFFYLComponent_Res);
	void GetFFYLComponent(class UFightForYourLifeComponent** Res);
	void FlushLatentUses();
	void GetUseComponent(class UUseComponent** Res, class UUseComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void StopUseInner(enum class EUsabilityType Type, class UUseComponent* CallFunc_GetUseComponent_Res, bool CallFunc_IsValid_ReturnValue);
	void StartUseInner(enum class EUsabilityType Type, class UUseComponent* CallFunc_GetUseComponent_Res, bool CallFunc_IsValid_ReturnValue);
	void GbxInpActEvt_use_alt_K2Node_GbxInputActionEvent_Discrete_13(class FName Action);
	void GbxInpActEvt_use_alt_K2Node_GbxInputActionEvent_Discrete_12(class FName Action);
	void GbxInpActEvt_give_up_K2Node_GbxInputActionEvent_Discrete_11(class FName Action);
	void GbxInpActEvt_give_up_K2Node_GbxInputActionEvent_Discrete_10(class FName Action);
	void GbxInpActEvt_use_K2Node_GbxInputActionEvent_Discrete_9(class FName Action);
	void GbxInpActEvt_use_K2Node_GbxInputActionEvent_Discrete_8(class FName Action);
	void GbxInpActEvt_exit_seat_K2Node_GbxInputActionEvent_Discrete_7(class FName Action);
	void OnPaused();
	void ExecuteUbergraph_PlayerAbility_Use(int32 EntryPoint, class FName K2Node_GbxInputActionEvent_Discrete_Action4, class UPawnAttachSlotComponent* CallFunc_FindPawnAttachSlotComponent_ReturnValue, class FName K2Node_GbxInputActionEvent_Discrete_Action3, bool CallFunc_IsValid_ReturnValue, class FName Temp_name_Variable, class FName K2Node_GbxInputActionEvent_Discrete_Action2, class FName K2Node_GbxInputActionEvent_Discrete_Action1, class FName Temp_name_Variable1, class FName K2Node_GbxInputActionEvent_Discrete_Action, class FName Temp_name_Variable2, class FName K2Node_GbxInputActionEvent_Discrete_Action5, class FName K2Node_GbxInputActionEvent_Discrete_Action6);
};

}


