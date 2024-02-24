#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x270 - 0x268)
// BlueprintGeneratedClass BP_DialogueManager.BP_DialogueManager_C
class ABP_DialogueManager_C : public ADialogueManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_DialogueManager_C* GetDefaultObj();

	void GetDialogueWidget(class UUMG_Dialogue_C** DialogueWidget, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UUMG_Dialogue_C* CallFunc_GetDialogue_Dialogue, bool CallFunc_IsValid_ReturnValue);
	void OnDialoguePlayed(const struct FDialogueRowHandle& Dialogue);
	void OnDialogueCleared();
	void ExecuteUbergraph_BP_DialogueManager(int32 EntryPoint, class UUMG_Dialogue_C* CallFunc_GetDialogueWidget_DialogueWidget, bool CallFunc_IsValid_ReturnValue, const struct FDialogueRowHandle& K2Node_Event_Dialogue, const struct FDialogue& CallFunc_GetDialogueStruct_Dialogue, enum class EValid CallFunc_GetDialogueStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_Dialogue_C* CallFunc_GetDialogueWidget_DialogueWidget_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


