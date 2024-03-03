#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C
// (Actor)

class UClass* AUltra_Dynamic_Sky_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ultra_Dynamic_Sky_C");

	return Clss;
}


// Ultra_Dynamic_Sky_C Ultra_Dynamic_Sky.Default__Ultra_Dynamic_Sky_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUltra_Dynamic_Sky_C* AUltra_Dynamic_Sky_C::GetDefaultObj()
{
	static class AUltra_Dynamic_Sky_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUltra_Dynamic_Sky_C*>(AUltra_Dynamic_Sky_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ToggleHalloweenCamp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TurnOn_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors                           (ReferenceParm)
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors_1                         (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Loot_Trap_C*             K2Node_DynamicCast_AsBP_Loot_Trap                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Loot_Trap_C*             K2Node_DynamicCast_AsBP_Loot_Trap_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ANPC_NebMinusoo_C*           K2Node_DynamicCast_AsNPC_Neb_oo                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Vessel_Halloween_C*      K2Node_DynamicCast_AsBP_Vessel_Halloween                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ANPC_NebMinusoo_C*           K2Node_DynamicCast_AsNPC_Neb_oo_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Vessel_Halloween_C*      K2Node_DynamicCast_AsBP_Vessel_Halloween_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_HalloweenCamp_C*         CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_HalloweenCamp_C*         CallFunc_GetActorOfClass_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUltra_Dynamic_Sky_C::ToggleHalloweenCamp(bool TurnOn_, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors_1, class AActor* CallFunc_Array_Get_Item, class AActor* CallFunc_Array_Get_Item_1, class ABP_Loot_Trap_C* K2Node_DynamicCast_AsBP_Loot_Trap, bool K2Node_DynamicCast_bSuccess, class ABP_Loot_Trap_C* K2Node_DynamicCast_AsBP_Loot_Trap_1, bool K2Node_DynamicCast_bSuccess_1, class ANPC_NebMinusoo_C* K2Node_DynamicCast_AsNPC_Neb_oo, bool K2Node_DynamicCast_bSuccess_2, class ABP_Vessel_Halloween_C* K2Node_DynamicCast_AsBP_Vessel_Halloween, bool K2Node_DynamicCast_bSuccess_3, class ANPC_NebMinusoo_C* K2Node_DynamicCast_AsNPC_Neb_oo_1, bool K2Node_DynamicCast_bSuccess_4, class ABP_Vessel_Halloween_C* K2Node_DynamicCast_AsBP_Vessel_Halloween_1, bool K2Node_DynamicCast_bSuccess_5, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class ABP_HalloweenCamp_C* CallFunc_GetActorOfClass_ReturnValue, class ABP_HalloweenCamp_C* CallFunc_GetActorOfClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "ToggleHalloweenCamp");

	Params::AUltra_Dynamic_Sky_C_ToggleHalloweenCamp_Params Parms{};

	Parms.TurnOn_ = TurnOn_;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllActorsWithTag_OutActors = CallFunc_GetAllActorsWithTag_OutActors;
	Parms.CallFunc_GetAllActorsWithTag_OutActors_1 = CallFunc_GetAllActorsWithTag_OutActors_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsBP_Loot_Trap = K2Node_DynamicCast_AsBP_Loot_Trap;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Loot_Trap_1 = K2Node_DynamicCast_AsBP_Loot_Trap_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsNPC_Neb_oo = K2Node_DynamicCast_AsNPC_Neb_oo;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBP_Vessel_Halloween = K2Node_DynamicCast_AsBP_Vessel_Halloween;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsNPC_Neb_oo_1 = K2Node_DynamicCast_AsNPC_Neb_oo_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsBP_Vessel_Halloween_1 = K2Node_DynamicCast_AsBP_Vessel_Halloween_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue_1 = CallFunc_GetActorOfClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ToggleNightLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TurnOnNightLights                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APointLight*>         CallFunc_GetAllActorsOfClassWithTag_OutActors                    (ReferenceParm)
// class APointLight*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APointLight*>         CallFunc_GetAllActorsOfClassWithTag_OutActors_1                  (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APointLight*                 CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUltra_Dynamic_Sky_C::ToggleNightLights(bool TurnOnNightLights, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<class APointLight*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, class APointLight* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class APointLight*>& CallFunc_GetAllActorsOfClassWithTag_OutActors_1, int32 CallFunc_Array_Length_ReturnValue_1, class APointLight* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "ToggleNightLights");

	Params::AUltra_Dynamic_Sky_C_ToggleNightLights_Params Parms{};

	Parms.TurnOnNightLights = TurnOnNightLights;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetAllActorsOfClassWithTag_OutActors = CallFunc_GetAllActorsOfClassWithTag_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllActorsOfClassWithTag_OutActors_1 = CallFunc_GetAllActorsOfClassWithTag_OutActors_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Current Volumetric Clouds MID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUltra_Dynamic_Sky_C::Update_Current_Volumetric_Clouds_MID(int32 Temp_int_Variable, class UMaterialInterface* K2Node_Select_Default, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "Update Current Volumetric Clouds MID");

	Params::AUltra_Dynamic_Sky_C_Update_Current_Volumetric_Clouds_MID_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Replicated Time
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUltra_Dynamic_Sky_C::Update_Replicated_Time()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "Update Replicated Time");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Static Cloud Lighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Shading_Intensity                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Sky_C::Update_Static_Cloud_Lighting(float Shading_Intensity, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue_2, float CallFunc_FClamp_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_FClamp_ReturnValue_4, const struct FVector& CallFunc_GetForwardVector_ReturnValue_2, const struct FLinearColor& K2Node_MakeStruct_LinearColor, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_FClamp_ReturnValue_5, const struct FVector& CallFunc_GetForwardVector_ReturnValue_3, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_FClamp_ReturnValue_6, float CallFunc_Lerp_ReturnValue, float CallFunc_FClamp_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_6, float CallFunc_FClamp_ReturnValue_8, float CallFunc_FClamp_ReturnValue_9, float CallFunc_Multiply_FloatFloat_ReturnValue_7, float CallFunc_FClamp_ReturnValue_10, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "Update Static Cloud Lighting");

	Params::AUltra_Dynamic_Sky_C_Update_Static_Cloud_Lighting_Params Parms{};

	Parms.Shading_Intensity = Shading_Intensity;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue_1 = CallFunc_GetForwardVector_ReturnValue_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue_2 = CallFunc_FClamp_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue_3 = CallFunc_FClamp_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue_4 = CallFunc_FClamp_ReturnValue_4;
	Parms.CallFunc_GetForwardVector_ReturnValue_2 = CallFunc_GetForwardVector_ReturnValue_2;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_FClamp_ReturnValue_5 = CallFunc_FClamp_ReturnValue_5;
	Parms.CallFunc_GetForwardVector_ReturnValue_3 = CallFunc_GetForwardVector_ReturnValue_3;
	Parms.CallFunc_BreakVector_X_3 = CallFunc_BreakVector_X_3;
	Parms.CallFunc_BreakVector_Y_3 = CallFunc_BreakVector_Y_3;
	Parms.CallFunc_BreakVector_Z_3 = CallFunc_BreakVector_Z_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_6 = CallFunc_FClamp_ReturnValue_6;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_7 = CallFunc_FClamp_ReturnValue_7;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_6 = CallFunc_Multiply_FloatFloat_ReturnValue_6;
	Parms.CallFunc_FClamp_ReturnValue_8 = CallFunc_FClamp_ReturnValue_8;
	Parms.CallFunc_FClamp_ReturnValue_9 = CallFunc_FClamp_ReturnValue_9;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_7 = CallFunc_Multiply_FloatFloat_ReturnValue_7;
	Parms.CallFunc_FClamp_ReturnValue_10 = CallFunc_FClamp_ReturnValue_10;
	Parms.K2Node_MakeStruct_LinearColor_1 = K2Node_MakeStruct_LinearColor_1;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue = CallFunc_Multiply_LinearColorFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.OnRep_Replicated Time of Day
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUltra_Dynamic_Sky_C::OnRep_Replicated_Time_of_Day(bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "OnRep_Replicated Time of Day");

	Params::AUltra_Dynamic_Sky_C_OnRep_Replicated_Time_of_Day_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Current Date and Time
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                   Current_Date_and_Time                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Fraction_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Fraction_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Fraction_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimecode                   K2Node_MakeStruct_Timecode                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_MakeDateTime_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Sky_C::Get_Current_Date_and_Time(struct FDateTime* Current_Date_and_Time, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue, float CallFunc_Fraction_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue_1, float CallFunc_Fraction_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue_2, float CallFunc_Fraction_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue_3, const struct FTimecode& K2Node_MakeStruct_Timecode, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, int32 CallFunc_FTrunc_ReturnValue, const struct FDateTime& CallFunc_MakeDateTime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "Get Current Date and Time");

	Params::AUltra_Dynamic_Sky_C_Get_Current_Date_and_Time_Params Parms{};

	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Fraction_ReturnValue = CallFunc_Fraction_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue_1 = CallFunc_FFloor_ReturnValue_1;
	Parms.CallFunc_Fraction_ReturnValue_1 = CallFunc_Fraction_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FFloor_ReturnValue_2 = CallFunc_FFloor_ReturnValue_2;
	Parms.CallFunc_Fraction_ReturnValue_2 = CallFunc_Fraction_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_FFloor_ReturnValue_3 = CallFunc_FFloor_ReturnValue_3;
	Parms.K2Node_MakeStruct_Timecode = K2Node_MakeStruct_Timecode;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_MakeDateTime_ReturnValue = CallFunc_MakeDateTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Current_Date_and_Time != nullptr)
		*Current_Date_and_Time = std::move(Parms.Current_Date_and_Time);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Check for Daylight Savings Time
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Fraction_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Fraction_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Fraction_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimecode                   K2Node_MakeStruct_Timecode                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_MakeDateTime_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_MakeDateTime_ReturnValue_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_MakeDateTime_ReturnValue_2                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DateTimeDateTime_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUltra_Dynamic_Sky_C::Check_for_Daylight_Savings_Time(bool CallFunc_HasAuthority_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Fraction_ReturnValue, int32 CallFunc_FFloor_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Fraction_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Fraction_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue_3, const struct FTimecode& K2Node_MakeStruct_Timecode, const struct FDateTime& CallFunc_MakeDateTime_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDateTime& CallFunc_MakeDateTime_ReturnValue_1, const struct FDateTime& CallFunc_MakeDateTime_ReturnValue_2, bool CallFunc_LessEqual_DateTimeDateTime_ReturnValue, bool CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "Check for Daylight Savings Time");

	Params::AUltra_Dynamic_Sky_C_Check_for_Daylight_Savings_Time_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Fraction_ReturnValue = CallFunc_Fraction_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Fraction_ReturnValue_1 = CallFunc_Fraction_ReturnValue_1;
	Parms.CallFunc_FFloor_ReturnValue_1 = CallFunc_FFloor_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Fraction_ReturnValue_2 = CallFunc_Fraction_ReturnValue_2;
	Parms.CallFunc_FFloor_ReturnValue_2 = CallFunc_FFloor_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_FFloor_ReturnValue_3 = CallFunc_FFloor_ReturnValue_3;
	Parms.K2Node_MakeStruct_Timecode = K2Node_MakeStruct_Timecode;
	Parms.CallFunc_MakeDateTime_ReturnValue = CallFunc_MakeDateTime_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeDateTime_ReturnValue_1 = CallFunc_MakeDateTime_ReturnValue_1;
	Parms.CallFunc_MakeDateTime_ReturnValue_2 = CallFunc_MakeDateTime_ReturnValue_2;
	Parms.CallFunc_LessEqual_DateTimeDateTime_ReturnValue = CallFunc_LessEqual_DateTimeDateTime_ReturnValue;
	Parms.CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue = CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Increment Day
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Leap_Year                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_Select_Default                                            (ReferenceParm)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUltra_Dynamic_Sky_C::Increment_Day(bool Leap_Year, int32 Temp_int_Variable, bool Temp_bool_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable_2, TArray<int32>& K2Node_Select_Default, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "Increment Day");

	Params::AUltra_Dynamic_Sky_C_Increment_Day_Params Parms{};

	Parms.Leap_Year = Leap_Year;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Force Valid Day
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      K2Node_Select_Default                                            (ReferenceParm)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUltra_Dynamic_Sky_C::Force_Valid_Day(bool Temp_bool_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<int32>& K2Node_Select_Default, int32 CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "Force Valid Day");

	Params::AUltra_Dynamic_Sky_C_Force_Valid_Day_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Approximate Real Sun Moon and Stars
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Month                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Day                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Year                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Time_of_Day                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Time_Zone                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Sun_Vector                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Moon_Vector                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Real_Phase                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Phase_Alignment                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Celestial_Orbit                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Celestial_Yaw                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Equation_of_Time_Offset                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Equation_of_Time_Curve                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Lunar_Inclination_Cycle                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Moon_Center                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Lunar_Time                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Earth_Center                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Moon_Real_Phase                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Moon_Alignment                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Moon_Direction                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Celestial_North_Pole                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Stars_Orbit                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Stars_Yaw                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Sun_Direction                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Leap_Year                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              UTC_Year                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Year                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Zenith_Direction                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Axial_Tilt                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Viewer_Position_on_Earth                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Local_Geocoordinate                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Seasonal_Time                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Day_of_Year_Index                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Month                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Day                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              UTC_Day                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              UTC_Month                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              UTC_Time_of_Year                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              UTC_Time_of_Day                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_Season             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_UtcNow_ReturnValue                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Year                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Month                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Day                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Hour                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Minute                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Second                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Millisecond                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Percent_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_Season             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Percent_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUltra_Dynamic_Weather_Interface_C>K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotFromXZ_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetRightVector_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Fraction_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Percent_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_LessLess_VectorRotator_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Fraction_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_MakeDateTime_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_MakeDateTime_ReturnValue_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_Subtract_DateTimeDateTime_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Days                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Hours                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Minutes                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Seconds                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Milliseconds                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_9                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue_3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_10                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue_4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DegAcos_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Cross_VectorVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_11                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_13                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_14                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_8                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      K2Node_Select_Default                                            (ReferenceParm)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_Season             Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_15                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_14                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_LessLess_VectorRotator_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue_5              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_15                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue_6              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_16                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_16                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_17                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_17                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Percent_FloatFloat_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_18                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_18                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_9                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Percent_FloatFloat_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_19                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_Season             Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_Season             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      K2Node_Select_Default_2                                          (ReferenceParm)
// int32                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_Season             Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUDS_Season             Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_Season             Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_Season             Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_Season             K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_Season             K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_Select_Default_5                                          (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUltra_Dynamic_Sky_C::Approximate_Real_Sun_Moon_and_Stars(int32 Month, int32 Day, int32 Year, float Time_of_Day, float Time_Zone, struct FVector* Sun_Vector, struct FVector* Moon_Vector, float* Real_Phase, struct FVector* Phase_Alignment, float* Celestial_Orbit, struct FLinearColor* Celestial_Yaw, float Equation_of_Time_Offset, class UCurveFloat* Equation_of_Time_Curve, float Lunar_Inclination_Cycle, const struct FVector& Moon_Center, float Lunar_Time, const struct FVector& Earth_Center, float Moon_Real_Phase, const struct FVector& Moon_Alignment, const struct FVector& Moon_Direction, const struct FVector& Celestial_North_Pole, float Stars_Orbit, const struct FLinearColor& Stars_Yaw, const struct FVector& Sun_Direction, bool Leap_Year, int32 UTC_Year, int32 Local_Year, const struct FRotator& Zenith_Direction, float Axial_Tilt, const struct FVector& Viewer_Position_on_Earth, const struct FRotator& Local_Geocoordinate, float Seasonal_Time, int32 Day_of_Year_Index, int32 Local_Month, int32 Local_Day, int32 UTC_Day, int32 UTC_Month, float UTC_Time_of_Year, float UTC_Time_of_Day, bool Temp_bool_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, bool Temp_bool_Variable_1, int32 CallFunc_Percent_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, float CallFunc_Divide_FloatFloat_ReturnValue, enum class EUDS_Season Temp_byte_Variable, const struct FDateTime& CallFunc_UtcNow_ReturnValue, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, enum class EUDS_Season Temp_byte_Variable_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_3, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_4, float CallFunc_Percent_FloatFloat_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue_2, TScriptInterface<class IUltra_Dynamic_Weather_Interface_C> K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_MakeRotFromXZ_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_5, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_Fraction_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_4, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue_2, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue_6, float CallFunc_Add_FloatFloat_ReturnValue_7, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, float CallFunc_Percent_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_6, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_LessLess_VectorRotator_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_8, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue_1, float CallFunc_Fraction_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_7, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_4, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FDateTime& CallFunc_MakeDateTime_ReturnValue, const struct FDateTime& CallFunc_MakeDateTime_ReturnValue_1, const struct FTimespan& CallFunc_Subtract_DateTimeDateTime_ReturnValue, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, float CallFunc_Multiply_FloatFloat_ReturnValue_8, float CallFunc_Conv_IntToFloat_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue_9, float CallFunc_Multiply_FloatFloat_ReturnValue_9, float CallFunc_Divide_FloatFloat_ReturnValue_5, float CallFunc_Divide_FloatFloat_ReturnValue_6, float CallFunc_Subtract_FloatFloat_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, float CallFunc_SelectFloat_ReturnValue_2, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_10, float CallFunc_SelectFloat_ReturnValue_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue_4, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue_4, float CallFunc_Dot_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_4, float CallFunc_DegAcos_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_10, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_7, const struct FVector& CallFunc_Normal_ReturnValue_5, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FLinearColor& K2Node_MakeStruct_LinearColor, float CallFunc_Multiply_FloatFloat_ReturnValue_11, float CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_12, float CallFunc_Add_FloatFloat_ReturnValue_11, float CallFunc_SelectFloat_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_12, float CallFunc_Add_FloatFloat_ReturnValue_13, float CallFunc_Multiply_FloatFloat_ReturnValue_13, float CallFunc_Add_FloatFloat_ReturnValue_14, float CallFunc_Divide_FloatFloat_ReturnValue_8, int32 CallFunc_Percent_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, TArray<int32>& K2Node_Select_Default, int32 CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_2, enum class EUDS_Season Temp_byte_Variable_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_15, float CallFunc_Multiply_FloatFloat_ReturnValue_14, const struct FRotator& CallFunc_MakeRotator_ReturnValue_5, const struct FVector& CallFunc_LessLess_VectorRotator_ReturnValue_1, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_6, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue_5, const struct FVector& CallFunc_Normal_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue_15, const struct FRotator& CallFunc_MakeRotator_ReturnValue_6, const struct FRotator& CallFunc_MakeRotator_ReturnValue_7, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue_6, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_16, float CallFunc_Add_FloatFloat_ReturnValue_16, float CallFunc_Add_FloatFloat_ReturnValue_17, float CallFunc_Multiply_FloatFloat_ReturnValue_17, float CallFunc_Percent_FloatFloat_ReturnValue_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue_8, float CallFunc_Multiply_FloatFloat_ReturnValue_18, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_9, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_1, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_18, float CallFunc_Divide_FloatFloat_ReturnValue_9, float CallFunc_Percent_FloatFloat_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_19, float CallFunc_MapRangeUnclamped_ReturnValue_1, enum class EUDS_Season Temp_byte_Variable_3, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 Temp_int_Variable_1, enum class EUDS_Season K2Node_Select_Default_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<int32>& K2Node_Select_Default_2, int32 CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue, enum class EUDS_Season Temp_byte_Variable_4, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, enum class EUDS_Season Temp_byte_Variable_5, enum class EUDS_Season Temp_byte_Variable_6, enum class EUDS_Season Temp_byte_Variable_7, int32 CallFunc_Subtract_IntInt_ReturnValue_3, enum class EUDS_Season K2Node_Select_Default_3, enum class EUDS_Season K2Node_Select_Default_4, int32 CallFunc_Subtract_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, int32 CallFunc_SelectInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_5, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_6, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue_4, int32 CallFunc_SelectInt_ReturnValue_5, TArray<int32>& K2Node_Select_Default_5, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 CallFunc_Array_Get_Item_2, bool CallFunc_Greater_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "Approximate Real Sun Moon and Stars");

	Params::AUltra_Dynamic_Sky_C_Approximate_Real_Sun_Moon_and_Stars_Params Parms{};

	Parms.Month = Month;
	Parms.Day = Day;
	Parms.Year = Year;
	Parms.Time_of_Day = Time_of_Day;
	Parms.Time_Zone = Time_Zone;
	Parms.Equation_of_Time_Offset = Equation_of_Time_Offset;
	Parms.Equation_of_Time_Curve = Equation_of_Time_Curve;
	Parms.Lunar_Inclination_Cycle = Lunar_Inclination_Cycle;
	Parms.Moon_Center = Moon_Center;
	Parms.Lunar_Time = Lunar_Time;
	Parms.Earth_Center = Earth_Center;
	Parms.Moon_Real_Phase = Moon_Real_Phase;
	Parms.Moon_Alignment = Moon_Alignment;
	Parms.Moon_Direction = Moon_Direction;
	Parms.Celestial_North_Pole = Celestial_North_Pole;
	Parms.Stars_Orbit = Stars_Orbit;
	Parms.Stars_Yaw = Stars_Yaw;
	Parms.Sun_Direction = Sun_Direction;
	Parms.Leap_Year = Leap_Year;
	Parms.UTC_Year = UTC_Year;
	Parms.Local_Year = Local_Year;
	Parms.Zenith_Direction = Zenith_Direction;
	Parms.Axial_Tilt = Axial_Tilt;
	Parms.Viewer_Position_on_Earth = Viewer_Position_on_Earth;
	Parms.Local_Geocoordinate = Local_Geocoordinate;
	Parms.Seasonal_Time = Seasonal_Time;
	Parms.Day_of_Year_Index = Day_of_Year_Index;
	Parms.Local_Month = Local_Month;
	Parms.Local_Day = Local_Day;
	Parms.UTC_Day = UTC_Day;
	Parms.UTC_Month = UTC_Month;
	Parms.UTC_Time_of_Year = UTC_Time_of_Year;
	Parms.UTC_Time_of_Day = UTC_Time_of_Day;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_UtcNow_ReturnValue = CallFunc_UtcNow_ReturnValue;
	Parms.CallFunc_BreakDateTime_Year = CallFunc_BreakDateTime_Year;
	Parms.CallFunc_BreakDateTime_Month = CallFunc_BreakDateTime_Month;
	Parms.CallFunc_BreakDateTime_Day = CallFunc_BreakDateTime_Day;
	Parms.CallFunc_BreakDateTime_Hour = CallFunc_BreakDateTime_Hour;
	Parms.CallFunc_BreakDateTime_Minute = CallFunc_BreakDateTime_Minute;
	Parms.CallFunc_BreakDateTime_Second = CallFunc_BreakDateTime_Second;
	Parms.CallFunc_BreakDateTime_Millisecond = CallFunc_BreakDateTime_Millisecond;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_2 = CallFunc_Divide_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_4 = CallFunc_Conv_IntToFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue = CallFunc_Percent_FloatFloat_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_4 = CallFunc_Add_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue_1 = CallFunc_Percent_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Percent_IntInt_ReturnValue_1 = CallFunc_Percent_IntInt_ReturnValue_1;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue_1 = CallFunc_SelectInt_ReturnValue_1;
	Parms.CallFunc_Percent_IntInt_ReturnValue_2 = CallFunc_Percent_IntInt_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface = K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeRotFromXZ_ReturnValue = CallFunc_MakeRotFromXZ_ReturnValue;
	Parms.CallFunc_GetRightVector_ReturnValue = CallFunc_GetRightVector_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_5 = CallFunc_Add_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Fraction_ReturnValue = CallFunc_Fraction_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_1 = CallFunc_Multiply_VectorVector_ReturnValue_1;
	Parms.CallFunc_Normal_ReturnValue_1 = CallFunc_Normal_ReturnValue_1;
	Parms.CallFunc_Normal_ReturnValue_2 = CallFunc_Normal_ReturnValue_2;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue_1 = CallFunc_Conv_VectorToRotator_ReturnValue_1;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_6 = CallFunc_Add_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_7 = CallFunc_Add_FloatFloat_ReturnValue_7;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue_2 = CallFunc_Percent_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_3 = CallFunc_Divide_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_6 = CallFunc_Multiply_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.CallFunc_LessLess_VectorRotator_ReturnValue = CallFunc_LessLess_VectorRotator_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue_3 = CallFunc_Normal_ReturnValue_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_8 = CallFunc_Add_FloatFloat_ReturnValue_8;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue_1 = CallFunc_GreaterGreater_VectorRotator_ReturnValue_1;
	Parms.CallFunc_Fraction_ReturnValue_1 = CallFunc_Fraction_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_7 = CallFunc_Multiply_FloatFloat_ReturnValue_7;
	Parms.CallFunc_MakeRotator_ReturnValue_2 = CallFunc_MakeRotator_ReturnValue_2;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue_2 = CallFunc_GreaterGreater_VectorRotator_ReturnValue_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_4 = CallFunc_Divide_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_RotateAngleAxis_ReturnValue = CallFunc_RotateAngleAxis_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeDateTime_ReturnValue = CallFunc_MakeDateTime_ReturnValue;
	Parms.CallFunc_MakeDateTime_ReturnValue_1 = CallFunc_MakeDateTime_ReturnValue_1;
	Parms.CallFunc_Subtract_DateTimeDateTime_ReturnValue = CallFunc_Subtract_DateTimeDateTime_ReturnValue;
	Parms.CallFunc_BreakTimespan_Days = CallFunc_BreakTimespan_Days;
	Parms.CallFunc_BreakTimespan_Hours = CallFunc_BreakTimespan_Hours;
	Parms.CallFunc_BreakTimespan_Minutes = CallFunc_BreakTimespan_Minutes;
	Parms.CallFunc_BreakTimespan_Seconds = CallFunc_BreakTimespan_Seconds;
	Parms.CallFunc_BreakTimespan_Milliseconds = CallFunc_BreakTimespan_Milliseconds;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_8 = CallFunc_Multiply_FloatFloat_ReturnValue_8;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_5 = CallFunc_Conv_IntToFloat_ReturnValue_5;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_9 = CallFunc_Add_FloatFloat_ReturnValue_9;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_9 = CallFunc_Multiply_FloatFloat_ReturnValue_9;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_5 = CallFunc_Divide_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_6 = CallFunc_Divide_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_2 = CallFunc_Subtract_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue_3 = CallFunc_MakeRotator_ReturnValue_3;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue_3 = CallFunc_GreaterGreater_VectorRotator_ReturnValue_3;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_10 = CallFunc_Add_FloatFloat_ReturnValue_10;
	Parms.CallFunc_SelectFloat_ReturnValue_3 = CallFunc_SelectFloat_ReturnValue_3;
	Parms.CallFunc_MakeRotator_ReturnValue_4 = CallFunc_MakeRotator_ReturnValue_4;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue_4 = CallFunc_GreaterGreater_VectorRotator_ReturnValue_4;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue_4 = CallFunc_Normal_ReturnValue_4;
	Parms.CallFunc_DegAcos_ReturnValue = CallFunc_DegAcos_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_10 = CallFunc_Multiply_FloatFloat_ReturnValue_10;
	Parms.CallFunc_Cross_VectorVector_ReturnValue = CallFunc_Cross_VectorVector_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_7 = CallFunc_Divide_FloatFloat_ReturnValue_7;
	Parms.CallFunc_Normal_ReturnValue_5 = CallFunc_Normal_ReturnValue_5;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_11 = CallFunc_Multiply_FloatFloat_ReturnValue_11;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_12 = CallFunc_Multiply_FloatFloat_ReturnValue_12;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_11 = CallFunc_Add_FloatFloat_ReturnValue_11;
	Parms.CallFunc_SelectFloat_ReturnValue_4 = CallFunc_SelectFloat_ReturnValue_4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_12 = CallFunc_Add_FloatFloat_ReturnValue_12;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_13 = CallFunc_Add_FloatFloat_ReturnValue_13;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_13 = CallFunc_Multiply_FloatFloat_ReturnValue_13;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_14 = CallFunc_Add_FloatFloat_ReturnValue_14;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_8 = CallFunc_Divide_FloatFloat_ReturnValue_8;
	Parms.CallFunc_Percent_IntInt_ReturnValue_3 = CallFunc_Percent_IntInt_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_15 = CallFunc_Add_FloatFloat_ReturnValue_15;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_14 = CallFunc_Multiply_FloatFloat_ReturnValue_14;
	Parms.CallFunc_MakeRotator_ReturnValue_5 = CallFunc_MakeRotator_ReturnValue_5;
	Parms.CallFunc_LessLess_VectorRotator_ReturnValue_1 = CallFunc_LessLess_VectorRotator_ReturnValue_1;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue_6 = CallFunc_Normal_ReturnValue_6;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue_5 = CallFunc_GreaterGreater_VectorRotator_ReturnValue_5;
	Parms.CallFunc_Normal_ReturnValue_7 = CallFunc_Normal_ReturnValue_7;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_15 = CallFunc_Multiply_FloatFloat_ReturnValue_15;
	Parms.CallFunc_MakeRotator_ReturnValue_6 = CallFunc_MakeRotator_ReturnValue_6;
	Parms.CallFunc_MakeRotator_ReturnValue_7 = CallFunc_MakeRotator_ReturnValue_7;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue_6 = CallFunc_GreaterGreater_VectorRotator_ReturnValue_6;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_16 = CallFunc_Multiply_FloatFloat_ReturnValue_16;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_16 = CallFunc_Add_FloatFloat_ReturnValue_16;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_17 = CallFunc_Add_FloatFloat_ReturnValue_17;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_17 = CallFunc_Multiply_FloatFloat_ReturnValue_17;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue_3 = CallFunc_Percent_FloatFloat_ReturnValue_3;
	Parms.CallFunc_MakeRotator_ReturnValue_8 = CallFunc_MakeRotator_ReturnValue_8;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_18 = CallFunc_Multiply_FloatFloat_ReturnValue_18;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_9 = CallFunc_MakeRotator_ReturnValue_9;
	Parms.CallFunc_ComposeRotators_ReturnValue_1 = CallFunc_ComposeRotators_ReturnValue_1;
	Parms.CallFunc_ComposeRotators_ReturnValue_2 = CallFunc_ComposeRotators_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_18 = CallFunc_Add_FloatFloat_ReturnValue_18;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_9 = CallFunc_Divide_FloatFloat_ReturnValue_9;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue_4 = CallFunc_Percent_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_19 = CallFunc_Add_FloatFloat_ReturnValue_19;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_1 = CallFunc_MapRangeUnclamped_ReturnValue_1;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_4 = CallFunc_Subtract_IntInt_ReturnValue_4;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_SelectInt_ReturnValue_2 = CallFunc_SelectInt_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_5 = CallFunc_Subtract_IntInt_ReturnValue_5;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue_3 = CallFunc_SelectInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_SelectInt_ReturnValue_4 = CallFunc_SelectInt_ReturnValue_4;
	Parms.CallFunc_SelectInt_ReturnValue_5 = CallFunc_SelectInt_ReturnValue_5;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Sun_Vector != nullptr)
		*Sun_Vector = std::move(Parms.Sun_Vector);

	if (Moon_Vector != nullptr)
		*Moon_Vector = std::move(Parms.Moon_Vector);

	if (Real_Phase != nullptr)
		*Real_Phase = Parms.Real_Phase;

	if (Phase_Alignment != nullptr)
		*Phase_Alignment = std::move(Parms.Phase_Alignment);

	if (Celestial_Orbit != nullptr)
		*Celestial_Orbit = Parms.Celestial_Orbit;

	if (Celestial_Yaw != nullptr)
		*Celestial_Yaw = std::move(Parms.Celestial_Yaw);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Date and Time
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                   Date_Time                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Year                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Month                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Day                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Hour                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Minute                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Second                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Millisecond                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Sky_C::Set_Date_and_Time(const struct FDateTime& Date_Time, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "Set Date and Time");

	Params::AUltra_Dynamic_Sky_C_Set_Date_and_Time_Params Parms{};

	Parms.Date_Time = Date_Time;
	Parms.CallFunc_BreakDateTime_Year = CallFunc_BreakDateTime_Year;
	Parms.CallFunc_BreakDateTime_Month = CallFunc_BreakDateTime_Month;
	Parms.CallFunc_BreakDateTime_Day = CallFunc_BreakDateTime_Day;
	Parms.CallFunc_BreakDateTime_Hour = CallFunc_BreakDateTime_Hour;
	Parms.CallFunc_BreakDateTime_Minute = CallFunc_BreakDateTime_Minute;
	Parms.CallFunc_BreakDateTime_Second = CallFunc_BreakDateTime_Second;
	Parms.CallFunc_BreakDateTime_Millisecond = CallFunc_BreakDateTime_Millisecond;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Directional Lights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Move_Static_Lights                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult_1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AUltra_Dynamic_Sky_C::Update_Directional_Lights(bool Move_Static_Lights, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "Update Directional Lights");

	Params::AUltra_Dynamic_Sky_C_Update_Directional_Lights_Params Parms{};

	Parms.Move_Static_Lights = Move_Static_Lights;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_1 = CallFunc_K2_GetComponentRotation_ReturnValue_1;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult_1 = CallFunc_K2_SetWorldRotation_SweepHitResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Recapture_SkyLight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUltra_Dynamic_Sky_C::Recapture_SkyLight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "Recapture_SkyLight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Change Settings Based on Platform and Scalability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Requires_Updates                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Effects_Quality                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUDS_SkyMode            CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Sky_C::Change_Settings_Based_on_Platform_and_Scalability(bool Requires_Updates, int32 Effects_Quality, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, enum class EUDS_SkyMode CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "Change Settings Based on Platform and Scalability");

	Params::AUltra_Dynamic_Sky_C_Change_Settings_Based_on_Platform_and_Scalability_Params Parms{};

	Parms.Requires_Updates = Requires_Updates;
	Parms.Effects_Quality = Effects_Quality;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue = CallFunc_GetVisualEffectQuality_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Variables Controlled by Weather
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IUltra_Dynamic_Weather_Interface_C>K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IUltra_Dynamic_Weather_Interface_C>K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface_1           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Get_Intended_Cloud_Direction_Intended_Cloud_Direction   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUltra_Dynamic_Weather_Interface_C>K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface_2           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Get_Intended_Cloud_Speed_Intended_Cloud_Speed           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUltra_Dynamic_Sky_C::Update_Variables_Controlled_by_Weather(TScriptInterface<class IUltra_Dynamic_Weather_Interface_C> K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IUltra_Dynamic_Weather_Interface_C> K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_Get_Intended_Cloud_Direction_Intended_Cloud_Direction, TScriptInterface<class IUltra_Dynamic_Weather_Interface_C> K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface_2, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_Get_Intended_Cloud_Speed_Intended_Cloud_Speed, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "Update Variables Controlled by Weather");

	Params::AUltra_Dynamic_Sky_C_Update_Variables_Controlled_by_Weather_Params Parms{};

	Parms.K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface = K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface_1 = K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Get_Intended_Cloud_Direction_Intended_Cloud_Direction = CallFunc_Get_Intended_Cloud_Direction_Intended_Cloud_Direction;
	Parms.K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface_2 = K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Get_Intended_Cloud_Speed_Intended_Cloud_Speed = CallFunc_Get_Intended_Cloud_Speed_Intended_Cloud_Speed;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue_1 = CallFunc_NotEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Construction Script Function
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Run_By_Counterpart                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue_1                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_SelectString_ReturnValue_2                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue_3                              (ZeroConstructor, HasGetValueTypeHash)
// TArray<enum class EUDS_SkyMode>    K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsStandalone_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPostProcessSettings        K2Node_MakeStruct_PostProcessSettings                            (None)
// class UMaterialInterface*          Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_12                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_13                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkyLightComponent*          K2Node_Select_Default_4                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkyLightComponent*          K2Node_Select_Default_5                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EUDS_SkyMode>    K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_SelectString_ReturnValue_4                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_4             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_8                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_9                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_5             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_6             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_7             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Sky_C::Construction_Script_Function(bool Run_By_Counterpart, class UMaterialInterface* Temp_object_Variable, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class UMaterialInterface* Temp_object_Variable_3, bool Temp_bool_Variable_3, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, const class FString& CallFunc_SelectString_ReturnValue_2, const class FString& CallFunc_SelectString_ReturnValue_3, TArray<enum class EUDS_SkyMode>& K2Node_MakeArray_Array, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_IsStandalone_ReturnValue, bool Temp_bool_Variable_4, class UMaterialInterface* Temp_object_Variable_4, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_5, class UMaterialInterface* Temp_object_Variable_5, bool CallFunc_NotEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool Temp_bool_Variable_5, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue_9, const struct FPostProcessSettings& K2Node_MakeStruct_PostProcessSettings, class UMaterialInterface* Temp_object_Variable_6, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, class UMaterialInterface* Temp_object_Variable_7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool Temp_bool_Variable_6, class UMaterialInterface* K2Node_Select_Default, class UMaterialInterface* K2Node_Select_Default_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, class UMaterialInterface* Temp_object_Variable_8, bool CallFunc_NotEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_10, bool CallFunc_BooleanAND_ReturnValue_11, bool CallFunc_BooleanAND_ReturnValue_12, float CallFunc_Subtract_FloatFloat_ReturnValue, class UMaterialInterface* Temp_object_Variable_9, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_9, bool Temp_bool_Variable_7, class UMaterialInterface* K2Node_Select_Default_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_10, class UMaterialInterface* K2Node_Select_Default_3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_11, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool Temp_bool_Variable_8, bool CallFunc_BooleanAND_ReturnValue_13, class USkyLightComponent* K2Node_Select_Default_4, class USkyLightComponent* K2Node_Select_Default_5, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_IsValid_ReturnValue, TArray<enum class EUDS_SkyMode>& K2Node_MakeArray_Array_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_1, const class FString& CallFunc_SelectString_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class UMaterialInstance* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool Temp_bool_Variable_9, class UMaterialInterface* K2Node_Select_Default_6, class UMaterialInterface* K2Node_Select_Default_7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_4, class UMaterialInterface* K2Node_Select_Default_8, class UMaterialInterface* K2Node_Select_Default_9, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "Construction Script Function");

	Params::AUltra_Dynamic_Sky_C_Construction_Script_Function_Params Parms{};

	Parms.Run_By_Counterpart = Run_By_Counterpart;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue_1 = CallFunc_SelectString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_SelectString_ReturnValue_2 = CallFunc_SelectString_ReturnValue_2;
	Parms.CallFunc_SelectString_ReturnValue_3 = CallFunc_SelectString_ReturnValue_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_2 = CallFunc_NotEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_3 = CallFunc_NotEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_IsStandalone_ReturnValue = CallFunc_IsStandalone_ReturnValue;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_4 = CallFunc_NotEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.CallFunc_BooleanAND_ReturnValue_7 = CallFunc_BooleanAND_ReturnValue_7;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_8 = CallFunc_BooleanAND_ReturnValue_8;
	Parms.CallFunc_BooleanAND_ReturnValue_9 = CallFunc_BooleanAND_ReturnValue_9;
	Parms.K2Node_MakeStruct_PostProcessSettings = K2Node_MakeStruct_PostProcessSettings;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = CallFunc_EqualEqual_ByteByte_ReturnValue_6;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = CallFunc_EqualEqual_ByteByte_ReturnValue_7;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_5 = CallFunc_NotEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_10 = CallFunc_BooleanAND_ReturnValue_10;
	Parms.CallFunc_BooleanAND_ReturnValue_11 = CallFunc_BooleanAND_ReturnValue_11;
	Parms.CallFunc_BooleanAND_ReturnValue_12 = CallFunc_BooleanAND_ReturnValue_12;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_8 = CallFunc_EqualEqual_ByteByte_ReturnValue_8;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_9 = CallFunc_EqualEqual_ByteByte_ReturnValue_9;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_10 = CallFunc_EqualEqual_ByteByte_ReturnValue_10;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_11 = CallFunc_EqualEqual_ByteByte_ReturnValue_11;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.CallFunc_BooleanAND_ReturnValue_13 = CallFunc_BooleanAND_ReturnValue_13;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_SelectString_ReturnValue_4 = CallFunc_SelectString_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_4 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_4;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_5 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_5;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_6 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_7 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Cloud Timing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_9                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_ClampVectorSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_ClampVectorSize_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_ClampVectorSize_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_10                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_11                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_13                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_8                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_9                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_13                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_12                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_13                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_14                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_6                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_14                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_15                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_13                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_14                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_15                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_16                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_16                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_17                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_18                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_10                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_17                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_18                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_15                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_19                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_19                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_7                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_16                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_8                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_20                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_21                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_20                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_21                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Sky_C::Set_Cloud_Timing(float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Multiply_IntFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_7, float CallFunc_SelectFloat_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_5, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Multiply_IntFloat_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_BooleanAND_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue_9, float CallFunc_Multiply_IntFloat_ReturnValue_4, float CallFunc_SelectFloat_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_6, float CallFunc_Add_FloatFloat_ReturnValue_7, float CallFunc_Divide_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_8, float CallFunc_Add_FloatFloat_ReturnValue_9, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_4, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FVector& CallFunc_ClampVectorSize_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_10, float CallFunc_SelectFloat_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_11, bool CallFunc_BooleanAND_ReturnValue_10, bool CallFunc_BooleanAND_ReturnValue_11, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_6, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const struct FVector& CallFunc_ClampVectorSize_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_7, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue_8, const struct FVector& CallFunc_ClampVectorSize_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_SelectFloat_ReturnValue_9, float CallFunc_Multiply_IntFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_6, float CallFunc_Add_FloatFloat_ReturnValue_10, float CallFunc_SelectFloat_ReturnValue_10, float CallFunc_Add_FloatFloat_ReturnValue_11, float CallFunc_Multiply_FloatFloat_ReturnValue_7, float CallFunc_Divide_FloatFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_8, float CallFunc_SelectFloat_ReturnValue_11, float CallFunc_Multiply_FloatFloat_ReturnValue_9, float CallFunc_SelectFloat_ReturnValue_12, float CallFunc_Multiply_FloatFloat_ReturnValue_10, float CallFunc_SelectFloat_ReturnValue_13, float CallFunc_Divide_FloatFloat_ReturnValue_6, float CallFunc_Divide_FloatFloat_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue_11, float CallFunc_Divide_FloatFloat_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_12, float CallFunc_Divide_FloatFloat_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_13, float CallFunc_Multiply_FloatFloat_ReturnValue_12, bool CallFunc_BooleanAND_ReturnValue_12, bool CallFunc_BooleanAND_ReturnValue_13, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_14, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_5, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_6, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_2, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_1, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_3, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_3, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_13, float CallFunc_Multiply_FloatFloat_ReturnValue_14, float CallFunc_Multiply_IntFloat_ReturnValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue_15, float CallFunc_Add_FloatFloat_ReturnValue_12, float CallFunc_Add_FloatFloat_ReturnValue_13, float CallFunc_Add_FloatFloat_ReturnValue_14, float CallFunc_Add_FloatFloat_ReturnValue_15, float CallFunc_Multiply_FloatFloat_ReturnValue_16, float CallFunc_Add_FloatFloat_ReturnValue_16, float CallFunc_Add_FloatFloat_ReturnValue_17, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_18, float CallFunc_Divide_FloatFloat_ReturnValue_10, float CallFunc_Multiply_FloatFloat_ReturnValue_17, float CallFunc_Multiply_FloatFloat_ReturnValue_18, float CallFunc_SelectFloat_ReturnValue_15, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_19, float CallFunc_Multiply_FloatFloat_ReturnValue_19, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_7, float CallFunc_SelectFloat_ReturnValue_16, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_8, float CallFunc_Add_FloatFloat_ReturnValue_20, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_21, float CallFunc_Multiply_FloatFloat_ReturnValue_20, float CallFunc_Multiply_FloatFloat_ReturnValue_21)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "Set Cloud Timing");

	Params::AUltra_Dynamic_Sky_C_Set_Cloud_Timing_Params Parms{};

	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_2 = CallFunc_Multiply_IntFloat_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.CallFunc_BooleanAND_ReturnValue_7 = CallFunc_BooleanAND_ReturnValue_7;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue_3 = CallFunc_SelectFloat_ReturnValue_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_4 = CallFunc_Add_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_5 = CallFunc_Add_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_2 = CallFunc_Divide_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_3 = CallFunc_Multiply_IntFloat_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_8 = CallFunc_BooleanOR_ReturnValue_8;
	Parms.CallFunc_BooleanOR_ReturnValue_9 = CallFunc_BooleanOR_ReturnValue_9;
	Parms.CallFunc_BooleanAND_ReturnValue_8 = CallFunc_BooleanAND_ReturnValue_8;
	Parms.CallFunc_BooleanAND_ReturnValue_9 = CallFunc_BooleanAND_ReturnValue_9;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_4 = CallFunc_Multiply_IntFloat_ReturnValue_4;
	Parms.CallFunc_SelectFloat_ReturnValue_4 = CallFunc_SelectFloat_ReturnValue_4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_6 = CallFunc_Add_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_7 = CallFunc_Add_FloatFloat_ReturnValue_7;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_3 = CallFunc_Divide_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_8 = CallFunc_Add_FloatFloat_ReturnValue_8;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_9 = CallFunc_Add_FloatFloat_ReturnValue_9;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_4 = CallFunc_Divide_FloatFloat_ReturnValue_4;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_ClampVectorSize_ReturnValue = CallFunc_ClampVectorSize_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_10 = CallFunc_BooleanOR_ReturnValue_10;
	Parms.CallFunc_SelectFloat_ReturnValue_5 = CallFunc_SelectFloat_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_11 = CallFunc_BooleanOR_ReturnValue_11;
	Parms.CallFunc_BooleanAND_ReturnValue_10 = CallFunc_BooleanAND_ReturnValue_10;
	Parms.CallFunc_BooleanAND_ReturnValue_11 = CallFunc_BooleanAND_ReturnValue_11;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_6 = CallFunc_SelectFloat_ReturnValue_6;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue_1 = CallFunc_GreaterGreater_VectorRotator_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_ClampVectorSize_ReturnValue_1 = CallFunc_ClampVectorSize_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_7 = CallFunc_SelectFloat_ReturnValue_7;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2 = CallFunc_Multiply_VectorFloat_ReturnValue_2;
	Parms.CallFunc_MakeRotator_ReturnValue_2 = CallFunc_MakeRotator_ReturnValue_2;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue_2 = CallFunc_GreaterGreater_VectorRotator_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue_8 = CallFunc_SelectFloat_ReturnValue_8;
	Parms.CallFunc_ClampVectorSize_ReturnValue_2 = CallFunc_ClampVectorSize_ReturnValue_2;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_3 = CallFunc_Multiply_VectorFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_4 = CallFunc_Multiply_VectorFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.CallFunc_SelectFloat_ReturnValue_9 = CallFunc_SelectFloat_ReturnValue_9;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_5 = CallFunc_Multiply_IntFloat_ReturnValue_5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_6 = CallFunc_Multiply_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_10 = CallFunc_Add_FloatFloat_ReturnValue_10;
	Parms.CallFunc_SelectFloat_ReturnValue_10 = CallFunc_SelectFloat_ReturnValue_10;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_11 = CallFunc_Add_FloatFloat_ReturnValue_11;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_7 = CallFunc_Multiply_FloatFloat_ReturnValue_7;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_5 = CallFunc_Divide_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_8 = CallFunc_Multiply_FloatFloat_ReturnValue_8;
	Parms.CallFunc_SelectFloat_ReturnValue_11 = CallFunc_SelectFloat_ReturnValue_11;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_9 = CallFunc_Multiply_FloatFloat_ReturnValue_9;
	Parms.CallFunc_SelectFloat_ReturnValue_12 = CallFunc_SelectFloat_ReturnValue_12;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_10 = CallFunc_Multiply_FloatFloat_ReturnValue_10;
	Parms.CallFunc_SelectFloat_ReturnValue_13 = CallFunc_SelectFloat_ReturnValue_13;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_6 = CallFunc_Divide_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_7 = CallFunc_Divide_FloatFloat_ReturnValue_7;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_11 = CallFunc_Multiply_FloatFloat_ReturnValue_11;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_8 = CallFunc_Divide_FloatFloat_ReturnValue_8;
	Parms.CallFunc_BooleanOR_ReturnValue_12 = CallFunc_BooleanOR_ReturnValue_12;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_9 = CallFunc_Divide_FloatFloat_ReturnValue_9;
	Parms.CallFunc_BooleanOR_ReturnValue_13 = CallFunc_BooleanOR_ReturnValue_13;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_12 = CallFunc_Multiply_FloatFloat_ReturnValue_12;
	Parms.CallFunc_BooleanAND_ReturnValue_12 = CallFunc_BooleanAND_ReturnValue_12;
	Parms.CallFunc_BooleanAND_ReturnValue_13 = CallFunc_BooleanAND_ReturnValue_13;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_14 = CallFunc_SelectFloat_ReturnValue_14;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue = CallFunc_Multiply_LinearColorFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_5 = CallFunc_Multiply_VectorFloat_ReturnValue_5;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_6 = CallFunc_Multiply_VectorFloat_ReturnValue_6;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_1 = CallFunc_Conv_VectorToLinearColor_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_2 = CallFunc_Conv_VectorToLinearColor_ReturnValue_2;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_1 = CallFunc_Multiply_LinearColorFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_2 = CallFunc_Multiply_LinearColorFloat_ReturnValue_2;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_3 = CallFunc_Conv_VectorToLinearColor_ReturnValue_3;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_3 = CallFunc_Multiply_LinearColorFloat_ReturnValue_3;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_13 = CallFunc_Multiply_FloatFloat_ReturnValue_13;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_14 = CallFunc_Multiply_FloatFloat_ReturnValue_14;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_6 = CallFunc_Multiply_IntFloat_ReturnValue_6;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_15 = CallFunc_Multiply_FloatFloat_ReturnValue_15;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_12 = CallFunc_Add_FloatFloat_ReturnValue_12;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_13 = CallFunc_Add_FloatFloat_ReturnValue_13;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_14 = CallFunc_Add_FloatFloat_ReturnValue_14;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_15 = CallFunc_Add_FloatFloat_ReturnValue_15;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_16 = CallFunc_Multiply_FloatFloat_ReturnValue_16;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_16 = CallFunc_Add_FloatFloat_ReturnValue_16;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_17 = CallFunc_Add_FloatFloat_ReturnValue_17;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_18 = CallFunc_Add_FloatFloat_ReturnValue_18;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_10 = CallFunc_Divide_FloatFloat_ReturnValue_10;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_17 = CallFunc_Multiply_FloatFloat_ReturnValue_17;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_18 = CallFunc_Multiply_FloatFloat_ReturnValue_18;
	Parms.CallFunc_SelectFloat_ReturnValue_15 = CallFunc_SelectFloat_ReturnValue_15;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_19 = CallFunc_Add_FloatFloat_ReturnValue_19;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_19 = CallFunc_Multiply_FloatFloat_ReturnValue_19;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_7 = CallFunc_Multiply_VectorFloat_ReturnValue_7;
	Parms.CallFunc_SelectFloat_ReturnValue_16 = CallFunc_SelectFloat_ReturnValue_16;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = CallFunc_Add_VectorVector_ReturnValue_3;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_8 = CallFunc_Multiply_VectorFloat_ReturnValue_8;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_20 = CallFunc_Add_FloatFloat_ReturnValue_20;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_21 = CallFunc_Add_FloatFloat_ReturnValue_21;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_20 = CallFunc_Multiply_FloatFloat_ReturnValue_20;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_21 = CallFunc_Multiply_FloatFloat_ReturnValue_21;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Static Variables
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                    Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture*                    Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_NoiseType          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_NoiseType          Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_10                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_11                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_12                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_13                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_14                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_NoiseType          Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_SelectString_ReturnValue_1                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUDS_NoiseType          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_VolRT_Mode         Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_Select_Default_8                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture*                    K2Node_Select_Default_9                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_Select_Default_10                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)

