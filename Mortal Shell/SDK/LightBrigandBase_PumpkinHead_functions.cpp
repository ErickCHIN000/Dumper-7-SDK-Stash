#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightBrigandBase_PumpkinHead.LightBrigandBase_PumpkinHead_C
// (Actor, Pawn)

class UClass* ALightBrigandBase_PumpkinHead_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBrigandBase_PumpkinHead_C");

	return Clss;
}


// LightBrigandBase_PumpkinHead_C LightBrigandBase_PumpkinHead.Default__LightBrigandBase_PumpkinHead_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALightBrigandBase_PumpkinHead_C* ALightBrigandBase_PumpkinHead_C::GetDefaultObj()
{
	static class ALightBrigandBase_PumpkinHead_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALightBrigandBase_PumpkinHead_C*>(ALightBrigandBase_PumpkinHead_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightBrigandBase_PumpkinHead.LightBrigandBase_PumpkinHead_C.SetupHelmet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBrigandHelmetMeshes    HelmetType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_PumpkinHead_C::SetupHelmet(enum class EBrigandHelmetMeshes HelmetType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_PumpkinHead_C", "SetupHelmet");

	Params::ALightBrigandBase_PumpkinHead_C_SetupHelmet_Params Parms{};

	Parms.HelmetType = HelmetType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase_PumpkinHead.LightBrigandBase_PumpkinHead_C.ExecuteUbergraph_LightBrigandBase_PumpkinHead
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBrigandHelmetMeshes    K2Node_Event_HelmetType                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALightBrigandBase_PumpkinHead_C::ExecuteUbergraph_LightBrigandBase_PumpkinHead(int32 EntryPoint, enum class EBrigandHelmetMeshes K2Node_Event_HelmetType, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_PumpkinHead_C", "ExecuteUbergraph_LightBrigandBase_PumpkinHead");

	Params::ALightBrigandBase_PumpkinHead_C_ExecuteUbergraph_LightBrigandBase_PumpkinHead_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_HelmetType = K2Node_Event_HelmetType;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


