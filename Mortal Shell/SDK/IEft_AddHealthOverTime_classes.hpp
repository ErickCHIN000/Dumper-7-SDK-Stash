#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x89 - 0x68)
// BlueprintGeneratedClass IEft_AddHealthOverTime.IEft_AddHealthOverTime_C
class UIEft_AddHealthOverTime_C : public UBPItemEffectBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        HealthChange;                                      // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HealthChangeIfFamiliar;                            // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Duration;                                          // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A4A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Icon;                                              // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Paused;                                            // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UIEft_AddHealthOverTime_C* GetDefaultObj();

	void OnHPRegApplied(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_GetUnsafeWorldContext_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM);
	void OnAppliedBPMightFail(class ABarbarous_C* Barbarous, class AGameplayPC_C* GameplayPC, bool bFamiliarityUnlocked, bool* bSuccess, bool Temp_bool_Variable, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_AddStatusIcon_IconID, int32 K2Node_Select_Default, bool CallFunc_ServerSetHealth_Success, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void OnUpdateOverBP(class UObject* WorldContext);
	void OnCutsceneStart_Set();
	void OnCutsceneEnd_Set();
	void OnEquipmentMenuPressed_Set(bool Close, enum class Enum_EquipmentMenuType Menu);
	void EquipmentMenuOpened_Pause();
	void EquipmentMenuClosed_Unpause();
	void ExecuteUbergraph_IEft_AddHealthOverTime(int32 EntryPoint, class UObject* K2Node_Event_WorldContext, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, bool K2Node_Event_Close, enum class Enum_EquipmentMenuType K2Node_Event_Menu, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1);
};

}


