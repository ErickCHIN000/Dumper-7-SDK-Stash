#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PredatorBird_Corpse.BP_PredatorBird_Corpse_C
// (Actor)

class UClass* ABP_PredatorBird_Corpse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PredatorBird_Corpse_C");

	return Clss;
}


// BP_PredatorBird_Corpse_C BP_PredatorBird_Corpse.Default__BP_PredatorBird_Corpse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PredatorBird_Corpse_C* ABP_PredatorBird_Corpse_C::GetDefaultObj()
{
	static class ABP_PredatorBird_Corpse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PredatorBird_Corpse_C*>(ABP_PredatorBird_Corpse_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PredatorBird_Corpse.BP_PredatorBird_Corpse_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PredatorBird_Corpse_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PredatorBird_Corpse_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PredatorBird_Corpse.BP_PredatorBird_Corpse_C.ExecuteUbergraph_BP_PredatorBird_Corpse
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PredatorBird_Corpse_C::ExecuteUbergraph_BP_PredatorBird_Corpse(int32 EntryPoint, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PredatorBird_Corpse_C", "ExecuteUbergraph_BP_PredatorBird_Corpse");

	Params::ABP_PredatorBird_Corpse_C_ExecuteUbergraph_BP_PredatorBird_Corpse_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


