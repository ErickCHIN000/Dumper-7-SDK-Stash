#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x3E0 - 0x398)
// WidgetBlueprintGeneratedClass WBP_PlayerBar_Health.WBP_PlayerBar_Health_C
class UWBP_PlayerBar_Health_C : public UNWXCoreStatCounterWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x398(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_DmgType_;                                      // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_heart;                                         // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_3;                                         // 0x3B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_DamageFlash;                           // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_Health;                                // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x3C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_healthValue;                                   // 0x3D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          DamageTickTimer;                                   // 0x3D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PlayerBar_Health_C* GetDefaultObj();

	void UpdateTextValue(float CallFunc_GetValue_ReturnValue, int32 CallFunc_FCeil_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, double CallFunc_FCeil_A_ImplicitCast);
	void OnTickDamageDown(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast);
	void OnDamageTaken(double NewParam, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void Get_Attribute_Base(const struct FGameplayAttribute& Stat, bool* Success, double* Value, class APawn* LPawn, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool CallFunc_GetFloatAttributeBase_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeBase_ReturnValue, bool CallFunc_IsValid_ReturnValue, double K2Node_FunctionResult_Value_ImplicitCast);
	void Get_Attribute_Value(const struct FGameplayAttribute& Stat, bool* Success, double* Value, class APawn* LPawn, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_IsValid_ReturnValue, double K2Node_FunctionResult_Value_ImplicitCast);
	void Refresh(double Value, double Delta, bool CallFunc_Get_Attribute_Value_Success, double CallFunc_Get_Attribute_Value_Value, double CallFunc_Divide_DoubleDouble_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast);
	class UWidget* GetHealthToolTip(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_Tooltip_Health_C* CallFunc_Create_ReturnValue);
	void BP_HandleAttributeChanged(float NewValue, float Delta);
	void ExecuteUbergraph_WBP_PlayerBar_Health(int32 EntryPoint, float K2Node_Event_NewValue, float K2Node_Event_Delta, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Refresh_Value_ImplicitCast, double CallFunc_Refresh_Delta_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
};

}


