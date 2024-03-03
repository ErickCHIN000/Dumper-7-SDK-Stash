#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass de_sleep_dusk.de_sleep_dusk_C
// (Actor)

class UClass* ADe_sleep_dusk_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("de_sleep_dusk_C");

	return Clss;
}


// de_sleep_dusk_C de_sleep_dusk.Default__de_sleep_dusk_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADe_sleep_dusk_C* ADe_sleep_dusk_C::GetDefaultObj()
{
	static class ADe_sleep_dusk_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADe_sleep_dusk_C*>(ADe_sleep_dusk_C::StaticClass()->DefaultObject);

	return Default;
}


// Function de_sleep_dusk.de_sleep_dusk_C.call_event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_event_info           Event_data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ADe_sleep_dusk_C::Call_event(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_event_info& Event_data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("de_sleep_dusk_C", "call_event");

	Params::ADe_sleep_dusk_C_Call_event_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Event_data = Event_data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function de_sleep_dusk.de_sleep_dusk_C.ExecuteUbergraph_de_sleep_dusk
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxValue_Value                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             K2Node_Event_dlg_actor                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_event_info           K2Node_Event_event_data                                          (ZeroConstructor, HasGetValueTypeHash)
// class AUltra_Dynamic_Sky_C*        CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Fade_C*                  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_DungeonLighting_C*       CallFunc_GetActorOfClass_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADe_sleep_dusk_C::ExecuteUbergraph_de_sleep_dusk(int32 EntryPoint, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, float CallFunc_GetMaxValue_Value, class Abp_dlg_actor_C* K2Node_Event_dlg_actor, const struct FS_dlg_event_info& K2Node_Event_event_data, class AUltra_Dynamic_Sky_C* CallFunc_GetActorOfClass_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWB_Fade_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_DungeonLighting_C* CallFunc_GetActorOfClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("de_sleep_dusk_C", "ExecuteUbergraph_de_sleep_dusk");

	Params::ADe_sleep_dusk_C_ExecuteUbergraph_de_sleep_dusk_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.CallFunc_GetMaxValue_Value = CallFunc_GetMaxValue_Value;
	Parms.K2Node_Event_dlg_actor = K2Node_Event_dlg_actor;
	Parms.K2Node_Event_event_data = K2Node_Event_event_data;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue_1 = CallFunc_GetActorOfClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


