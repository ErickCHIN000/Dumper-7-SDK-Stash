#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0xF8 - 0x98)
// BlueprintGeneratedClass BTS_RangeAttackLocation.BTS_RangeAttackLocation_C
class UBTS_RangeAttackLocation_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_SmartAIComponent_C*                Smart_AI;                                          // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Animation_Index;                                   // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30C6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          Attack_Montage;                                    // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Use_Anim_Time;                                     // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30C8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Last_Seen;                                         // 0xC0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Range_Attack_Time;                                 // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         In_Attack;                                         // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Search_Timer;                                      // 0xE8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       AnimAttackTime;                                    // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTS_RangeAttackLocation_C* GetDefaultObj();

	void Closest_Attack_Target(class AActor** Closest_Attack_Target, class AActor* Array_Element_L, class AActor* Closest_AI_L, double Closest_Distance_L, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_Closest_Distance_L_ImplicitCast);
	void Range_Attack_Frequancy(bool* Use_Anim_Time, double* Range_Attack_Frequency, double Temp_real_Variable, bool Temp_bool_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, double K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double K2Node_Select_Default_1);
	void Get_Range_Attack_Montage(class UAnimMontage** Montage, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UAnimMontage* CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, class UAnimMontage* CallFunc_Array_Get_Item_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, class UAnimMontage* CallFunc_Array_Get_Item_2, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_3, class UAnimMontage* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1);
	void Range_Attack();
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void LOS_Timer();
	void Search_Timer_Events();
	void ExecuteUbergraph_BTS_RangeAttackLocation(int32 EntryPoint, const struct FVector& CallFunc_GetVelocity_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_Closest_Attack_Target_Closest_Attack_Target, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_Reset_Attack_Target_New_Attack_Target, class AActor* CallFunc_Reset_Attack_Target_Attack_Target, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UAnimMontage* CallFunc_Get_Range_Attack_Montage_Montage, bool CallFunc_Range_Attack_Frequancy_Use_Anim_Time, double CallFunc_Range_Attack_Frequancy_Range_Attack_Frequency, float CallFunc_GetPlayLength_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_GetDistanceTo_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Current_Range_Attack_Distance_Attack_Range, float CallFunc_GetDistanceTo_ReturnValue_2, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_Current_Ammo_Check_Has_Ammo, int32 CallFunc_Current_Ammo_Check_Ammo, bool CallFunc_Current_Ammo_Check_Has_Ammo_1, int32 CallFunc_Current_Ammo_Check_Ammo_1, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_5, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class UBP_SmartAIComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_LineOfSightTo_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_Current_Range_Attack_Distance_Attack_Range_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_LineOfSightTo_ReturnValue_1, bool CallFunc_Reset_Attack_Target_New_Attack_Target_1, class AActor* CallFunc_Reset_Attack_Target_Attack_Target_1, TScriptInterface<class IBP_AIInterface_C> K2Node_DynamicCast_AsBP_AIInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AI_Is_Dead__Dead, bool CallFunc_LineOfSightTo_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_10, double K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_11, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_AnimAttackTime_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}


