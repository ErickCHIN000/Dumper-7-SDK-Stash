#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x3A0 - 0x348)
// WidgetBlueprintGeneratedClass WBP_BossCreatureNameplate.WBP_BossCreatureNameplate_C
class UWBP_BossCreatureNameplate_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                          HPBar;                                             // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          HPBar_DamageFlash;                                 // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_gradient_right_1;                              // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Line_Middle_1;                                 // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_CreatureName;                                  // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        StartPercent;                                      // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_571C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       EndPercent;                                        // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          GreyHealthTimerHandle;                             // 0x388(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBossCombatDetectionComponent*         BossCombatDetectionComponent;                      // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ANWXAICharacter*                       Boss;                                              // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_BossCreatureNameplate_C* GetDefaultObj();

	void CREATEDELEGATE_PROXYFUNCTION_1(float Delta, double CallFunc_OnBossHealthChanged_Health_ImplicitCast);
	void CREATEDELEGATE_PROXYFUNCTION_0(float Delta, double CallFunc_OnBossHealthChanged_Health_ImplicitCast);
	void InitializeDesignerPreview();
	void BindEventsToBoss(class ANWXAICharacter* Boss, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void UnbindEventsFromBoss(class ANWXAICharacter* Boss, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void GetCurrentBossHealthPercentage(double* Percent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetObjectName_ReturnValue, double CallFunc_SafeDivide_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, double CallFunc_SafeDivide_B_ImplicitCast, double CallFunc_SafeDivide_A_ImplicitCast);
	void OnBossHealthChanged(double Health, double CallFunc_GetCurrentBossHealthPercentage_Percent);
	void OnBossFightChanged(class ANWXAICharacter* EnemyBoss, bool CallFunc_IsValid_ReturnValue);
	void OnHideHealthBar();
	void OnShowHealthBar(class FText Temp_text_Variable, double CallFunc_GetCurrentBossHealthPercentage_Percent, TScriptInterface<class IAIUIData> K2Node_DynamicCast_AsAIUIData, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetAIName_ReturnValue, float K2Node_VariableSet_StartPercent_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast);
	void HandleGreyHealth(bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, float K2Node_VariableSet_StartPercent_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float K2Node_VariableSet_StartPercent_ImplicitCast_1);
	void UpdateHealthBar(double NewPercent, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_BossCreatureNameplate(int32 EntryPoint, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UBossCombatDetectionComponent* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue);
};

}


