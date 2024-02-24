#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x3D0 - 0x398)
// WidgetBlueprintGeneratedClass WBP_PlayerBar_Stamina.WBP_PlayerBar_Stamina_C
class UWBP_PlayerBar_Stamina_C : public UNWXCoreStatCounterWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x398(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                          ProgressBar_100;                                   // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Value;                                         // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Ready;                                             // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_69EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              DMI_StaminaMaterialProgress;                       // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNWXAttributeSet*                      AttributeSet;                                      // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        BaseMaxStamina;                                    // 0x3C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentMaxStamina;                                 // 0x3CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PlayerBar_Stamina_C* GetDefaultObj();

	void InitializeDesignerPreview();
	void Refresh();
	void BP_HandleAttributeChanged(float NewValue, float Delta);
	void CacheStaminaValues(class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_GetFloatAttributeBase_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeBase_ReturnValue);
	void InitializeProgressBar();
	void CleanupEventBindings(class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void OnClientReadyHandler(class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXAttributeSet* CallFunc_GetAttributeSet_AttributeSet, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, bool CallFunc_IsValid_ReturnValue);
	void UpdateWidgetView(float CallFunc_GetValue_ReturnValue, int32 CallFunc_FCeil_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, double CallFunc_FCeil_A_ImplicitCast);
	void GetAttributeSet(class UNWXAttributeSet** AttributeSet, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void OnMaxStaminaChangedHandler(float Delta);
	void OnPlayerRespawnedHandler(class ANWXCharacter* PlayerCharacter, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void UpdateProgressBar(float CallFunc_GetValue_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_MapRangeClamped_InRangeB_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast);
	void Initialize(class ABP_GameState_C* GameState, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsReady_Ready, bool CallFunc_BooleanAND_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1);
	class UWidget* GetStaminaToolTip(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_Tooltip_Stamina_C* CallFunc_Create_ReturnValue);
	void Construct();
	void Destruct();
	void OnPawnPossessedAndReady(class APawn* NewPawn);
	void ExecuteUbergraph_WBP_PlayerBar_Stamina(int32 EntryPoint, class APawn* K2Node_Event_NewPawn);
};

}


