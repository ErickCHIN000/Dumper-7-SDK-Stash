#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE1 (0x311 - 0x230)
// WidgetBlueprintGeneratedClass Abilities.Abilities_C
class UAbilities_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnHardenReady;                                     // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnRiposteUnlocked;                                 // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnRipostePossible;                                 // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnSelectedAbilityChanged;                          // 0x250(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_Ability_FireGrenade;                         // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Ability_ForcePunch;                          // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Ability_Ghost;                               // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Ability_Heal;                                // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Ability_ParryNoRiposte;                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Ability_SealLocked;                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_AbilityFrame;                                // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_StoneForm_CoolDown;                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_StoneForm_UnderGlow_1;                       // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_StoneForm_UnderGlow_2;                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Abilities_Infusions;                       // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_Desaturation;                          // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                StoneFormPeripheralHelper;                         // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_AbilityName;                                  // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AZero_Base_C*                          ZeroBase;                                          // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_StoneForm;                                     // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Retainer;                                      // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         GameplayPC;                                        // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StoneFormPercent;                                  // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CEA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              MID_Underglow_1;                                   // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Underglow_2;                                   // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDarkFatherMap;                                   // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CF8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseCharacter_C*                      EnemyTargeted;                                     // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StormModeActive;                                   // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAbilities_C* GetDefaultObj();

	void ShowInfusionImage();
	void ShowParryImage();
	void GetStormModeState(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, enum class Enum_StormModeProgress CallFunc_GetStormModeProgress_Progress, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_StormModeIsActive_ReturnValue);
	void IsEnemyRiposteable(class ABaseCharacter_C* Enemy, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void HideAllAbilities();
	void SetStoneFormUnderglow(bool CallFunc_NotEqual_FloatFloat_ReturnValue);
	void SetStoneFormFilled(bool CallFunc_NotEqual_FloatFloat_ReturnValue);
	void RipostePossible(bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	void SetMIDs(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3);
	void SetRiposteDesaturation(bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1);
	void SetStoneFormFilling();
	void SetGameplayPCRef(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC);
	void Set0BaseRef(class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess);
	void PlayStoneFormReady(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void GetStoneFormPercent();
	void SetRiposteSound(bool Condition);
	void SetInitialAbilityData(class AZero_Base_C* Character, enum class ERiposteTypes CallFunc_GetCurrentlyEquippedSecondaryRiposte_Output, bool CallFunc_HasUnlockedEmpoweredRipostes_bAtLeastRiposteAvailable);
	void SetRiposteData(enum class ERiposteTypes Riposte, enum class ERiposteTypes Local_Riposte, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, enum class Enum_StormModeProgress CallFunc_GetStormModeProgress_Progress, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void UpdateAbilityImageVisibility(enum class ERiposteTypes Selection, enum class ERiposteTypes Local_Selection, class UTexture2D* Local_AbilityImage, enum class ERiposteTypes Temp_byte_Variable, class UWidget* K2Node_Select_Default);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnCurrentRiposteSwapped_Set(enum class ERiposteTypes NewRiposte, bool PlaySound);
	void OnRipostePossible_Set(const struct FTimerHandle& RiposteWindowExpirationTimer, class ABaseCharacter_C* ParriedEnemy);
	void OnRiposteUnlocked_Set(enum class ERiposteTypes UnlockedRiposte);
	void OnCurrentRiposteSwapped_Bind();
	void OnRipostePossible_Bind();
	void OnRiposteUnlocked_Bind();
	void OnStoneFormReady_Set();
	void OnStoneFormReady_Bind();
	void OnParrySuccessfull_Set();
	void OnEnemyTargeted_Bind();
	void OnEnemyTargeted_Set(class ABaseCharacter_C* TargetedEnemy);
	void OnTargetEnemyCleared_Set();
	void OnTargetEnemyCleared_Bind();
	void OnTargetEnemyCleared_Reset();
	void OnEnemyTargeted_Reset();
	void ExecuteUbergraph_Abilities(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Has_Been_Initd_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class ERiposteTypes K2Node_CustomEvent_NewRiposte, bool K2Node_CustomEvent_PlaySound, const struct FTimerHandle& K2Node_CustomEvent_RiposteWindowExpirationTimer, class ABaseCharacter_C* K2Node_CustomEvent_ParriedEnemy, enum class ERiposteTypes K2Node_CustomEvent_UnlockedRiposte, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class ABaseCharacter_C* K2Node_CustomEvent_TargetedEnemy, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}


