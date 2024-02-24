#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIA_Creature_DebugLoco.AIA_Creature_DebugLoco_C
// (None)

class UClass* UAIA_Creature_DebugLoco_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIA_Creature_DebugLoco_C");

	return Clss;
}


// AIA_Creature_DebugLoco_C AIA_Creature_DebugLoco.Default__AIA_Creature_DebugLoco_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIA_Creature_DebugLoco_C* UAIA_Creature_DebugLoco_C::GetDefaultObj()
{
	static class UAIA_Creature_DebugLoco_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIA_Creature_DebugLoco_C*>(UAIA_Creature_DebugLoco_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIA_Creature_DebugLoco.AIA_Creature_DebugLoco_C.CheckStaticTargetRequirements
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwnerPawn_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_DebugLoco_C::CheckStaticTargetRequirements(class AActor* Target, class APawn* CallFunc_GetOwnerPawn_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_DebugLoco_C", "CheckStaticTargetRequirements");

	Params::UAIA_Creature_DebugLoco_C_CheckStaticTargetRequirements_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_GetOwnerPawn_ReturnValue = CallFunc_GetOwnerPawn_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_DebugLoco.AIA_Creature_DebugLoco_C.CheckOwnerRequirements
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_DebugLoco_C::CheckOwnerRequirements()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_DebugLoco_C", "CheckOwnerRequirements");

	Params::UAIA_Creature_DebugLoco_C_CheckOwnerRequirements_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_DebugLoco.AIA_Creature_DebugLoco_C.Start
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAIA_Creature_DebugLoco_C::Start(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_DebugLoco_C", "Start");

	Params::UAIA_Creature_DebugLoco_C_Start_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIA_Creature_DebugLoco.AIA_Creature_DebugLoco_C.ExecuteUbergraph_AIA_Creature_DebugLoco
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Targeter_C>K2Node_DynamicCast_AsBPI_Targeter                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Target                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClearTarget_Success                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIA_Creature_DebugLoco_C::ExecuteUbergraph_AIA_Creature_DebugLoco(int32 EntryPoint, TScriptInterface<class IBPI_Targeter_C> K2Node_DynamicCast_AsBPI_Targeter, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_Target, bool CallFunc_ClearTarget_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_DebugLoco_C", "ExecuteUbergraph_AIA_Creature_DebugLoco");

	Params::UAIA_Creature_DebugLoco_C_ExecuteUbergraph_AIA_Creature_DebugLoco_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsBPI_Targeter = K2Node_DynamicCast_AsBPI_Targeter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_Target = K2Node_Event_Target;
	Parms.CallFunc_ClearTarget_Success = CallFunc_ClearTarget_Success;

	UObject::ProcessEvent(Func, &Parms);

}

}


