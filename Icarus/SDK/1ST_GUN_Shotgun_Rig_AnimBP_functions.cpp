#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass 1ST_GUN_Shotgun_Rig_AnimBP.1ST_GUN_Shotgun_Rig_AnimBP_C
// (None)

class UClass* UOneST_GUN_Shotgun_Rig_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("1ST_GUN_Shotgun_Rig_AnimBP_C");

	return Clss;
}


// 1ST_GUN_Shotgun_Rig_AnimBP_C 1ST_GUN_Shotgun_Rig_AnimBP.Default__1ST_GUN_Shotgun_Rig_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOneST_GUN_Shotgun_Rig_AnimBP_C* UOneST_GUN_Shotgun_Rig_AnimBP_C::GetDefaultObj()
{
	static class UOneST_GUN_Shotgun_Rig_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOneST_GUN_Shotgun_Rig_AnimBP_C*>(UOneST_GUN_Shotgun_Rig_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function 1ST_GUN_Shotgun_Rig_AnimBP.1ST_GUN_Shotgun_Rig_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UOneST_GUN_Shotgun_Rig_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("1ST_GUN_Shotgun_Rig_AnimBP_C", "AnimGraph");

	Params::UOneST_GUN_Shotgun_Rig_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function 1ST_GUN_Shotgun_Rig_AnimBP.1ST_GUN_Shotgun_Rig_AnimBP_C.ExecuteUbergraph_1ST_GUN_Shotgun_Rig_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOneST_GUN_Shotgun_Rig_AnimBP_C::ExecuteUbergraph_1ST_GUN_Shotgun_Rig_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("1ST_GUN_Shotgun_Rig_AnimBP_C", "ExecuteUbergraph_1ST_GUN_Shotgun_Rig_AnimBP");

	Params::UOneST_GUN_Shotgun_Rig_AnimBP_C_ExecuteUbergraph_1ST_GUN_Shotgun_Rig_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


