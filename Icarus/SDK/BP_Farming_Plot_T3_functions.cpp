#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Farming_Plot_T3.BP_Farming_Plot_T3_C
// (Actor)

class UClass* ABP_Farming_Plot_T3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Farming_Plot_T3_C");

	return Clss;
}


// BP_Farming_Plot_T3_C BP_Farming_Plot_T3.Default__BP_Farming_Plot_T3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Farming_Plot_T3_C* ABP_Farming_Plot_T3_C::GetDefaultObj()
{
	static class ABP_Farming_Plot_T3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Farming_Plot_T3_C*>(ABP_Farming_Plot_T3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Farming_Plot_T3.BP_Farming_Plot_T3_C.ActorCanConnectToNetwork
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EIcarusResourceType     Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_Farming_Plot_T3_C::ActorCanConnectToNetwork(enum class EIcarusResourceType Type, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_T3_C", "ActorCanConnectToNetwork");

	Params::ABP_Farming_Plot_T3_C_ActorCanConnectToNetwork_Params Parms{};

	Parms.Type = Type;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}

