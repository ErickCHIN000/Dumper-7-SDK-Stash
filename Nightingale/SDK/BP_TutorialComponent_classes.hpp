#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x128 - 0xF8)
// BlueprintGeneratedClass BP_TutorialComponent.BP_TutorialComponent_C
class UBP_TutorialComponent_C : public UPersistentDataComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_PlayerController_C*                Controller;                                        // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            RequestTutorialNonModal;                           // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            RequestTutorialModal;                              // 0x118(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_TutorialComponent_C* GetDefaultObj();

	void SetPlayerController(bool* SelfIsValid, class ABP_PlayerController_C** Controller, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IBPI_PlayerStateSystems_C> K2Node_DynamicCast_AsBPI_Player_State_Systems, bool K2Node_DynamicCast_bSuccess, class ABP_PlayerController_C* CallFunc_GetBPPlayerController_Player_Controller);
	void ReceiveBeginPlay();
	void Client_TutorialModalPopup(class UTutorialDataAsset_SlideDeck* Tutorial);
	void Client_TutorialNonModalPopup(class UTutorialDataAsset* Tutorial);
	void ExecuteUbergraph_BP_TutorialComponent(int32 EntryPoint, class UTutorialDataAsset_SlideDeck* K2Node_CustomEvent_Tutorial_1, class UTutorialDataAsset* K2Node_CustomEvent_Tutorial, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetShowTutorials_ReturnValue, bool CallFunc_GetShowTutorials_ReturnValue_1, bool CallFunc_SetPlayerController_SelfIsValid, class ABP_PlayerController_C* CallFunc_SetPlayerController_Controller);
	void RequestTutorialModal__DelegateSignature(class UTutorialDataAsset_SlideDeck* TutorialData);
	void RequestTutorialNonModal__DelegateSignature(class UTutorialDataAsset* Tutorial);
};

}


