#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Part_MID_MK1.BP_Part_MID_MK1_C
// (Actor)

class UClass* ABP_Part_MID_MK1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Part_MID_MK1_C");

	return Clss;
}


// BP_Part_MID_MK1_C BP_Part_MID_MK1.Default__BP_Part_MID_MK1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Part_MID_MK1_C* ABP_Part_MID_MK1_C::GetDefaultObj()
{
	static class ABP_Part_MID_MK1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Part_MID_MK1_C*>(ABP_Part_MID_MK1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.OnRep_CameraShake_TouchDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::OnRep_CameraShake_TouchDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "OnRep_CameraShake_TouchDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.OnRep_HeatCooldownFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::OnRep_HeatCooldownFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "OnRep_HeatCooldownFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.OnRep_GroundDustFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::OnRep_GroundDustFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "OnRep_GroundDustFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.OnRep_SmokeConeFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::OnRep_SmokeConeFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "OnRep_SmokeConeFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.OnRep_SonicBoomFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Part_MID_MK1_C::OnRep_SonicBoomFX(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "OnRep_SonicBoomFX");

	Params::ABP_Part_MID_MK1_C_OnRep_SonicBoomFX_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.Update Fmod Dropship State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDropshipDescentStateFMODParamDropshipSequenceState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Part_MID_MK1_C::Update_Fmod_Dropship_State(enum class EDropshipDescentStateFMODParam DropshipSequenceState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "Update Fmod Dropship State");

	Params::ABP_Part_MID_MK1_C_Update_Fmod_Dropship_State_Params Parms{};

	Parms.DropshipSequenceState = DropshipSequenceState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.ToggleFlightSFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERocketState            DropShipState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLocalPlayer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFMODEvent*                  Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Part_MID_MK1_C::ToggleFlightSFX(enum class ERocketState DropShipState, bool IsLocalPlayer, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue_2, class UFMODEvent* Temp_wildcard_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "ToggleFlightSFX");

	Params::ABP_Part_MID_MK1_C_ToggleFlightSFX_Params Parms{};

	Parms.DropShipState = DropShipState;
	Parms.IsLocalPlayer = IsLocalPlayer;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.OnRep_ConeActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::OnRep_ConeActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "OnRep_ConeActive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.AssembledByDatabase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::AssembledByDatabase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "AssembledByDatabase");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.OnRep_Shake
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::OnRep_Shake()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "OnRep_Shake");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.OnRep_StopEngine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::OnRep_StopEngine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "OnRep_StopEngine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.OnRep_StartEngine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::OnRep_StartEngine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "OnRep_StartEngine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.TriggerEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDropShipActionsEnum        Actions                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               K2Node_SwitchRowEnum_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayerSeated_IsLocallyControlled                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Part_MID_MK1_C::TriggerEvent(const struct FDropShipActionsEnum& Actions, bool K2Node_SwitchRowEnum_CmpSuccess, bool CallFunc_IsLocalPlayerSeated_IsLocallyControlled, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "TriggerEvent");

	Params::ABP_Part_MID_MK1_C_TriggerEvent_Params Parms{};

	Parms.Actions = Actions;
	Parms.K2Node_SwitchRowEnum_CmpSuccess = K2Node_SwitchRowEnum_CmpSuccess;
	Parms.CallFunc_IsLocalPlayerSeated_IsLocallyControlled = CallFunc_IsLocalPlayerSeated_IsLocallyControlled;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.GetMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*         Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Part_MID_MK1_C::GetMesh(class UPrimitiveComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "GetMesh");

	Params::ABP_Part_MID_MK1_C_GetMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.Fade__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::Fade__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "Fade__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.Fade__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::Fade__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "Fade__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.FadeSmokeCone__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::FadeSmokeCone__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "FadeSmokeCone__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.FadeSmokeCone__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::FadeSmokeCone__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "FadeSmokeCone__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.FadeOnSmoke__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::FadeOnSmoke__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "FadeOnSmoke__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.FadeOnSmoke__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::FadeOnSmoke__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "FadeOnSmoke__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.LightSpin__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::LightSpin__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "LightSpin__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.LightSpin__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::LightSpin__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "LightSpin__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.Show_Lights
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::Show_Lights()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "Show_Lights");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.Hide_Lights
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::Hide_Lights()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "Hide_Lights");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.Fade_Cone_FX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::Fade_Cone_FX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "Fade_Cone_FX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.StartCameraShake
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::StartCameraShake()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "StartCameraShake");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.CameraShake
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::CameraShake()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "CameraShake");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.StopCameraShake
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::StopCameraShake()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "StopCameraShake");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.Show_Cone_FX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::Show_Cone_FX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "Show_Cone_FX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.Hide_Cone_FX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::Hide_Cone_FX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "Hide_Cone_FX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.TouchDownCameraShake
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::TouchDownCameraShake()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "TouchDownCameraShake");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.Ground_Dust_FX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::Ground_Dust_FX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "Ground_Dust_FX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.FadeSmokeOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::FadeSmokeOn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "FadeSmokeOn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.Heat_Cooldown_FX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::Heat_Cooldown_FX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "Heat_Cooldown_FX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.DisableDoorCollision
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::DisableDoorCollision()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "DisableDoorCollision");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.EnableDoorCollision
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::EnableDoorCollision()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "EnableDoorCollision");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Part_MID_MK1_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.ExecuteUbergraph_BP_Part_MID_MK1
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TSubclassOf<class UCameraShakeBase>Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UCameraShakeBase>Temp_class_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children                          (ReferenceParm, ContainsInstancedReference)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children_1                        (ReferenceParm, ContainsInstancedReference)
// class USceneComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_AddWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children_2                        (ReferenceParm, ContainsInstancedReference)
// class USceneComponent*             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children_3                        (ReferenceParm, ContainsInstancedReference)
// class USceneComponent*             CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UCameraShakeBase>K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWorldSettings*              CallFunc_GetWorldSettings_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_ScorchDecal_C*           CallFunc_SpawnActorOfClass_OutActor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children_4                        (ReferenceParm, ContainsInstancedReference)
// class USceneComponent*             CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Part_MID_MK1_C::ExecuteUbergraph_BP_Part_MID_MK1(int32 EntryPoint, float CallFunc_MapRangeClamped_ReturnValue, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TSubclassOf<class UCameraShakeBase> Temp_class_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, TSubclassOf<class UCameraShakeBase> Temp_class_Variable_1, TArray<class AActor*>& Temp_object_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children_1, class USceneComponent* CallFunc_Array_Get_Item, class USceneComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FHitResult& CallFunc_K2_AddWorldRotation_SweepHitResult, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children_2, class USceneComponent* CallFunc_Array_Get_Item_2, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children_3, class USceneComponent* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_4, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TSubclassOf<class UCameraShakeBase> K2Node_Select_Default, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AWorldSettings* CallFunc_GetWorldSettings_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, class ABP_ScorchDecal_C* CallFunc_SpawnActorOfClass_OutActor, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children_4, class USceneComponent* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_MK1_C", "ExecuteUbergraph_BP_Part_MID_MK1");

	Params::ABP_Part_MID_MK1_C_ExecuteUbergraph_BP_Part_MID_MK1_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_GetChildrenComponents_Children = CallFunc_GetChildrenComponents_Children;
	Parms.CallFunc_GetChildrenComponents_Children_1 = CallFunc_GetChildrenComponents_Children_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_K2_AddWorldRotation_SweepHitResult = CallFunc_K2_AddWorldRotation_SweepHitResult;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetChildrenComponents_Children_2 = CallFunc_GetChildrenComponents_Children_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetChildrenComponents_Children_3 = CallFunc_GetChildrenComponents_Children_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_GetWorldSettings_ReturnValue = CallFunc_GetWorldSettings_ReturnValue;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_PlayEventAtLocation_ReturnValue = CallFunc_PlayEventAtLocation_ReturnValue;
	Parms.CallFunc_SpawnActorOfClass_OutActor = CallFunc_SpawnActorOfClass_OutActor;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_GetChildrenComponents_Children_4 = CallFunc_GetChildrenComponents_Children_4;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


