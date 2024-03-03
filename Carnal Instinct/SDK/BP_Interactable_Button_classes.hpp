#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x260 - 0x258)
// BlueprintGeneratedClass BP_Interactable_Button.BP_Interactable_Button_C
class ABP_Interactable_Button_C : public ABP_BASE_INTERACTABLE_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Interactable_Button_C* GetDefaultObj();

	void Interaction();
	void OnSEQFinished();
	void ExecuteUbergraph_BP_Interactable_Button(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, TArray<class UWB_InGame_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, class UWB_InGame_C* CallFunc_Array_Get_Item);
};

}


