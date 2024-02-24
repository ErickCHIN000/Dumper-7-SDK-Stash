#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x388 - 0x340)
// WidgetBlueprintGeneratedClass WBP_sw_HealthBar.WBP_sw_HealthBar_C
class UWBP_sw_HealthBar_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                          HPBar;                                             // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          HPBar_DamageFlash;                                 // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNWXAttributeSet*                      AttributeSet;                                      // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       StartValue;                                        // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       EndValue;                                          // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DamageFlashDuration;                               // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DamageTimestamp;                                   // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MinHealthThreshold;                                // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_sw_HealthBar_C* GetDefaultObj();

	void GetElapsedTimeSinceLastDamage(double* Seconds, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue);
	void IsTweening(bool* IsTweening, double CallFunc_GetElapsedTimeSinceLastDamage_Seconds, bool CallFunc_Less_DoubleDouble_ReturnValue);
	void TweenDamageFlash(double Delta, double CallFunc_GetElapsedTimeSinceLastDamage_Seconds, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Ease_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast);
	enum class ESlateVisibility GetVisibilityByRules(double CallFunc_GetElapsedTimeSinceLastDamage_Seconds, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_GetHealthPct_Percent, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1);
	void GetLastHealthPct(double Delta, double* Percent, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast);
	void SetAttributeSet(class UNWXAttributeSet* InAttributeSet, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_GetHealthPct_Percent, double CallFunc_GetHealthPct_Percent_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_SetPercent_InPercent_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast_1);
	void GetHealthPct(double* Percent, bool CallFunc_IsValid_ReturnValue, double CallFunc_SafeDivide_ReturnValue, double CallFunc_SafeDivide_B_ImplicitCast, double CallFunc_SafeDivide_A_ImplicitCast);
	void HandleHealthChanged(float Delta, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_GetLastHealthPct_Percent, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_GetHealthPct_Percent, double CallFunc_GetHealthPct_Percent_1, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_GetLastHealthPct_Delta_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Destruct();
	void ExecuteUbergraph_WBP_sw_HealthBar(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double CallFunc_TweenDamageFlash_Delta_ImplicitCast);
};

}


