#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x748 - 0x740)
// BlueprintGeneratedClass MainMenuPlayerController.MainMenuPlayerController_C
class AMainMenuPlayerController_C : public ASHPlayerController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x740(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AMainMenuPlayerController_C* GetDefaultObj();

	void OnFailure_82AF670845DF3BDD03BCBA9E28AC346F();
	void OnSuccess_82AF670845DF3BDD03BCBA9E28AC346F();
	void OnSessionInviteAccepted(const struct FSHUniqueNetId& PersonInviting, struct FBlueprintSessionResult& SearchResult);
	void ExecuteUbergraph_MainMenuPlayerController(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FSHUniqueNetId& K2Node_Event_PersonInviting, const struct FBlueprintSessionResult& K2Node_Event_SearchResult, class UJoinSessionCallbackProxy* CallFunc_JoinSession_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


