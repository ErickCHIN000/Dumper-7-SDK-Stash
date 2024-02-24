#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Animal_Bed.BP_Animal_Bed_C
// (Actor)

class UClass* ABP_Animal_Bed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Animal_Bed_C");

	return Clss;
}


// BP_Animal_Bed_C BP_Animal_Bed.Default__BP_Animal_Bed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Animal_Bed_C* ABP_Animal_Bed_C::GetDefaultObj()
{
	static class ABP_Animal_Bed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Animal_Bed_C*>(ABP_Animal_Bed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Animal_Bed.BP_Animal_Bed_C.IcarusBeginPlay
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:

void ABP_Animal_Bed_C::IcarusBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Animal_Bed_C", "IcarusBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Animal_Bed.BP_Animal_Bed_C.ExecuteUbergraph_BP_Animal_Bed
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FModifier                   K2Node_MakeStruct_Modifier                                       (NoDestructor)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Animal_Bed_C::ExecuteUbergraph_BP_Animal_Bed(int32 EntryPoint, const struct FModifier& K2Node_MakeStruct_Modifier, int32 CallFunc_AddModifierState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Animal_Bed_C", "ExecuteUbergraph_BP_Animal_Bed");

	Params::ABP_Animal_Bed_C_ExecuteUbergraph_BP_Animal_Bed_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_Modifier = K2Node_MakeStruct_Modifier;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


