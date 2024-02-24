#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CinematicPawn.BP_CinematicPawn_C
// (Actor, Pawn)

class UClass* ABP_CinematicPawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CinematicPawn_C");

	return Clss;
}


// BP_CinematicPawn_C BP_CinematicPawn.Default__BP_CinematicPawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CinematicPawn_C* ABP_CinematicPawn_C::GetDefaultObj()
{
	static class ABP_CinematicPawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CinematicPawn_C*>(ABP_CinematicPawn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CinematicPawn.BP_CinematicPawn_C.UpdateCamera
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     InLocation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    InRotation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              InFOV                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForceUpdate                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     OutLocation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    OutRotation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              OutFOV                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CinematicPawn_C::UpdateCamera(const struct FVector& InLocation, const struct FRotator& InRotation, float InFOV, bool ForceUpdate, struct FVector* OutLocation, struct FRotator* OutRotation, float* OutFOV, bool* Return, bool Temp_bool_Variable, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FRotator& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "UpdateCamera");

	Params::ABP_CinematicPawn_C_UpdateCamera_Params Parms{};

	Parms.InLocation = InLocation;
	Parms.InRotation = InRotation;
	Parms.InFOV = InFOV;
	Parms.ForceUpdate = ForceUpdate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (OutLocation != nullptr)
		*OutLocation = std::move(Parms.OutLocation);

	if (OutRotation != nullptr)
		*OutRotation = std::move(Parms.OutRotation);

	if (OutFOV != nullptr)
		*OutFOV = Parms.OutFOV;

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.ChangePreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CinematicChair_C*        K2Node_DynamicCast_AsBP_Cinematic_Chair                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CinematicPawn_C::ChangePreset(int32 Index, class ABP_CinematicChair_C* K2Node_DynamicCast_AsBP_Cinematic_Chair, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "ChangePreset");

	Params::ABP_CinematicPawn_C_ChangePreset_Params Parms{};

	Parms.Index = Index;
	Parms.K2Node_DynamicCast_AsBP_Cinematic_Chair = K2Node_DynamicCast_AsBP_Cinematic_Chair;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.ResetFOV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIcarusGameUserSettings*     CallFunc_GetIcarusGameUserSettings_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFieldOfView_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CinematicPawn_C::ResetFOV(class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, float CallFunc_GetFieldOfView_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "ResetFOV");

	Params::ABP_CinematicPawn_C_ResetFOV_Params Parms{};

	Parms.CallFunc_GetIcarusGameUserSettings_ReturnValue = CallFunc_GetIcarusGameUserSettings_ReturnValue;
	Parms.CallFunc_GetFieldOfView_ReturnValue = CallFunc_GetFieldOfView_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.TickVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CinematicPawn_C::TickVisuals(bool Temp_bool_Variable, float Temp_float_Variable, bool Temp_bool_Variable_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Select_Default, float K2Node_Select_Default_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "TickVisuals");

	Params::ABP_CinematicPawn_C_TickVisuals_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.UpdateFlySpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CinematicPawn_C::UpdateFlySpeed(bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "UpdateFlySpeed");

	Params::ABP_CinematicPawn_C_UpdateFlySpeed_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.DecreaseSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CinematicPawn_C::DecreaseSpeed(float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "DecreaseSpeed");

	Params::ABP_CinematicPawn_C_DecreaseSpeed_Params Parms{};

	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.IncreaseSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CinematicPawn_C::IncreaseSpeed(float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "IncreaseSpeed");

	Params::ABP_CinematicPawn_C_IncreaseSpeed_Params Parms{};

	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_Hotbar1_K2Node_InputActionEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CinematicPawn_C::InpActEvt_Hotbar1_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "InpActEvt_Hotbar1_K2Node_InputActionEvent_16");

	Params::ABP_CinematicPawn_C_InpActEvt_Hotbar1_K2Node_InputActionEvent_16_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_Hotbar2_K2Node_InputActionEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CinematicPawn_C::InpActEvt_Hotbar2_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "InpActEvt_Hotbar2_K2Node_InputActionEvent_15");

	Params::ABP_CinematicPawn_C_InpActEvt_Hotbar2_K2Node_InputActionEvent_15_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_Hotbar3_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CinematicPawn_C::InpActEvt_Hotbar3_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "InpActEvt_Hotbar3_K2Node_InputActionEvent_14");

	Params::ABP_CinematicPawn_C_InpActEvt_Hotbar3_K2Node_InputActionEvent_14_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_Hotbar4_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CinematicPawn_C::InpActEvt_Hotbar4_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "InpActEvt_Hotbar4_K2Node_InputActionEvent_13");

	Params::ABP_CinematicPawn_C_InpActEvt_Hotbar4_K2Node_InputActionEvent_13_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_Hotbar5_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CinematicPawn_C::InpActEvt_Hotbar5_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "InpActEvt_Hotbar5_K2Node_InputActionEvent_12");

	Params::ABP_CinematicPawn_C_InpActEvt_Hotbar5_K2Node_InputActionEvent_12_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_Hotbar6_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CinematicPawn_C::InpActEvt_Hotbar6_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "InpActEvt_Hotbar6_K2Node_InputActionEvent_11");

	Params::ABP_CinematicPawn_C_InpActEvt_Hotbar6_K2Node_InputActionEvent_11_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_Hotbar7_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CinematicPawn_C::InpActEvt_Hotbar7_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "InpActEvt_Hotbar7_K2Node_InputActionEvent_10");

	Params::ABP_CinematicPawn_C_InpActEvt_Hotbar7_K2Node_InputActionEvent_10_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_Hotbar0_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CinematicPawn_C::InpActEvt_Hotbar0_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "InpActEvt_Hotbar0_K2Node_InputActionEvent_9");

	Params::ABP_CinematicPawn_C_InpActEvt_Hotbar0_K2Node_InputActionEvent_9_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_FreeLook_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CinematicPawn_C::InpActEvt_FreeLook_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "InpActEvt_FreeLook_K2Node_InputActionEvent_8");

	Params::ABP_CinematicPawn_C_InpActEvt_FreeLook_K2Node_InputActionEvent_8_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_Jump_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CinematicPawn_C::InpActEvt_Jump_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "InpActEvt_Jump_K2Node_InputActionEvent_7");

	Params::ABP_CinematicPawn_C_InpActEvt_Jump_K2Node_InputActionEvent_7_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_Jump_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CinematicPawn_C::InpActEvt_Jump_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "InpActEvt_Jump_K2Node_InputActionEvent_6");

	Params::ABP_CinematicPawn_C_InpActEvt_Jump_K2Node_InputActionEvent_6_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_Crouch_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CinematicPawn_C::InpActEvt_Crouch_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "InpActEvt_Crouch_K2Node_InputActionEvent_5");

	Params::ABP_CinematicPawn_C_InpActEvt_Crouch_K2Node_InputActionEvent_5_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_Crouch_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CinematicPawn_C::InpActEvt_Crouch_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "InpActEvt_Crouch_K2Node_InputActionEvent_4");

	Params::ABP_CinematicPawn_C_InpActEvt_Crouch_K2Node_InputActionEvent_4_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_HotbarBack_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CinematicPawn_C::InpActEvt_HotbarBack_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "InpActEvt_HotbarBack_K2Node_InputActionEvent_3");

	Params::ABP_CinematicPawn_C_InpActEvt_HotbarBack_K2Node_InputActionEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_Sprint_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CinematicPawn_C::InpActEvt_Sprint_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "InpActEvt_Sprint_K2Node_InputActionEvent_2");

	Params::ABP_CinematicPawn_C_InpActEvt_Sprint_K2Node_InputActionEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_Sprint_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CinematicPawn_C::InpActEvt_Sprint_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "InpActEvt_Sprint_K2Node_InputActionEvent_1");

	Params::ABP_CinematicPawn_C_InpActEvt_Sprint_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CinematicPawn_C::InpActEvt_NumPadFive_K2Node_InputKeyEvent_9(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "InpActEvt_NumPadFive_K2Node_InputKeyEvent_9");

	Params::ABP_CinematicPawn_C_InpActEvt_NumPadFive_K2Node_InputKeyEvent_9_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CinematicPawn_C::InpActEvt_NumPadFive_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "InpActEvt_NumPadFive_K2Node_InputKeyEvent_8");

	Params::ABP_CinematicPawn_C_InpActEvt_NumPadFive_K2Node_InputKeyEvent_8_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CinematicPawn_C::InpActEvt_NumPadSix_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "InpActEvt_NumPadSix_K2Node_InputKeyEvent_7");

	Params::ABP_CinematicPawn_C_InpActEvt_NumPadSix_K2Node_InputKeyEvent_7_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CinematicPawn_C::InpActEvt_NumPadSix_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "InpActEvt_NumPadSix_K2Node_InputKeyEvent_6");

	Params::ABP_CinematicPawn_C_InpActEvt_NumPadSix_K2Node_InputKeyEvent_6_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CinematicPawn_C::InpActEvt_NumPadFour_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "InpActEvt_NumPadFour_K2Node_InputKeyEvent_5");

	Params::ABP_CinematicPawn_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_5_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CinematicPawn_C::InpActEvt_NumPadOne_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "InpActEvt_NumPadOne_K2Node_InputKeyEvent_4");

	Params::ABP_CinematicPawn_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_4_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_HotbarForward_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CinematicPawn_C::InpActEvt_HotbarForward_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "InpActEvt_HotbarForward_K2Node_InputActionEvent_0");

	Params::ABP_CinematicPawn_C_InpActEvt_HotbarForward_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CinematicPawn_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_3");

	Params::ABP_CinematicPawn_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CinematicPawn_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_2");

	Params::ABP_CinematicPawn_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CinematicPawn_C::InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_1");

	Params::ABP_CinematicPawn_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CinematicPawn_C::InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_0");

	Params::ABP_CinematicPawn_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CinematicPawn_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0");

	Params::ABP_CinematicPawn_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CinematicPawn_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1");

	Params::ABP_CinematicPawn_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CinematicPawn_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CinematicPawn_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "ReceiveTick");

	Params::ABP_CinematicPawn_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.SERVER_MovePawn
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector_NetQuantize         Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_CinematicPawn_C::SERVER_MovePawn(const struct FVector_NetQuantize& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "SERVER_MovePawn");

	Params::ABP_CinematicPawn_C_SERVER_MovePawn_Params Parms{};

	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_CinematicPawn_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.ExecuteUbergraph_BP_CinematicPawn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_7                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_6                                       (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable                                             (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_5                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_4                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_3                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_2                                       (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_1                                           (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_1                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_2                                           (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_3                                           (HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_InputAxisEvent_AxisValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisEvent_AxisValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_2                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_3                                    (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_4                                           (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_4                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_5                                    (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_5                                           (HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_6                                           (HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector_NetQuantize         K2Node_CustomEvent_Location                                      (NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector_NetQuantize         K2Node_MakeStruct_Vector_NetQuantize                             (NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_6                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_7                                    (HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_8                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_9                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_10                                   (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_11                                   (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_12                                   (HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_8                                       (HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_13                                   (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_14                                   (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_15                                   (HasGetValueTypeHash)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_16                                   (HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_9                                       (HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CinematicPawn_C::ExecuteUbergraph_BP_CinematicPawn(int32 EntryPoint, const struct FKey& K2Node_InputKeyEvent_Key_7, const struct FKey& K2Node_InputKeyEvent_Key_6, const struct FKey& Temp_struct_Variable, const struct FKey& K2Node_InputKeyEvent_Key_5, const struct FKey& K2Node_InputKeyEvent_Key_4, const struct FKey& K2Node_InputActionEvent_Key, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable_2, bool Temp_bool_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, const struct FKey& K2Node_InputKeyEvent_Key_3, const struct FKey& K2Node_InputKeyEvent_Key_2, const struct FKey& Temp_struct_Variable_1, const struct FKey& K2Node_InputKeyEvent_Key_1, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& Temp_struct_Variable_2, const struct FKey& Temp_struct_Variable_3, bool Temp_bool_Variable_3, const struct FKey& K2Node_InputActionEvent_Key_1, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, float K2Node_InputAxisEvent_AxisValue_1, float K2Node_InputAxisEvent_AxisValue, const struct FKey& K2Node_InputActionEvent_Key_2, const struct FKey& K2Node_InputActionEvent_Key_3, const struct FKey& Temp_struct_Variable_4, const struct FKey& K2Node_InputActionEvent_Key_4, const struct FKey& K2Node_InputActionEvent_Key_5, const struct FKey& Temp_struct_Variable_5, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, class AController* CallFunc_GetController_ReturnValue, const struct FKey& Temp_struct_Variable_6, float K2Node_Event_DeltaSeconds, bool CallFunc_IsLocallyControlled_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_IsClosed_Variable_1, const struct FVector_NetQuantize& K2Node_CustomEvent_Location, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector_NetQuantize& K2Node_MakeStruct_Vector_NetQuantize, const struct FKey& K2Node_InputActionEvent_Key_6, const struct FKey& K2Node_InputActionEvent_Key_7, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, const struct FKey& K2Node_InputActionEvent_Key_8, const struct FKey& K2Node_InputActionEvent_Key_9, const struct FKey& K2Node_InputActionEvent_Key_10, const struct FKey& K2Node_InputActionEvent_Key_11, const struct FKey& K2Node_InputActionEvent_Key_12, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key_8, float K2Node_Select_Default, float K2Node_Select_Default_1, const struct FKey& K2Node_InputActionEvent_Key_13, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_14, const struct FKey& K2Node_InputActionEvent_Key_15, float K2Node_Select_Default_2, const struct FKey& K2Node_InputActionEvent_Key_16, float CallFunc_FInterpTo_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FKey& K2Node_InputKeyEvent_Key_9, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "ExecuteUbergraph_BP_CinematicPawn");

	Params::ABP_CinematicPawn_C_ExecuteUbergraph_BP_CinematicPawn_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_InputKeyEvent_Key_7 = K2Node_InputKeyEvent_Key_7;
	Parms.K2Node_InputKeyEvent_Key_6 = K2Node_InputKeyEvent_Key_6;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_InputKeyEvent_Key_5 = K2Node_InputKeyEvent_Key_5;
	Parms.K2Node_InputKeyEvent_Key_4 = K2Node_InputKeyEvent_Key_4;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.K2Node_InputKeyEvent_Key_3 = K2Node_InputKeyEvent_Key_3;
	Parms.K2Node_InputKeyEvent_Key_2 = K2Node_InputKeyEvent_Key_2;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_InputKeyEvent_Key_1 = K2Node_InputKeyEvent_Key_1;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_InputAxisEvent_AxisValue_1 = K2Node_InputAxisEvent_AxisValue_1;
	Parms.K2Node_InputAxisEvent_AxisValue = K2Node_InputAxisEvent_AxisValue;
	Parms.K2Node_InputActionEvent_Key_2 = K2Node_InputActionEvent_Key_2;
	Parms.K2Node_InputActionEvent_Key_3 = K2Node_InputActionEvent_Key_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.K2Node_InputActionEvent_Key_4 = K2Node_InputActionEvent_Key_4;
	Parms.K2Node_InputActionEvent_Key_5 = K2Node_InputActionEvent_Key_5;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.K2Node_CustomEvent_Location = K2Node_CustomEvent_Location;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.K2Node_MakeStruct_Vector_NetQuantize = K2Node_MakeStruct_Vector_NetQuantize;
	Parms.K2Node_InputActionEvent_Key_6 = K2Node_InputActionEvent_Key_6;
	Parms.K2Node_InputActionEvent_Key_7 = K2Node_InputActionEvent_Key_7;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.K2Node_InputActionEvent_Key_8 = K2Node_InputActionEvent_Key_8;
	Parms.K2Node_InputActionEvent_Key_9 = K2Node_InputActionEvent_Key_9;
	Parms.K2Node_InputActionEvent_Key_10 = K2Node_InputActionEvent_Key_10;
	Parms.K2Node_InputActionEvent_Key_11 = K2Node_InputActionEvent_Key_11;
	Parms.K2Node_InputActionEvent_Key_12 = K2Node_InputActionEvent_Key_12;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.K2Node_InputKeyEvent_Key_8 = K2Node_InputKeyEvent_Key_8;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_InputActionEvent_Key_13 = K2Node_InputActionEvent_Key_13;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.K2Node_InputActionEvent_Key_14 = K2Node_InputActionEvent_Key_14;
	Parms.K2Node_InputActionEvent_Key_15 = K2Node_InputActionEvent_Key_15;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_InputActionEvent_Key_16 = K2Node_InputActionEvent_Key_16;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.K2Node_InputKeyEvent_Key_9 = K2Node_InputKeyEvent_Key_9;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicPawn.BP_CinematicPawn_C.ToggleHelpScreen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CinematicPawn_C::ToggleHelpScreen__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicPawn_C", "ToggleHelpScreen__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


