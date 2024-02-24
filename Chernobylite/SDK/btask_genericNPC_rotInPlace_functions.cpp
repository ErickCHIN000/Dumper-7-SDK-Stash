#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass btask_genericNPC_rotInPlace.btask_genericNPC_rotInPlace_C
// (None)

class UClass* Ubtask_genericNPC_rotInPlace_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("btask_genericNPC_rotInPlace_C");

	return Clss;
}


// btask_genericNPC_rotInPlace_C btask_genericNPC_rotInPlace.Default__btask_genericNPC_rotInPlace_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubtask_genericNPC_rotInPlace_C* Ubtask_genericNPC_rotInPlace_C::GetDefaultObj()
{
	static class Ubtask_genericNPC_rotInPlace_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubtask_genericNPC_rotInPlace_C*>(Ubtask_genericNPC_rotInPlace_C::StaticClass()->DefaultObject);

	return Default;
}


// Function btask_genericNPC_rotInPlace.btask_genericNPC_rotInPlace_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubtask_genericNPC_rotInPlace_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("btask_genericNPC_rotInPlace_C", "ReceiveAbortAI");

	Params::Ubtask_genericNPC_rotInPlace_C_ReceiveAbortAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function btask_genericNPC_rotInPlace.btask_genericNPC_rotInPlace_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubtask_genericNPC_rotInPlace_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("btask_genericNPC_rotInPlace_C", "ReceiveTickAI");

	Params::Ubtask_genericNPC_rotInPlace_C_ReceiveTickAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function btask_genericNPC_rotInPlace.btask_genericNPC_rotInPlace_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubtask_genericNPC_rotInPlace_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("btask_genericNPC_rotInPlace_C", "ReceiveExecuteAI");

	Params::Ubtask_genericNPC_rotInPlace_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function btask_genericNPC_rotInPlace.btask_genericNPC_rotInPlace_C.ExecuteUbergraph_btask_genericNPC_rotInPlace
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAIController*               K2Node_Event_OwnerController_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_ch_npc_00_C*             K2Node_DynamicCast_AsBa_Ch_Npc_00                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubtask_genericNPC_rotInPlace_C::ExecuteUbergraph_btask_genericNPC_rotInPlace(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController_2, class APawn* K2Node_Event_ControlledPawn_2, bool CallFunc_IsValid_ReturnValue, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, float K2Node_Event_DeltaSeconds, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class Aba_ch_npc_00_C* K2Node_DynamicCast_AsBa_Ch_Npc_00, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("btask_genericNPC_rotInPlace_C", "ExecuteUbergraph_btask_genericNPC_rotInPlace");

	Params::Ubtask_genericNPC_rotInPlace_C_ExecuteUbergraph_btask_genericNPC_rotInPlace_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController_2 = K2Node_Event_OwnerController_2;
	Parms.K2Node_Event_ControlledPawn_2 = K2Node_Event_ControlledPawn_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_OwnerController_1 = K2Node_Event_OwnerController_1;
	Parms.K2Node_Event_ControlledPawn_1 = K2Node_Event_ControlledPawn_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_DynamicCast_AsBa_Ch_Npc_00 = K2Node_DynamicCast_AsBa_Ch_Npc_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


