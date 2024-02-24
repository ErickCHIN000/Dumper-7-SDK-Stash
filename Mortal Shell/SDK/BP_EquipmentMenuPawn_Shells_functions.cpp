#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EquipmentMenuPawn_Shells.BP_EquipmentMenuPawn_Shells_C
// (Actor, Pawn)

class UClass* ABP_EquipmentMenuPawn_Shells_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EquipmentMenuPawn_Shells_C");

	return Clss;
}


// BP_EquipmentMenuPawn_Shells_C BP_EquipmentMenuPawn_Shells.Default__BP_EquipmentMenuPawn_Shells_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EquipmentMenuPawn_Shells_C* ABP_EquipmentMenuPawn_Shells_C::GetDefaultObj()
{
	static class ABP_EquipmentMenuPawn_Shells_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EquipmentMenuPawn_Shells_C*>(ABP_EquipmentMenuPawn_Shells_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_EquipmentMenuPawn_Shells.BP_EquipmentMenuPawn_Shells_C.ShowSelf
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquipmentMenuShellDisplay_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EquipmentMenuPawn_Shells_C::ShowSelf(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_EquipmentMenuShellDisplay_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Shells_C", "ShowSelf");

	Params::ABP_EquipmentMenuPawn_Shells_C_ShowSelf_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuPawn_Shells.BP_EquipmentMenuPawn_Shells_C.HideSelf
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquipmentMenuShellDisplay_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EquipmentMenuPawn_Shells_C::HideSelf(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_EquipmentMenuShellDisplay_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Shells_C", "HideSelf");

	Params::ABP_EquipmentMenuPawn_Shells_C_HideSelf_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuPawn_Shells.BP_EquipmentMenuPawn_Shells_C.CameraClamp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHadernContentEnabled_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_EquipmentMenuPawn_Shells_C::CameraClamp(float Value, bool CallFunc_IsHadernContentEnabled_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Shells_C", "CameraClamp");

	Params::ABP_EquipmentMenuPawn_Shells_C_CameraClamp_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_IsHadernContentEnabled_ReturnValue = CallFunc_IsHadernContentEnabled_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_EquipmentMenuPawn_Shells.BP_EquipmentMenuPawn_Shells_C.GetGameInstanceRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EquipmentMenuPawn_Shells_C::GetGameInstanceRef(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Shells_C", "GetGameInstanceRef");

	Params::ABP_EquipmentMenuPawn_Shells_C_GetGameInstanceRef_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuPawn_Shells.BP_EquipmentMenuPawn_Shells_C.UpdateCamera_Mouse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CameraClamp_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CameraClamp_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EquipmentMenuPawn_Shells_C::UpdateCamera_Mouse(class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_CameraClamp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_CameraClamp_ReturnValue_1, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Shells_C", "UpdateCamera_Mouse");

	Params::ABP_EquipmentMenuPawn_Shells_C_UpdateCamera_Mouse_Params Parms{};

	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_CameraClamp_ReturnValue = CallFunc_CameraClamp_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_CameraClamp_ReturnValue_1 = CallFunc_CameraClamp_ReturnValue_1;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuPawn_Shells.BP_EquipmentMenuPawn_Shells_C.ResetShells
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquipmentMenuShellDisplay_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EquipmentMenuPawn_Shells_C::ResetShells(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_EquipmentMenuShellDisplay_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Shells_C", "ResetShells");

	Params::ABP_EquipmentMenuPawn_Shells_C_ResetShells_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuPawn_Shells.BP_EquipmentMenuPawn_Shells_C.ResetCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_EquipmentMenuPawn_Shells_C::ResetCamera(const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Shells_C", "ResetCamera");

	Params::ABP_EquipmentMenuPawn_Shells_C_ResetCamera_Params Parms{};

	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuPawn_Shells.BP_EquipmentMenuPawn_Shells_C.SetSelfReference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EquipmentMenuPawn_Shells_C::SetSelfReference(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Shells_C", "SetSelfReference");

	Params::ABP_EquipmentMenuPawn_Shells_C_SetSelfReference_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuPawn_Shells.BP_EquipmentMenuPawn_Shells_C.SetShellsMaterialAndWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquipmentMenuShellDisplay_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EquipmentMenuPawn_Shells_C::SetShellsMaterialAndWeapon(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_EquipmentMenuShellDisplay_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Shells_C", "SetShellsMaterialAndWeapon");

	Params::ABP_EquipmentMenuPawn_Shells_C_SetShellsMaterialAndWeapon_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuPawn_Shells.BP_EquipmentMenuPawn_Shells_C.GetGameStateRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuPawn_Shells_C::GetGameStateRef()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Shells_C", "GetGameStateRef");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquipmentMenuPawn_Shells.BP_EquipmentMenuPawn_Shells_C.UpdateCameraTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Instant                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_EquipmentMenuPawn_Shells_C::UpdateCameraTarget(int32 Index, bool Instant, int32 Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, float K2Node_Select_Default, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Shells_C", "UpdateCameraTarget");

	Params::ABP_EquipmentMenuPawn_Shells_C_UpdateCameraTarget_Params Parms{};

	Parms.Index = Index;
	Parms.Instant = Instant;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuPawn_Shells.BP_EquipmentMenuPawn_Shells_C.UpdateCamera_GamepadAndKeyboard
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EquipmentMenuPawn_Shells_C::UpdateCamera_GamepadAndKeyboard(const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, float CallFunc_FInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Shells_C", "UpdateCamera_GamepadAndKeyboard");

	Params::ABP_EquipmentMenuPawn_Shells_C_UpdateCamera_GamepadAndKeyboard_Params Parms{};

	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuPawn_Shells.BP_EquipmentMenuPawn_Shells_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuPawn_Shells_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Shells_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquipmentMenuPawn_Shells.BP_EquipmentMenuPawn_Shells_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EquipmentMenuPawn_Shells_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Shells_C", "ReceiveActorBeginOverlap");

	Params::ABP_EquipmentMenuPawn_Shells_C_ReceiveActorBeginOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuPawn_Shells.BP_EquipmentMenuPawn_Shells_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EquipmentMenuPawn_Shells_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Shells_C", "ReceiveTick");

	Params::ABP_EquipmentMenuPawn_Shells_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuPawn_Shells.BP_EquipmentMenuPawn_Shells_C.Event_CustomPossess
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuPawn_Shells_C::Event_CustomPossess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Shells_C", "Event_CustomPossess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquipmentMenuPawn_Shells.BP_EquipmentMenuPawn_Shells_C.Event_CustomUnpossess
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuPawn_Shells_C::Event_CustomUnpossess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Shells_C", "Event_CustomUnpossess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquipmentMenuPawn_Shells.BP_EquipmentMenuPawn_Shells_C.ExecuteUbergraph_BP_EquipmentMenuPawn_Shells
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EquipmentMenuPawn_Shells_C::ExecuteUbergraph_BP_EquipmentMenuPawn_Shells(int32 EntryPoint, class AActor* K2Node_Event_OtherActor, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Shells_C", "ExecuteUbergraph_BP_EquipmentMenuPawn_Shells");

	Params::ABP_EquipmentMenuPawn_Shells_C_ExecuteUbergraph_BP_EquipmentMenuPawn_Shells_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


