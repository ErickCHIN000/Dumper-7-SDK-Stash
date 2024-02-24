#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x371 - 0x348)
// WidgetBlueprintGeneratedClass WBP_HUD_Structure_HealthBar.WBP_HUD_Structure_HealthBar_C
class UWBP_HUD_Structure_HealthBar_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                          ProgressBar;                                       // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_barLabel;                                      // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TXT_Progress;                                      // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               StructureReference;                                // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bShowHealthbar;                                    // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_HUD_Structure_HealthBar_C* GetDefaultObj();

	void Show_Healthbar(bool* ShowHealth, double* CurrentHealth, double* MaxHealth, bool LSchematicNotComplete, bool LBuildMode, float LMaxHealth, float LCurrentHealth, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, TScriptInterface<class IBPI_BuildModeFeedback_C> K2Node_DynamicCast_AsBPI_Build_Mode_Feedback, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UBP_BuildModeFeedbackComponent_C* CallFunc_GetBuildModeFeedbackComponent_Component, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TScriptInterface<class IStructureHealthInterface> K2Node_DynamicCast_AsStructure_Health_Interface, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetMaxHealth_ReturnValue, TScriptInterface<class IStructureHealthInterface> K2Node_DynamicCast_AsStructure_Health_Interface_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_GetCurrentHealth_ReturnValue, double K2Node_FunctionResult_CurrentHealth_ImplicitCast, double K2Node_FunctionResult_MaxHealth_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	void OnStructureHealthChanged(struct FStructureHealthChangedContext& HealthChangedContext, bool CallFunc_Show_Healthbar_ShowHealth, double CallFunc_Show_Healthbar_CurrentHealth, double CallFunc_Show_Healthbar_MaxHealth);
	void UnbindEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IStructureEventInterface> K2Node_DynamicCast_AsStructure_Event_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void BindEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IStructureEventInterface> K2Node_DynamicCast_AsStructure_Event_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void RefreshWidget(TScriptInterface<class IStructureHealthInterface> K2Node_DynamicCast_AsStructure_Health_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IStructureHealthInterface> K2Node_DynamicCast_AsStructure_Health_Interface_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_GetCurrentHealth_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	void UpdateProgressBar(double CurrentProgress, double MaxProgress, double LMaxProgress, double LCurrentProgress, bool CallFunc_InRange_FloatFloat_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Round_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, int32 CallFunc_Round_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast);
	void UpdateStructure(class UObject* NewStructure, const struct FStructureHealthChangedContext& K2Node_MakeStruct_StructureHealthChangedContext, bool CallFunc_IsValid_ReturnValue);
	void Destruct();
	void ExecuteUbergraph_WBP_HUD_Structure_HealthBar(int32 EntryPoint);
};

}


