#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Composter_Wood.BP_Composter_Wood_C
// (Actor)

class UClass* ABP_Composter_Wood_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Composter_Wood_C");

	return Clss;
}


// BP_Composter_Wood_C BP_Composter_Wood.Default__BP_Composter_Wood_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Composter_Wood_C* ABP_Composter_Wood_C::GetDefaultObj()
{
	static class ABP_Composter_Wood_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Composter_Wood_C*>(ABP_Composter_Wood_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Composter_Wood.BP_Composter_Wood_C.ActorCanConnectToNetwork
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EIcarusResourceType     Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_Composter_Wood_C::ActorCanConnectToNetwork(enum class EIcarusResourceType Type, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Composter_Wood_C", "ActorCanConnectToNetwork");

	Params::ABP_Composter_Wood_C_ActorCanConnectToNetwork_Params Parms{};

	Parms.Type = Type;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Composter_Wood.BP_Composter_Wood_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Composter_Wood_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Composter_Wood_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Composter_Wood.BP_Composter_Wood_C.ExecuteUbergraph_BP_Composter_Wood
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FModifier                   K2Node_MakeStruct_Modifier                                       (NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Composter_Wood_C::ExecuteUbergraph_BP_Composter_Wood(int32 EntryPoint, const struct FModifier& K2Node_MakeStruct_Modifier, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_AddModifierState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Composter_Wood_C", "ExecuteUbergraph_BP_Composter_Wood");

	Params::ABP_Composter_Wood_C_ExecuteUbergraph_BP_Composter_Wood_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_Modifier = K2Node_MakeStruct_Modifier;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


