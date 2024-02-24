#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RP_Command_Base.BP_RP_Command_Base_C
// (Actor)

class UClass* ABP_RP_Command_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RP_Command_Base_C");

	return Clss;
}


// BP_RP_Command_Base_C BP_RP_Command_Base.Default__BP_RP_Command_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RP_Command_Base_C* ABP_RP_Command_Base_C::GetDefaultObj()
{
	static class ABP_RP_Command_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RP_Command_Base_C*>(ABP_RP_Command_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RP_Command_Base.BP_RP_Command_Base_C.ReadyCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_DropshipSeat_C*          CallFunc_GetSeat_Dropship_Seat                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_RP_Command_Base_C::ReadyCheck(bool* Success, class ABP_DropshipSeat_C* CallFunc_GetSeat_Dropship_Seat, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RP_Command_Base_C", "ReadyCheck");

	Params::ABP_RP_Command_Base_C_ReadyCheck_Params Parms{};

	Parms.CallFunc_GetSeat_Dropship_Seat = CallFunc_GetSeat_Dropship_Seat;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_RP_Command_Base.BP_RP_Command_Base_C.GetSeat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_DropshipSeat_C*          Dropship_Seat                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_DropshipSeat_C*          K2Node_DynamicCast_AsBP_Dropship_Seat                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_RP_Command_Base_C::GetSeat(class ABP_DropshipSeat_C** Dropship_Seat, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_DropshipSeat_C* K2Node_DynamicCast_AsBP_Dropship_Seat, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RP_Command_Base_C", "GetSeat");

	Params::ABP_RP_Command_Base_C_GetSeat_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Dropship_Seat = K2Node_DynamicCast_AsBP_Dropship_Seat;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Dropship_Seat != nullptr)
		*Dropship_Seat = Parms.Dropship_Seat;

}


// Function BP_RP_Command_Base.BP_RP_Command_Base_C.TriggerEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDropShipActionsEnum        Actions                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               K2Node_SwitchRowEnum_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_DropshipSeat_C*          CallFunc_GetSeat_Dropship_Seat                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DropshipSeat_C*          CallFunc_GetSeat_Dropship_Seat_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ExitSeat_Success                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_RP_Command_Base_C::TriggerEvent(const struct FDropShipActionsEnum& Actions, bool K2Node_SwitchRowEnum_CmpSuccess, class ABP_DropshipSeat_C* CallFunc_GetSeat_Dropship_Seat, class ABP_DropshipSeat_C* CallFunc_GetSeat_Dropship_Seat_1, bool CallFunc_ExitSeat_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RP_Command_Base_C", "TriggerEvent");

	Params::ABP_RP_Command_Base_C_TriggerEvent_Params Parms{};

	Parms.Actions = Actions;
	Parms.K2Node_SwitchRowEnum_CmpSuccess = K2Node_SwitchRowEnum_CmpSuccess;
	Parms.CallFunc_GetSeat_Dropship_Seat = CallFunc_GetSeat_Dropship_Seat;
	Parms.CallFunc_GetSeat_Dropship_Seat_1 = CallFunc_GetSeat_Dropship_Seat_1;
	Parms.CallFunc_ExitSeat_Success = CallFunc_ExitSeat_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RP_Command_Base.BP_RP_Command_Base_C.ExitSeat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_DropshipSeat_C*          CallFunc_GetSeat_Dropship_Seat                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LeaveSeat_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_RP_Command_Base_C::ExitSeat(bool* Success, class ABP_DropshipSeat_C* CallFunc_GetSeat_Dropship_Seat, bool CallFunc_LeaveSeat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RP_Command_Base_C", "ExitSeat");

	Params::ABP_RP_Command_Base_C_ExitSeat_Params Parms{};

	Parms.CallFunc_GetSeat_Dropship_Seat = CallFunc_GetSeat_Dropship_Seat;
	Parms.CallFunc_LeaveSeat_ReturnValue = CallFunc_LeaveSeat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_RP_Command_Base.BP_RP_Command_Base_C.EnterSeat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacterSurvival*Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_DropshipSeat_C*          CallFunc_GetSeat_Dropship_Seat                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EnterSeat_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_RP_Command_Base_C::EnterSeat(class AIcarusPlayerCharacterSurvival* Character, bool* Success, class ABP_DropshipSeat_C* CallFunc_GetSeat_Dropship_Seat, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EnterSeat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RP_Command_Base_C", "EnterSeat");

	Params::ABP_RP_Command_Base_C_EnterSeat_Params Parms{};

	Parms.Character = Character;
	Parms.CallFunc_GetSeat_Dropship_Seat = CallFunc_GetSeat_Dropship_Seat;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EnterSeat_ReturnValue = CallFunc_EnterSeat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_RP_Command_Base.BP_RP_Command_Base_C.GetMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*         Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RP_Command_Base_C::GetMesh(class UPrimitiveComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RP_Command_Base_C", "GetMesh");

	Params::ABP_RP_Command_Base_C_GetMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}


// Function BP_RP_Command_Base.BP_RP_Command_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_RP_Command_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RP_Command_Base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RP_Command_Base.BP_RP_Command_Base_C.ExecuteUbergraph_BP_RP_Command_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RP_Command_Base_C::ExecuteUbergraph_BP_RP_Command_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RP_Command_Base_C", "ExecuteUbergraph_BP_RP_Command_Base");

	Params::ABP_RP_Command_Base_C_ExecuteUbergraph_BP_RP_Command_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


