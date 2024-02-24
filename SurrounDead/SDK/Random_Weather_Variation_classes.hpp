#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x191 (0x231 - 0xA0)
// BlueprintGeneratedClass Random_Weather_Variation.Random_Weather_Variation_C
class URandom_Weather_Variation_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AUltra_Dynamic_Weather_C*              UDW;                                               // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UUDS_Weather_Settings_C*               Target_Random_Weather_Type;                        // 0xB0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class UUDS_Weather_Settings_C*, double> Weather_Type_Probabilities__Summer_;               // 0xB8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UUDS_Weather_Settings_C*, double> Weather_Type_Probabilities__Autumn_;               // 0x108(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UUDS_Weather_Settings_C*, double> Weather_Type_Probabilities__Winter_;               // 0x158(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UUDS_Weather_Settings_C*, double> Weather_Type_Probabilities__Spring_;               // 0x1A8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       Current_Lerp_Alpha;                                // 0x1F8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Current_Timer_Length;                              // 0x200(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AWeather_Override_Volume_C*            Volume;                                            // 0x208(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        Total_Changes;                                     // 0x210(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Changing_Weather;                                  // 0x214(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DFC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUDS_Weather_Settings_C*               Last_Random_Weather_Type;                          // 0x218(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UUDS_Weather_Settings_C*               Current_Random_Weather_State;                      // 0x220(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Change_Timer;                                      // 0x228(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Running_Timer;                                     // 0x230(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URandom_Weather_Variation_C* GetDefaultObj();

	void Make_Climate_Probability_Map(class UUDS_Climate_Preset_C* Climate, int32 Season, TMap<class UUDS_Weather_Settings_C*, double>* Probability_Map, double Probability_Total, double Current_Precipitation_Percentage, const TArray<class UUDS_Weather_Settings_C*>& Precipitation_Types, const TArray<class UUDS_Weather_Settings_C*>& Snowy_Types, double Remaining_Allocation_Percentage, double Allocation_Fraction, const TArray<class UUDS_Weather_Settings_C*>& Rainy_Types, double Snowing_Percentage, double Raining_Percentage, class UUDS_Weather_Settings_C* Current_Type, TMap<class UUDS_Weather_Settings_C*, double> Weather_Probability_Map, double Current_Type_Probability, double Precipitating_Percentage, double Sunny_Percentage, double Cloudy_Percentage, double Snowfall__mm_, double Rainfall__mm_, double Low_Temp__C_, double High_Temp__C_, TArray<class UUDS_Weather_Settings_C*>& K2Node_MakeArray_Array, TArray<class UUDS_Weather_Settings_C*>& K2Node_MakeArray_Array_1, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, TArray<class UUDS_Weather_Settings_C*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UUDS_Weather_Settings_C* Temp_object_Variable, class UUDS_Weather_Settings_C* Temp_object_Variable_1, TArray<double>& CallFunc_Map_Values_Values, double CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, class UUDS_Weather_Settings_C* Temp_object_Variable_2, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, class UUDS_Weather_Settings_C* Temp_object_Variable_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, int32 Temp_int_Variable_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, double K2Node_Select_Default, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_FMin_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, int32 Temp_int_Array_Index_Variable_3, class UUDS_Weather_Settings_C* CallFunc_Array_Get_Item_1, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, class UUDS_Weather_Settings_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 Temp_int_Variable_2, TArray<class UUDS_Weather_Settings_C*>& K2Node_Select_Default_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double Temp_real_Variable, double CallFunc_FMax_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_MapRangeClamped_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, double Temp_real_Variable_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_7, int32 Temp_int_Variable_3, double K2Node_Select_Default_2, class UUDS_Weather_Settings_C* Temp_object_Variable_4, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_Lerp_ReturnValue, TArray<class UUDS_Weather_Settings_C*>& CallFunc_Map_Keys_Keys_1, class UUDS_Weather_Settings_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_3, double CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_3, double CallFunc_Divide_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_8, class UUDS_Weather_Settings_C* Temp_object_Variable_5, double CallFunc_Subtract_DoubleDouble_ReturnValue_4, double CallFunc_FMax_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue_3, double CallFunc_Add_DoubleDouble_ReturnValue_3, double CallFunc_Subtract_DoubleDouble_ReturnValue_5, double CallFunc_MapRangeClamped_ReturnValue_3, double CallFunc_Subtract_DoubleDouble_ReturnValue_6, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, double CallFunc_FMax_ReturnValue_3, double CallFunc_Lerp_ReturnValue_1, class UUDS_Weather_Settings_C* Temp_object_Variable_6, TArray<double>& K2Node_MakeArray_Array_2, double CallFunc_Array_Get_Item_4, TArray<double>& K2Node_MakeArray_Array_3, double CallFunc_Array_Get_Item_5, TArray<double>& K2Node_MakeArray_Array_4, double CallFunc_Array_Get_Item_6, TArray<double>& K2Node_MakeArray_Array_5, double CallFunc_Array_Get_Item_7, TArray<double>& K2Node_MakeArray_Array_6, double CallFunc_Array_Get_Item_8);
	void Get_Climate_Temperature_Ranges(class UUDS_Climate_Preset_C* Climate_Object, enum class EUDS_TemperatureType Scale, struct FVector2D* Summer_Range, struct FVector2D* Autumn_Range, struct FVector2D* Winter_Range, struct FVector2D* Spring_Range, double CallFunc_Return_Temperature_Range_in_Scale_Low, double CallFunc_Return_Temperature_Range_in_Scale_High, double CallFunc_Return_Temperature_Range_in_Scale_Low_1, double CallFunc_Return_Temperature_Range_in_Scale_High_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, double CallFunc_Return_Temperature_Range_in_Scale_Low_2, double CallFunc_Return_Temperature_Range_in_Scale_High_2, double CallFunc_Return_Temperature_Range_in_Scale_Low_3, double CallFunc_Return_Temperature_Range_in_Scale_High_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3);
	void Increment_Change_Timer(bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue);
	void Create_Composite_Probability_Map(TMap<class UUDS_Weather_Settings_C*, double>* Out, const TArray<double>& Season_Probability_Totals, TMap<class UUDS_Weather_Settings_C*, double> Composite_Map, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, double CallFunc_Array_Get_Item, TArray<double>& K2Node_MakeArray_Array, int32 Temp_int_Variable_2, double CallFunc_Array_Get_Item_1, double CallFunc_Array_Get_Item_2, bool CallFunc_Greater_DoubleDouble_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, TMap<class UUDS_Weather_Settings_C*, double> K2Node_Select_Default, TMap<class UUDS_Weather_Settings_C*, double> K2Node_Select_Default_1, TArray<double>& CallFunc_Map_Values_Values, double CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_Array_Get_Item_4, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, TMap<class UUDS_Weather_Settings_C*, double> K2Node_Select_Default_2, TArray<class UUDS_Weather_Settings_C*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue_1, class UUDS_Weather_Settings_C* CallFunc_Array_Get_Item_5, bool CallFunc_Less_IntInt_ReturnValue_1, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_SafeDivide_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1);
	void Apply_State(const struct FRandomWeatherVariation_State& Random_Weather_State, bool CallFunc_IsComponentTickEnabled_ReturnValue);
	void Get_State_for_Saving(struct FRandomWeatherVariation_State* State, class AWeather_Override_Volume_C** Volume, const struct FRandomWeatherVariation_State& K2Node_MakeStruct_RandomWeatherVariation_State);
	void Select_New_Random_Weather_Type(bool Filter_Probability_List, double Threshold, double Random_Float, double Random_Max_Range, TMap<class UUDS_Weather_Settings_C*, double> Current_Probabilities, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, TMap<class UUDS_Weather_Settings_C*, double> CallFunc_Create_Composite_Probability_Map_Out, TMap<class UUDS_Weather_Settings_C*, double> CallFunc_Filter_Probability_Map_Filtered_Probability_Map, TArray<class UUDS_Weather_Settings_C*>& CallFunc_Map_Keys_Keys, class UUDS_Weather_Settings_C* CallFunc_Array_Get_Item, TArray<double>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, double CallFunc_Array_Get_Item_1, double CallFunc_Add_DoubleDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1);
	void Increment_Random_Weather(double Eased_Lerp_Alpha, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Ease_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue);
	void Initialize(class AUltra_Dynamic_Weather_C* UDW, TMap<class UUDS_Weather_Settings_C*, double> Summer_Probabilities, TMap<class UUDS_Weather_Settings_C*, double> Autumn_Probabilities, TMap<class UUDS_Weather_Settings_C*, double> Winter_Probabilities, TMap<class UUDS_Weather_Settings_C*, double> Spring_Probabilities, bool Start_with_Random_Type);
	void ReceiveTick(float DeltaSeconds);
	void Start_Timer_to_Select_New_Weather();
	void Reset_Timer();
	void ExecuteUbergraph_Random_Weather_Variation(int32 EntryPoint, float K2Node_Event_DeltaSeconds, double CallFunc_RandomFloatInRange_ReturnValue, class AUltra_Dynamic_Weather_C* K2Node_CustomEvent_UDW, TMap<class UUDS_Weather_Settings_C*, double> K2Node_CustomEvent_Summer_Probabilities, TMap<class UUDS_Weather_Settings_C*, double> K2Node_CustomEvent_Autumn_Probabilities, TMap<class UUDS_Weather_Settings_C*, double> K2Node_CustomEvent_Winter_Probabilities, TMap<class UUDS_Weather_Settings_C*, double> K2Node_CustomEvent_Spring_Probabilities, bool K2Node_CustomEvent_Start_with_Random_Type, bool CallFunc_IsServer_ReturnValue, class UUDS_Weather_Settings_C* CallFunc_SpawnObject_ReturnValue);
};

}


