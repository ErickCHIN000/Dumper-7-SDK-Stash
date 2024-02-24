#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x5B8 - 0x4C8)
// WidgetBlueprintGeneratedClass WBP_DB_Temperature.WBP_DB_Temperature_C
class UWBP_DB_Temperature_C : public UWBP_NonShippableWindow_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               BT_Apply;                                          // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               BT_Dawn;                                           // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               BT_Dusk;                                           // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               BT_Midday;                                         // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               BT_Night;                                          // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               BT_Reset;                                          // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               BT_ResetPrecipitation;                             // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               BT_StartHail;                                      // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               BT_StartHeavyRain;                                 // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               BT_StartRain;                                      // 0x518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               BT_StopHail;                                       // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               BT_StopRain;                                       // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                       CB_TemperatureCurves;                              // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                       CB_TimeMultiplier;                                 // 0x538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PrecipitationText;                                 // 0x540(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      TB_MaxTemperature;                                 // 0x548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      TB_MinTemperature;                                 // 0x550(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_6;                                       // 0x558(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_21;                                      // 0x560(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DB_TemperatureCurve_C*            WBP_DB_TemperatureCurve;                           // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_TimeOfDayManager_C*                TimeOfDayManager;                                  // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           TemperatureCurve;                                  // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       TemperatureMin;                                    // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TemperatureMax;                                    // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temperature;                                       // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SelectedHour;                                      // 0x598(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7098[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URealmTimerComponent*                  RealmTimerComponent;                               // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       InitialRealmCycleDuration;                         // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RealmHoursPerCycle;                                // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_DB_Temperature_C* GetDefaultObj();

	void SetupWeather();
	void GetDebugComponent(class UBP_DebugModeComponent_C** BP_DebugModeComponent, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class UBP_DebugModeComponent_C* CallFunc_GetComponentByClass_ReturnValue);
	void SetupRealmTimeSpeed(double CallFunc_SafeDivide_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Round_ReturnValue, class URealmTimerComponent* CallFunc_GetComponentByClass_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	struct FEventReply OnInputCancel(const struct FEventReply& CallFunc_Handled_ReturnValue);
	class FText Get_PrecipitationText_Text(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IWeatherDataProvider> CallFunc_GetPrecipitation_self_CastInput, float CallFunc_GetPrecipitation_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	class FText GetText();
	void PopulateTemperatureMinMax(class FText CallFunc_Conv_DoubleToText_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FTemperatureProfile& CallFunc_GetTemperatureProfile_ReturnValue, double K2Node_VariableSet_TemperatureMin_ImplicitCast, double K2Node_VariableSet_TemperatureMax_ImplicitCast);
	void PopulateCBCurves(int32 SelectedIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FTemperatureProfile& CallFunc_GetTemperatureProfile_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_TemperatureCurves& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	class FText Get_CurrentTemperatureText_Text(bool CallFunc_IsValid_ReturnValue, float CallFunc_GetCurrentNormalizedRealmTime_OutNormalizedRealmTime, bool CallFunc_GetCurrentNormalizedRealmTime_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Lerp_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, double CallFunc_Lerp_Alpha_ImplicitCast);
	class FText Get_CurrentTimeText_Text(double Time24h, bool IsAfternoon, int32 Minutes, int32 Hours, const class FString& CallFunc_SelectString_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, bool Temp_bool_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FFloor_ReturnValue_1, float CallFunc_GetCurrentNormalizedRealmTime_OutNormalizedRealmTime, bool CallFunc_GetCurrentNormalizedRealmTime_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	void Construct();
	void BndEvt__WBP_DB_Temperature_BT_StartRain_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_DB_Temperature_BT_StopHail_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_DB_Temperature_BT_ResetPrecipitation_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_DB_Temperature_BT_StartHail_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_DB_Temperature_BT_StopRain_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_DB_Temperature_BT_Dawn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_DB_Temperature_BT_Midday_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_DB_Temperature_BT_Dusk_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_DB_Temperature_BT_Night_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_DB_Temperature_BT_StartHeavyRain_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_DB_Temperature_BT_Apply_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_DB_Temperature_CB_TimeMultiplier_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType);
	void BndEvt__WBP_DB_Temperature_BT_Reset_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_DB_Temperature(int32 EntryPoint, float CallFunc_GetNormalizedNightTime_ReturnValue, const class FString& CallFunc_GetFormattedSetRealmTimeCommand_ReturnValue, class ABP_TimeOfDayManager_C* CallFunc_GetActorOfClass_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_GetSelectedIndex_ReturnValue, class FText CallFunc_GetText_ReturnValue, class FName CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FS_TemperatureCurves& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, double CallFunc_Conv_StringToDouble_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_TextIsEmpty_ReturnValue_1, double CallFunc_Conv_StringToDouble_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType, bool K2Node_SwitchEnum_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Conv_StringToInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, class UBP_DebugModeComponent_C* CallFunc_GetDebugComponent_BP_DebugModeComponent, double CallFunc_SafeDivide_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, class UBP_DebugModeComponent_C* CallFunc_GetDebugComponent_BP_DebugModeComponent_1, float CallFunc_GetNormalizedDuskTime_ReturnValue, float CallFunc_GetNormalizedMiddayTime_ReturnValue, const class FString& CallFunc_GetFormattedSetRealmTimeCommand_ReturnValue_1, const class FString& CallFunc_GetFormattedSetRealmTimeCommand_ReturnValue_2, float CallFunc_GetNormalizedDawnTime_ReturnValue, const class FString& CallFunc_GetFormattedSetRealmTimeCommand_ReturnValue_3);
};

}


