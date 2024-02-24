#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2F8 - 0x2F0)
// WidgetBlueprintGeneratedClass CF_ClearCurrentPlayerTrackerSave.CF_ClearCurrentPlayerTrackerSave_C
class UCF_ClearCurrentPlayerTrackerSave_C : public UCF_BaseButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_ClearCurrentPlayerTrackerSave_C* GetDefaultObj();

	void Execute();
	void DBNO_OptionAClicked();
	void DBNO_OptionBClicked_Event();
	void ExecuteUbergraph_CF_ClearCurrentPlayerTrackerSave(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, class UAccoladeSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, const struct FConnectedPlayer& CallFunc_FindInitialisedConnectedPlayerByPlayerCharacter_OutConnectedPlayer, bool CallFunc_FindInitialisedConnectedPlayerByPlayerCharacter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_DeleteAccoladeSave_ReturnValue, const class FString& CallFunc_GetPlayerTrackerSaveName_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, bool CallFunc_DeleteGameInSlot_ReturnValue);
};

}


