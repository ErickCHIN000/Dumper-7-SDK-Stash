#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x2B0 - 0x230)
// WidgetBlueprintGeneratedClass PlayerDeathNew.PlayerDeathNew_C
class UPlayerDeathNew_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      DeathScreenMotion;                                 // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                DeathText;                                         // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HolyLight;                                         // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MarkOfDeath;                                       // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_Pixelate;                              // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ReverseDeathText;                                  // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TextDeco;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                VerticalStripes;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  HighScoresTxt;                                     // 0x278(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                        PrototypeLevels;                                   // 0x290(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UGameInfoInstance_C*                   GameInfoInstance;                                  // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DeathEffect_C*                     BP_DeathEffect;                                    // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPlayerDeathNew_C* GetDefaultObj();

	void GetGameInfoInstance(class UGameInfoInstance_C** Output_Get, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess);
	void DualSense_Death(class ACharacter* Local_Char, uint8 CallFunc_MakeLiteralByte_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ControllerAudio_C* CallFunc_FinishSpawningActor_ReturnValue);
	class FText Get_AllHighScoresText_Text_0();
	void Construct();
	void BndEvt__Button_412_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature();
	void ContinueGame();
	void ContinueGameSkipIntro();
	void ExecuteUbergraph_PlayerDeathNew(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, enum class Enum_StormModeProgress CallFunc_GetStormModeProgress_Progress, bool CallFunc_NotEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC_1, bool K2Node_DynamicCast_bSuccess_2, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess_3, class FName CallFunc_GetCurrentPersistentLevelName_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface, bool K2Node_DynamicCast_bSuccess_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface_1, bool K2Node_DynamicCast_bSuccess_5, class UGameInfoInstance_C* CallFunc_GetGameInfoInstance_Output_Get, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_6, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_StormModeIsActive_ReturnValue);
};

}


