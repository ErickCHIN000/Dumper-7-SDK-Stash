#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NPC_WayPoint.BP_NPC_WayPoint_C
// (Actor)

class UClass* ABP_NPC_WayPoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NPC_WayPoint_C");

	return Clss;
}


// BP_NPC_WayPoint_C BP_NPC_WayPoint.Default__BP_NPC_WayPoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_NPC_WayPoint_C* ABP_NPC_WayPoint_C::GetDefaultObj()
{
	static class ABP_NPC_WayPoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_NPC_WayPoint_C*>(ABP_NPC_WayPoint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_NPC_WayPoint.BP_NPC_WayPoint_C.fnSetWayPointInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void ABP_NPC_WayPoint_C::FnSetWayPointInfo(class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_WayPoint_C", "fnSetWayPointInfo");

	Params::ABP_NPC_WayPoint_C_FnSetWayPointInfo_Params Parms{};

	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPC_WayPoint.BP_NPC_WayPoint_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void ABP_NPC_WayPoint_C::UserConstructionScript(class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_WayPoint_C", "UserConstructionScript");

	Params::ABP_NPC_WayPoint_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPC_WayPoint.BP_NPC_WayPoint_C.ExecuteUbergraph_BP_NPC_WayPoint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPC_WayPoint_C::ExecuteUbergraph_BP_NPC_WayPoint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_WayPoint_C", "ExecuteUbergraph_BP_NPC_WayPoint");

	Params::ABP_NPC_WayPoint_C_ExecuteUbergraph_BP_NPC_WayPoint_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


