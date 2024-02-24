#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x358 - 0x338)
// BlueprintGeneratedClass BP_MPGameMode.BP_MPGameMode_C
class ABP_MPGameMode_C : public AGameModeBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x338(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         AutoSave;                                          // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDiscordRpc*                           DiscordRpc;                                        // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MPGameMode_C* GetDefaultObj();

	void ResetStats(class ABP_MPPlayerController_C* CallFunc_CastToController_Controller, class USave_Player_C* CallFunc_GetCustomSave_ReturnValue);
	void AutoSaveGame(bool CallFunc_GetBoolCVar_ReturnValue, const struct FDateTime& CallFunc_Now_ReturnValue, const class FString& CallFunc_DateToString_AutoSave_ReturnValue, class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character, const class FString& CallFunc_Concat_StrStr_ReturnValue, class ABP_MPPlayerController_C* CallFunc_CastToController_Controller);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void Event_BindDaysSurvived();
	void EventBindMidnight();
	void Event_AutoSave();
	void ReceiveTick(float DeltaSeconds);
	void EventSave(bool NewValue);
	void ExecuteUbergraph_BP_MPGameMode(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AUltra_Dynamic_Sky_C* CallFunc_GetUDS_UDS, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class AHUD_Game_C* CallFunc_GetGameHUD_HUD, class ABP_MPPlayerController_C* CallFunc_CastToController_Controller, int64 CallFunc_GetStartTimeStamp_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDiscordRichPresence& K2Node_MakeStruct_DiscordRichPresence, float K2Node_Event_DeltaSeconds, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character, class UDiscordRpc* CallFunc_SpawnObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_NewValue);
};

}


