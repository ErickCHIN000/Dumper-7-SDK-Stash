#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x220 - 0x1A8)
// BlueprintGeneratedClass BP_MyGameInstance.BP_MyGameInstance_C
class UBP_MyGameInstance_C : public UGameInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1A8(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBP_MySaveGame_C*                      MyGameSave;                                        // 0x1B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer_Secondes;                                    // 0x1B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Multiplayer_;                                      // 0x1C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  UserName;                                          // 0x1C8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UW_LoadingScreen_C*                    W_LoadingScreenRef;                                // 0x1E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  LoadingMessage;                                    // 0x1E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  LoadingMessageTip;                                 // 0x200(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         AlreadyIntro_;                                     // 0x218(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeLoadingBeforeContinue;                         // 0x21C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_MyGameInstance_C* GetDefaultObj();

	void OnFailure_C00D661349CA708A95145581FF251FE3();
	void OnSuccess_C00D661349CA708A95145581FF251FE3();
	void OnFailure_B065C47F48B157C121B06CAFCED8C6AC();
	void OnSuccess_B065C47F48B157C121B06CAFCED8C6AC();
	void StartGameTime();
	void Timer_TimePlayed();
	void StopGameTimer();
	void CreateServer(class APlayerController* PlayerController, class UWidget* ParentRef, class FName LevelName, int32 MaxPlayer, bool bUseLAN);
	void LaunchSoloGame(class APlayerController* PlayerController, class UBP_MySaveGame_C* MyGameSave, class UWidget* ParentRef);
	void JoinServerIP(const class FString& Command, class APlayerController* PlayerController, class UWidget* ParentRef);
	void ChangeDifficultyOnSave(enum class E_Difficulty Difficulty);
	void ShowLoadingScreen(class APlayerController* PlayerController, class FText Message);
	void JoinServerSession(const struct FBlueprintSessionResult& Session, class APlayerController* PlayerController, class UWidget* ParentRef);
	void ResetAfterErrorFocus(class APlayerController* PlayerController, class UWidget* Widget);
	void ExecuteUbergraph_BP_MyGameInstance(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* K2Node_CustomEvent_PlayerController_5, class UWidget* K2Node_CustomEvent_ParentRef_3, class FName K2Node_CustomEvent_LevelName, int32 K2Node_CustomEvent_MaxPlayer, bool K2Node_CustomEvent_bUseLAN, class UCreateSessionCallbackProxy* CallFunc_CreateSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* K2Node_CustomEvent_PlayerController_4, class UBP_MySaveGame_C* K2Node_CustomEvent_MyGameSave, class UWidget* K2Node_CustomEvent_ParentRef_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const class FString& K2Node_CustomEvent_Command, class APlayerController* K2Node_CustomEvent_PlayerController_3, class UWidget* K2Node_CustomEvent_ParentRef_1, bool CallFunc_K2_TimerExistsHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class E_Difficulty K2Node_CustomEvent_Difficulty, bool CallFunc_IsValid_ReturnValue_6, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, class APlayerController* K2Node_CustomEvent_PlayerController_2, class FText K2Node_CustomEvent_Message, class UW_LoadingScreen_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, const struct FBlueprintSessionResult& K2Node_CustomEvent_Session, class APlayerController* K2Node_CustomEvent_PlayerController_1, class UWidget* K2Node_CustomEvent_ParentRef, class UJoinSessionCallbackProxy* CallFunc_JoinSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* K2Node_CustomEvent_PlayerController, class UWidget* K2Node_CustomEvent_Widget, class UW_MainMenu_C* K2Node_DynamicCast_AsW_Main_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FText CallFunc_GetMessageTips_Message);
};

}


