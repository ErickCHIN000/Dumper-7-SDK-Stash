#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x608 - 0x5B0)
// BlueprintGeneratedClass BP_GameMode.BP_GameMode_C
class ABP_GameMode_C : public ANWXGameModeBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USpatialWorldTimeComponent*            SpatialWorldTime;                                  // 0x5B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x5C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            GameModeReady;                                     // 0x5C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnPostLogin;                                       // 0x5D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABP_SimulationStateManager_C*          SimulationStateManager;                            // 0x5E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         RealmIsTemporal;                                   // 0x5F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnLogout;                                          // 0x5F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_GameMode_C* GetDefaultObj();

	void OnLogoutHandler(class AController* ExitingController, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnPostLoginHandler(class APlayerController* NewPlayer, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void ReceiveBeginPlay();
	void K2_PostLogin(class APlayerController* NewPlayer);
	void OnAwaitGameModeReady(class ANWXGameModeBase* GameMode, bool bIsReady);
	void K2_OnLogout(class AController* ExitingController);
	void ExecuteUbergraph_BP_GameMode(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDelegateHandleBPWrapper& CallFunc_AwaitGameModeBPTimed_Handle, class APlayerController* K2Node_Event_NewPlayer, class ANWXGameModeBase* K2Node_CustomEvent_GameMode, bool K2Node_CustomEvent_bIsReady, class ABP_SimulationStateManager_C* CallFunc_GetManager_ReturnValue, class AController* K2Node_Event_ExitingController);
	void OnLogout__DelegateSignature(class AController* ExitingController);
	void OnPostLogin__DelegateSignature(class APlayerController* NewPlayer);
	void GameModeReady__DelegateSignature();
};

}


