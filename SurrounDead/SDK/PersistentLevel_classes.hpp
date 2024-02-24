#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x2D8 - 0x2A0)
// BlueprintGeneratedClass PersistentLevel.PersistentLevel_C
class APersistentLevel_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ULoadingScreenWidget_C*                LoadingScreen;                                     // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  CurrentLevel;                                      // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            RemoveLoadingScreen;                               // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            GetLevelName;                                      // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class APersistentLevel_C* GetDefaultObj();

	void OnCompleted_FF53B9C745E13D1E2B32DCA47AA890F7();
	void Event_LoadLevel(class FName LevelName);
	void Event_KeyDown();
	void Event_FadeFinished();
	void CustomEvent();
	void Event_RemoveLoadingScreen();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PersistentLevel(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UEMSAsyncWait* CallFunc_AsyncWaitForOperation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_LevelName, class USD_GameInstance_C* CallFunc_GetGameInstance_Instance, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class USD_GameInstance_C* CallFunc_GetGameInstance_Instance_1, class USave_FirstLoadGame_C* CallFunc_GetCustomSave_ReturnValue, class USD_GameInstance_C* CallFunc_GetGameInstance_Instance_2, class USD_GameInstance_C* CallFunc_GetGameInstance_Instance_3, class USave_FirstLoadGame_C* CallFunc_GetCustomSave_ReturnValue_1, class USD_GameInstance_C* CallFunc_GetGameInstance_Instance_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ULoadingScreenWidget_C* CallFunc_Create_ReturnValue);
	void GetLevelName__DelegateSignature(class FName Name);
	void RemoveLoadingScreen__DelegateSignature();
};

}


