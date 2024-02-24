#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0xA9 - 0x68)
// BlueprintGeneratedClass IEft_Posion.IEft_Posion_C
class UIEft_Posion_C : public UBPItemEffectBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bOnlyIfNotFamiliar;                                // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10F9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Duration;                                          // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeBetweenDamages;                                // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageAmount;                                      // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Icon;                                              // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABarbarous_C*                          Barbarous;                                         // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer_Duration;                                    // 0x90(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer_TimeBetweenDamage;                           // 0x98(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFamiliar;                                        // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_110C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        IconID;                                            // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Paused;                                            // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UIEft_Posion_C* GetDefaultObj();

	void SetPoisonPostProcess(bool bIsPoisonedByItem);
	void EndBrownMushroom();
	void MushroomPoisonDot();
	void OnAppliedBP(class ABarbarous_C* Barbarous, class AGameplayPC_C* GameplayPC, bool bFamiliarityUnlocked);
	void CureAllPoison_Set();
	void OnCutsceneStart_Set();
	void OnCutsceneEnd_Set();
	void OnEquipmentMenuPressed_Set(bool Close, enum class Enum_EquipmentMenuType Menu);
	void EquipmentMenuOpened_Pause(enum class Enum_EquipmentMenuType Menu);
	void EquipmentMenuClosed_Unpause();
	void CureAllPoison_Bind();
	void CureAllPoison_Unbind();
	void OnPhotoModePressed_Set(bool bEnterred);
	void ExecuteUbergraph_IEft_Posion(int32 EntryPoint, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, class ABarbarous_C* K2Node_Event_Barbarous, class AGameplayPC_C* K2Node_Event_GameplayPC, bool K2Node_Event_bFamiliarityUnlocked, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, int32 CallFunc_AddStatusIcon_IconID, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_3, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_4, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool K2Node_Event_Close, enum class Enum_EquipmentMenuType K2Node_Event_Menu, enum class Enum_EquipmentMenuType K2Node_CustomEvent_Menu, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_bEnterred, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1);
};

}