void AUltra_Dynamic_Sky_C::Update_Static_Variables(class UTexture* Temp_object_Variable, bool Temp_bool_Variable, class UTexture* Temp_object_Variable_1, bool Temp_bool_Variable_1, class UMaterialInterface* Temp_object_Variable_2, bool Temp_bool_Variable_2, class UMaterialInterface* Temp_object_Variable_3, bool Temp_bool_Variable_3, float Temp_float_Variable, float Temp_float_Variable_1, enum class EUDS_NoiseType Temp_byte_Variable, class UTexture* Temp_object_Variable_4, class UTexture* Temp_object_Variable_5, class UTexture* Temp_object_Variable_6, class UTexture* Temp_object_Variable_7, enum class EUDS_NoiseType Temp_byte_Variable_1, class UTexture* Temp_object_Variable_8, class UTexture* Temp_object_Variable_9, class UTexture* Temp_object_Variable_10, class UTexture* Temp_object_Variable_11, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UTexture* Temp_object_Variable_12, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_2, float CallFunc_FClamp_ReturnValue, float CallFunc_SelectFloat_ReturnValue, class UTexture* Temp_object_Variable_13, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_2, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UTexture* Temp_object_Variable_14, enum class EUDS_NoiseType Temp_byte_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable_4, float CallFunc_Multiply_FloatFloat_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const class FString& CallFunc_SelectString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_5, bool Temp_bool_Variable_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, enum class EUDS_NoiseType K2Node_Select_Default, class UTexture* K2Node_Select_Default_1, class UTexture* K2Node_Select_Default_2, float CallFunc_Multiply_FloatFloat_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_1, int32 Temp_int_Variable, class UTexture* K2Node_Select_Default_3, const struct FVector& CallFunc_MakeVector_ReturnValue_1, class UMaterialInterface* K2Node_Select_Default_4, int32 Temp_int_Variable_1, class UMaterialInterface* K2Node_Select_Default_5, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, enum class EUDS_VolRT_Mode Temp_byte_Variable_3, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32 K2Node_Select_Default_6, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, float K2Node_Select_Default_7, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, class UTexture* K2Node_Select_Default_8, float CallFunc_MapRangeUnclamped_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue_1, bool Temp_bool_Variable_6, class UTexture* K2Node_Select_Default_9, float CallFunc_Multiply_FloatFloat_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue_8, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_9, float CallFunc_Multiply_FloatFloat_ReturnValue_10, float CallFunc_Multiply_FloatFloat_ReturnValue_11, float CallFunc_Multiply_FloatFloat_ReturnValue_12, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_3, class UTexture* K2Node_Select_Default_10, float CallFunc_Multiply_FloatFloat_ReturnValue_13, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "Update Static Variables");

	Params::AUltra_Dynamic_Sky_C_Update_Static_Variables_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.Temp_object_Variable_10 = Temp_object_Variable_10;
	Parms.Temp_object_Variable_11 = Temp_object_Variable_11;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.Temp_object_Variable_12 = Temp_object_Variable_12;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_1 = CallFunc_Conv_VectorToLinearColor_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_2 = CallFunc_Conv_VectorToLinearColor_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.Temp_object_Variable_13 = Temp_object_Variable_13;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_object_Variable_14 = Temp_object_Variable_14;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_SelectString_ReturnValue_1 = CallFunc_SelectString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue_3 = CallFunc_SelectFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_6 = CallFunc_Multiply_FloatFloat_ReturnValue_6;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_2 = CallFunc_Divide_FloatFloat_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_1 = CallFunc_MapRangeUnclamped_ReturnValue_1;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_7 = CallFunc_Multiply_FloatFloat_ReturnValue_7;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_8 = CallFunc_Multiply_FloatFloat_ReturnValue_8;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_9 = CallFunc_Multiply_FloatFloat_ReturnValue_9;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_10 = CallFunc_Multiply_FloatFloat_ReturnValue_10;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_11 = CallFunc_Multiply_FloatFloat_ReturnValue_11;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_12 = CallFunc_Multiply_FloatFloat_ReturnValue_12;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2 = CallFunc_Multiply_VectorFloat_ReturnValue_2;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_3 = CallFunc_Conv_VectorToLinearColor_ReturnValue_3;
	Parms.K2Node_Select_Default_10 = K2Node_Select_Default_10;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_13 = CallFunc_Multiply_FloatFloat_ReturnValue_13;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Time of Day using Time Code
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimecode                   Time_Code                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Sky_C::Set_Time_of_Day_using_Time_Code(const struct FTimecode& Time_Code, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "Set Time of Day using Time Code");

	Params::AUltra_Dynamic_Sky_C_Set_Time_of_Day_using_Time_Code_Params Parms{};

	Parms.Time_Code = Time_Code;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_4 = CallFunc_Conv_IntToFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Time of Day in Real Time Format
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimecode                   Time                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Fraction_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Fraction_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Fraction_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimecode                   K2Node_MakeStruct_Timecode                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Sky_C::Get_Time_of_Day_in_Real_Time_Format(struct FTimecode* Time, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, float CallFunc_Fraction_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue_1, float CallFunc_Fraction_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue_2, float CallFunc_Fraction_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue_3, const struct FTimecode& K2Node_MakeStruct_Timecode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "Get Time of Day in Real Time Format");

	Params::AUltra_Dynamic_Sky_C_Get_Time_of_Day_in_Real_Time_Format_Params Parms{};

	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Fraction_ReturnValue = CallFunc_Fraction_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue_1 = CallFunc_FFloor_ReturnValue_1;
	Parms.CallFunc_Fraction_ReturnValue_1 = CallFunc_Fraction_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FFloor_ReturnValue_2 = CallFunc_FFloor_ReturnValue_2;
	Parms.CallFunc_Fraction_ReturnValue_2 = CallFunc_Fraction_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_FFloor_ReturnValue_3 = CallFunc_FFloor_ReturnValue_3;
	Parms.K2Node_MakeStruct_Timecode = K2Node_MakeStruct_Timecode;

	UObject::ProcessEvent(Func, &Parms);

	if (Time != nullptr)
		*Time = std::move(Parms.Time);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Active Variables
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Sun_Disk_Color_Current                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Cloud_Dark_Color_Current                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Cloud_Light_Color_Current                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Zenith_Base_Color_Current                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Horizon_Base_Color_Current                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDS_SkyMode>    K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_6                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_6                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_6                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_7                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_7                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_7                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_8                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_8                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_8                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_8                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDS_SkyMode>    K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// float                              CallFunc_MapRangeClamped_ReturnValue_11                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_9                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_9                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_9                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_9                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_12                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_10                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_10                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_10                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_10                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_13                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDS_SkyMode>    K2Node_MakeArray_Array_2                                         (ConstParm, ReferenceParm)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_11                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_11                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_11                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_11                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_12                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_14                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_12                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_12                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_12                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_15                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDS_SkyMode>    K2Node_MakeArray_Array_3                                         (ConstParm, ReferenceParm)
// float                              CallFunc_GetFloatValue_ReturnValue_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_13                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_13                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_13                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_13                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_16                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_14                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_14                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_14                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_14                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_17                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_10                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDS_SkyMode>    K2Node_MakeArray_Array_4                                         (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_15                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_15                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_15                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_15                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_18                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_19                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_11                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDS_SkyMode>    K2Node_MakeArray_Array_5                                         (ConstParm, ReferenceParm)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDS_SkyMode>    K2Node_MakeArray_Array_6                                         (ConstParm, ReferenceParm)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDS_SkyMode>    K2Node_MakeArray_Array_7                                         (ConstParm, ReferenceParm)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_20                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_21                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_6               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_22                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EUDS_SkyMode>    K2Node_MakeArray_Array_8                                         (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_16                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_16                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_16                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_16                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_23                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_7               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_7                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_24                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_25                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue_26                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_17                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_17                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_17                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_17                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_27                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColor_Desaturated_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_28                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_8               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_18                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_18                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_18                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_18                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_29                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_30                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_9               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDS_SkyMode>    K2Node_MakeArray_Array_9                                         (ConstParm, ReferenceParm)
// float                              CallFunc_MapRangeClamped_ReturnValue_31                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_32                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_33                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_34                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_35                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_9                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_36                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_37                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_14                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_38                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_39                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorLinearColor_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue_6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_40                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_41                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_15                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_42                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_16                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_17                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_18                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_43                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue_7                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_10              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_44                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_11              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_45                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_8                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_46                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_19                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_20                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_47                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_21                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_12              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_22                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_48                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_23                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_24                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_19                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_25                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_19                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_19                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_19                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_49                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_13                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDS_SkyMode>    K2Node_MakeArray_Array_10                                        (ConstParm, ReferenceParm)
// float                              CallFunc_Lerp_ReturnValue_9                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_10                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue_50                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_26                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_51                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_9                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_13              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_52                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_27                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_28                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_29                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_13                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_30                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_10                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_53                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_8                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_14              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_54                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_31                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_32                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_14                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_15                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_33                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_11                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue_8                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_34                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_9                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_15              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_20                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_20                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_20                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_20                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_10                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_55                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_16                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_11                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_21                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_21                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_21                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_21                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_56                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_57                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_16              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_58                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_59                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_17              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_60                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_35                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_36                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_17                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_18                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_37                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_14                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_13                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_61                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_38                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_14                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_62                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_39                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_14                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_19                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_40                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_12                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDS_SkyMode>    K2Node_MakeArray_Array_11                                        (ConstParm, ReferenceParm)
// float                              CallFunc_GetFloatValue_ReturnValue_15                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_13                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_11                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_20                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDS_SkyMode>    K2Node_MakeArray_Array_12                                        (ConstParm, ReferenceParm)
// TArray<enum class EUDS_SkyMode>    K2Node_MakeArray_Array_13                                        (ConstParm, ReferenceParm)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_12                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_21                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_13                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EUDS_SkyMode>    K2Node_MakeArray_Array_14                                        (ConstParm, ReferenceParm)
// float                              CallFunc_SelectFloat_ReturnValue_22                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_63                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_41                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_64                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_22                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_22                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_22                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_22                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_65                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatValue_ReturnValue_16                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_14                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue_66                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_67                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_23                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_23                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_23                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_23                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_23                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_68                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_24                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetClampedLinearColorValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_24                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_24                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_24                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_42                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_69                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_43                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_5                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_15                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorLinearColor_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue_9                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_70                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_17                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_18              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_44                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_45                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_6                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_71                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_25                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_72                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_25                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_25                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_25                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_46                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_20                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_14                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_47                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_10                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_24                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_48                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_49                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_15                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_50                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_16                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_26                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_11                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_26                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_26                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_26                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_51                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_73                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_52                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_53                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_27                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_27                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_27                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_27                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_19              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_74                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_12                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_54                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_28                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_28                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_28                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_28                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_75                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_76                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_55                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_56                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_17                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue_10                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_13                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_20              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_77                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_21                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_16                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_17                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_25                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_78                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_18                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_57                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_58                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_59                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_26                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_79                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_19                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_80                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_21              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_29                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_81                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_29                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_29                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_29                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_60                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_61                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_20                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_22                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDS_SkyMode>    K2Node_MakeArray_Array_15                                        (ConstParm, ReferenceParm)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_62                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_18                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_82                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue_11                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_14                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_22              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_21                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_23                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_63                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDS_SkyMode>    K2Node_MakeArray_Array_16                                        (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue_15                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_30                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_27                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_30                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_30                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_30                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_83                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_31                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_15                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_31                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_31                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_31                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_84                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_85                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_64                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_28                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_16                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_65                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_29                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue_22                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_30                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_31                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_32                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_86                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_66                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_18                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_17                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_87                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_32                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_67                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_32                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_32                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_32                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_88                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_19                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_68                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_15                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue_24                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_23              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_25                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_33                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_19                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_18                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_69                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_89                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_20                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_70                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_23                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_16                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_21                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_90                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_71                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_24                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_25                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_72                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_73                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_91                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_34                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_24              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_7                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_33                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_33                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_33                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_33                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_34                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_22                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_34                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_34                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_34                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_92                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_74                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_35                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_75                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_36                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_93                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_76                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_37                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetClampedLinearColorValue_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetClampedLinearColorValue_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_26                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_77                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_19                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_78                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_38                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_17                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_26                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_27                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_25              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_27                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_94                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_95                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_26              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_23                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_28                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_39                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_28                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetClampedLinearColorValue_ReturnValue_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_96                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_27              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_97                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_98                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_28              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_99                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_79                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetClampedLinearColorValue_ReturnValue_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_29                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_80                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_100                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_81                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_29              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_35                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_35                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_35                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_35                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_82                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_101                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_29                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_83                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_30                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_30                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_84                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_85                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_31                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_20                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_36                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_36                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_36                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_36                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_20                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_86                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_31                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_21                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDS_SkyMode>    K2Node_MakeArray_Array_17                                        (ConstParm, ReferenceParm)
// struct FLinearColor                CallFunc_GetClampedLinearColorValue_ReturnValue_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_102                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_8                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_30              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_103                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_16                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue_104                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_87                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_88                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_89                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_37                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_38                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_37                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_37                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_37                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_38                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_38                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_38                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_90                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_105                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_32                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_24                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_39                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_32                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_39                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_39                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_39                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDS_SkyMode>    K2Node_MakeArray_Array_18                                        (ConstParm, ReferenceParm)
// float                              CallFunc_MapRangeClamped_ReturnValue_106                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_17                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue_33                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_40                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_41                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDS_SkyMode>    K2Node_MakeArray_Array_19                                        (ConstParm, ReferenceParm)
// float                              CallFunc_Lerp_ReturnValue_34                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_91                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_42                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_35                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_40                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_92                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_40                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_40                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_40                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_36                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_93                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_94                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_33                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_95                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_34                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_96                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_37                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_38                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_18                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_43                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_22                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_39                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue_12                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_40                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_18                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_107                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_31              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDS_SkyMode>    K2Node_MakeArray_Array_20                                        (ConstParm, ReferenceParm)
// float                              CallFunc_FClamp_ReturnValue_35                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_19                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue_41                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_44                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_45                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_97                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_42                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_21                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_41                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_41                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_41                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_41                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_23                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_108                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDS_SkyMode>    K2Node_MakeArray_Array_21                                        (ConstParm, ReferenceParm)
// float                              CallFunc_GetFloatValue_ReturnValue_25                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_109                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_98                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_22                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_99                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_46                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetClampedLinearColorValue_ReturnValue_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_43                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_110                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_20                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_32              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_47                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_100                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_44                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_101                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_102                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_23                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColor_Desaturated_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDS_SkyMode>    K2Node_MakeArray_Array_22                                        (ConstParm, ReferenceParm)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_9                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_10                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_21                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_48                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_45                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_42                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_111                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_42                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_42                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_42                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_33              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_103                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_112                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_36                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_104                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_46                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_37                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_47                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_105                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_48                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_106                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_49                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDS_SkyMode>    K2Node_MakeArray_Array_23                                        (ConstParm, ReferenceParm)
// float                              CallFunc_MapRangeClamped_ReturnValue_113                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_22                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_34              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_114                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_107                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EUDS_SkyMode>    K2Node_MakeArray_Array_24                                        (ConstParm, ReferenceParm)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_23                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_24                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_115                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_43                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_43                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_43                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_43                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_116                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_35              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_108                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_109                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_11                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColor_Desaturated_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_117                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_36              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_118                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_44                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_44                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_44                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_44                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_119                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_45                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X_45                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_45                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_45                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetClampedLinearColorValue_ReturnValue_7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDS_SkyMode>    K2Node_MakeArray_Array_25                                        (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue_24                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_49                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_50                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_46                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_51                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_46                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_46                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_46                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_120                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_110                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_37              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_38                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_111                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_26                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_12                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_112                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorLinearColor_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_50                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_113                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_121                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_47                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_24                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_47                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_47                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_47                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_13                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_122                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_123                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_14                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_51                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_124                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_114                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_38              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_115                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_116                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_48                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_117                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_48                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_48                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_48                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_52                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_125                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_25                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_49                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue_13                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_49                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_49                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_49                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_19                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_118                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_39              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_119                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_39                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_40                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_52                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_53                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_27                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_126                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_53                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_120                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_25                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_127                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_128                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_121                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_122                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_123                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_54                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_26                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_124                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_27                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_125                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_126                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_127                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_128                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetClampedLinearColorValue_ReturnValue_8                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_55                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetClampedLinearColorValue_ReturnValue_9                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_129                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetClampedLinearColorValue_ReturnValue_10               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_56                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_28                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_15                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_129                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_16                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColor_Desaturated_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_29                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDS_SkyMode>    K2Node_MakeArray_Array_26                                        (ConstParm, ReferenceParm)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_17                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColor_Desaturated_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_18                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_19                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColor_Desaturated_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorLinearColor_ReturnValue_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_25                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_57                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_20                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_21                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue_130                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_54                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_130                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_58                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_55                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_131                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_59                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_56                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_132                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_57                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_133                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_134                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_135                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_22                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_23                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColor_Desaturated_ReturnValue_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorLinearColor_ReturnValue_4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureCube*                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_24                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTextureCube*                K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetClampedLinearColorValue_ReturnValue_11               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_60                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_30                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_31                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_50                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_50                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_50                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_50                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue_131                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue_132                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_133                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_32                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_136                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_25                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_51                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_51                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_51                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_51                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_52                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_134                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_52                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_52                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_52                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_33                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_135                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_58                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_34                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_59                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_60                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_61                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_61                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_137                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_62                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_62                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_138                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_63                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_139                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_136                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_40              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_53                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X_53                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_53                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_53                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_137                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_35                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_20                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_140                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_26                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_26                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue_14                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_36                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_21                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_64                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_41              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_65                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_41                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_141                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_66                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_142                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_63                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_143                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_138                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_144                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_28                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue_139                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_145                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_64                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_146                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_29                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetClampedLinearColorValue_ReturnValue_12               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetClampedLinearColorValue_ReturnValue_13               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetClampedLinearColorValue_ReturnValue_14               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetClampedLinearColorValue_ReturnValue_15               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_54                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_55                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_54                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_54                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_54                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_55                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_55                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_55                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_140                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_141                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_37                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_26                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue_67                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_65                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_147                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_148                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColor_Desaturated_ReturnValue_7                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_149                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColor_Desaturated_ReturnValue_8                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_56                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_56                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_56                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_56                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_142                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_57                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_38                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_57                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_57                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_57                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_150                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_143                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_151                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_39                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_30                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_68                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_27                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_66                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_28                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_152                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_29                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_30                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_31                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_32                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColor_Desaturated_ReturnValue_9                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColor_Desaturated_ReturnValue_10                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorLinearColor_ReturnValue_5           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorLinearColor_ReturnValue_6           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Add_LinearColorLinearColor_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_22                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_23                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_40                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_41                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_153                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_42                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Sky_C::Update_Active_Variables(const struct FLinearColor& Sun_Disk_Color_Current, const struct FLinearColor& Cloud_Dark_Color_Current, const struct FLinearColor& Cloud_Light_Color_Current, const struct FLinearColor& Zenith_Base_Color_Current, const struct FLinearColor& Horizon_Base_Color_Current, TArray<enum class EUDS_SkyMode>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetForwardVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_Array_Contains_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_MapRangeClamped_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue_2, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_Abs_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Abs_ReturnValue_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue_2, float CallFunc_FClamp_ReturnValue_2, float CallFunc_GetFloatValue_ReturnValue_1, float CallFunc_Lerp_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_3, float CallFunc_MapRangeClamped_ReturnValue_4, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue_6, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue_4, float CallFunc_BreakVector_X_4, float CallFunc_BreakVector_Y_4, float CallFunc_BreakVector_Z_4, const struct FVector& CallFunc_GetForwardVector_ReturnValue_5, float CallFunc_MapRangeClamped_ReturnValue_7, float CallFunc_BreakVector_X_5, float CallFunc_BreakVector_Y_5, float CallFunc_BreakVector_Z_5, float CallFunc_MapRangeClamped_ReturnValue_8, float CallFunc_GetFloatValue_ReturnValue_2, const struct FVector& CallFunc_GetForwardVector_ReturnValue_6, float CallFunc_BreakVector_X_6, float CallFunc_BreakVector_Y_6, float CallFunc_BreakVector_Z_6, const struct FVector& CallFunc_GetForwardVector_ReturnValue_7, float CallFunc_MapRangeClamped_ReturnValue_9, float CallFunc_BreakVector_X_7, float CallFunc_BreakVector_Y_7, float CallFunc_BreakVector_Z_7, float CallFunc_GetFloatValue_ReturnValue_3, float CallFunc_MapRangeClamped_ReturnValue_10, float CallFunc_GetFloatValue_ReturnValue_4, const struct FVector& CallFunc_GetForwardVector_ReturnValue_8, float CallFunc_Lerp_ReturnValue_2, float CallFunc_BreakVector_X_8, float CallFunc_BreakVector_Y_8, float CallFunc_BreakVector_Z_8, TArray<enum class EUDS_SkyMode>& K2Node_MakeArray_Array_1, float CallFunc_MapRangeClamped_ReturnValue_11, float CallFunc_GetFloatValue_ReturnValue_5, const struct FVector& CallFunc_GetForwardVector_ReturnValue_9, float CallFunc_Lerp_ReturnValue_3, float CallFunc_BreakVector_X_9, float CallFunc_BreakVector_Y_9, float CallFunc_BreakVector_Z_9, float CallFunc_MapRangeClamped_ReturnValue_12, const struct FVector& CallFunc_GetForwardVector_ReturnValue_10, float CallFunc_BreakVector_X_10, float CallFunc_BreakVector_Y_10, float CallFunc_BreakVector_Z_10, float CallFunc_Multiply_FloatFloat_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue_1, float CallFunc_FClamp_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_GetFloatValue_ReturnValue_6, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue_13, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_SelectFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_5, TArray<enum class EUDS_SkyMode>& K2Node_MakeArray_Array_2, float CallFunc_Add_FloatFloat_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue_2, const struct FVector& CallFunc_GetForwardVector_ReturnValue_11, float CallFunc_BreakVector_X_11, float CallFunc_BreakVector_Y_11, float CallFunc_BreakVector_Z_11, const struct FVector& CallFunc_GetForwardVector_ReturnValue_12, float CallFunc_MapRangeClamped_ReturnValue_14, float CallFunc_BreakVector_X_12, float CallFunc_BreakVector_Y_12, float CallFunc_BreakVector_Z_12, float CallFunc_GetFloatValue_ReturnValue_7, float CallFunc_MapRangeClamped_ReturnValue_15, TArray<enum class EUDS_SkyMode>& K2Node_MakeArray_Array_3, float CallFunc_GetFloatValue_ReturnValue_8, float CallFunc_Lerp_ReturnValue_4, const struct FVector& CallFunc_GetForwardVector_ReturnValue_13, float CallFunc_BreakVector_X_13, float CallFunc_BreakVector_Y_13, float CallFunc_BreakVector_Z_13, float CallFunc_MapRangeClamped_ReturnValue_16, const struct FVector& CallFunc_GetForwardVector_ReturnValue_14, float CallFunc_GetFloatValue_ReturnValue_9, float CallFunc_BreakVector_X_14, float CallFunc_BreakVector_Y_14, float CallFunc_BreakVector_Z_14, float CallFunc_Lerp_ReturnValue_5, float CallFunc_MapRangeClamped_ReturnValue_17, float CallFunc_GetFloatValue_ReturnValue_10, bool CallFunc_Array_Contains_ReturnValue_3, float CallFunc_SelectFloat_ReturnValue_2, TArray<enum class EUDS_SkyMode>& K2Node_MakeArray_Array_4, const struct FVector& CallFunc_GetForwardVector_ReturnValue_15, float CallFunc_BreakVector_X_15, float CallFunc_BreakVector_Y_15, float CallFunc_BreakVector_Z_15, float CallFunc_MapRangeClamped_ReturnValue_18, float CallFunc_MapRangeClamped_ReturnValue_19, float CallFunc_GetFloatValue_ReturnValue_11, bool CallFunc_Array_Contains_ReturnValue_4, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue_3, float CallFunc_Abs_ReturnValue_2, float CallFunc_Abs_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_3, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_3, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_4, float CallFunc_FClamp_ReturnValue_4, float CallFunc_FClamp_ReturnValue_5, TArray<enum class EUDS_SkyMode>& K2Node_MakeArray_Array_5, float CallFunc_Multiply_FloatFloat_ReturnValue_6, TArray<enum class EUDS_SkyMode>& K2Node_MakeArray_Array_6, float CallFunc_Add_FloatFloat_ReturnValue_3, bool CallFunc_Array_Contains_ReturnValue_5, bool CallFunc_Array_Contains_ReturnValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue_7, float CallFunc_SelectFloat_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue_4, float CallFunc_Abs_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue_4, TArray<enum class EUDS_SkyMode>& K2Node_MakeArray_Array_7, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_5, bool CallFunc_Array_Contains_ReturnValue_7, float CallFunc_FClamp_ReturnValue_6, float CallFunc_Lerp_ReturnValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue_8, float CallFunc_SelectFloat_ReturnValue_4, float CallFunc_MapRangeClamped_ReturnValue_20, float CallFunc_MapRangeClamped_ReturnValue_21, float CallFunc_Add_FloatFloat_ReturnValue_4, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_6, float CallFunc_MapRangeClamped_ReturnValue_22, bool CallFunc_BooleanOR_ReturnValue_1, TArray<enum class EUDS_SkyMode>& K2Node_MakeArray_Array_8, const struct FVector& CallFunc_GetForwardVector_ReturnValue_16, float CallFunc_BreakVector_X_16, float CallFunc_BreakVector_Y_16, float CallFunc_BreakVector_Z_16, float CallFunc_Subtract_FloatFloat_ReturnValue_5, float CallFunc_MapRangeClamped_ReturnValue_23, float CallFunc_Abs_ReturnValue_5, float CallFunc_GetFloatValue_ReturnValue_12, float CallFunc_Divide_FloatFloat_ReturnValue_5, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_7, float CallFunc_FClamp_ReturnValue_7, float CallFunc_Lerp_ReturnValue_7, float CallFunc_MapRangeClamped_ReturnValue_24, float CallFunc_SelectFloat_ReturnValue_5, float CallFunc_MapRangeClamped_ReturnValue_25, bool CallFunc_Array_Contains_ReturnValue_8, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_26, float CallFunc_Multiply_FloatFloat_ReturnValue_9, const struct FVector& CallFunc_GetForwardVector_ReturnValue_17, float CallFunc_SelectFloat_ReturnValue_6, float CallFunc_BreakVector_X_17, float CallFunc_BreakVector_Y_17, float CallFunc_BreakVector_Z_17, float CallFunc_Multiply_FloatFloat_ReturnValue_10, float CallFunc_FClamp_ReturnValue_8, float CallFunc_MapRangeClamped_ReturnValue_27, float CallFunc_Multiply_FloatFloat_ReturnValue_11, float CallFunc_Multiply_FloatFloat_ReturnValue_12, const struct FLinearColor& CallFunc_LinearColor_Desaturated_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_5, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_28, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_8, bool CallFunc_NotEqual_ByteByte_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_6, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue_18, float CallFunc_BreakVector_X_18, float CallFunc_BreakVector_Y_18, float CallFunc_BreakVector_Z_18, float CallFunc_MapRangeClamped_ReturnValue_29, float CallFunc_MapRangeClamped_ReturnValue_30, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_9, float CallFunc_Subtract_FloatFloat_ReturnValue_7, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_6, TArray<enum class EUDS_SkyMode>& K2Node_MakeArray_Array_9, float CallFunc_MapRangeClamped_ReturnValue_31, float CallFunc_Subtract_FloatFloat_ReturnValue_8, float CallFunc_MapRangeClamped_ReturnValue_32, float CallFunc_MapRangeClamped_ReturnValue_33, float CallFunc_SelectFloat_ReturnValue_7, float CallFunc_FClamp_ReturnValue_9, float CallFunc_Subtract_FloatFloat_ReturnValue_9, float CallFunc_Subtract_FloatFloat_ReturnValue_10, float CallFunc_MapRangeClamped_ReturnValue_34, float CallFunc_MapRangeClamped_ReturnValue_35, float CallFunc_SelectFloat_ReturnValue_8, bool CallFunc_Array_Contains_ReturnValue_9, float CallFunc_FClamp_ReturnValue_10, float CallFunc_SelectFloat_ReturnValue_9, float CallFunc_MapRangeClamped_ReturnValue_36, float CallFunc_MapRangeClamped_ReturnValue_37, float CallFunc_Multiply_FloatFloat_ReturnValue_13, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_14, float CallFunc_MapRangeClamped_ReturnValue_38, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_39, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_11, float CallFunc_Abs_ReturnValue_6, float CallFunc_MapRangeClamped_ReturnValue_40, float CallFunc_MapRangeClamped_ReturnValue_41, float CallFunc_Multiply_FloatFloat_ReturnValue_15, float CallFunc_MapRangeClamped_ReturnValue_42, float CallFunc_Multiply_FloatFloat_ReturnValue_16, float CallFunc_Multiply_FloatFloat_ReturnValue_17, float CallFunc_Add_FloatFloat_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue_18, float CallFunc_Subtract_FloatFloat_ReturnValue_12, float CallFunc_MapRangeClamped_ReturnValue_43, float CallFunc_Abs_ReturnValue_7, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_10, float CallFunc_Divide_FloatFloat_ReturnValue_6, float CallFunc_MapRangeClamped_ReturnValue_44, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_11, float CallFunc_FClamp_ReturnValue_11, float CallFunc_MapRangeClamped_ReturnValue_45, float CallFunc_Lerp_ReturnValue_8, float CallFunc_SelectFloat_ReturnValue_10, float CallFunc_MapRangeClamped_ReturnValue_46, float CallFunc_Multiply_FloatFloat_ReturnValue_19, float CallFunc_Divide_FloatFloat_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue_20, float CallFunc_MapRangeClamped_ReturnValue_47, float CallFunc_Multiply_FloatFloat_ReturnValue_21, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_12, float CallFunc_Multiply_FloatFloat_ReturnValue_22, float CallFunc_MapRangeClamped_ReturnValue_48, float CallFunc_FClamp_ReturnValue_12, float CallFunc_Multiply_FloatFloat_ReturnValue_23, float CallFunc_Multiply_FloatFloat_ReturnValue_24, const struct FVector& CallFunc_GetForwardVector_ReturnValue_19, float CallFunc_Multiply_FloatFloat_ReturnValue_25, float CallFunc_BreakVector_X_19, float CallFunc_BreakVector_Y_19, float CallFunc_BreakVector_Z_19, float CallFunc_MapRangeClamped_ReturnValue_49, float CallFunc_GetFloatValue_ReturnValue_13, TArray<enum class EUDS_SkyMode>& K2Node_MakeArray_Array_10, float CallFunc_Lerp_ReturnValue_9, bool CallFunc_Array_Contains_ReturnValue_10, float CallFunc_MapRangeClamped_ReturnValue_50, float CallFunc_SelectFloat_ReturnValue_11, float CallFunc_Add_FloatFloat_ReturnValue_8, float CallFunc_Multiply_FloatFloat_ReturnValue_26, float CallFunc_MapRangeClamped_ReturnValue_51, float CallFunc_Add_FloatFloat_ReturnValue_9, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_13, float CallFunc_MapRangeClamped_ReturnValue_52, float CallFunc_FClamp_ReturnValue_13, float CallFunc_Multiply_FloatFloat_ReturnValue_27, float CallFunc_Multiply_FloatFloat_ReturnValue_28, float CallFunc_Multiply_FloatFloat_ReturnValue_29, float CallFunc_SelectFloat_ReturnValue_12, float CallFunc_SelectFloat_ReturnValue_13, float CallFunc_Multiply_FloatFloat_ReturnValue_30, float CallFunc_Add_FloatFloat_ReturnValue_10, float CallFunc_MapRangeClamped_ReturnValue_53, float CallFunc_Divide_FloatFloat_ReturnValue_8, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_14, float CallFunc_MapRangeClamped_ReturnValue_54, float CallFunc_FClamp_ReturnValue_14, float CallFunc_Multiply_FloatFloat_ReturnValue_31, float CallFunc_Multiply_FloatFloat_ReturnValue_32, float CallFunc_SelectFloat_ReturnValue_14, float CallFunc_SelectFloat_ReturnValue_15, float CallFunc_Multiply_FloatFloat_ReturnValue_33, float CallFunc_Add_FloatFloat_ReturnValue_11, float CallFunc_Subtract_FloatFloat_ReturnValue_13, float CallFunc_Add_FloatFloat_ReturnValue_12, float CallFunc_Abs_ReturnValue_8, float CallFunc_Multiply_FloatFloat_ReturnValue_34, float CallFunc_Divide_FloatFloat_ReturnValue_9, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_15, const struct FVector& CallFunc_GetForwardVector_ReturnValue_20, float CallFunc_FClamp_ReturnValue_15, float CallFunc_BreakVector_X_20, float CallFunc_BreakVector_Y_20, float CallFunc_BreakVector_Z_20, float CallFunc_Lerp_ReturnValue_10, float CallFunc_MapRangeClamped_ReturnValue_55, float CallFunc_SelectFloat_ReturnValue_16, float CallFunc_Lerp_ReturnValue_11, const struct FVector& CallFunc_GetForwardVector_ReturnValue_21, float CallFunc_BreakVector_X_21, float CallFunc_BreakVector_Y_21, float CallFunc_BreakVector_Z_21, float CallFunc_MapRangeClamped_ReturnValue_56, float CallFunc_MapRangeClamped_ReturnValue_57, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_16, float CallFunc_MapRangeClamped_ReturnValue_58, float CallFunc_MapRangeClamped_ReturnValue_59, float CallFunc_FClamp_ReturnValue_16, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_17, float CallFunc_MapRangeClamped_ReturnValue_60, float CallFunc_Multiply_FloatFloat_ReturnValue_35, float CallFunc_Multiply_FloatFloat_ReturnValue_36, float CallFunc_SelectFloat_ReturnValue_17, float CallFunc_SelectFloat_ReturnValue_18, float CallFunc_Multiply_FloatFloat_ReturnValue_37, float CallFunc_GetFloatValue_ReturnValue_14, float CallFunc_Add_FloatFloat_ReturnValue_13, float CallFunc_MapRangeClamped_ReturnValue_61, float CallFunc_Multiply_FloatFloat_ReturnValue_38, float CallFunc_Add_FloatFloat_ReturnValue_14, float CallFunc_MapRangeClamped_ReturnValue_62, float CallFunc_Multiply_FloatFloat_ReturnValue_39, float CallFunc_Subtract_FloatFloat_ReturnValue_14, float CallFunc_SelectFloat_ReturnValue_19, float CallFunc_Multiply_FloatFloat_ReturnValue_40, float CallFunc_Lerp_ReturnValue_12, float CallFunc_FClamp_ReturnValue_17, TArray<enum class EUDS_SkyMode>& K2Node_MakeArray_Array_11, float CallFunc_GetFloatValue_ReturnValue_15, float CallFunc_Lerp_ReturnValue_13, bool CallFunc_Array_Contains_ReturnValue_11, float CallFunc_SelectFloat_ReturnValue_20, TArray<enum class EUDS_SkyMode>& K2Node_MakeArray_Array_12, TArray<enum class EUDS_SkyMode>& K2Node_MakeArray_Array_13, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_4, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_12, float CallFunc_SelectFloat_ReturnValue_21, bool CallFunc_Array_Contains_ReturnValue_13, TArray<enum class EUDS_SkyMode>& K2Node_MakeArray_Array_14, float CallFunc_SelectFloat_ReturnValue_22, float CallFunc_MapRangeClamped_ReturnValue_63, float CallFunc_Multiply_FloatFloat_ReturnValue_41, float CallFunc_MapRangeClamped_ReturnValue_64, const struct FVector& CallFunc_GetForwardVector_ReturnValue_22, float CallFunc_BreakVector_X_22, float CallFunc_BreakVector_Y_22, float CallFunc_BreakVector_Z_22, float CallFunc_MapRangeClamped_ReturnValue_65, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, float CallFunc_GetFloatValue_ReturnValue_16, bool CallFunc_Array_Contains_ReturnValue_14, float CallFunc_MapRangeClamped_ReturnValue_66, float CallFunc_MapRangeClamped_ReturnValue_67, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_23, const struct FVector& CallFunc_GetForwardVector_ReturnValue_23, float CallFunc_BreakVector_X_23, float CallFunc_BreakVector_Y_23, float CallFunc_BreakVector_Z_23, float CallFunc_MapRangeClamped_ReturnValue_68, const struct FVector& CallFunc_GetForwardVector_ReturnValue_24, const struct FLinearColor& CallFunc_GetClampedLinearColorValue_ReturnValue, float CallFunc_BreakVector_X_24, float CallFunc_BreakVector_Y_24, float CallFunc_BreakVector_Z_24, float CallFunc_Multiply_FloatFloat_ReturnValue_42, float CallFunc_MapRangeClamped_ReturnValue_69, float CallFunc_FClamp_ReturnValue_18, float CallFunc_Multiply_FloatFloat_ReturnValue_43, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_5, float CallFunc_Subtract_FloatFloat_ReturnValue_15, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue_1, float CallFunc_Abs_ReturnValue_9, float CallFunc_MapRangeClamped_ReturnValue_70, float CallFunc_GetFloatValue_ReturnValue_17, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_18, float CallFunc_Multiply_FloatFloat_ReturnValue_44, float CallFunc_FClamp_ReturnValue_19, float CallFunc_Multiply_FloatFloat_ReturnValue_45, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_6, float CallFunc_MapRangeClamped_ReturnValue_71, const struct FVector& CallFunc_GetForwardVector_ReturnValue_25, float CallFunc_MapRangeClamped_ReturnValue_72, float CallFunc_BreakVector_X_25, float CallFunc_BreakVector_Y_25, float CallFunc_BreakVector_Z_25, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_46, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, float CallFunc_FClamp_ReturnValue_20, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, float CallFunc_Lerp_ReturnValue_14, float CallFunc_Multiply_FloatFloat_ReturnValue_47, float CallFunc_Divide_FloatFloat_ReturnValue_10, float CallFunc_SelectFloat_ReturnValue_24, float CallFunc_Multiply_FloatFloat_ReturnValue_48, float CallFunc_Multiply_FloatFloat_ReturnValue_49, float CallFunc_Lerp_ReturnValue_15, float CallFunc_Multiply_FloatFloat_ReturnValue_50, float CallFunc_Subtract_FloatFloat_ReturnValue_16, const struct FVector& CallFunc_GetForwardVector_ReturnValue_26, float CallFunc_Divide_FloatFloat_ReturnValue_11, float CallFunc_BreakVector_X_26, float CallFunc_BreakVector_Y_26, float CallFunc_BreakVector_Z_26, float CallFunc_Multiply_FloatFloat_ReturnValue_51, float CallFunc_MapRangeClamped_ReturnValue_73, float CallFunc_Multiply_FloatFloat_ReturnValue_52, float CallFunc_Multiply_FloatFloat_ReturnValue_53, const struct FVector& CallFunc_GetForwardVector_ReturnValue_27, float CallFunc_BreakVector_X_27, float CallFunc_BreakVector_Y_27, float CallFunc_BreakVector_Z_27, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_19, float CallFunc_MapRangeClamped_ReturnValue_74, float CallFunc_Divide_FloatFloat_ReturnValue_12, float CallFunc_Multiply_FloatFloat_ReturnValue_54, const struct FVector& CallFunc_GetForwardVector_ReturnValue_28, float CallFunc_BreakVector_X_28, float CallFunc_BreakVector_Y_28, float CallFunc_BreakVector_Z_28, float CallFunc_MapRangeClamped_ReturnValue_75, float CallFunc_MapRangeClamped_ReturnValue_76, float CallFunc_Multiply_FloatFloat_ReturnValue_55, float CallFunc_Multiply_FloatFloat_ReturnValue_56, float CallFunc_Subtract_FloatFloat_ReturnValue_17, float CallFunc_Abs_ReturnValue_10, float CallFunc_Divide_FloatFloat_ReturnValue_13, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_20, float CallFunc_MapRangeClamped_ReturnValue_77, float CallFunc_FClamp_ReturnValue_21, float CallFunc_Lerp_ReturnValue_16, float CallFunc_Lerp_ReturnValue_17, float CallFunc_SelectFloat_ReturnValue_25, float CallFunc_MapRangeClamped_ReturnValue_78, float CallFunc_Lerp_ReturnValue_18, float CallFunc_Multiply_FloatFloat_ReturnValue_57, float CallFunc_Multiply_FloatFloat_ReturnValue_58, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_59, float CallFunc_SelectFloat_ReturnValue_26, float CallFunc_MapRangeClamped_ReturnValue_79, float CallFunc_Lerp_ReturnValue_19, float CallFunc_MapRangeClamped_ReturnValue_80, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_21, const struct FVector& CallFunc_GetForwardVector_ReturnValue_29, float CallFunc_MapRangeClamped_ReturnValue_81, float CallFunc_BreakVector_X_29, float CallFunc_BreakVector_Y_29, float CallFunc_BreakVector_Z_29, float CallFunc_Multiply_FloatFloat_ReturnValue_60, float CallFunc_Multiply_FloatFloat_ReturnValue_61, float CallFunc_Lerp_ReturnValue_20, float CallFunc_FClamp_ReturnValue_22, TArray<enum class EUDS_SkyMode>& K2Node_MakeArray_Array_15, float CallFunc_Multiply_FloatFloat_ReturnValue_62, float CallFunc_Subtract_FloatFloat_ReturnValue_18, float CallFunc_MapRangeClamped_ReturnValue_82, float CallFunc_Abs_ReturnValue_11, float CallFunc_Divide_FloatFloat_ReturnValue_14, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_22, float CallFunc_Lerp_ReturnValue_21, float CallFunc_FClamp_ReturnValue_23, float CallFunc_Multiply_FloatFloat_ReturnValue_63, TArray<enum class EUDS_SkyMode>& K2Node_MakeArray_Array_16, bool CallFunc_Array_Contains_ReturnValue_15, const struct FVector& CallFunc_GetForwardVector_ReturnValue_30, float CallFunc_SelectFloat_ReturnValue_27, float CallFunc_BreakVector_X_30, float CallFunc_BreakVector_Y_30, float CallFunc_BreakVector_Z_30, float CallFunc_MapRangeClamped_ReturnValue_83, const struct FVector& CallFunc_GetForwardVector_ReturnValue_31, float CallFunc_Add_FloatFloat_ReturnValue_15, float CallFunc_BreakVector_X_31, float CallFunc_BreakVector_Y_31, float CallFunc_BreakVector_Z_31, float CallFunc_MapRangeClamped_ReturnValue_84, float CallFunc_MapRangeClamped_ReturnValue_85, float CallFunc_Multiply_FloatFloat_ReturnValue_64, float CallFunc_SelectFloat_ReturnValue_28, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_16, float CallFunc_Multiply_FloatFloat_ReturnValue_65, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, float CallFunc_SelectFloat_ReturnValue_29, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_2, float CallFunc_Lerp_ReturnValue_22, float CallFunc_SelectFloat_ReturnValue_30, float CallFunc_SelectFloat_ReturnValue_31, float CallFunc_SelectFloat_ReturnValue_32, float CallFunc_MapRangeClamped_ReturnValue_86, float CallFunc_Multiply_FloatFloat_ReturnValue_66, float CallFunc_GetFloatValue_ReturnValue_18, float CallFunc_Add_FloatFloat_ReturnValue_17, float CallFunc_MapRangeClamped_ReturnValue_87, const struct FVector& CallFunc_GetForwardVector_ReturnValue_32, float CallFunc_Multiply_FloatFloat_ReturnValue_67, float CallFunc_BreakVector_X_32, float CallFunc_BreakVector_Y_32, float CallFunc_BreakVector_Z_32, float CallFunc_MapRangeClamped_ReturnValue_88, float CallFunc_Subtract_FloatFloat_ReturnValue_19, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue_68, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, float CallFunc_Divide_FloatFloat_ReturnValue_15, bool CallFunc_BooleanOR_ReturnValue_3, float CallFunc_FClamp_ReturnValue_24, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_23, float CallFunc_FClamp_ReturnValue_25, float CallFunc_SelectFloat_ReturnValue_33, float CallFunc_GetFloatValue_ReturnValue_19, float CallFunc_Add_FloatFloat_ReturnValue_18, float CallFunc_Multiply_FloatFloat_ReturnValue_69, float CallFunc_MapRangeClamped_ReturnValue_89, float CallFunc_GetFloatValue_ReturnValue_20, float CallFunc_Multiply_FloatFloat_ReturnValue_70, float CallFunc_Lerp_ReturnValue_23, bool CallFunc_Less_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_16, float CallFunc_GetFloatValue_ReturnValue_21, float CallFunc_MapRangeClamped_ReturnValue_90, float CallFunc_Multiply_FloatFloat_ReturnValue_71, float CallFunc_Lerp_ReturnValue_24, float CallFunc_Lerp_ReturnValue_25, float CallFunc_Multiply_FloatFloat_ReturnValue_72, float CallFunc_Multiply_FloatFloat_ReturnValue_73, float CallFunc_MapRangeClamped_ReturnValue_91, float CallFunc_SelectFloat_ReturnValue_34, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_24, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_7, const struct FVector& CallFunc_GetForwardVector_ReturnValue_33, float CallFunc_BreakVector_X_33, float CallFunc_BreakVector_Y_33, float CallFunc_BreakVector_Z_33, const struct FVector& CallFunc_GetForwardVector_ReturnValue_34, float CallFunc_GetFloatValue_ReturnValue_22, float CallFunc_BreakVector_X_34, float CallFunc_BreakVector_Y_34, float CallFunc_BreakVector_Z_34, float CallFunc_MapRangeClamped_ReturnValue_92, bool CallFunc_Less_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_74, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_SelectFloat_ReturnValue_35, float CallFunc_Multiply_FloatFloat_ReturnValue_75, float CallFunc_SelectFloat_ReturnValue_36, float CallFunc_MapRangeClamped_ReturnValue_93, float CallFunc_Multiply_FloatFloat_ReturnValue_76, float CallFunc_SelectFloat_ReturnValue_37, const struct FLinearColor& CallFunc_GetClampedLinearColorValue_ReturnValue_1, const struct FLinearColor& CallFunc_GetClampedLinearColorValue_ReturnValue_2, float CallFunc_MapRangeUnclamped_ReturnValue, float CallFunc_FClamp_ReturnValue_26, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_77, float CallFunc_Add_FloatFloat_ReturnValue_19, float CallFunc_Multiply_FloatFloat_ReturnValue_78, float CallFunc_SelectFloat_ReturnValue_38, float CallFunc_Divide_FloatFloat_ReturnValue_17, float CallFunc_Lerp_ReturnValue_26, float CallFunc_FClamp_ReturnValue_27, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_25, float CallFunc_Lerp_ReturnValue_27, float CallFunc_MapRangeClamped_ReturnValue_94, float CallFunc_MapRangeClamped_ReturnValue_95, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_26, float CallFunc_GetFloatValue_ReturnValue_23, float CallFunc_FClamp_ReturnValue_28, float CallFunc_SelectFloat_ReturnValue_39, float CallFunc_Lerp_ReturnValue_28, const struct FLinearColor& CallFunc_GetClampedLinearColorValue_ReturnValue_3, float CallFunc_MapRangeClamped_ReturnValue_96, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_27, float CallFunc_MapRangeClamped_ReturnValue_97, float CallFunc_MapRangeClamped_ReturnValue_98, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_28, float CallFunc_MapRangeClamped_ReturnValue_99, float CallFunc_Multiply_FloatFloat_ReturnValue_79, const struct FLinearColor& CallFunc_GetClampedLinearColorValue_ReturnValue_4, float CallFunc_Lerp_ReturnValue_29, float CallFunc_Multiply_FloatFloat_ReturnValue_80, float CallFunc_MapRangeClamped_ReturnValue_100, float CallFunc_Multiply_FloatFloat_ReturnValue_81, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_29, const struct FVector& CallFunc_GetForwardVector_ReturnValue_35, float CallFunc_BreakVector_X_35, float CallFunc_BreakVector_Y_35, float CallFunc_BreakVector_Z_35, float CallFunc_Multiply_FloatFloat_ReturnValue_82, float CallFunc_MapRangeClamped_ReturnValue_101, float CallFunc_FClamp_ReturnValue_29, float CallFunc_Multiply_FloatFloat_ReturnValue_83, float CallFunc_Lerp_ReturnValue_30, float CallFunc_FClamp_ReturnValue_30, float CallFunc_Multiply_FloatFloat_ReturnValue_84, float CallFunc_Multiply_FloatFloat_ReturnValue_85, float CallFunc_Lerp_ReturnValue_31, float CallFunc_Add_FloatFloat_ReturnValue_20, const struct FVector& CallFunc_GetForwardVector_ReturnValue_36, float CallFunc_BreakVector_X_36, float CallFunc_BreakVector_Y_36, float CallFunc_BreakVector_Z_36, float CallFunc_Subtract_FloatFloat_ReturnValue_20, float CallFunc_Multiply_FloatFloat_ReturnValue_86, float CallFunc_FClamp_ReturnValue_31, float CallFunc_Subtract_FloatFloat_ReturnValue_21, TArray<enum class EUDS_SkyMode>& K2Node_MakeArray_Array_17, const struct FLinearColor& CallFunc_GetClampedLinearColorValue_ReturnValue_5, float CallFunc_MapRangeClamped_ReturnValue_102, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_8, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_30, float CallFunc_MapRangeClamped_ReturnValue_103, bool CallFunc_Array_Contains_ReturnValue_16, float CallFunc_MapRangeClamped_ReturnValue_104, float CallFunc_Multiply_FloatFloat_ReturnValue_87, float CallFunc_Multiply_FloatFloat_ReturnValue_88, float CallFunc_Multiply_FloatFloat_ReturnValue_89, const struct FVector& CallFunc_GetForwardVector_ReturnValue_37, const struct FVector& CallFunc_GetForwardVector_ReturnValue_38, float CallFunc_BreakVector_X_37, float CallFunc_BreakVector_Y_37, float CallFunc_BreakVector_Z_37, float CallFunc_BreakVector_X_38, float CallFunc_BreakVector_Y_38, float CallFunc_BreakVector_Z_38, float CallFunc_Multiply_FloatFloat_ReturnValue_90, float CallFunc_MapRangeClamped_ReturnValue_105, float CallFunc_FClamp_ReturnValue_32, float CallFunc_GetFloatValue_ReturnValue_24, const struct FVector& CallFunc_GetForwardVector_ReturnValue_39, float CallFunc_Lerp_ReturnValue_32, float CallFunc_BreakVector_X_39, float CallFunc_BreakVector_Y_39, float CallFunc_BreakVector_Z_39, TArray<enum class EUDS_SkyMode>& K2Node_MakeArray_Array_18, float CallFunc_MapRangeClamped_ReturnValue_106, bool CallFunc_Array_Contains_ReturnValue_17, float CallFunc_Lerp_ReturnValue_33, float CallFunc_SelectFloat_ReturnValue_40, float CallFunc_SelectFloat_ReturnValue_41, TArray<enum class EUDS_SkyMode>& K2Node_MakeArray_Array_19, float CallFunc_Lerp_ReturnValue_34, float CallFunc_Multiply_FloatFloat_ReturnValue_91, float CallFunc_SelectFloat_ReturnValue_42, float CallFunc_Lerp_ReturnValue_35, const struct FVector& CallFunc_GetForwardVector_ReturnValue_40, float CallFunc_Multiply_FloatFloat_ReturnValue_92, float CallFunc_BreakVector_X_40, float CallFunc_BreakVector_Y_40, float CallFunc_BreakVector_Z_40, float CallFunc_Lerp_ReturnValue_36, float CallFunc_Multiply_FloatFloat_ReturnValue_93, float CallFunc_Multiply_FloatFloat_ReturnValue_94, float CallFunc_FClamp_ReturnValue_33, float CallFunc_Multiply_FloatFloat_ReturnValue_95, float CallFunc_FClamp_ReturnValue_34, float CallFunc_Multiply_FloatFloat_ReturnValue_96, float CallFunc_Lerp_ReturnValue_37, float CallFunc_Lerp_ReturnValue_38, bool CallFunc_Array_Contains_ReturnValue_18, float CallFunc_SelectFloat_ReturnValue_43, float CallFunc_Subtract_FloatFloat_ReturnValue_22, float CallFunc_Lerp_ReturnValue_39, float CallFunc_Abs_ReturnValue_12, float CallFunc_Lerp_ReturnValue_40, float CallFunc_Divide_FloatFloat_ReturnValue_18, float CallFunc_MapRangeClamped_ReturnValue_107, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_31, TArray<enum class EUDS_SkyMode>& K2Node_MakeArray_Array_20, float CallFunc_FClamp_ReturnValue_35, bool CallFunc_Array_Contains_ReturnValue_19, float CallFunc_Lerp_ReturnValue_41, float CallFunc_SelectFloat_ReturnValue_44, float CallFunc_SelectFloat_ReturnValue_45, float CallFunc_Multiply_FloatFloat_ReturnValue_97, float CallFunc_Lerp_ReturnValue_42, float CallFunc_Add_FloatFloat_ReturnValue_21, const struct FVector& CallFunc_GetForwardVector_ReturnValue_41, float CallFunc_BreakVector_X_41, float CallFunc_BreakVector_Y_41, float CallFunc_BreakVector_Z_41, float CallFunc_Subtract_FloatFloat_ReturnValue_23, float CallFunc_MapRangeClamped_ReturnValue_108, TArray<enum class EUDS_SkyMode>& K2Node_MakeArray_Array_21, float CallFunc_GetFloatValue_ReturnValue_25, float CallFunc_MapRangeClamped_ReturnValue_109, float CallFunc_Multiply_FloatFloat_ReturnValue_98, float CallFunc_Add_FloatFloat_ReturnValue_22, float CallFunc_Multiply_FloatFloat_ReturnValue_99, float CallFunc_SelectFloat_ReturnValue_46, const struct FLinearColor& CallFunc_GetClampedLinearColorValue_ReturnValue_6, float CallFunc_Lerp_ReturnValue_43, float CallFunc_MapRangeClamped_ReturnValue_110, bool CallFunc_Array_Contains_ReturnValue_20, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_32, float CallFunc_SelectFloat_ReturnValue_47, float CallFunc_Multiply_FloatFloat_ReturnValue_100, float CallFunc_Lerp_ReturnValue_44, float CallFunc_Multiply_FloatFloat_ReturnValue_101, float CallFunc_Multiply_FloatFloat_ReturnValue_102, float CallFunc_Add_FloatFloat_ReturnValue_23, const struct FLinearColor& CallFunc_LinearColor_Desaturated_ReturnValue_1, TArray<enum class EUDS_SkyMode>& K2Node_MakeArray_Array_22, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_9, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_10, bool CallFunc_Array_Contains_ReturnValue_21, float CallFunc_SelectFloat_ReturnValue_48, float CallFunc_Lerp_ReturnValue_45, const struct FVector& CallFunc_GetForwardVector_ReturnValue_42, float CallFunc_MapRangeClamped_ReturnValue_111, float CallFunc_BreakVector_X_42, float CallFunc_BreakVector_Y_42, float CallFunc_BreakVector_Z_42, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_33, float CallFunc_Multiply_FloatFloat_ReturnValue_103, float CallFunc_MapRangeClamped_ReturnValue_112, float CallFunc_FClamp_ReturnValue_36, float CallFunc_Multiply_FloatFloat_ReturnValue_104, float CallFunc_Lerp_ReturnValue_46, float CallFunc_FClamp_ReturnValue_37, float CallFunc_Lerp_ReturnValue_47, float CallFunc_Multiply_FloatFloat_ReturnValue_105, float CallFunc_Lerp_ReturnValue_48, float CallFunc_Multiply_FloatFloat_ReturnValue_106, float CallFunc_Lerp_ReturnValue_49, TArray<enum class EUDS_SkyMode>& K2Node_MakeArray_Array_23, float CallFunc_MapRangeClamped_ReturnValue_113, bool CallFunc_Array_Contains_ReturnValue_22, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_34, float CallFunc_MapRangeClamped_ReturnValue_114, bool CallFunc_BooleanOR_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_107, bool CallFunc_BooleanAND_ReturnValue_1, TArray<enum class EUDS_SkyMode>& K2Node_MakeArray_Array_24, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_23, float CallFunc_Subtract_FloatFloat_ReturnValue_24, float CallFunc_MapRangeClamped_ReturnValue_115, const struct FVector& CallFunc_GetForwardVector_ReturnValue_43, float CallFunc_BreakVector_X_43, float CallFunc_BreakVector_Y_43, float CallFunc_BreakVector_Z_43, float CallFunc_MapRangeClamped_ReturnValue_116, bool CallFunc_BooleanOR_ReturnValue_5, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_35, bool CallFunc_BooleanAND_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_108, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_109, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_11, const struct FLinearColor& CallFunc_LinearColor_Desaturated_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue_117, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_36, float CallFunc_MapRangeClamped_ReturnValue_118, const struct FVector& CallFunc_GetForwardVector_ReturnValue_44, float CallFunc_BreakVector_X_44, float CallFunc_BreakVector_Y_44, float CallFunc_BreakVector_Z_44, float CallFunc_MapRangeClamped_ReturnValue_119, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue_45, bool CallFunc_BooleanAND_ReturnValue_3, float CallFunc_BreakVector_X_45, float CallFunc_BreakVector_Y_45, float CallFunc_BreakVector_Z_45, bool CallFunc_Less_FloatFloat_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, const struct FLinearColor& CallFunc_GetClampedLinearColorValue_ReturnValue_7, TArray<enum class EUDS_SkyMode>& K2Node_MakeArray_Array_25, bool CallFunc_Array_Contains_ReturnValue_24, float CallFunc_SelectFloat_ReturnValue_49, float CallFunc_Lerp_ReturnValue_50, const struct FVector& CallFunc_GetForwardVector_ReturnValue_46, float CallFunc_Lerp_ReturnValue_51, float CallFunc_BreakVector_X_46, float CallFunc_BreakVector_Y_46, float CallFunc_BreakVector_Z_46, float CallFunc_MapRangeClamped_ReturnValue_120, float CallFunc_Multiply_FloatFloat_ReturnValue_110, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_37, float CallFunc_FClamp_ReturnValue_38, float CallFunc_Multiply_FloatFloat_ReturnValue_111, float CallFunc_GetFloatValue_ReturnValue_26, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_12, float CallFunc_Multiply_FloatFloat_ReturnValue_112, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue_50, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_113, float CallFunc_MapRangeClamped_ReturnValue_121, const struct FVector& CallFunc_GetForwardVector_ReturnValue_47, float CallFunc_Add_FloatFloat_ReturnValue_24, float CallFunc_BreakVector_X_47, float CallFunc_BreakVector_Y_47, float CallFunc_BreakVector_Z_47, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_13, float CallFunc_MapRangeClamped_ReturnValue_122, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_3, float CallFunc_MapRangeClamped_ReturnValue_123, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_14, float CallFunc_SelectFloat_ReturnValue_51, float CallFunc_MapRangeClamped_ReturnValue_124, float CallFunc_Multiply_FloatFloat_ReturnValue_114, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_38, float CallFunc_Multiply_FloatFloat_ReturnValue_115, float CallFunc_Multiply_FloatFloat_ReturnValue_116, const struct FVector& CallFunc_GetForwardVector_ReturnValue_48, float CallFunc_Multiply_FloatFloat_ReturnValue_117, float CallFunc_BreakVector_X_48, float CallFunc_BreakVector_Y_48, float CallFunc_BreakVector_Z_48, float CallFunc_SelectFloat_ReturnValue_52, float CallFunc_MapRangeClamped_ReturnValue_125, float CallFunc_Subtract_FloatFloat_ReturnValue_25, const struct FVector& CallFunc_GetForwardVector_ReturnValue_49, float CallFunc_Abs_ReturnValue_13, float CallFunc_BreakVector_X_49, float CallFunc_BreakVector_Y_49, float CallFunc_BreakVector_Z_49, float CallFunc_Divide_FloatFloat_ReturnValue_19, float CallFunc_Multiply_FloatFloat_ReturnValue_118, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_39, float CallFunc_Multiply_FloatFloat_ReturnValue_119, float CallFunc_FClamp_ReturnValue_39, float CallFunc_FClamp_ReturnValue_40, float CallFunc_Lerp_ReturnValue_52, float CallFunc_SelectFloat_ReturnValue_53, float CallFunc_GetFloatValue_ReturnValue_27, float CallFunc_MapRangeClamped_ReturnValue_126, float CallFunc_Lerp_ReturnValue_53, float CallFunc_Multiply_FloatFloat_ReturnValue_120, float CallFunc_Add_FloatFloat_ReturnValue_25, float CallFunc_MapRangeClamped_ReturnValue_127, float CallFunc_MapRangeClamped_ReturnValue_128, float CallFunc_Multiply_FloatFloat_ReturnValue_121, float CallFunc_Multiply_FloatFloat_ReturnValue_122, float CallFunc_Multiply_FloatFloat_ReturnValue_123, float CallFunc_SelectFloat_ReturnValue_54, float CallFunc_Add_FloatFloat_ReturnValue_26, float CallFunc_Multiply_FloatFloat_ReturnValue_124, float CallFunc_Add_FloatFloat_ReturnValue_27, float CallFunc_Multiply_FloatFloat_ReturnValue_125, float CallFunc_Multiply_FloatFloat_ReturnValue_126, float CallFunc_Multiply_FloatFloat_ReturnValue_127, float CallFunc_Multiply_FloatFloat_ReturnValue_128, const struct FLinearColor& CallFunc_GetClampedLinearColorValue_ReturnValue_8, float CallFunc_SelectFloat_ReturnValue_55, const struct FLinearColor& CallFunc_GetClampedLinearColorValue_ReturnValue_9, float CallFunc_Multiply_FloatFloat_ReturnValue_129, const struct FLinearColor& CallFunc_GetClampedLinearColorValue_ReturnValue_10, float CallFunc_SelectFloat_ReturnValue_56, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_4, float CallFunc_GetFloatValue_ReturnValue_28, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_5, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_15, float CallFunc_MapRangeClamped_ReturnValue_129, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_16, bool CallFunc_EqualEqual_ByteByte_ReturnValue_9, bool CallFunc_EqualEqual_ByteByte_ReturnValue_10, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_4, const struct FLinearColor& CallFunc_LinearColor_Desaturated_ReturnValue_3, float CallFunc_GetFloatValue_ReturnValue_29, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_5, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_6, TArray<enum class EUDS_SkyMode>& K2Node_MakeArray_Array_26, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_17, const struct FLinearColor& CallFunc_LinearColor_Desaturated_ReturnValue_4, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_18, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_19, const struct FLinearColor& CallFunc_LinearColor_Desaturated_ReturnValue_5, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue_3, bool CallFunc_Array_Contains_ReturnValue_25, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_6, float CallFunc_SelectFloat_ReturnValue_57, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_20, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_21, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue_130, float CallFunc_Lerp_ReturnValue_54, float CallFunc_Multiply_FloatFloat_ReturnValue_130, float CallFunc_SelectFloat_ReturnValue_58, float CallFunc_Lerp_ReturnValue_55, float CallFunc_Multiply_FloatFloat_ReturnValue_131, float CallFunc_SelectFloat_ReturnValue_59, float CallFunc_Lerp_ReturnValue_56, float CallFunc_Multiply_FloatFloat_ReturnValue_132, float CallFunc_Lerp_ReturnValue_57, float CallFunc_Multiply_FloatFloat_ReturnValue_133, float CallFunc_Multiply_FloatFloat_ReturnValue_134, float CallFunc_Multiply_FloatFloat_ReturnValue_135, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_22, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_23, const struct FLinearColor& CallFunc_LinearColor_Desaturated_ReturnValue_6, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue_4, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_7, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FLinearColor& K2Node_Select_Default, class UTextureCube* K2Node_Select_Default_1, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_24, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_8, bool Temp_bool_Variable_2, class UTextureCube* K2Node_Select_Default_2, const struct FLinearColor& CallFunc_GetClampedLinearColorValue_ReturnValue_11, float CallFunc_SelectFloat_ReturnValue_60, float CallFunc_GetFloatValue_ReturnValue_30, float CallFunc_GetFloatValue_ReturnValue_31, const struct FVector& CallFunc_GetForwardVector_ReturnValue_50, float CallFunc_BreakVector_X_50, float CallFunc_BreakVector_Y_50, float CallFunc_BreakVector_Z_50, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue_131, bool CallFunc_NotEqual_ByteByte_ReturnValue_3, float CallFunc_MapRangeClamped_ReturnValue_132, float CallFunc_MapRangeClamped_ReturnValue_133, float CallFunc_GetFloatValue_ReturnValue_32, float CallFunc_Multiply_FloatFloat_ReturnValue_136, bool CallFunc_EqualEqual_ByteByte_ReturnValue_11, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_25, const struct FVector& CallFunc_GetForwardVector_ReturnValue_51, float CallFunc_BreakVector_X_51, float CallFunc_BreakVector_Y_51, float CallFunc_BreakVector_Z_51, const struct FVector& CallFunc_GetForwardVector_ReturnValue_52, float CallFunc_MapRangeClamped_ReturnValue_134, float CallFunc_BreakVector_X_52, float CallFunc_BreakVector_Y_52, float CallFunc_BreakVector_Z_52, float CallFunc_GetFloatValue_ReturnValue_33, float CallFunc_MapRangeClamped_ReturnValue_135, float CallFunc_Lerp_ReturnValue_58, float CallFunc_GetFloatValue_ReturnValue_34, float CallFunc_Lerp_ReturnValue_59, float CallFunc_Lerp_ReturnValue_60, float CallFunc_SelectFloat_ReturnValue_61, float CallFunc_Lerp_ReturnValue_61, float CallFunc_Multiply_FloatFloat_ReturnValue_137, float CallFunc_SelectFloat_ReturnValue_62, float CallFunc_Lerp_ReturnValue_62, float CallFunc_Multiply_FloatFloat_ReturnValue_138, float CallFunc_Lerp_ReturnValue_63, float CallFunc_Multiply_FloatFloat_ReturnValue_139, float CallFunc_MapRangeClamped_ReturnValue_136, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_40, const struct FVector& CallFunc_GetForwardVector_ReturnValue_53, bool CallFunc_EqualEqual_ByteByte_ReturnValue_12, float CallFunc_BreakVector_X_53, float CallFunc_BreakVector_Y_53, float CallFunc_BreakVector_Z_53, float CallFunc_MapRangeClamped_ReturnValue_137, float CallFunc_GetFloatValue_ReturnValue_35, float CallFunc_Divide_FloatFloat_ReturnValue_20, float CallFunc_Multiply_FloatFloat_ReturnValue_140, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_26, float CallFunc_Subtract_FloatFloat_ReturnValue_26, float CallFunc_Abs_ReturnValue_14, float CallFunc_GetFloatValue_ReturnValue_36, float CallFunc_Divide_FloatFloat_ReturnValue_21, float CallFunc_Lerp_ReturnValue_64, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_41, float CallFunc_Lerp_ReturnValue_65, float CallFunc_FClamp_ReturnValue_41, float CallFunc_Multiply_FloatFloat_ReturnValue_141, float CallFunc_Lerp_ReturnValue_66, float CallFunc_Multiply_FloatFloat_ReturnValue_142, float CallFunc_SelectFloat_ReturnValue_63, float CallFunc_Multiply_FloatFloat_ReturnValue_143, float CallFunc_MapRangeClamped_ReturnValue_138, float CallFunc_Multiply_FloatFloat_ReturnValue_144, float CallFunc_Add_FloatFloat_ReturnValue_28, bool CallFunc_EqualEqual_ByteByte_ReturnValue_13, float CallFunc_MapRangeClamped_ReturnValue_139, float CallFunc_Multiply_FloatFloat_ReturnValue_145, float CallFunc_SelectFloat_ReturnValue_64, float CallFunc_Multiply_FloatFloat_ReturnValue_146, float CallFunc_Add_FloatFloat_ReturnValue_29, const struct FLinearColor& CallFunc_GetClampedLinearColorValue_ReturnValue_12, const struct FLinearColor& CallFunc_GetClampedLinearColorValue_ReturnValue_13, const struct FLinearColor& CallFunc_GetClampedLinearColorValue_ReturnValue_14, const struct FLinearColor& CallFunc_GetClampedLinearColorValue_ReturnValue_15, const struct FVector& CallFunc_GetForwardVector_ReturnValue_54, const struct FVector& CallFunc_GetForwardVector_ReturnValue_55, float CallFunc_BreakVector_X_54, float CallFunc_BreakVector_Y_54, float CallFunc_BreakVector_Z_54, float CallFunc_BreakVector_X_55, float CallFunc_BreakVector_Y_55, float CallFunc_BreakVector_Z_55, float CallFunc_MapRangeClamped_ReturnValue_140, float CallFunc_MapRangeClamped_ReturnValue_141, float CallFunc_GetFloatValue_ReturnValue_37, bool CallFunc_Array_Contains_ReturnValue_26, float CallFunc_Lerp_ReturnValue_67, float CallFunc_SelectFloat_ReturnValue_65, float CallFunc_Multiply_FloatFloat_ReturnValue_147, float CallFunc_Multiply_FloatFloat_ReturnValue_148, const struct FLinearColor& CallFunc_LinearColor_Desaturated_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue_149, const struct FLinearColor& CallFunc_LinearColor_Desaturated_ReturnValue_8, const struct FVector& CallFunc_GetForwardVector_ReturnValue_56, float CallFunc_BreakVector_X_56, float CallFunc_BreakVector_Y_56, float CallFunc_BreakVector_Z_56, float CallFunc_MapRangeClamped_ReturnValue_142, const struct FVector& CallFunc_GetForwardVector_ReturnValue_57, float CallFunc_GetFloatValue_ReturnValue_38, float CallFunc_BreakVector_X_57, float CallFunc_BreakVector_Y_57, float CallFunc_BreakVector_Z_57, float CallFunc_Multiply_FloatFloat_ReturnValue_150, float CallFunc_MapRangeClamped_ReturnValue_143, float CallFunc_Multiply_FloatFloat_ReturnValue_151, float CallFunc_GetFloatValue_ReturnValue_39, float CallFunc_Add_FloatFloat_ReturnValue_30, float CallFunc_Lerp_ReturnValue_68, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_27, float CallFunc_SelectFloat_ReturnValue_66, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_28, float CallFunc_Multiply_FloatFloat_ReturnValue_152, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_29, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_30, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_31, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_32, const struct FLinearColor& CallFunc_LinearColor_Desaturated_ReturnValue_9, const struct FLinearColor& CallFunc_LinearColor_Desaturated_ReturnValue_10, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue_5, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue_6, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_7, const struct FLinearColor& CallFunc_Add_LinearColorLinearColor_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_22, float CallFunc_Divide_FloatFloat_ReturnValue_23, float CallFunc_GetFloatValue_ReturnValue_40, float CallFunc_GetFloatValue_ReturnValue_41, float CallFunc_Multiply_FloatFloat_ReturnValue_153, float CallFunc_GetFloatValue_ReturnValue_42)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "Update Active Variables");

	Params::AUltra_Dynamic_Sky_C_Update_Active_Variables_Params Parms{};

	Parms.Sun_Disk_Color_Current = Sun_Disk_Color_Current;
	Parms.Cloud_Dark_Color_Current = Cloud_Dark_Color_Current;
	Parms.Cloud_Light_Color_Current = Cloud_Light_Color_Current;
	Parms.Zenith_Base_Color_Current = Zenith_Base_Color_Current;
	Parms.Horizon_Base_Color_Current = Horizon_Base_Color_Current;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue_1 = CallFunc_GetForwardVector_ReturnValue_1;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue_2 = CallFunc_GetForwardVector_ReturnValue_2;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Abs_ReturnValue_1 = CallFunc_Abs_ReturnValue_1;
	Parms.CallFunc_GetForwardVector_ReturnValue_3 = CallFunc_GetForwardVector_ReturnValue_3;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_BreakVector_X_3 = CallFunc_BreakVector_X_3;
	Parms.CallFunc_BreakVector_Y_3 = CallFunc_BreakVector_Y_3;
	Parms.CallFunc_BreakVector_Z_3 = CallFunc_BreakVector_Z_3;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue_2 = CallFunc_FClamp_ReturnValue_2;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_3 = CallFunc_MapRangeClamped_ReturnValue_3;
	Parms.CallFunc_MapRangeClamped_ReturnValue_4 = CallFunc_MapRangeClamped_ReturnValue_4;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue_5 = CallFunc_MapRangeClamped_ReturnValue_5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_6 = CallFunc_MapRangeClamped_ReturnValue_6;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue_4 = CallFunc_GetForwardVector_ReturnValue_4;
	Parms.CallFunc_BreakVector_X_4 = CallFunc_BreakVector_X_4;
	Parms.CallFunc_BreakVector_Y_4 = CallFunc_BreakVector_Y_4;
	Parms.CallFunc_BreakVector_Z_4 = CallFunc_BreakVector_Z_4;
	Parms.CallFunc_GetForwardVector_ReturnValue_5 = CallFunc_GetForwardVector_ReturnValue_5;
	Parms.CallFunc_MapRangeClamped_ReturnValue_7 = CallFunc_MapRangeClamped_ReturnValue_7;
	Parms.CallFunc_BreakVector_X_5 = CallFunc_BreakVector_X_5;
	Parms.CallFunc_BreakVector_Y_5 = CallFunc_BreakVector_Y_5;
	Parms.CallFunc_BreakVector_Z_5 = CallFunc_BreakVector_Z_5;
	Parms.CallFunc_MapRangeClamped_ReturnValue_8 = CallFunc_MapRangeClamped_ReturnValue_8;
	Parms.CallFunc_GetFloatValue_ReturnValue_2 = CallFunc_GetFloatValue_ReturnValue_2;
	Parms.CallFunc_GetForwardVector_ReturnValue_6 = CallFunc_GetForwardVector_ReturnValue_6;
	Parms.CallFunc_BreakVector_X_6 = CallFunc_BreakVector_X_6;
	Parms.CallFunc_BreakVector_Y_6 = CallFunc_BreakVector_Y_6;
	Parms.CallFunc_BreakVector_Z_6 = CallFunc_BreakVector_Z_6;
	Parms.CallFunc_GetForwardVector_ReturnValue_7 = CallFunc_GetForwardVector_ReturnValue_7;
	Parms.CallFunc_MapRangeClamped_ReturnValue_9 = CallFunc_MapRangeClamped_ReturnValue_9;
	Parms.CallFunc_BreakVector_X_7 = CallFunc_BreakVector_X_7;
	Parms.CallFunc_BreakVector_Y_7 = CallFunc_BreakVector_Y_7;
	Parms.CallFunc_BreakVector_Z_7 = CallFunc_BreakVector_Z_7;
	Parms.CallFunc_GetFloatValue_ReturnValue_3 = CallFunc_GetFloatValue_ReturnValue_3;
	Parms.CallFunc_MapRangeClamped_ReturnValue_10 = CallFunc_MapRangeClamped_ReturnValue_10;
	Parms.CallFunc_GetFloatValue_ReturnValue_4 = CallFunc_GetFloatValue_ReturnValue_4;
	Parms.CallFunc_GetForwardVector_ReturnValue_8 = CallFunc_GetForwardVector_ReturnValue_8;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_BreakVector_X_8 = CallFunc_BreakVector_X_8;
	Parms.CallFunc_BreakVector_Y_8 = CallFunc_BreakVector_Y_8;
	Parms.CallFunc_BreakVector_Z_8 = CallFunc_BreakVector_Z_8;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_11 = CallFunc_MapRangeClamped_ReturnValue_11;
	Parms.CallFunc_GetFloatValue_ReturnValue_5 = CallFunc_GetFloatValue_ReturnValue_5;
	Parms.CallFunc_GetForwardVector_ReturnValue_9 = CallFunc_GetForwardVector_ReturnValue_9;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_BreakVector_X_9 = CallFunc_BreakVector_X_9;
	Parms.CallFunc_BreakVector_Y_9 = CallFunc_BreakVector_Y_9;
	Parms.CallFunc_BreakVector_Z_9 = CallFunc_BreakVector_Z_9;
	Parms.CallFunc_MapRangeClamped_ReturnValue_12 = CallFunc_MapRangeClamped_ReturnValue_12;
	Parms.CallFunc_GetForwardVector_ReturnValue_10 = CallFunc_GetForwardVector_ReturnValue_10;
	Parms.CallFunc_BreakVector_X_10 = CallFunc_BreakVector_X_10;
	Parms.CallFunc_BreakVector_Y_10 = CallFunc_BreakVector_Y_10;
	Parms.CallFunc_BreakVector_Z_10 = CallFunc_BreakVector_Z_10;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue_3 = CallFunc_FClamp_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_GetFloatValue_ReturnValue_6 = CallFunc_GetFloatValue_ReturnValue_6;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_13 = CallFunc_MapRangeClamped_ReturnValue_13;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Array_Contains_ReturnValue_2 = CallFunc_Array_Contains_ReturnValue_2;
	Parms.CallFunc_GetForwardVector_ReturnValue_11 = CallFunc_GetForwardVector_ReturnValue_11;
	Parms.CallFunc_BreakVector_X_11 = CallFunc_BreakVector_X_11;
	Parms.CallFunc_BreakVector_Y_11 = CallFunc_BreakVector_Y_11;
	Parms.CallFunc_BreakVector_Z_11 = CallFunc_BreakVector_Z_11;
	Parms.CallFunc_GetForwardVector_ReturnValue_12 = CallFunc_GetForwardVector_ReturnValue_12;
	Parms.CallFunc_MapRangeClamped_ReturnValue_14 = CallFunc_MapRangeClamped_ReturnValue_14;
	Parms.CallFunc_BreakVector_X_12 = CallFunc_BreakVector_X_12;
	Parms.CallFunc_BreakVector_Y_12 = CallFunc_BreakVector_Y_12;
	Parms.CallFunc_BreakVector_Z_12 = CallFunc_BreakVector_Z_12;
	Parms.CallFunc_GetFloatValue_ReturnValue_7 = CallFunc_GetFloatValue_ReturnValue_7;
	Parms.CallFunc_MapRangeClamped_ReturnValue_15 = CallFunc_MapRangeClamped_ReturnValue_15;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_GetFloatValue_ReturnValue_8 = CallFunc_GetFloatValue_ReturnValue_8;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_GetForwardVector_ReturnValue_13 = CallFunc_GetForwardVector_ReturnValue_13;
	Parms.CallFunc_BreakVector_X_13 = CallFunc_BreakVector_X_13;
	Parms.CallFunc_BreakVector_Y_13 = CallFunc_BreakVector_Y_13;
	Parms.CallFunc_BreakVector_Z_13 = CallFunc_BreakVector_Z_13;
	Parms.CallFunc_MapRangeClamped_ReturnValue_16 = CallFunc_MapRangeClamped_ReturnValue_16;
	Parms.CallFunc_GetForwardVector_ReturnValue_14 = CallFunc_GetForwardVector_ReturnValue_14;
	Parms.CallFunc_GetFloatValue_ReturnValue_9 = CallFunc_GetFloatValue_ReturnValue_9;
	Parms.CallFunc_BreakVector_X_14 = CallFunc_BreakVector_X_14;
	Parms.CallFunc_BreakVector_Y_14 = CallFunc_BreakVector_Y_14;
	Parms.CallFunc_BreakVector_Z_14 = CallFunc_BreakVector_Z_14;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;
	Parms.CallFunc_MapRangeClamped_ReturnValue_17 = CallFunc_MapRangeClamped_ReturnValue_17;
	Parms.CallFunc_GetFloatValue_ReturnValue_10 = CallFunc_GetFloatValue_ReturnValue_10;
	Parms.CallFunc_Array_Contains_ReturnValue_3 = CallFunc_Array_Contains_ReturnValue_3;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_GetForwardVector_ReturnValue_15 = CallFunc_GetForwardVector_ReturnValue_15;
	Parms.CallFunc_BreakVector_X_15 = CallFunc_BreakVector_X_15;
	Parms.CallFunc_BreakVector_Y_15 = CallFunc_BreakVector_Y_15;
	Parms.CallFunc_BreakVector_Z_15 = CallFunc_BreakVector_Z_15;
	Parms.CallFunc_MapRangeClamped_ReturnValue_18 = CallFunc_MapRangeClamped_ReturnValue_18;
	Parms.CallFunc_MapRangeClamped_ReturnValue_19 = CallFunc_MapRangeClamped_ReturnValue_19;
	Parms.CallFunc_GetFloatValue_ReturnValue_11 = CallFunc_GetFloatValue_ReturnValue_11;
	Parms.CallFunc_Array_Contains_ReturnValue_4 = CallFunc_Array_Contains_ReturnValue_4;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_2 = CallFunc_Subtract_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_3 = CallFunc_Subtract_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Abs_ReturnValue_2 = CallFunc_Abs_ReturnValue_2;
	Parms.CallFunc_Abs_ReturnValue_3 = CallFunc_Abs_ReturnValue_3;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_2 = CallFunc_Divide_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_3 = CallFunc_Divide_FloatFloat_ReturnValue_3;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_3 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_4 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_FClamp_ReturnValue_4 = CallFunc_FClamp_ReturnValue_4;
	Parms.CallFunc_FClamp_ReturnValue_5 = CallFunc_FClamp_ReturnValue_5;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_6 = CallFunc_Multiply_FloatFloat_ReturnValue_6;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Array_Contains_ReturnValue_5 = CallFunc_Array_Contains_ReturnValue_5;
	Parms.CallFunc_Array_Contains_ReturnValue_6 = CallFunc_Array_Contains_ReturnValue_6;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_7 = CallFunc_Multiply_FloatFloat_ReturnValue_7;
	Parms.CallFunc_SelectFloat_ReturnValue_3 = CallFunc_SelectFloat_ReturnValue_3;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_4 = CallFunc_Subtract_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Abs_ReturnValue_4 = CallFunc_Abs_ReturnValue_4;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_4 = CallFunc_Divide_FloatFloat_ReturnValue_4;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_5 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Array_Contains_ReturnValue_7 = CallFunc_Array_Contains_ReturnValue_7;
	Parms.CallFunc_FClamp_ReturnValue_6 = CallFunc_FClamp_ReturnValue_6;
	Parms.CallFunc_Lerp_ReturnValue_6 = CallFunc_Lerp_ReturnValue_6;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_8 = CallFunc_Multiply_FloatFloat_ReturnValue_8;
	Parms.CallFunc_SelectFloat_ReturnValue_4 = CallFunc_SelectFloat_ReturnValue_4;
	Parms.CallFunc_MapRangeClamped_ReturnValue_20 = CallFunc_MapRangeClamped_ReturnValue_20;
	Parms.CallFunc_MapRangeClamped_ReturnValue_21 = CallFunc_MapRangeClamped_ReturnValue_21;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_4 = CallFunc_Add_FloatFloat_ReturnValue_4;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_6 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_6;
	Parms.CallFunc_MapRangeClamped_ReturnValue_22 = CallFunc_MapRangeClamped_ReturnValue_22;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_8 = K2Node_MakeArray_Array_8;
	Parms.CallFunc_GetForwardVector_ReturnValue_16 = CallFunc_GetForwardVector_ReturnValue_16;
	Parms.CallFunc_BreakVector_X_16 = CallFunc_BreakVector_X_16;
	Parms.CallFunc_BreakVector_Y_16 = CallFunc_BreakVector_Y_16;
	Parms.CallFunc_BreakVector_Z_16 = CallFunc_BreakVector_Z_16;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_5 = CallFunc_Subtract_FloatFloat_ReturnValue_5;
	Parms.CallFunc_MapRangeClamped_ReturnValue_23 = CallFunc_MapRangeClamped_ReturnValue_23;
	Parms.CallFunc_Abs_ReturnValue_5 = CallFunc_Abs_ReturnValue_5;
	Parms.CallFunc_GetFloatValue_ReturnValue_12 = CallFunc_GetFloatValue_ReturnValue_12;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_5 = CallFunc_Divide_FloatFloat_ReturnValue_5;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_7 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_7;
	Parms.CallFunc_FClamp_ReturnValue_7 = CallFunc_FClamp_ReturnValue_7;
	Parms.CallFunc_Lerp_ReturnValue_7 = CallFunc_Lerp_ReturnValue_7;
	Parms.CallFunc_MapRangeClamped_ReturnValue_24 = CallFunc_MapRangeClamped_ReturnValue_24;
	Parms.CallFunc_SelectFloat_ReturnValue_5 = CallFunc_SelectFloat_ReturnValue_5;
	Parms.CallFunc_MapRangeClamped_ReturnValue_25 = CallFunc_MapRangeClamped_ReturnValue_25;
	Parms.CallFunc_Array_Contains_ReturnValue_8 = CallFunc_Array_Contains_ReturnValue_8;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_26 = CallFunc_MapRangeClamped_ReturnValue_26;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_9 = CallFunc_Multiply_FloatFloat_ReturnValue_9;
	Parms.CallFunc_GetForwardVector_ReturnValue_17 = CallFunc_GetForwardVector_ReturnValue_17;
	Parms.CallFunc_SelectFloat_ReturnValue_6 = CallFunc_SelectFloat_ReturnValue_6;
	Parms.CallFunc_BreakVector_X_17 = CallFunc_BreakVector_X_17;
	Parms.CallFunc_BreakVector_Y_17 = CallFunc_BreakVector_Y_17;
	Parms.CallFunc_BreakVector_Z_17 = CallFunc_BreakVector_Z_17;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_10 = CallFunc_Multiply_FloatFloat_ReturnValue_10;
	Parms.CallFunc_FClamp_ReturnValue_8 = CallFunc_FClamp_ReturnValue_8;
	Parms.CallFunc_MapRangeClamped_ReturnValue_27 = CallFunc_MapRangeClamped_ReturnValue_27;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_11 = CallFunc_Multiply_FloatFloat_ReturnValue_11;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_12 = CallFunc_Multiply_FloatFloat_ReturnValue_12;
	Parms.CallFunc_LinearColor_Desaturated_ReturnValue = CallFunc_LinearColor_Desaturated_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_5 = CallFunc_Add_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue = CallFunc_Multiply_LinearColorFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_28 = CallFunc_MapRangeClamped_ReturnValue_28;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_8 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_8;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_6 = CallFunc_Subtract_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_1 = CallFunc_Multiply_LinearColorFloat_ReturnValue_1;
	Parms.CallFunc_GetForwardVector_ReturnValue_18 = CallFunc_GetForwardVector_ReturnValue_18;
	Parms.CallFunc_BreakVector_X_18 = CallFunc_BreakVector_X_18;
	Parms.CallFunc_BreakVector_Y_18 = CallFunc_BreakVector_Y_18;
	Parms.CallFunc_BreakVector_Z_18 = CallFunc_BreakVector_Z_18;
	Parms.CallFunc_MapRangeClamped_ReturnValue_29 = CallFunc_MapRangeClamped_ReturnValue_29;
	Parms.CallFunc_MapRangeClamped_ReturnValue_30 = CallFunc_MapRangeClamped_ReturnValue_30;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_9 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_9;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_7 = CallFunc_Subtract_FloatFloat_ReturnValue_7;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_2 = CallFunc_Multiply_LinearColorFloat_ReturnValue_2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_6 = CallFunc_Add_FloatFloat_ReturnValue_6;
	Parms.K2Node_MakeArray_Array_9 = K2Node_MakeArray_Array_9;
	Parms.CallFunc_MapRangeClamped_ReturnValue_31 = CallFunc_MapRangeClamped_ReturnValue_31;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_8 = CallFunc_Subtract_FloatFloat_ReturnValue_8;
	Parms.CallFunc_MapRangeClamped_ReturnValue_32 = CallFunc_MapRangeClamped_ReturnValue_32;
	Parms.CallFunc_MapRangeClamped_ReturnValue_33 = CallFunc_MapRangeClamped_ReturnValue_33;
	Parms.CallFunc_SelectFloat_ReturnValue_7 = CallFunc_SelectFloat_ReturnValue_7;
	Parms.CallFunc_FClamp_ReturnValue_9 = CallFunc_FClamp_ReturnValue_9;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_9 = CallFunc_Subtract_FloatFloat_ReturnValue_9;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_10 = CallFunc_Subtract_FloatFloat_ReturnValue_10;
	Parms.CallFunc_MapRangeClamped_ReturnValue_34 = CallFunc_MapRangeClamped_ReturnValue_34;
	Parms.CallFunc_MapRangeClamped_ReturnValue_35 = CallFunc_MapRangeClamped_ReturnValue_35;
	Parms.CallFunc_SelectFloat_ReturnValue_8 = CallFunc_SelectFloat_ReturnValue_8;
	Parms.CallFunc_Array_Contains_ReturnValue_9 = CallFunc_Array_Contains_ReturnValue_9;
	Parms.CallFunc_FClamp_ReturnValue_10 = CallFunc_FClamp_ReturnValue_10;
	Parms.CallFunc_SelectFloat_ReturnValue_9 = CallFunc_SelectFloat_ReturnValue_9;
	Parms.CallFunc_MapRangeClamped_ReturnValue_36 = CallFunc_MapRangeClamped_ReturnValue_36;
	Parms.CallFunc_MapRangeClamped_ReturnValue_37 = CallFunc_MapRangeClamped_ReturnValue_37;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_13 = CallFunc_Multiply_FloatFloat_ReturnValue_13;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_3 = CallFunc_Multiply_LinearColorFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_14 = CallFunc_Multiply_FloatFloat_ReturnValue_14;
	Parms.CallFunc_MapRangeClamped_ReturnValue_38 = CallFunc_MapRangeClamped_ReturnValue_38;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_39 = CallFunc_MapRangeClamped_ReturnValue_39;
	Parms.CallFunc_Multiply_LinearColorLinearColor_ReturnValue = CallFunc_Multiply_LinearColorLinearColor_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_11 = CallFunc_Subtract_FloatFloat_ReturnValue_11;
	Parms.CallFunc_Abs_ReturnValue_6 = CallFunc_Abs_ReturnValue_6;
	Parms.CallFunc_MapRangeClamped_ReturnValue_40 = CallFunc_MapRangeClamped_ReturnValue_40;
	Parms.CallFunc_MapRangeClamped_ReturnValue_41 = CallFunc_MapRangeClamped_ReturnValue_41;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_15 = CallFunc_Multiply_FloatFloat_ReturnValue_15;
	Parms.CallFunc_MapRangeClamped_ReturnValue_42 = CallFunc_MapRangeClamped_ReturnValue_42;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_16 = CallFunc_Multiply_FloatFloat_ReturnValue_16;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_17 = CallFunc_Multiply_FloatFloat_ReturnValue_17;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_7 = CallFunc_Add_FloatFloat_ReturnValue_7;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_18 = CallFunc_Multiply_FloatFloat_ReturnValue_18;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_12 = CallFunc_Subtract_FloatFloat_ReturnValue_12;
	Parms.CallFunc_MapRangeClamped_ReturnValue_43 = CallFunc_MapRangeClamped_ReturnValue_43;
	Parms.CallFunc_Abs_ReturnValue_7 = CallFunc_Abs_ReturnValue_7;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_10 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_10;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_6 = CallFunc_Divide_FloatFloat_ReturnValue_6;
	Parms.CallFunc_MapRangeClamped_ReturnValue_44 = CallFunc_MapRangeClamped_ReturnValue_44;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_11 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_11;
	Parms.CallFunc_FClamp_ReturnValue_11 = CallFunc_FClamp_ReturnValue_11;
	Parms.CallFunc_MapRangeClamped_ReturnValue_45 = CallFunc_MapRangeClamped_ReturnValue_45;
	Parms.CallFunc_Lerp_ReturnValue_8 = CallFunc_Lerp_ReturnValue_8;
	Parms.CallFunc_SelectFloat_ReturnValue_10 = CallFunc_SelectFloat_ReturnValue_10;
	Parms.CallFunc_MapRangeClamped_ReturnValue_46 = CallFunc_MapRangeClamped_ReturnValue_46;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_19 = CallFunc_Multiply_FloatFloat_ReturnValue_19;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_7 = CallFunc_Divide_FloatFloat_ReturnValue_7;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_20 = CallFunc_Multiply_FloatFloat_ReturnValue_20;
	Parms.CallFunc_MapRangeClamped_ReturnValue_47 = CallFunc_MapRangeClamped_ReturnValue_47;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_21 = CallFunc_Multiply_FloatFloat_ReturnValue_21;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_12 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_12;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_22 = CallFunc_Multiply_FloatFloat_ReturnValue_22;
	Parms.CallFunc_MapRangeClamped_ReturnValue_48 = CallFunc_MapRangeClamped_ReturnValue_48;
	Parms.CallFunc_FClamp_ReturnValue_12 = CallFunc_FClamp_ReturnValue_12;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_23 = CallFunc_Multiply_FloatFloat_ReturnValue_23;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_24 = CallFunc_Multiply_FloatFloat_ReturnValue_24;
	Parms.CallFunc_GetForwardVector_ReturnValue_19 = CallFunc_GetForwardVector_ReturnValue_19;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_25 = CallFunc_Multiply_FloatFloat_ReturnValue_25;
	Parms.CallFunc_BreakVector_X_19 = CallFunc_BreakVector_X_19;
	Parms.CallFunc_BreakVector_Y_19 = CallFunc_BreakVector_Y_19;
	Parms.CallFunc_BreakVector_Z_19 = CallFunc_BreakVector_Z_19;
	Parms.CallFunc_MapRangeClamped_ReturnValue_49 = CallFunc_MapRangeClamped_ReturnValue_49;
	Parms.CallFunc_GetFloatValue_ReturnValue_13 = CallFunc_GetFloatValue_ReturnValue_13;
	Parms.K2Node_MakeArray_Array_10 = K2Node_MakeArray_Array_10;
	Parms.CallFunc_Lerp_ReturnValue_9 = CallFunc_Lerp_ReturnValue_9;
	Parms.CallFunc_Array_Contains_ReturnValue_10 = CallFunc_Array_Contains_ReturnValue_10;
	Parms.CallFunc_MapRangeClamped_ReturnValue_50 = CallFunc_MapRangeClamped_ReturnValue_50;
	Parms.CallFunc_SelectFloat_ReturnValue_11 = CallFunc_SelectFloat_ReturnValue_11;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_8 = CallFunc_Add_FloatFloat_ReturnValue_8;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_26 = CallFunc_Multiply_FloatFloat_ReturnValue_26;
	Parms.CallFunc_MapRangeClamped_ReturnValue_51 = CallFunc_MapRangeClamped_ReturnValue_51;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_9 = CallFunc_Add_FloatFloat_ReturnValue_9;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_13 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_13;
	Parms.CallFunc_MapRangeClamped_ReturnValue_52 = CallFunc_MapRangeClamped_ReturnValue_52;
	Parms.CallFunc_FClamp_ReturnValue_13 = CallFunc_FClamp_ReturnValue_13;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_27 = CallFunc_Multiply_FloatFloat_ReturnValue_27;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_28 = CallFunc_Multiply_FloatFloat_ReturnValue_28;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_29 = CallFunc_Multiply_FloatFloat_ReturnValue_29;
	Parms.CallFunc_SelectFloat_ReturnValue_12 = CallFunc_SelectFloat_ReturnValue_12;
	Parms.CallFunc_SelectFloat_ReturnValue_13 = CallFunc_SelectFloat_ReturnValue_13;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_30 = CallFunc_Multiply_FloatFloat_ReturnValue_30;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_10 = CallFunc_Add_FloatFloat_ReturnValue_10;
	Parms.CallFunc_MapRangeClamped_ReturnValue_53 = CallFunc_MapRangeClamped_ReturnValue_53;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_8 = CallFunc_Divide_FloatFloat_ReturnValue_8;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_14 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_14;
	Parms.CallFunc_MapRangeClamped_ReturnValue_54 = CallFunc_MapRangeClamped_ReturnValue_54;
	Parms.CallFunc_FClamp_ReturnValue_14 = CallFunc_FClamp_ReturnValue_14;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_31 = CallFunc_Multiply_FloatFloat_ReturnValue_31;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_32 = CallFunc_Multiply_FloatFloat_ReturnValue_32;
	Parms.CallFunc_SelectFloat_ReturnValue_14 = CallFunc_SelectFloat_ReturnValue_14;
	Parms.CallFunc_SelectFloat_ReturnValue_15 = CallFunc_SelectFloat_ReturnValue_15;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_33 = CallFunc_Multiply_FloatFloat_ReturnValue_33;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_11 = CallFunc_Add_FloatFloat_ReturnValue_11;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_13 = CallFunc_Subtract_FloatFloat_ReturnValue_13;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_12 = CallFunc_Add_FloatFloat_ReturnValue_12;
	Parms.CallFunc_Abs_ReturnValue_8 = CallFunc_Abs_ReturnValue_8;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_34 = CallFunc_Multiply_FloatFloat_ReturnValue_34;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_9 = CallFunc_Divide_FloatFloat_ReturnValue_9;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_15 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_15;
	Parms.CallFunc_GetForwardVector_ReturnValue_20 = CallFunc_GetForwardVector_ReturnValue_20;
	Parms.CallFunc_FClamp_ReturnValue_15 = CallFunc_FClamp_ReturnValue_15;
	Parms.CallFunc_BreakVector_X_20 = CallFunc_BreakVector_X_20;
	Parms.CallFunc_BreakVector_Y_20 = CallFunc_BreakVector_Y_20;
	Parms.CallFunc_BreakVector_Z_20 = CallFunc_BreakVector_Z_20;
	Parms.CallFunc_Lerp_ReturnValue_10 = CallFunc_Lerp_ReturnValue_10;
	Parms.CallFunc_MapRangeClamped_ReturnValue_55 = CallFunc_MapRangeClamped_ReturnValue_55;
	Parms.CallFunc_SelectFloat_ReturnValue_16 = CallFunc_SelectFloat_ReturnValue_16;
	Parms.CallFunc_Lerp_ReturnValue_11 = CallFunc_Lerp_ReturnValue_11;
	Parms.CallFunc_GetForwardVector_ReturnValue_21 = CallFunc_GetForwardVector_ReturnValue_21;
	Parms.CallFunc_BreakVector_X_21 = CallFunc_BreakVector_X_21;
	Parms.CallFunc_BreakVector_Y_21 = CallFunc_BreakVector_Y_21;
	Parms.CallFunc_BreakVector_Z_21 = CallFunc_BreakVector_Z_21;
	Parms.CallFunc_MapRangeClamped_ReturnValue_56 = CallFunc_MapRangeClamped_ReturnValue_56;
	Parms.CallFunc_MapRangeClamped_ReturnValue_57 = CallFunc_MapRangeClamped_ReturnValue_57;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_16 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_16;
	Parms.CallFunc_MapRangeClamped_ReturnValue_58 = CallFunc_MapRangeClamped_ReturnValue_58;
	Parms.CallFunc_MapRangeClamped_ReturnValue_59 = CallFunc_MapRangeClamped_ReturnValue_59;
	Parms.CallFunc_FClamp_ReturnValue_16 = CallFunc_FClamp_ReturnValue_16;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_17 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_17;
	Parms.CallFunc_MapRangeClamped_ReturnValue_60 = CallFunc_MapRangeClamped_ReturnValue_60;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_35 = CallFunc_Multiply_FloatFloat_ReturnValue_35;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_36 = CallFunc_Multiply_FloatFloat_ReturnValue_36;
	Parms.CallFunc_SelectFloat_ReturnValue_17 = CallFunc_SelectFloat_ReturnValue_17;
	Parms.CallFunc_SelectFloat_ReturnValue_18 = CallFunc_SelectFloat_ReturnValue_18;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_37 = CallFunc_Multiply_FloatFloat_ReturnValue_37;
	Parms.CallFunc_GetFloatValue_ReturnValue_14 = CallFunc_GetFloatValue_ReturnValue_14;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_13 = CallFunc_Add_FloatFloat_ReturnValue_13;
	Parms.CallFunc_MapRangeClamped_ReturnValue_61 = CallFunc_MapRangeClamped_ReturnValue_61;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_38 = CallFunc_Multiply_FloatFloat_ReturnValue_38;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_14 = CallFunc_Add_FloatFloat_ReturnValue_14;
	Parms.CallFunc_MapRangeClamped_ReturnValue_62 = CallFunc_MapRangeClamped_ReturnValue_62;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_39 = CallFunc_Multiply_FloatFloat_ReturnValue_39;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_14 = CallFunc_Subtract_FloatFloat_ReturnValue_14;
	Parms.CallFunc_SelectFloat_ReturnValue_19 = CallFunc_SelectFloat_ReturnValue_19;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_40 = CallFunc_Multiply_FloatFloat_ReturnValue_40;
	Parms.CallFunc_Lerp_ReturnValue_12 = CallFunc_Lerp_ReturnValue_12;
	Parms.CallFunc_FClamp_ReturnValue_17 = CallFunc_FClamp_ReturnValue_17;
	Parms.K2Node_MakeArray_Array_11 = K2Node_MakeArray_Array_11;
	Parms.CallFunc_GetFloatValue_ReturnValue_15 = CallFunc_GetFloatValue_ReturnValue_15;
	Parms.CallFunc_Lerp_ReturnValue_13 = CallFunc_Lerp_ReturnValue_13;
	Parms.CallFunc_Array_Contains_ReturnValue_11 = CallFunc_Array_Contains_ReturnValue_11;
	Parms.CallFunc_SelectFloat_ReturnValue_20 = CallFunc_SelectFloat_ReturnValue_20;
	Parms.K2Node_MakeArray_Array_12 = K2Node_MakeArray_Array_12;
	Parms.K2Node_MakeArray_Array_13 = K2Node_MakeArray_Array_13;
	Parms.CallFunc_LinearColorLerp_ReturnValue_1 = CallFunc_LinearColorLerp_ReturnValue_1;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_4 = CallFunc_Multiply_LinearColorFloat_ReturnValue_4;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_12 = CallFunc_Array_Contains_ReturnValue_12;
	Parms.CallFunc_SelectFloat_ReturnValue_21 = CallFunc_SelectFloat_ReturnValue_21;
	Parms.CallFunc_Array_Contains_ReturnValue_13 = CallFunc_Array_Contains_ReturnValue_13;
	Parms.K2Node_MakeArray_Array_14 = K2Node_MakeArray_Array_14;
	Parms.CallFunc_SelectFloat_ReturnValue_22 = CallFunc_SelectFloat_ReturnValue_22;
	Parms.CallFunc_MapRangeClamped_ReturnValue_63 = CallFunc_MapRangeClamped_ReturnValue_63;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_41 = CallFunc_Multiply_FloatFloat_ReturnValue_41;
	Parms.CallFunc_MapRangeClamped_ReturnValue_64 = CallFunc_MapRangeClamped_ReturnValue_64;
	Parms.CallFunc_GetForwardVector_ReturnValue_22 = CallFunc_GetForwardVector_ReturnValue_22;
	Parms.CallFunc_BreakVector_X_22 = CallFunc_BreakVector_X_22;
	Parms.CallFunc_BreakVector_Y_22 = CallFunc_BreakVector_Y_22;
	Parms.CallFunc_BreakVector_Z_22 = CallFunc_BreakVector_Z_22;
	Parms.CallFunc_MapRangeClamped_ReturnValue_65 = CallFunc_MapRangeClamped_ReturnValue_65;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_GetFloatValue_ReturnValue_16 = CallFunc_GetFloatValue_ReturnValue_16;
	Parms.CallFunc_Array_Contains_ReturnValue_14 = CallFunc_Array_Contains_ReturnValue_14;
	Parms.CallFunc_MapRangeClamped_ReturnValue_66 = CallFunc_MapRangeClamped_ReturnValue_66;
	Parms.CallFunc_MapRangeClamped_ReturnValue_67 = CallFunc_MapRangeClamped_ReturnValue_67;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_23 = CallFunc_SelectFloat_ReturnValue_23;
	Parms.CallFunc_GetForwardVector_ReturnValue_23 = CallFunc_GetForwardVector_ReturnValue_23;
	Parms.CallFunc_BreakVector_X_23 = CallFunc_BreakVector_X_23;
	Parms.CallFunc_BreakVector_Y_23 = CallFunc_BreakVector_Y_23;
	Parms.CallFunc_BreakVector_Z_23 = CallFunc_BreakVector_Z_23;
	Parms.CallFunc_MapRangeClamped_ReturnValue_68 = CallFunc_MapRangeClamped_ReturnValue_68;
	Parms.CallFunc_GetForwardVector_ReturnValue_24 = CallFunc_GetForwardVector_ReturnValue_24;
	Parms.CallFunc_GetClampedLinearColorValue_ReturnValue = CallFunc_GetClampedLinearColorValue_ReturnValue;
	Parms.CallFunc_BreakVector_X_24 = CallFunc_BreakVector_X_24;
	Parms.CallFunc_BreakVector_Y_24 = CallFunc_BreakVector_Y_24;
	Parms.CallFunc_BreakVector_Z_24 = CallFunc_BreakVector_Z_24;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_42 = CallFunc_Multiply_FloatFloat_ReturnValue_42;
	Parms.CallFunc_MapRangeClamped_ReturnValue_69 = CallFunc_MapRangeClamped_ReturnValue_69;
	Parms.CallFunc_FClamp_ReturnValue_18 = CallFunc_FClamp_ReturnValue_18;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_43 = CallFunc_Multiply_FloatFloat_ReturnValue_43;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_5 = CallFunc_Multiply_LinearColorFloat_ReturnValue_5;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_15 = CallFunc_Subtract_FloatFloat_ReturnValue_15;
	Parms.CallFunc_Multiply_LinearColorLinearColor_ReturnValue_1 = CallFunc_Multiply_LinearColorLinearColor_ReturnValue_1;
	Parms.CallFunc_Abs_ReturnValue_9 = CallFunc_Abs_ReturnValue_9;
	Parms.CallFunc_MapRangeClamped_ReturnValue_70 = CallFunc_MapRangeClamped_ReturnValue_70;
	Parms.CallFunc_GetFloatValue_ReturnValue_17 = CallFunc_GetFloatValue_ReturnValue_17;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_18 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_18;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_44 = CallFunc_Multiply_FloatFloat_ReturnValue_44;
	Parms.CallFunc_FClamp_ReturnValue_19 = CallFunc_FClamp_ReturnValue_19;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_45 = CallFunc_Multiply_FloatFloat_ReturnValue_45;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_6 = CallFunc_Multiply_LinearColorFloat_ReturnValue_6;
	Parms.CallFunc_MapRangeClamped_ReturnValue_71 = CallFunc_MapRangeClamped_ReturnValue_71;
	Parms.CallFunc_GetForwardVector_ReturnValue_25 = CallFunc_GetForwardVector_ReturnValue_25;
	Parms.CallFunc_MapRangeClamped_ReturnValue_72 = CallFunc_MapRangeClamped_ReturnValue_72;
	Parms.CallFunc_BreakVector_X_25 = CallFunc_BreakVector_X_25;
	Parms.CallFunc_BreakVector_Y_25 = CallFunc_BreakVector_Y_25;
	Parms.CallFunc_BreakVector_Z_25 = CallFunc_BreakVector_Z_25;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_46 = CallFunc_Multiply_FloatFloat_ReturnValue_46;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_20 = CallFunc_FClamp_ReturnValue_20;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_14 = CallFunc_Lerp_ReturnValue_14;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_47 = CallFunc_Multiply_FloatFloat_ReturnValue_47;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_10 = CallFunc_Divide_FloatFloat_ReturnValue_10;
	Parms.CallFunc_SelectFloat_ReturnValue_24 = CallFunc_SelectFloat_ReturnValue_24;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_48 = CallFunc_Multiply_FloatFloat_ReturnValue_48;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_49 = CallFunc_Multiply_FloatFloat_ReturnValue_49;
	Parms.CallFunc_Lerp_ReturnValue_15 = CallFunc_Lerp_ReturnValue_15;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_50 = CallFunc_Multiply_FloatFloat_ReturnValue_50;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_16 = CallFunc_Subtract_FloatFloat_ReturnValue_16;
	Parms.CallFunc_GetForwardVector_ReturnValue_26 = CallFunc_GetForwardVector_ReturnValue_26;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_11 = CallFunc_Divide_FloatFloat_ReturnValue_11;
	Parms.CallFunc_BreakVector_X_26 = CallFunc_BreakVector_X_26;
	Parms.CallFunc_BreakVector_Y_26 = CallFunc_BreakVector_Y_26;
	Parms.CallFunc_BreakVector_Z_26 = CallFunc_BreakVector_Z_26;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_51 = CallFunc_Multiply_FloatFloat_ReturnValue_51;
	Parms.CallFunc_MapRangeClamped_ReturnValue_73 = CallFunc_MapRangeClamped_ReturnValue_73;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_52 = CallFunc_Multiply_FloatFloat_ReturnValue_52;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_53 = CallFunc_Multiply_FloatFloat_ReturnValue_53;
	Parms.CallFunc_GetForwardVector_ReturnValue_27 = CallFunc_GetForwardVector_ReturnValue_27;
	Parms.CallFunc_BreakVector_X_27 = CallFunc_BreakVector_X_27;
	Parms.CallFunc_BreakVector_Y_27 = CallFunc_BreakVector_Y_27;
	Parms.CallFunc_BreakVector_Z_27 = CallFunc_BreakVector_Z_27;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_19 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_19;
	Parms.CallFunc_MapRangeClamped_ReturnValue_74 = CallFunc_MapRangeClamped_ReturnValue_74;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_12 = CallFunc_Divide_FloatFloat_ReturnValue_12;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_54 = CallFunc_Multiply_FloatFloat_ReturnValue_54;
	Parms.CallFunc_GetForwardVector_ReturnValue_28 = CallFunc_GetForwardVector_ReturnValue_28;
	Parms.CallFunc_BreakVector_X_28 = CallFunc_BreakVector_X_28;
	Parms.CallFunc_BreakVector_Y_28 = CallFunc_BreakVector_Y_28;
	Parms.CallFunc_BreakVector_Z_28 = CallFunc_BreakVector_Z_28;
	Parms.CallFunc_MapRangeClamped_ReturnValue_75 = CallFunc_MapRangeClamped_ReturnValue_75;
	Parms.CallFunc_MapRangeClamped_ReturnValue_76 = CallFunc_MapRangeClamped_ReturnValue_76;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_55 = CallFunc_Multiply_FloatFloat_ReturnValue_55;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_56 = CallFunc_Multiply_FloatFloat_ReturnValue_56;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_17 = CallFunc_Subtract_FloatFloat_ReturnValue_17;
	Parms.CallFunc_Abs_ReturnValue_10 = CallFunc_Abs_ReturnValue_10;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_13 = CallFunc_Divide_FloatFloat_ReturnValue_13;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_20 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_20;
	Parms.CallFunc_MapRangeClamped_ReturnValue_77 = CallFunc_MapRangeClamped_ReturnValue_77;
	Parms.CallFunc_FClamp_ReturnValue_21 = CallFunc_FClamp_ReturnValue_21;
	Parms.CallFunc_Lerp_ReturnValue_16 = CallFunc_Lerp_ReturnValue_16;
	Parms.CallFunc_Lerp_ReturnValue_17 = CallFunc_Lerp_ReturnValue_17;
	Parms.CallFunc_SelectFloat_ReturnValue_25 = CallFunc_SelectFloat_ReturnValue_25;
	Parms.CallFunc_MapRangeClamped_ReturnValue_78 = CallFunc_MapRangeClamped_ReturnValue_78;
	Parms.CallFunc_Lerp_ReturnValue_18 = CallFunc_Lerp_ReturnValue_18;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_57 = CallFunc_Multiply_FloatFloat_ReturnValue_57;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_58 = CallFunc_Multiply_FloatFloat_ReturnValue_58;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_59 = CallFunc_Multiply_FloatFloat_ReturnValue_59;
	Parms.CallFunc_SelectFloat_ReturnValue_26 = CallFunc_SelectFloat_ReturnValue_26;
	Parms.CallFunc_MapRangeClamped_ReturnValue_79 = CallFunc_MapRangeClamped_ReturnValue_79;
	Parms.CallFunc_Lerp_ReturnValue_19 = CallFunc_Lerp_ReturnValue_19;
	Parms.CallFunc_MapRangeClamped_ReturnValue_80 = CallFunc_MapRangeClamped_ReturnValue_80;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_21 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_21;
	Parms.CallFunc_GetForwardVector_ReturnValue_29 = CallFunc_GetForwardVector_ReturnValue_29;
	Parms.CallFunc_MapRangeClamped_ReturnValue_81 = CallFunc_MapRangeClamped_ReturnValue_81;
	Parms.CallFunc_BreakVector_X_29 = CallFunc_BreakVector_X_29;
	Parms.CallFunc_BreakVector_Y_29 = CallFunc_BreakVector_Y_29;
	Parms.CallFunc_BreakVector_Z_29 = CallFunc_BreakVector_Z_29;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_60 = CallFunc_Multiply_FloatFloat_ReturnValue_60;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_61 = CallFunc_Multiply_FloatFloat_ReturnValue_61;
	Parms.CallFunc_Lerp_ReturnValue_20 = CallFunc_Lerp_ReturnValue_20;
	Parms.CallFunc_FClamp_ReturnValue_22 = CallFunc_FClamp_ReturnValue_22;
	Parms.K2Node_MakeArray_Array_15 = K2Node_MakeArray_Array_15;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_62 = CallFunc_Multiply_FloatFloat_ReturnValue_62;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_18 = CallFunc_Subtract_FloatFloat_ReturnValue_18;
	Parms.CallFunc_MapRangeClamped_ReturnValue_82 = CallFunc_MapRangeClamped_ReturnValue_82;
	Parms.CallFunc_Abs_ReturnValue_11 = CallFunc_Abs_ReturnValue_11;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_14 = CallFunc_Divide_FloatFloat_ReturnValue_14;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_22 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_22;
	Parms.CallFunc_Lerp_ReturnValue_21 = CallFunc_Lerp_ReturnValue_21;
	Parms.CallFunc_FClamp_ReturnValue_23 = CallFunc_FClamp_ReturnValue_23;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_63 = CallFunc_Multiply_FloatFloat_ReturnValue_63;
	Parms.K2Node_MakeArray_Array_16 = K2Node_MakeArray_Array_16;
	Parms.CallFunc_Array_Contains_ReturnValue_15 = CallFunc_Array_Contains_ReturnValue_15;
	Parms.CallFunc_GetForwardVector_ReturnValue_30 = CallFunc_GetForwardVector_ReturnValue_30;
	Parms.CallFunc_SelectFloat_ReturnValue_27 = CallFunc_SelectFloat_ReturnValue_27;
	Parms.CallFunc_BreakVector_X_30 = CallFunc_BreakVector_X_30;
	Parms.CallFunc_BreakVector_Y_30 = CallFunc_BreakVector_Y_30;
	Parms.CallFunc_BreakVector_Z_30 = CallFunc_BreakVector_Z_30;
	Parms.CallFunc_MapRangeClamped_ReturnValue_83 = CallFunc_MapRangeClamped_ReturnValue_83;
	Parms.CallFunc_GetForwardVector_ReturnValue_31 = CallFunc_GetForwardVector_ReturnValue_31;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_15 = CallFunc_Add_FloatFloat_ReturnValue_15;
	Parms.CallFunc_BreakVector_X_31 = CallFunc_BreakVector_X_31;
	Parms.CallFunc_BreakVector_Y_31 = CallFunc_BreakVector_Y_31;
	Parms.CallFunc_BreakVector_Z_31 = CallFunc_BreakVector_Z_31;
	Parms.CallFunc_MapRangeClamped_ReturnValue_84 = CallFunc_MapRangeClamped_ReturnValue_84;
	Parms.CallFunc_MapRangeClamped_ReturnValue_85 = CallFunc_MapRangeClamped_ReturnValue_85;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_64 = CallFunc_Multiply_FloatFloat_ReturnValue_64;
	Parms.CallFunc_SelectFloat_ReturnValue_28 = CallFunc_SelectFloat_ReturnValue_28;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_16 = CallFunc_Add_FloatFloat_ReturnValue_16;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_65 = CallFunc_Multiply_FloatFloat_ReturnValue_65;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_SelectFloat_ReturnValue_29 = CallFunc_SelectFloat_ReturnValue_29;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = CallFunc_EqualEqual_ByteByte_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_22 = CallFunc_Lerp_ReturnValue_22;
	Parms.CallFunc_SelectFloat_ReturnValue_30 = CallFunc_SelectFloat_ReturnValue_30;
	Parms.CallFunc_SelectFloat_ReturnValue_31 = CallFunc_SelectFloat_ReturnValue_31;
	Parms.CallFunc_SelectFloat_ReturnValue_32 = CallFunc_SelectFloat_ReturnValue_32;
	Parms.CallFunc_MapRangeClamped_ReturnValue_86 = CallFunc_MapRangeClamped_ReturnValue_86;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_66 = CallFunc_Multiply_FloatFloat_ReturnValue_66;
	Parms.CallFunc_GetFloatValue_ReturnValue_18 = CallFunc_GetFloatValue_ReturnValue_18;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_17 = CallFunc_Add_FloatFloat_ReturnValue_17;
	Parms.CallFunc_MapRangeClamped_ReturnValue_87 = CallFunc_MapRangeClamped_ReturnValue_87;
	Parms.CallFunc_GetForwardVector_ReturnValue_32 = CallFunc_GetForwardVector_ReturnValue_32;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_67 = CallFunc_Multiply_FloatFloat_ReturnValue_67;
	Parms.CallFunc_BreakVector_X_32 = CallFunc_BreakVector_X_32;
	Parms.CallFunc_BreakVector_Y_32 = CallFunc_BreakVector_Y_32;
	Parms.CallFunc_BreakVector_Z_32 = CallFunc_BreakVector_Z_32;
	Parms.CallFunc_MapRangeClamped_ReturnValue_88 = CallFunc_MapRangeClamped_ReturnValue_88;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_19 = CallFunc_Subtract_FloatFloat_ReturnValue_19;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = CallFunc_EqualEqual_ByteByte_ReturnValue_7;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_68 = CallFunc_Multiply_FloatFloat_ReturnValue_68;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_8 = CallFunc_EqualEqual_ByteByte_ReturnValue_8;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_15 = CallFunc_Divide_FloatFloat_ReturnValue_15;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_FClamp_ReturnValue_24 = CallFunc_FClamp_ReturnValue_24;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_23 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_23;
	Parms.CallFunc_FClamp_ReturnValue_25 = CallFunc_FClamp_ReturnValue_25;
	Parms.CallFunc_SelectFloat_ReturnValue_33 = CallFunc_SelectFloat_ReturnValue_33;
	Parms.CallFunc_GetFloatValue_ReturnValue_19 = CallFunc_GetFloatValue_ReturnValue_19;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_18 = CallFunc_Add_FloatFloat_ReturnValue_18;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_69 = CallFunc_Multiply_FloatFloat_ReturnValue_69;
	Parms.CallFunc_MapRangeClamped_ReturnValue_89 = CallFunc_MapRangeClamped_ReturnValue_89;
	Parms.CallFunc_GetFloatValue_ReturnValue_20 = CallFunc_GetFloatValue_ReturnValue_20;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_70 = CallFunc_Multiply_FloatFloat_ReturnValue_70;
	Parms.CallFunc_Lerp_ReturnValue_23 = CallFunc_Lerp_ReturnValue_23;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_16 = CallFunc_Divide_FloatFloat_ReturnValue_16;
	Parms.CallFunc_GetFloatValue_ReturnValue_21 = CallFunc_GetFloatValue_ReturnValue_21;
	Parms.CallFunc_MapRangeClamped_ReturnValue_90 = CallFunc_MapRangeClamped_ReturnValue_90;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_71 = CallFunc_Multiply_FloatFloat_ReturnValue_71;
	Parms.CallFunc_Lerp_ReturnValue_24 = CallFunc_Lerp_ReturnValue_24;
	Parms.CallFunc_Lerp_ReturnValue_25 = CallFunc_Lerp_ReturnValue_25;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_72 = CallFunc_Multiply_FloatFloat_ReturnValue_72;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_73 = CallFunc_Multiply_FloatFloat_ReturnValue_73;
	Parms.CallFunc_MapRangeClamped_ReturnValue_91 = CallFunc_MapRangeClamped_ReturnValue_91;
	Parms.CallFunc_SelectFloat_ReturnValue_34 = CallFunc_SelectFloat_ReturnValue_34;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_24 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_24;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_7 = CallFunc_Multiply_LinearColorFloat_ReturnValue_7;
	Parms.CallFunc_GetForwardVector_ReturnValue_33 = CallFunc_GetForwardVector_ReturnValue_33;
	Parms.CallFunc_BreakVector_X_33 = CallFunc_BreakVector_X_33;
	Parms.CallFunc_BreakVector_Y_33 = CallFunc_BreakVector_Y_33;
	Parms.CallFunc_BreakVector_Z_33 = CallFunc_BreakVector_Z_33;
	Parms.CallFunc_GetForwardVector_ReturnValue_34 = CallFunc_GetForwardVector_ReturnValue_34;
	Parms.CallFunc_GetFloatValue_ReturnValue_22 = CallFunc_GetFloatValue_ReturnValue_22;
	Parms.CallFunc_BreakVector_X_34 = CallFunc_BreakVector_X_34;
	Parms.CallFunc_BreakVector_Y_34 = CallFunc_BreakVector_Y_34;
	Parms.CallFunc_BreakVector_Z_34 = CallFunc_BreakVector_Z_34;
	Parms.CallFunc_MapRangeClamped_ReturnValue_92 = CallFunc_MapRangeClamped_ReturnValue_92;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_2 = CallFunc_Less_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_74 = CallFunc_Multiply_FloatFloat_ReturnValue_74;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_35 = CallFunc_SelectFloat_ReturnValue_35;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_75 = CallFunc_Multiply_FloatFloat_ReturnValue_75;
	Parms.CallFunc_SelectFloat_ReturnValue_36 = CallFunc_SelectFloat_ReturnValue_36;
	Parms.CallFunc_MapRangeClamped_ReturnValue_93 = CallFunc_MapRangeClamped_ReturnValue_93;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_76 = CallFunc_Multiply_FloatFloat_ReturnValue_76;
	Parms.CallFunc_SelectFloat_ReturnValue_37 = CallFunc_SelectFloat_ReturnValue_37;
	Parms.CallFunc_GetClampedLinearColorValue_ReturnValue_1 = CallFunc_GetClampedLinearColorValue_ReturnValue_1;
	Parms.CallFunc_GetClampedLinearColorValue_ReturnValue_2 = CallFunc_GetClampedLinearColorValue_ReturnValue_2;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_26 = CallFunc_FClamp_ReturnValue_26;
	Parms.CallFunc_LinearColorLerp_ReturnValue_2 = CallFunc_LinearColorLerp_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_77 = CallFunc_Multiply_FloatFloat_ReturnValue_77;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_19 = CallFunc_Add_FloatFloat_ReturnValue_19;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_78 = CallFunc_Multiply_FloatFloat_ReturnValue_78;
	Parms.CallFunc_SelectFloat_ReturnValue_38 = CallFunc_SelectFloat_ReturnValue_38;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_17 = CallFunc_Divide_FloatFloat_ReturnValue_17;
	Parms.CallFunc_Lerp_ReturnValue_26 = CallFunc_Lerp_ReturnValue_26;
	Parms.CallFunc_FClamp_ReturnValue_27 = CallFunc_FClamp_ReturnValue_27;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_25 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_25;
	Parms.CallFunc_Lerp_ReturnValue_27 = CallFunc_Lerp_ReturnValue_27;
	Parms.CallFunc_MapRangeClamped_ReturnValue_94 = CallFunc_MapRangeClamped_ReturnValue_94;
	Parms.CallFunc_MapRangeClamped_ReturnValue_95 = CallFunc_MapRangeClamped_ReturnValue_95;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_26 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_26;
	Parms.CallFunc_GetFloatValue_ReturnValue_23 = CallFunc_GetFloatValue_ReturnValue_23;
	Parms.CallFunc_FClamp_ReturnValue_28 = CallFunc_FClamp_ReturnValue_28;
	Parms.CallFunc_SelectFloat_ReturnValue_39 = CallFunc_SelectFloat_ReturnValue_39;
	Parms.CallFunc_Lerp_ReturnValue_28 = CallFunc_Lerp_ReturnValue_28;
	Parms.CallFunc_GetClampedLinearColorValue_ReturnValue_3 = CallFunc_GetClampedLinearColorValue_ReturnValue_3;
	Parms.CallFunc_MapRangeClamped_ReturnValue_96 = CallFunc_MapRangeClamped_ReturnValue_96;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_27 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_27;
	Parms.CallFunc_MapRangeClamped_ReturnValue_97 = CallFunc_MapRangeClamped_ReturnValue_97;
	Parms.CallFunc_MapRangeClamped_ReturnValue_98 = CallFunc_MapRangeClamped_ReturnValue_98;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_28 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_28;
	Parms.CallFunc_MapRangeClamped_ReturnValue_99 = CallFunc_MapRangeClamped_ReturnValue_99;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_79 = CallFunc_Multiply_FloatFloat_ReturnValue_79;
	Parms.CallFunc_GetClampedLinearColorValue_ReturnValue_4 = CallFunc_GetClampedLinearColorValue_ReturnValue_4;
	Parms.CallFunc_Lerp_ReturnValue_29 = CallFunc_Lerp_ReturnValue_29;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_80 = CallFunc_Multiply_FloatFloat_ReturnValue_80;
	Parms.CallFunc_MapRangeClamped_ReturnValue_100 = CallFunc_MapRangeClamped_ReturnValue_100;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_81 = CallFunc_Multiply_FloatFloat_ReturnValue_81;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_29 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_29;
	Parms.CallFunc_GetForwardVector_ReturnValue_35 = CallFunc_GetForwardVector_ReturnValue_35;
	Parms.CallFunc_BreakVector_X_35 = CallFunc_BreakVector_X_35;
	Parms.CallFunc_BreakVector_Y_35 = CallFunc_BreakVector_Y_35;
	Parms.CallFunc_BreakVector_Z_35 = CallFunc_BreakVector_Z_35;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_82 = CallFunc_Multiply_FloatFloat_ReturnValue_82;
	Parms.CallFunc_MapRangeClamped_ReturnValue_101 = CallFunc_MapRangeClamped_ReturnValue_101;
	Parms.CallFunc_FClamp_ReturnValue_29 = CallFunc_FClamp_ReturnValue_29;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_83 = CallFunc_Multiply_FloatFloat_ReturnValue_83;
	Parms.CallFunc_Lerp_ReturnValue_30 = CallFunc_Lerp_ReturnValue_30;
	Parms.CallFunc_FClamp_ReturnValue_30 = CallFunc_FClamp_ReturnValue_30;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_84 = CallFunc_Multiply_FloatFloat_ReturnValue_84;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_85 = CallFunc_Multiply_FloatFloat_ReturnValue_85;
	Parms.CallFunc_Lerp_ReturnValue_31 = CallFunc_Lerp_ReturnValue_31;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_20 = CallFunc_Add_FloatFloat_ReturnValue_20;
	Parms.CallFunc_GetForwardVector_ReturnValue_36 = CallFunc_GetForwardVector_ReturnValue_36;
	Parms.CallFunc_BreakVector_X_36 = CallFunc_BreakVector_X_36;
	Parms.CallFunc_BreakVector_Y_36 = CallFunc_BreakVector_Y_36;
	Parms.CallFunc_BreakVector_Z_36 = CallFunc_BreakVector_Z_36;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_20 = CallFunc_Subtract_FloatFloat_ReturnValue_20;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_86 = CallFunc_Multiply_FloatFloat_ReturnValue_86;
	Parms.CallFunc_FClamp_ReturnValue_31 = CallFunc_FClamp_ReturnValue_31;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_21 = CallFunc_Subtract_FloatFloat_ReturnValue_21;
	Parms.K2Node_MakeArray_Array_17 = K2Node_MakeArray_Array_17;
	Parms.CallFunc_GetClampedLinearColorValue_ReturnValue_5 = CallFunc_GetClampedLinearColorValue_ReturnValue_5;
	Parms.CallFunc_MapRangeClamped_ReturnValue_102 = CallFunc_MapRangeClamped_ReturnValue_102;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_8 = CallFunc_Multiply_LinearColorFloat_ReturnValue_8;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_30 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_30;
	Parms.CallFunc_MapRangeClamped_ReturnValue_103 = CallFunc_MapRangeClamped_ReturnValue_103;
	Parms.CallFunc_Array_Contains_ReturnValue_16 = CallFunc_Array_Contains_ReturnValue_16;
	Parms.CallFunc_MapRangeClamped_ReturnValue_104 = CallFunc_MapRangeClamped_ReturnValue_104;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_87 = CallFunc_Multiply_FloatFloat_ReturnValue_87;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_88 = CallFunc_Multiply_FloatFloat_ReturnValue_88;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_89 = CallFunc_Multiply_FloatFloat_ReturnValue_89;
	Parms.CallFunc_GetForwardVector_ReturnValue_37 = CallFunc_GetForwardVector_ReturnValue_37;
	Parms.CallFunc_GetForwardVector_ReturnValue_38 = CallFunc_GetForwardVector_ReturnValue_38;
	Parms.CallFunc_BreakVector_X_37 = CallFunc_BreakVector_X_37;
	Parms.CallFunc_BreakVector_Y_37 = CallFunc_BreakVector_Y_37;
	Parms.CallFunc_BreakVector_Z_37 = CallFunc_BreakVector_Z_37;
	Parms.CallFunc_BreakVector_X_38 = CallFunc_BreakVector_X_38;
	Parms.CallFunc_BreakVector_Y_38 = CallFunc_BreakVector_Y_38;
	Parms.CallFunc_BreakVector_Z_38 = CallFunc_BreakVector_Z_38;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_90 = CallFunc_Multiply_FloatFloat_ReturnValue_90;
	Parms.CallFunc_MapRangeClamped_ReturnValue_105 = CallFunc_MapRangeClamped_ReturnValue_105;
	Parms.CallFunc_FClamp_ReturnValue_32 = CallFunc_FClamp_ReturnValue_32;
	Parms.CallFunc_GetFloatValue_ReturnValue_24 = CallFunc_GetFloatValue_ReturnValue_24;
	Parms.CallFunc_GetForwardVector_ReturnValue_39 = CallFunc_GetForwardVector_ReturnValue_39;
	Parms.CallFunc_Lerp_ReturnValue_32 = CallFunc_Lerp_ReturnValue_32;
	Parms.CallFunc_BreakVector_X_39 = CallFunc_BreakVector_X_39;
	Parms.CallFunc_BreakVector_Y_39 = CallFunc_BreakVector_Y_39;
	Parms.CallFunc_BreakVector_Z_39 = CallFunc_BreakVector_Z_39;
	Parms.K2Node_MakeArray_Array_18 = K2Node_MakeArray_Array_18;
	Parms.CallFunc_MapRangeClamped_ReturnValue_106 = CallFunc_MapRangeClamped_ReturnValue_106;
	Parms.CallFunc_Array_Contains_ReturnValue_17 = CallFunc_Array_Contains_ReturnValue_17;
	Parms.CallFunc_Lerp_ReturnValue_33 = CallFunc_Lerp_ReturnValue_33;
	Parms.CallFunc_SelectFloat_ReturnValue_40 = CallFunc_SelectFloat_ReturnValue_40;
	Parms.CallFunc_SelectFloat_ReturnValue_41 = CallFunc_SelectFloat_ReturnValue_41;
	Parms.K2Node_MakeArray_Array_19 = K2Node_MakeArray_Array_19;
	Parms.CallFunc_Lerp_ReturnValue_34 = CallFunc_Lerp_ReturnValue_34;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_91 = CallFunc_Multiply_FloatFloat_ReturnValue_91;
	Parms.CallFunc_SelectFloat_ReturnValue_42 = CallFunc_SelectFloat_ReturnValue_42;
	Parms.CallFunc_Lerp_ReturnValue_35 = CallFunc_Lerp_ReturnValue_35;
	Parms.CallFunc_GetForwardVector_ReturnValue_40 = CallFunc_GetForwardVector_ReturnValue_40;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_92 = CallFunc_Multiply_FloatFloat_ReturnValue_92;
	Parms.CallFunc_BreakVector_X_40 = CallFunc_BreakVector_X_40;
	Parms.CallFunc_BreakVector_Y_40 = CallFunc_BreakVector_Y_40;
	Parms.CallFunc_BreakVector_Z_40 = CallFunc_BreakVector_Z_40;
	Parms.CallFunc_Lerp_ReturnValue_36 = CallFunc_Lerp_ReturnValue_36;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_93 = CallFunc_Multiply_FloatFloat_ReturnValue_93;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_94 = CallFunc_Multiply_FloatFloat_ReturnValue_94;
	Parms.CallFunc_FClamp_ReturnValue_33 = CallFunc_FClamp_ReturnValue_33;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_95 = CallFunc_Multiply_FloatFloat_ReturnValue_95;
	Parms.CallFunc_FClamp_ReturnValue_34 = CallFunc_FClamp_ReturnValue_34;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_96 = CallFunc_Multiply_FloatFloat_ReturnValue_96;
	Parms.CallFunc_Lerp_ReturnValue_37 = CallFunc_Lerp_ReturnValue_37;
	Parms.CallFunc_Lerp_ReturnValue_38 = CallFunc_Lerp_ReturnValue_38;
	Parms.CallFunc_Array_Contains_ReturnValue_18 = CallFunc_Array_Contains_ReturnValue_18;
	Parms.CallFunc_SelectFloat_ReturnValue_43 = CallFunc_SelectFloat_ReturnValue_43;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_22 = CallFunc_Subtract_FloatFloat_ReturnValue_22;
	Parms.CallFunc_Lerp_ReturnValue_39 = CallFunc_Lerp_ReturnValue_39;
	Parms.CallFunc_Abs_ReturnValue_12 = CallFunc_Abs_ReturnValue_12;
	Parms.CallFunc_Lerp_ReturnValue_40 = CallFunc_Lerp_ReturnValue_40;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_18 = CallFunc_Divide_FloatFloat_ReturnValue_18;
	Parms.CallFunc_MapRangeClamped_ReturnValue_107 = CallFunc_MapRangeClamped_ReturnValue_107;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_31 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_31;
	Parms.K2Node_MakeArray_Array_20 = K2Node_MakeArray_Array_20;
	Parms.CallFunc_FClamp_ReturnValue_35 = CallFunc_FClamp_ReturnValue_35;
	Parms.CallFunc_Array_Contains_ReturnValue_19 = CallFunc_Array_Contains_ReturnValue_19;
	Parms.CallFunc_Lerp_ReturnValue_41 = CallFunc_Lerp_ReturnValue_41;
	Parms.CallFunc_SelectFloat_ReturnValue_44 = CallFunc_SelectFloat_ReturnValue_44;
	Parms.CallFunc_SelectFloat_ReturnValue_45 = CallFunc_SelectFloat_ReturnValue_45;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_97 = CallFunc_Multiply_FloatFloat_ReturnValue_97;
	Parms.CallFunc_Lerp_ReturnValue_42 = CallFunc_Lerp_ReturnValue_42;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_21 = CallFunc_Add_FloatFloat_ReturnValue_21;
	Parms.CallFunc_GetForwardVector_ReturnValue_41 = CallFunc_GetForwardVector_ReturnValue_41;
	Parms.CallFunc_BreakVector_X_41 = CallFunc_BreakVector_X_41;
	Parms.CallFunc_BreakVector_Y_41 = CallFunc_BreakVector_Y_41;
	Parms.CallFunc_BreakVector_Z_41 = CallFunc_BreakVector_Z_41;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_23 = CallFunc_Subtract_FloatFloat_ReturnValue_23;
	Parms.CallFunc_MapRangeClamped_ReturnValue_108 = CallFunc_MapRangeClamped_ReturnValue_108;
	Parms.K2Node_MakeArray_Array_21 = K2Node_MakeArray_Array_21;
	Parms.CallFunc_GetFloatValue_ReturnValue_25 = CallFunc_GetFloatValue_ReturnValue_25;
	Parms.CallFunc_MapRangeClamped_ReturnValue_109 = CallFunc_MapRangeClamped_ReturnValue_109;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_98 = CallFunc_Multiply_FloatFloat_ReturnValue_98;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_22 = CallFunc_Add_FloatFloat_ReturnValue_22;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_99 = CallFunc_Multiply_FloatFloat_ReturnValue_99;
	Parms.CallFunc_SelectFloat_ReturnValue_46 = CallFunc_SelectFloat_ReturnValue_46;
	Parms.CallFunc_GetClampedLinearColorValue_ReturnValue_6 = CallFunc_GetClampedLinearColorValue_ReturnValue_6;
	Parms.CallFunc_Lerp_ReturnValue_43 = CallFunc_Lerp_ReturnValue_43;
	Parms.CallFunc_MapRangeClamped_ReturnValue_110 = CallFunc_MapRangeClamped_ReturnValue_110;
	Parms.CallFunc_Array_Contains_ReturnValue_20 = CallFunc_Array_Contains_ReturnValue_20;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_32 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_32;
	Parms.CallFunc_SelectFloat_ReturnValue_47 = CallFunc_SelectFloat_ReturnValue_47;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_100 = CallFunc_Multiply_FloatFloat_ReturnValue_100;
	Parms.CallFunc_Lerp_ReturnValue_44 = CallFunc_Lerp_ReturnValue_44;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_101 = CallFunc_Multiply_FloatFloat_ReturnValue_101;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_102 = CallFunc_Multiply_FloatFloat_ReturnValue_102;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_23 = CallFunc_Add_FloatFloat_ReturnValue_23;
	Parms.CallFunc_LinearColor_Desaturated_ReturnValue_1 = CallFunc_LinearColor_Desaturated_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_22 = K2Node_MakeArray_Array_22;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_9 = CallFunc_Multiply_LinearColorFloat_ReturnValue_9;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_10 = CallFunc_Multiply_LinearColorFloat_ReturnValue_10;
	Parms.CallFunc_Array_Contains_ReturnValue_21 = CallFunc_Array_Contains_ReturnValue_21;
	Parms.CallFunc_SelectFloat_ReturnValue_48 = CallFunc_SelectFloat_ReturnValue_48;
	Parms.CallFunc_Lerp_ReturnValue_45 = CallFunc_Lerp_ReturnValue_45;
	Parms.CallFunc_GetForwardVector_ReturnValue_42 = CallFunc_GetForwardVector_ReturnValue_42;
	Parms.CallFunc_MapRangeClamped_ReturnValue_111 = CallFunc_MapRangeClamped_ReturnValue_111;
	Parms.CallFunc_BreakVector_X_42 = CallFunc_BreakVector_X_42;
	Parms.CallFunc_BreakVector_Y_42 = CallFunc_BreakVector_Y_42;
	Parms.CallFunc_BreakVector_Z_42 = CallFunc_BreakVector_Z_42;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_33 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_33;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_103 = CallFunc_Multiply_FloatFloat_ReturnValue_103;
	Parms.CallFunc_MapRangeClamped_ReturnValue_112 = CallFunc_MapRangeClamped_ReturnValue_112;
	Parms.CallFunc_FClamp_ReturnValue_36 = CallFunc_FClamp_ReturnValue_36;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_104 = CallFunc_Multiply_FloatFloat_ReturnValue_104;
	Parms.CallFunc_Lerp_ReturnValue_46 = CallFunc_Lerp_ReturnValue_46;
	Parms.CallFunc_FClamp_ReturnValue_37 = CallFunc_FClamp_ReturnValue_37;
	Parms.CallFunc_Lerp_ReturnValue_47 = CallFunc_Lerp_ReturnValue_47;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_105 = CallFunc_Multiply_FloatFloat_ReturnValue_105;
	Parms.CallFunc_Lerp_ReturnValue_48 = CallFunc_Lerp_ReturnValue_48;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_106 = CallFunc_Multiply_FloatFloat_ReturnValue_106;
	Parms.CallFunc_Lerp_ReturnValue_49 = CallFunc_Lerp_ReturnValue_49;
	Parms.K2Node_MakeArray_Array_23 = K2Node_MakeArray_Array_23;
	Parms.CallFunc_MapRangeClamped_ReturnValue_113 = CallFunc_MapRangeClamped_ReturnValue_113;
	Parms.CallFunc_Array_Contains_ReturnValue_22 = CallFunc_Array_Contains_ReturnValue_22;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_34 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_34;
	Parms.CallFunc_MapRangeClamped_ReturnValue_114 = CallFunc_MapRangeClamped_ReturnValue_114;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_107 = CallFunc_Multiply_FloatFloat_ReturnValue_107;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_24 = K2Node_MakeArray_Array_24;
	Parms.CallFunc_SelectColor_ReturnValue_1 = CallFunc_SelectColor_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue_23 = CallFunc_Array_Contains_ReturnValue_23;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_24 = CallFunc_Subtract_FloatFloat_ReturnValue_24;
	Parms.CallFunc_MapRangeClamped_ReturnValue_115 = CallFunc_MapRangeClamped_ReturnValue_115;
	Parms.CallFunc_GetForwardVector_ReturnValue_43 = CallFunc_GetForwardVector_ReturnValue_43;
	Parms.CallFunc_BreakVector_X_43 = CallFunc_BreakVector_X_43;
	Parms.CallFunc_BreakVector_Y_43 = CallFunc_BreakVector_Y_43;
	Parms.CallFunc_BreakVector_Z_43 = CallFunc_BreakVector_Z_43;
	Parms.CallFunc_MapRangeClamped_ReturnValue_116 = CallFunc_MapRangeClamped_ReturnValue_116;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_35 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_35;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_108 = CallFunc_Multiply_FloatFloat_ReturnValue_108;
	Parms.CallFunc_SelectColor_ReturnValue_2 = CallFunc_SelectColor_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_109 = CallFunc_Multiply_FloatFloat_ReturnValue_109;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_11 = CallFunc_Multiply_LinearColorFloat_ReturnValue_11;
	Parms.CallFunc_LinearColor_Desaturated_ReturnValue_2 = CallFunc_LinearColor_Desaturated_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue_117 = CallFunc_MapRangeClamped_ReturnValue_117;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_36 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_36;
	Parms.CallFunc_MapRangeClamped_ReturnValue_118 = CallFunc_MapRangeClamped_ReturnValue_118;
	Parms.CallFunc_GetForwardVector_ReturnValue_44 = CallFunc_GetForwardVector_ReturnValue_44;
	Parms.CallFunc_BreakVector_X_44 = CallFunc_BreakVector_X_44;
	Parms.CallFunc_BreakVector_Y_44 = CallFunc_BreakVector_Y_44;
	Parms.CallFunc_BreakVector_Z_44 = CallFunc_BreakVector_Z_44;
	Parms.CallFunc_MapRangeClamped_ReturnValue_119 = CallFunc_MapRangeClamped_ReturnValue_119;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue_45 = CallFunc_GetForwardVector_ReturnValue_45;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_BreakVector_X_45 = CallFunc_BreakVector_X_45;
	Parms.CallFunc_BreakVector_Y_45 = CallFunc_BreakVector_Y_45;
	Parms.CallFunc_BreakVector_Z_45 = CallFunc_BreakVector_Z_45;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_3 = CallFunc_Less_FloatFloat_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_GetClampedLinearColorValue_ReturnValue_7 = CallFunc_GetClampedLinearColorValue_ReturnValue_7;
	Parms.K2Node_MakeArray_Array_25 = K2Node_MakeArray_Array_25;
	Parms.CallFunc_Array_Contains_ReturnValue_24 = CallFunc_Array_Contains_ReturnValue_24;
	Parms.CallFunc_SelectFloat_ReturnValue_49 = CallFunc_SelectFloat_ReturnValue_49;
	Parms.CallFunc_Lerp_ReturnValue_50 = CallFunc_Lerp_ReturnValue_50;
	Parms.CallFunc_GetForwardVector_ReturnValue_46 = CallFunc_GetForwardVector_ReturnValue_46;
	Parms.CallFunc_Lerp_ReturnValue_51 = CallFunc_Lerp_ReturnValue_51;
	Parms.CallFunc_BreakVector_X_46 = CallFunc_BreakVector_X_46;
	Parms.CallFunc_BreakVector_Y_46 = CallFunc_BreakVector_Y_46;
	Parms.CallFunc_BreakVector_Z_46 = CallFunc_BreakVector_Z_46;
	Parms.CallFunc_MapRangeClamped_ReturnValue_120 = CallFunc_MapRangeClamped_ReturnValue_120;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_110 = CallFunc_Multiply_FloatFloat_ReturnValue_110;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_37 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_37;
	Parms.CallFunc_FClamp_ReturnValue_38 = CallFunc_FClamp_ReturnValue_38;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_111 = CallFunc_Multiply_FloatFloat_ReturnValue_111;
	Parms.CallFunc_GetFloatValue_ReturnValue_26 = CallFunc_GetFloatValue_ReturnValue_26;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_12 = CallFunc_Multiply_LinearColorFloat_ReturnValue_12;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_112 = CallFunc_Multiply_FloatFloat_ReturnValue_112;
	Parms.CallFunc_Multiply_LinearColorLinearColor_ReturnValue_2 = CallFunc_Multiply_LinearColorLinearColor_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue_50 = CallFunc_SelectFloat_ReturnValue_50;
	Parms.CallFunc_SelectColor_ReturnValue_3 = CallFunc_SelectColor_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_113 = CallFunc_Multiply_FloatFloat_ReturnValue_113;
	Parms.CallFunc_MapRangeClamped_ReturnValue_121 = CallFunc_MapRangeClamped_ReturnValue_121;
	Parms.CallFunc_GetForwardVector_ReturnValue_47 = CallFunc_GetForwardVector_ReturnValue_47;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_24 = CallFunc_Add_FloatFloat_ReturnValue_24;
	Parms.CallFunc_BreakVector_X_47 = CallFunc_BreakVector_X_47;
	Parms.CallFunc_BreakVector_Y_47 = CallFunc_BreakVector_Y_47;
	Parms.CallFunc_BreakVector_Z_47 = CallFunc_BreakVector_Z_47;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_13 = CallFunc_Multiply_LinearColorFloat_ReturnValue_13;
	Parms.CallFunc_MapRangeClamped_ReturnValue_122 = CallFunc_MapRangeClamped_ReturnValue_122;
	Parms.CallFunc_LinearColorLerp_ReturnValue_3 = CallFunc_LinearColorLerp_ReturnValue_3;
	Parms.CallFunc_MapRangeClamped_ReturnValue_123 = CallFunc_MapRangeClamped_ReturnValue_123;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_14 = CallFunc_Multiply_LinearColorFloat_ReturnValue_14;
	Parms.CallFunc_SelectFloat_ReturnValue_51 = CallFunc_SelectFloat_ReturnValue_51;
	Parms.CallFunc_MapRangeClamped_ReturnValue_124 = CallFunc_MapRangeClamped_ReturnValue_124;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_114 = CallFunc_Multiply_FloatFloat_ReturnValue_114;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_38 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_38;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_115 = CallFunc_Multiply_FloatFloat_ReturnValue_115;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_116 = CallFunc_Multiply_FloatFloat_ReturnValue_116;
	Parms.CallFunc_GetForwardVector_ReturnValue_48 = CallFunc_GetForwardVector_ReturnValue_48;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_117 = CallFunc_Multiply_FloatFloat_ReturnValue_117;
	Parms.CallFunc_BreakVector_X_48 = CallFunc_BreakVector_X_48;
	Parms.CallFunc_BreakVector_Y_48 = CallFunc_BreakVector_Y_48;
	Parms.CallFunc_BreakVector_Z_48 = CallFunc_BreakVector_Z_48;
	Parms.CallFunc_SelectFloat_ReturnValue_52 = CallFunc_SelectFloat_ReturnValue_52;
	Parms.CallFunc_MapRangeClamped_ReturnValue_125 = CallFunc_MapRangeClamped_ReturnValue_125;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_25 = CallFunc_Subtract_FloatFloat_ReturnValue_25;
	Parms.CallFunc_GetForwardVector_ReturnValue_49 = CallFunc_GetForwardVector_ReturnValue_49;
	Parms.CallFunc_Abs_ReturnValue_13 = CallFunc_Abs_ReturnValue_13;
	Parms.CallFunc_BreakVector_X_49 = CallFunc_BreakVector_X_49;
	Parms.CallFunc_BreakVector_Y_49 = CallFunc_BreakVector_Y_49;
	Parms.CallFunc_BreakVector_Z_49 = CallFunc_BreakVector_Z_49;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_19 = CallFunc_Divide_FloatFloat_ReturnValue_19;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_118 = CallFunc_Multiply_FloatFloat_ReturnValue_118;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_39 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_39;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_119 = CallFunc_Multiply_FloatFloat_ReturnValue_119;
	Parms.CallFunc_FClamp_ReturnValue_39 = CallFunc_FClamp_ReturnValue_39;
	Parms.CallFunc_FClamp_ReturnValue_40 = CallFunc_FClamp_ReturnValue_40;
	Parms.CallFunc_Lerp_ReturnValue_52 = CallFunc_Lerp_ReturnValue_52;
	Parms.CallFunc_SelectFloat_ReturnValue_53 = CallFunc_SelectFloat_ReturnValue_53;
	Parms.CallFunc_GetFloatValue_ReturnValue_27 = CallFunc_GetFloatValue_ReturnValue_27;
	Parms.CallFunc_MapRangeClamped_ReturnValue_126 = CallFunc_MapRangeClamped_ReturnValue_126;
	Parms.CallFunc_Lerp_ReturnValue_53 = CallFunc_Lerp_ReturnValue_53;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_120 = CallFunc_Multiply_FloatFloat_ReturnValue_120;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_25 = CallFunc_Add_FloatFloat_ReturnValue_25;
	Parms.CallFunc_MapRangeClamped_ReturnValue_127 = CallFunc_MapRangeClamped_ReturnValue_127;
	Parms.CallFunc_MapRangeClamped_ReturnValue_128 = CallFunc_MapRangeClamped_ReturnValue_128;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_121 = CallFunc_Multiply_FloatFloat_ReturnValue_121;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_122 = CallFunc_Multiply_FloatFloat_ReturnValue_122;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_123 = CallFunc_Multiply_FloatFloat_ReturnValue_123;
	Parms.CallFunc_SelectFloat_ReturnValue_54 = CallFunc_SelectFloat_ReturnValue_54;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_26 = CallFunc_Add_FloatFloat_ReturnValue_26;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_124 = CallFunc_Multiply_FloatFloat_ReturnValue_124;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_27 = CallFunc_Add_FloatFloat_ReturnValue_27;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_125 = CallFunc_Multiply_FloatFloat_ReturnValue_125;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_126 = CallFunc_Multiply_FloatFloat_ReturnValue_126;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_127 = CallFunc_Multiply_FloatFloat_ReturnValue_127;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_128 = CallFunc_Multiply_FloatFloat_ReturnValue_128;
	Parms.CallFunc_GetClampedLinearColorValue_ReturnValue_8 = CallFunc_GetClampedLinearColorValue_ReturnValue_8;
	Parms.CallFunc_SelectFloat_ReturnValue_55 = CallFunc_SelectFloat_ReturnValue_55;
	Parms.CallFunc_GetClampedLinearColorValue_ReturnValue_9 = CallFunc_GetClampedLinearColorValue_ReturnValue_9;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_129 = CallFunc_Multiply_FloatFloat_ReturnValue_129;
	Parms.CallFunc_GetClampedLinearColorValue_ReturnValue_10 = CallFunc_GetClampedLinearColorValue_ReturnValue_10;
	Parms.CallFunc_SelectFloat_ReturnValue_56 = CallFunc_SelectFloat_ReturnValue_56;
	Parms.CallFunc_LinearColorLerp_ReturnValue_4 = CallFunc_LinearColorLerp_ReturnValue_4;
	Parms.CallFunc_GetFloatValue_ReturnValue_28 = CallFunc_GetFloatValue_ReturnValue_28;
	Parms.CallFunc_LinearColorLerp_ReturnValue_5 = CallFunc_LinearColorLerp_ReturnValue_5;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_15 = CallFunc_Multiply_LinearColorFloat_ReturnValue_15;
	Parms.CallFunc_MapRangeClamped_ReturnValue_129 = CallFunc_MapRangeClamped_ReturnValue_129;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_16 = CallFunc_Multiply_LinearColorFloat_ReturnValue_16;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_9 = CallFunc_EqualEqual_ByteByte_ReturnValue_9;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_10 = CallFunc_EqualEqual_ByteByte_ReturnValue_10;
	Parms.CallFunc_SelectColor_ReturnValue_4 = CallFunc_SelectColor_ReturnValue_4;
	Parms.CallFunc_LinearColor_Desaturated_ReturnValue_3 = CallFunc_LinearColor_Desaturated_ReturnValue_3;
	Parms.CallFunc_GetFloatValue_ReturnValue_29 = CallFunc_GetFloatValue_ReturnValue_29;
	Parms.CallFunc_SelectColor_ReturnValue_5 = CallFunc_SelectColor_ReturnValue_5;
	Parms.CallFunc_LinearColorLerp_ReturnValue_6 = CallFunc_LinearColorLerp_ReturnValue_6;
	Parms.K2Node_MakeArray_Array_26 = K2Node_MakeArray_Array_26;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_17 = CallFunc_Multiply_LinearColorFloat_ReturnValue_17;
	Parms.CallFunc_LinearColor_Desaturated_ReturnValue_4 = CallFunc_LinearColor_Desaturated_ReturnValue_4;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_18 = CallFunc_Multiply_LinearColorFloat_ReturnValue_18;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_19 = CallFunc_Multiply_LinearColorFloat_ReturnValue_19;
	Parms.CallFunc_LinearColor_Desaturated_ReturnValue_5 = CallFunc_LinearColor_Desaturated_ReturnValue_5;
	Parms.CallFunc_Multiply_LinearColorLinearColor_ReturnValue_3 = CallFunc_Multiply_LinearColorLinearColor_ReturnValue_3;
	Parms.CallFunc_Array_Contains_ReturnValue_25 = CallFunc_Array_Contains_ReturnValue_25;
	Parms.CallFunc_SelectColor_ReturnValue_6 = CallFunc_SelectColor_ReturnValue_6;
	Parms.CallFunc_SelectFloat_ReturnValue_57 = CallFunc_SelectFloat_ReturnValue_57;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_20 = CallFunc_Multiply_LinearColorFloat_ReturnValue_20;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_21 = CallFunc_Multiply_LinearColorFloat_ReturnValue_21;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_130 = CallFunc_MapRangeClamped_ReturnValue_130;
	Parms.CallFunc_Lerp_ReturnValue_54 = CallFunc_Lerp_ReturnValue_54;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_130 = CallFunc_Multiply_FloatFloat_ReturnValue_130;
	Parms.CallFunc_SelectFloat_ReturnValue_58 = CallFunc_SelectFloat_ReturnValue_58;
	Parms.CallFunc_Lerp_ReturnValue_55 = CallFunc_Lerp_ReturnValue_55;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_131 = CallFunc_Multiply_FloatFloat_ReturnValue_131;
	Parms.CallFunc_SelectFloat_ReturnValue_59 = CallFunc_SelectFloat_ReturnValue_59;
	Parms.CallFunc_Lerp_ReturnValue_56 = CallFunc_Lerp_ReturnValue_56;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_132 = CallFunc_Multiply_FloatFloat_ReturnValue_132;
	Parms.CallFunc_Lerp_ReturnValue_57 = CallFunc_Lerp_ReturnValue_57;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_133 = CallFunc_Multiply_FloatFloat_ReturnValue_133;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_134 = CallFunc_Multiply_FloatFloat_ReturnValue_134;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_135 = CallFunc_Multiply_FloatFloat_ReturnValue_135;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_22 = CallFunc_Multiply_LinearColorFloat_ReturnValue_22;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_23 = CallFunc_Multiply_LinearColorFloat_ReturnValue_23;
	Parms.CallFunc_LinearColor_Desaturated_ReturnValue_6 = CallFunc_LinearColor_Desaturated_ReturnValue_6;
	Parms.CallFunc_Multiply_LinearColorLinearColor_ReturnValue_4 = CallFunc_Multiply_LinearColorLinearColor_ReturnValue_4;
	Parms.CallFunc_SelectColor_ReturnValue_7 = CallFunc_SelectColor_ReturnValue_7;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_24 = CallFunc_Multiply_LinearColorFloat_ReturnValue_24;
	Parms.CallFunc_SelectColor_ReturnValue_8 = CallFunc_SelectColor_ReturnValue_8;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetClampedLinearColorValue_ReturnValue_11 = CallFunc_GetClampedLinearColorValue_ReturnValue_11;
	Parms.CallFunc_SelectFloat_ReturnValue_60 = CallFunc_SelectFloat_ReturnValue_60;
	Parms.CallFunc_GetFloatValue_ReturnValue_30 = CallFunc_GetFloatValue_ReturnValue_30;
	Parms.CallFunc_GetFloatValue_ReturnValue_31 = CallFunc_GetFloatValue_ReturnValue_31;
	Parms.CallFunc_GetForwardVector_ReturnValue_50 = CallFunc_GetForwardVector_ReturnValue_50;
	Parms.CallFunc_BreakVector_X_50 = CallFunc_BreakVector_X_50;
	Parms.CallFunc_BreakVector_Y_50 = CallFunc_BreakVector_Y_50;
	Parms.CallFunc_BreakVector_Z_50 = CallFunc_BreakVector_Z_50;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_2 = CallFunc_NotEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue_131 = CallFunc_MapRangeClamped_ReturnValue_131;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_3 = CallFunc_NotEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_MapRangeClamped_ReturnValue_132 = CallFunc_MapRangeClamped_ReturnValue_132;
	Parms.CallFunc_MapRangeClamped_ReturnValue_133 = CallFunc_MapRangeClamped_ReturnValue_133;
	Parms.CallFunc_GetFloatValue_ReturnValue_32 = CallFunc_GetFloatValue_ReturnValue_32;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_136 = CallFunc_Multiply_FloatFloat_ReturnValue_136;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_11 = CallFunc_EqualEqual_ByteByte_ReturnValue_11;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_25 = CallFunc_Multiply_LinearColorFloat_ReturnValue_25;
	Parms.CallFunc_GetForwardVector_ReturnValue_51 = CallFunc_GetForwardVector_ReturnValue_51;
	Parms.CallFunc_BreakVector_X_51 = CallFunc_BreakVector_X_51;
	Parms.CallFunc_BreakVector_Y_51 = CallFunc_BreakVector_Y_51;
	Parms.CallFunc_BreakVector_Z_51 = CallFunc_BreakVector_Z_51;
	Parms.CallFunc_GetForwardVector_ReturnValue_52 = CallFunc_GetForwardVector_ReturnValue_52;
	Parms.CallFunc_MapRangeClamped_ReturnValue_134 = CallFunc_MapRangeClamped_ReturnValue_134;
	Parms.CallFunc_BreakVector_X_52 = CallFunc_BreakVector_X_52;
	Parms.CallFunc_BreakVector_Y_52 = CallFunc_BreakVector_Y_52;
	Parms.CallFunc_BreakVector_Z_52 = CallFunc_BreakVector_Z_52;
	Parms.CallFunc_GetFloatValue_ReturnValue_33 = CallFunc_GetFloatValue_ReturnValue_33;
	Parms.CallFunc_MapRangeClamped_ReturnValue_135 = CallFunc_MapRangeClamped_ReturnValue_135;
	Parms.CallFunc_Lerp_ReturnValue_58 = CallFunc_Lerp_ReturnValue_58;
	Parms.CallFunc_GetFloatValue_ReturnValue_34 = CallFunc_GetFloatValue_ReturnValue_34;
	Parms.CallFunc_Lerp_ReturnValue_59 = CallFunc_Lerp_ReturnValue_59;
	Parms.CallFunc_Lerp_ReturnValue_60 = CallFunc_Lerp_ReturnValue_60;
	Parms.CallFunc_SelectFloat_ReturnValue_61 = CallFunc_SelectFloat_ReturnValue_61;
	Parms.CallFunc_Lerp_ReturnValue_61 = CallFunc_Lerp_ReturnValue_61;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_137 = CallFunc_Multiply_FloatFloat_ReturnValue_137;
	Parms.CallFunc_SelectFloat_ReturnValue_62 = CallFunc_SelectFloat_ReturnValue_62;
	Parms.CallFunc_Lerp_ReturnValue_62 = CallFunc_Lerp_ReturnValue_62;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_138 = CallFunc_Multiply_FloatFloat_ReturnValue_138;
	Parms.CallFunc_Lerp_ReturnValue_63 = CallFunc_Lerp_ReturnValue_63;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_139 = CallFunc_Multiply_FloatFloat_ReturnValue_139;
	Parms.CallFunc_MapRangeClamped_ReturnValue_136 = CallFunc_MapRangeClamped_ReturnValue_136;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_40 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_40;
	Parms.CallFunc_GetForwardVector_ReturnValue_53 = CallFunc_GetForwardVector_ReturnValue_53;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_12 = CallFunc_EqualEqual_ByteByte_ReturnValue_12;
	Parms.CallFunc_BreakVector_X_53 = CallFunc_BreakVector_X_53;
	Parms.CallFunc_BreakVector_Y_53 = CallFunc_BreakVector_Y_53;
	Parms.CallFunc_BreakVector_Z_53 = CallFunc_BreakVector_Z_53;
	Parms.CallFunc_MapRangeClamped_ReturnValue_137 = CallFunc_MapRangeClamped_ReturnValue_137;
	Parms.CallFunc_GetFloatValue_ReturnValue_35 = CallFunc_GetFloatValue_ReturnValue_35;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_20 = CallFunc_Divide_FloatFloat_ReturnValue_20;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_140 = CallFunc_Multiply_FloatFloat_ReturnValue_140;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_26 = CallFunc_Multiply_LinearColorFloat_ReturnValue_26;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_26 = CallFunc_Subtract_FloatFloat_ReturnValue_26;
	Parms.CallFunc_Abs_ReturnValue_14 = CallFunc_Abs_ReturnValue_14;
	Parms.CallFunc_GetFloatValue_ReturnValue_36 = CallFunc_GetFloatValue_ReturnValue_36;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_21 = CallFunc_Divide_FloatFloat_ReturnValue_21;
	Parms.CallFunc_Lerp_ReturnValue_64 = CallFunc_Lerp_ReturnValue_64;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_41 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_41;
	Parms.CallFunc_Lerp_ReturnValue_65 = CallFunc_Lerp_ReturnValue_65;
	Parms.CallFunc_FClamp_ReturnValue_41 = CallFunc_FClamp_ReturnValue_41;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_141 = CallFunc_Multiply_FloatFloat_ReturnValue_141;
	Parms.CallFunc_Lerp_ReturnValue_66 = CallFunc_Lerp_ReturnValue_66;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_142 = CallFunc_Multiply_FloatFloat_ReturnValue_142;
	Parms.CallFunc_SelectFloat_ReturnValue_63 = CallFunc_SelectFloat_ReturnValue_63;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_143 = CallFunc_Multiply_FloatFloat_ReturnValue_143;
	Parms.CallFunc_MapRangeClamped_ReturnValue_138 = CallFunc_MapRangeClamped_ReturnValue_138;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_144 = CallFunc_Multiply_FloatFloat_ReturnValue_144;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_28 = CallFunc_Add_FloatFloat_ReturnValue_28;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_13 = CallFunc_EqualEqual_ByteByte_ReturnValue_13;
	Parms.CallFunc_MapRangeClamped_ReturnValue_139 = CallFunc_MapRangeClamped_ReturnValue_139;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_145 = CallFunc_Multiply_FloatFloat_ReturnValue_145;
	Parms.CallFunc_SelectFloat_ReturnValue_64 = CallFunc_SelectFloat_ReturnValue_64;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_146 = CallFunc_Multiply_FloatFloat_ReturnValue_146;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_29 = CallFunc_Add_FloatFloat_ReturnValue_29;
	Parms.CallFunc_GetClampedLinearColorValue_ReturnValue_12 = CallFunc_GetClampedLinearColorValue_ReturnValue_12;
	Parms.CallFunc_GetClampedLinearColorValue_ReturnValue_13 = CallFunc_GetClampedLinearColorValue_ReturnValue_13;
	Parms.CallFunc_GetClampedLinearColorValue_ReturnValue_14 = CallFunc_GetClampedLinearColorValue_ReturnValue_14;
	Parms.CallFunc_GetClampedLinearColorValue_ReturnValue_15 = CallFunc_GetClampedLinearColorValue_ReturnValue_15;
	Parms.CallFunc_GetForwardVector_ReturnValue_54 = CallFunc_GetForwardVector_ReturnValue_54;
	Parms.CallFunc_GetForwardVector_ReturnValue_55 = CallFunc_GetForwardVector_ReturnValue_55;
	Parms.CallFunc_BreakVector_X_54 = CallFunc_BreakVector_X_54;
	Parms.CallFunc_BreakVector_Y_54 = CallFunc_BreakVector_Y_54;
	Parms.CallFunc_BreakVector_Z_54 = CallFunc_BreakVector_Z_54;
	Parms.CallFunc_BreakVector_X_55 = CallFunc_BreakVector_X_55;
	Parms.CallFunc_BreakVector_Y_55 = CallFunc_BreakVector_Y_55;
	Parms.CallFunc_BreakVector_Z_55 = CallFunc_BreakVector_Z_55;
	Parms.CallFunc_MapRangeClamped_ReturnValue_140 = CallFunc_MapRangeClamped_ReturnValue_140;
	Parms.CallFunc_MapRangeClamped_ReturnValue_141 = CallFunc_MapRangeClamped_ReturnValue_141;
	Parms.CallFunc_GetFloatValue_ReturnValue_37 = CallFunc_GetFloatValue_ReturnValue_37;
	Parms.CallFunc_Array_Contains_ReturnValue_26 = CallFunc_Array_Contains_ReturnValue_26;
	Parms.CallFunc_Lerp_ReturnValue_67 = CallFunc_Lerp_ReturnValue_67;
	Parms.CallFunc_SelectFloat_ReturnValue_65 = CallFunc_SelectFloat_ReturnValue_65;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_147 = CallFunc_Multiply_FloatFloat_ReturnValue_147;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_148 = CallFunc_Multiply_FloatFloat_ReturnValue_148;
	Parms.CallFunc_LinearColor_Desaturated_ReturnValue_7 = CallFunc_LinearColor_Desaturated_ReturnValue_7;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_149 = CallFunc_Multiply_FloatFloat_ReturnValue_149;
	Parms.CallFunc_LinearColor_Desaturated_ReturnValue_8 = CallFunc_LinearColor_Desaturated_ReturnValue_8;
	Parms.CallFunc_GetForwardVector_ReturnValue_56 = CallFunc_GetForwardVector_ReturnValue_56;
	Parms.CallFunc_BreakVector_X_56 = CallFunc_BreakVector_X_56;
	Parms.CallFunc_BreakVector_Y_56 = CallFunc_BreakVector_Y_56;
	Parms.CallFunc_BreakVector_Z_56 = CallFunc_BreakVector_Z_56;
	Parms.CallFunc_MapRangeClamped_ReturnValue_142 = CallFunc_MapRangeClamped_ReturnValue_142;
	Parms.CallFunc_GetForwardVector_ReturnValue_57 = CallFunc_GetForwardVector_ReturnValue_57;
	Parms.CallFunc_GetFloatValue_ReturnValue_38 = CallFunc_GetFloatValue_ReturnValue_38;
	Parms.CallFunc_BreakVector_X_57 = CallFunc_BreakVector_X_57;
	Parms.CallFunc_BreakVector_Y_57 = CallFunc_BreakVector_Y_57;
	Parms.CallFunc_BreakVector_Z_57 = CallFunc_BreakVector_Z_57;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_150 = CallFunc_Multiply_FloatFloat_ReturnValue_150;
	Parms.CallFunc_MapRangeClamped_ReturnValue_143 = CallFunc_MapRangeClamped_ReturnValue_143;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_151 = CallFunc_Multiply_FloatFloat_ReturnValue_151;
	Parms.CallFunc_GetFloatValue_ReturnValue_39 = CallFunc_GetFloatValue_ReturnValue_39;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_30 = CallFunc_Add_FloatFloat_ReturnValue_30;
	Parms.CallFunc_Lerp_ReturnValue_68 = CallFunc_Lerp_ReturnValue_68;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_27 = CallFunc_Multiply_LinearColorFloat_ReturnValue_27;
	Parms.CallFunc_SelectFloat_ReturnValue_66 = CallFunc_SelectFloat_ReturnValue_66;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_28 = CallFunc_Multiply_LinearColorFloat_ReturnValue_28;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_152 = CallFunc_Multiply_FloatFloat_ReturnValue_152;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_29 = CallFunc_Multiply_LinearColorFloat_ReturnValue_29;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_30 = CallFunc_Multiply_LinearColorFloat_ReturnValue_30;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_31 = CallFunc_Multiply_LinearColorFloat_ReturnValue_31;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_32 = CallFunc_Multiply_LinearColorFloat_ReturnValue_32;
	Parms.CallFunc_LinearColor_Desaturated_ReturnValue_9 = CallFunc_LinearColor_Desaturated_ReturnValue_9;
	Parms.CallFunc_LinearColor_Desaturated_ReturnValue_10 = CallFunc_LinearColor_Desaturated_ReturnValue_10;
	Parms.CallFunc_Multiply_LinearColorLinearColor_ReturnValue_5 = CallFunc_Multiply_LinearColorLinearColor_ReturnValue_5;
	Parms.CallFunc_Multiply_LinearColorLinearColor_ReturnValue_6 = CallFunc_Multiply_LinearColorLinearColor_ReturnValue_6;
	Parms.CallFunc_LinearColorLerp_ReturnValue_7 = CallFunc_LinearColorLerp_ReturnValue_7;
	Parms.CallFunc_Add_LinearColorLinearColor_ReturnValue = CallFunc_Add_LinearColorLinearColor_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_22 = CallFunc_Divide_FloatFloat_ReturnValue_22;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_23 = CallFunc_Divide_FloatFloat_ReturnValue_23;
	Parms.CallFunc_GetFloatValue_ReturnValue_40 = CallFunc_GetFloatValue_ReturnValue_40;
	Parms.CallFunc_GetFloatValue_ReturnValue_41 = CallFunc_GetFloatValue_ReturnValue_41;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_153 = CallFunc_Multiply_FloatFloat_ReturnValue_153;
	Parms.CallFunc_GetFloatValue_ReturnValue_42 = CallFunc_GetFloatValue_ReturnValue_42;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Sun and Moon Root Rotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Moon_Alignment                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Real_Moon_Phase                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Real_Moon_Position                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Real_Sun_Position                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Approximate_Real_Sun_Moon_and_Stars_Sun_Vector          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Approximate_Real_Sun_Moon_and_Stars_Moon_Vector         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Approximate_Real_Sun_Moon_and_Stars_Real_Phase          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Approximate_Real_Sun_Moon_and_Stars_Phase_Alignment     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Approximate_Real_Sun_Moon_and_Stars_Celestial_Orbit     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Approximate_Real_Sun_Moon_and_Stars_Celestial_Yaw       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Fraction_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromXZ_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_SelectRotator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeUnclamped_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_SelectRotator_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Fraction_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue_3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Percent_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult_1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_MapRangeClamped_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InRange_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Sky_C::Set_Sun_and_Moon_Root_Rotation(const struct FVector& Moon_Alignment, float Real_Moon_Phase, const struct FVector& Real_Moon_Position, const struct FVector& Real_Sun_Position, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Abs_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_1, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FVector& CallFunc_Approximate_Real_Sun_Moon_and_Stars_Sun_Vector, const struct FVector& CallFunc_Approximate_Real_Sun_Moon_and_Stars_Moon_Vector, float CallFunc_Approximate_Real_Sun_Moon_and_Stars_Real_Phase, const struct FVector& CallFunc_Approximate_Real_Sun_Moon_and_Stars_Phase_Alignment, float CallFunc_Approximate_Real_Sun_Moon_and_Stars_Celestial_Orbit, const struct FLinearColor& CallFunc_Approximate_Real_Sun_Moon_and_Stars_Celestial_Yaw, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, float CallFunc_SelectFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_2, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_2, const struct FVector& CallFunc_GetForwardVector_ReturnValue_3, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_2, const struct FVector& CallFunc_GetForwardVector_ReturnValue_4, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_3, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue_1, float CallFunc_Fraction_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_4, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_4, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_5, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_6, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FRotator& CallFunc_MakeRotFromXZ_ReturnValue, const struct FRotator& CallFunc_SelectRotator_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue_1, const struct FRotator& CallFunc_SelectRotator_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_Fraction_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_3, float CallFunc_Abs_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_7, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue_2, float CallFunc_FClamp_ReturnValue_2, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue_4, float CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue_3, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue_5, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue_6, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_1, float CallFunc_MapRangeClamped_ReturnValue_3, float CallFunc_MapRangeClamped_ReturnValue_4, float CallFunc_SelectFloat_ReturnValue_3, bool CallFunc_InRange_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "Set Sun and Moon Root Rotation");

	Params::AUltra_Dynamic_Sky_C_Set_Sun_and_Moon_Root_Rotation_Params Parms{};

	Parms.Moon_Alignment = Moon_Alignment;
	Parms.Real_Moon_Phase = Real_Moon_Phase;
	Parms.Real_Moon_Position = Real_Moon_Position;
	Parms.Real_Sun_Position = Real_Sun_Position;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue_1 = CallFunc_GetForwardVector_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_GetUpVector_ReturnValue = CallFunc_GetUpVector_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue_2 = CallFunc_GetForwardVector_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_RotateAngleAxis_ReturnValue = CallFunc_RotateAngleAxis_ReturnValue;
	Parms.CallFunc_SelectVector_ReturnValue_1 = CallFunc_SelectVector_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_Approximate_Real_Sun_Moon_and_Stars_Sun_Vector = CallFunc_Approximate_Real_Sun_Moon_and_Stars_Sun_Vector;
	Parms.CallFunc_Approximate_Real_Sun_Moon_and_Stars_Moon_Vector = CallFunc_Approximate_Real_Sun_Moon_and_Stars_Moon_Vector;
	Parms.CallFunc_Approximate_Real_Sun_Moon_and_Stars_Real_Phase = CallFunc_Approximate_Real_Sun_Moon_and_Stars_Real_Phase;
	Parms.CallFunc_Approximate_Real_Sun_Moon_and_Stars_Phase_Alignment = CallFunc_Approximate_Real_Sun_Moon_and_Stars_Phase_Alignment;
	Parms.CallFunc_Approximate_Real_Sun_Moon_and_Stars_Celestial_Orbit = CallFunc_Approximate_Real_Sun_Moon_and_Stars_Celestial_Orbit;
	Parms.CallFunc_Approximate_Real_Sun_Moon_and_Stars_Celestial_Yaw = CallFunc_Approximate_Real_Sun_Moon_and_Stars_Celestial_Yaw;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_1 = CallFunc_K2_GetComponentRotation_ReturnValue_1;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_2 = CallFunc_Subtract_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.K2Node_MakeStruct_LinearColor_1 = K2Node_MakeStruct_LinearColor_1;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_2 = CallFunc_K2_GetComponentRotation_ReturnValue_2;
	Parms.CallFunc_GetForwardVector_ReturnValue_3 = CallFunc_GetForwardVector_ReturnValue_3;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue_1 = CallFunc_Conv_RotatorToVector_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_1 = CallFunc_Conv_VectorToLinearColor_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_2 = CallFunc_Conv_VectorToLinearColor_ReturnValue_2;
	Parms.CallFunc_GetForwardVector_ReturnValue_4 = CallFunc_GetForwardVector_ReturnValue_4;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_3 = CallFunc_Conv_VectorToLinearColor_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.CallFunc_RotateAngleAxis_ReturnValue_1 = CallFunc_RotateAngleAxis_ReturnValue_1;
	Parms.CallFunc_Fraction_ReturnValue = CallFunc_Fraction_ReturnValue;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue_1 = CallFunc_GreaterGreater_VectorRotator_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_RotateAngleAxis_ReturnValue_2 = CallFunc_RotateAngleAxis_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_4 = CallFunc_Add_FloatFloat_ReturnValue_4;
	Parms.CallFunc_RotateAngleAxis_ReturnValue_3 = CallFunc_RotateAngleAxis_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_6 = CallFunc_Multiply_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.CallFunc_MakeRotFromXZ_ReturnValue = CallFunc_MakeRotFromXZ_ReturnValue;
	Parms.CallFunc_SelectRotator_ReturnValue = CallFunc_SelectRotator_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_1 = CallFunc_MapRangeUnclamped_ReturnValue_1;
	Parms.CallFunc_SelectRotator_ReturnValue_1 = CallFunc_SelectRotator_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_2 = CallFunc_Divide_FloatFloat_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Fraction_ReturnValue_1 = CallFunc_Fraction_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_3 = CallFunc_Subtract_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Abs_ReturnValue_1 = CallFunc_Abs_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_7 = CallFunc_Multiply_FloatFloat_ReturnValue_7;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue_2 = CallFunc_GreaterGreater_VectorRotator_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue_2 = CallFunc_FClamp_ReturnValue_2;
	Parms.CallFunc_RotateAngleAxis_ReturnValue_4 = CallFunc_RotateAngleAxis_ReturnValue_4;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue_3 = CallFunc_GreaterGreater_VectorRotator_ReturnValue_3;
	Parms.CallFunc_MakeVector_ReturnValue_3 = CallFunc_MakeVector_ReturnValue_3;
	Parms.CallFunc_RotateAngleAxis_ReturnValue_5 = CallFunc_RotateAngleAxis_ReturnValue_5;
	Parms.CallFunc_RotateAngleAxis_ReturnValue_6 = CallFunc_RotateAngleAxis_ReturnValue_6;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue = CallFunc_Percent_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectVector_ReturnValue_2 = CallFunc_SelectVector_ReturnValue_2;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue_1 = CallFunc_Conv_VectorToRotator_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult_1 = CallFunc_K2_SetWorldRotation_SweepHitResult_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_3 = CallFunc_MapRangeClamped_ReturnValue_3;
	Parms.CallFunc_MapRangeClamped_ReturnValue_4 = CallFunc_MapRangeClamped_ReturnValue_4;
	Parms.CallFunc_SelectFloat_ReturnValue_3 = CallFunc_SelectFloat_ReturnValue_3;
	Parms.CallFunc_InRange_FloatFloat_ReturnValue = CallFunc_InRange_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_4 = CallFunc_SelectFloat_ReturnValue_4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_5 = CallFunc_Add_FloatFloat_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUltra_Dynamic_Sky_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Sky_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "ReceiveTick");

	Params::AUltra_Dynamic_Sky_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AUltra_Dynamic_Sky_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Midnight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUltra_Dynamic_Sky_C::Midnight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "Midnight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Lights
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUltra_Dynamic_Sky_C::Update_Lights()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "Update Lights");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Restart Inside Cloud Fog
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUltra_Dynamic_Sky_C::Restart_Inside_Cloud_Fog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "Restart Inside Cloud Fog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Replicated ToD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUltra_Dynamic_Sky_C::Update_Replicated_ToD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "Update Replicated ToD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Sky MPCs
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUltra_Dynamic_Sky_C::Update_Sky_MPCs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "Update Sky MPCs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ExecuteUbergraph_Ultra_Dynamic_Sky
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IUltra_Dynamic_Weather_Interface_C>K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUltra_Dynamic_Sky_C::ExecuteUbergraph_Ultra_Dynamic_Sky(int32 EntryPoint, const struct FTransform& Temp_struct_Variable, bool CallFunc_HasAuthority_ReturnValue, class UNiagaraComponent* CallFunc_AddComponent_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasAuthority_ReturnValue_3, float K2Node_Event_DeltaSeconds, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_3, float CallFunc_SelectFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, float CallFunc_Subtract_FloatFloat_ReturnValue_1, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, bool Temp_bool_IsClosed_Variable_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_Less_FloatFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_SelectFloat_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_6, float CallFunc_Divide_FloatFloat_ReturnValue_4, float CallFunc_SelectFloat_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_7, int32 Temp_int_Variable, float CallFunc_Add_FloatFloat_ReturnValue_3, bool CallFunc_Less_FloatFloat_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_4, float CallFunc_SelectFloat_ReturnValue_4, float CallFunc_SelectFloat_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IUltra_Dynamic_Weather_Interface_C> K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "ExecuteUbergraph_Ultra_Dynamic_Sky");

	Params::AUltra_Dynamic_Sky_C_ExecuteUbergraph_Ultra_Dynamic_Sky_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue_3 = CallFunc_HasAuthority_ReturnValue_3;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_3 = CallFunc_Greater_FloatFloat_ReturnValue_3;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_2 = CallFunc_Divide_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_3 = CallFunc_Divide_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_6 = CallFunc_Multiply_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_4 = CallFunc_Divide_FloatFloat_ReturnValue_4;
	Parms.CallFunc_SelectFloat_ReturnValue_3 = CallFunc_SelectFloat_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_7 = CallFunc_Multiply_FloatFloat_ReturnValue_7;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_2 = CallFunc_Less_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_4 = CallFunc_Greater_FloatFloat_ReturnValue_4;
	Parms.CallFunc_SelectFloat_ReturnValue_4 = CallFunc_SelectFloat_ReturnValue_4;
	Parms.CallFunc_SelectFloat_ReturnValue_5 = CallFunc_SelectFloat_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_7 = CallFunc_BooleanAND_ReturnValue_7;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_8 = CallFunc_BooleanAND_ReturnValue_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface = K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sunrise__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUltra_Dynamic_Sky_C::Sunrise__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "Sunrise__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sunset__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUltra_Dynamic_Sky_C::Sunset__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_C", "Sunset__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


