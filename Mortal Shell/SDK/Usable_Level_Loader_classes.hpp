#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E (0x330 - 0x312)
// BlueprintGeneratedClass Usable_Level_Loader.Usable_Level_Loader_C
class AUsable_Level_Loader_C : public AUsable_Actor_C
{
public:
	uint8                                        Pad_26EF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  LevelToLoad_NoPrefix;                              // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UBriefFadeToBlack_C*                   BriefFadeToBlackWB;                                // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AUsable_Level_Loader_C* GetDefaultObj();

	void OnActorUsed(class APlayerController* Controller, bool* Success, enum class ELevelPhases Temp_byte_Variable, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_OnActorUsed_Success, enum class ELevelPhases Temp_byte_Variable_1, enum class ELevelPhases Temp_byte_Variable_2, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AGameplayGM_C* K2Node_DynamicCast_AsGameplay_GM, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess_2, enum class ELevelPhases K2Node_Select_Default);
	void PlayAnimFadeToBlackAndLoadLevel();
	void ExecuteUbergraph_Usable_Level_Loader(int32 EntryPoint, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UBriefFadeToBlack_C* CallFunc_Create_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base);
};

}


