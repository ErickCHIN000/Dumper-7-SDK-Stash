#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_msl_system_component.bp_msl_system_component_C
// (None)

class UClass* Ubp_msl_system_component_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_msl_system_component_C");

	return Clss;
}


// bp_msl_system_component_C bp_msl_system_component.Default__bp_msl_system_component_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubp_msl_system_component_C* Ubp_msl_system_component_C::GetDefaultObj()
{
	static class Ubp_msl_system_component_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubp_msl_system_component_C*>(Ubp_msl_system_component_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_msl_system_component.bp_msl_system_component_C.init_dlg
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Local_transform                                                  (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// TArray<class UWB_InGame_C*>        CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_InGame_C*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_01_dlg_2d_layout_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_control_C*           CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class Abp_dlg_control_C*>   CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_msl_system_component_C::Init_dlg(const struct FTransform& Local_transform, TArray<class UWB_InGame_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UWB_InGame_C* CallFunc_Array_Get_Item, class UW_01_dlg_2d_layout_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class Abp_dlg_control_C* CallFunc_FinishSpawningActor_ReturnValue, TArray<class Abp_dlg_control_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_system_component_C", "init_dlg");

	Params::Ubp_msl_system_component_C_Init_dlg_Params Parms{};

	Parms.Local_transform = Local_transform;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_system_component.bp_msl_system_component_C.init_spawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Local_transform                                                  (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// TArray<class Abp_msl_settings_actor_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_msl_settings_actor_C*    CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class Abp_msl_savegame_actor_C*>CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_msl_savegame_actor_C*    CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class Abp_msl_localization_actor_C*>CallFunc_GetAllActorsOfClass_OutActors_2                         (ReferenceParm)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_msl_localization_actor_C*CallFunc_FinishSpawningActor_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_msl_system_component_C::Init_spawn(const struct FTransform& Local_transform, TArray<class Abp_msl_settings_actor_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class Abp_msl_settings_actor_C* CallFunc_FinishSpawningActor_ReturnValue, TArray<class Abp_msl_savegame_actor_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, class Abp_msl_savegame_actor_C* CallFunc_FinishSpawningActor_ReturnValue_1, TArray<class Abp_msl_localization_actor_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue_2, class Abp_msl_localization_actor_C* CallFunc_FinishSpawningActor_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_system_component_C", "init_spawn");

	Params::Ubp_msl_system_component_C_Init_spawn_Params Parms{};

	Parms.Local_transform = Local_transform;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_2 = CallFunc_GetAllActorsOfClass_OutActors_2;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_2 = CallFunc_Array_IsValidIndex_ReturnValue_2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_2 = CallFunc_FinishSpawningActor_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_system_component.bp_msl_system_component_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void Ubp_msl_system_component_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_system_component_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_msl_system_component.bp_msl_system_component_C.init_system
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubp_msl_system_component_C::Init_system()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_system_component_C", "init_system");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_msl_system_component.bp_msl_system_component_C.ExecuteUbergraph_bp_msl_system_component
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_msl_system_component_C::ExecuteUbergraph_bp_msl_system_component(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_system_component_C", "ExecuteUbergraph_bp_msl_system_component");

	Params::Ubp_msl_system_component_C_ExecuteUbergraph_bp_msl_system_component_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_system_component.bp_msl_system_component_C.ed_settings_updated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Settings_name                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Settings_value                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Slider_value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_slider                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Is_apply                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_msl_system_component_C::Ed_settings_updated__DelegateSignature(class FName Settings_name, int32 Settings_value, float Slider_value, bool Is_slider, bool Is_apply)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_system_component_C", "ed_settings_updated__DelegateSignature");

	Params::Ubp_msl_system_component_C_Ed_settings_updated__DelegateSignature_Params Parms{};

	Parms.Settings_name = Settings_name;
	Parms.Settings_value = Settings_value;
	Parms.Slider_value = Slider_value;
	Parms.Is_slider = Is_slider;
	Parms.Is_apply = Is_apply;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_system_component.bp_msl_system_component_C.ed_device_changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_gamepad                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_msl_system_component_C::Ed_device_changed__DelegateSignature(bool Is_gamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_system_component_C", "ed_device_changed__DelegateSignature");

	Params::Ubp_msl_system_component_C_Ed_device_changed__DelegateSignature_Params Parms{};

	Parms.Is_gamepad = Is_gamepad;

	UObject::ProcessEvent(Func, &Parms);

}

}


