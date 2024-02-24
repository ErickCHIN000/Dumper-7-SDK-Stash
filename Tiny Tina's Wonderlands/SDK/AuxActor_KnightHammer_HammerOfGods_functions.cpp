#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AuxActor_KnightHammer_HammerOfGods.AuxActor_KnightHammer_HammerOfGods_C
// (Actor)

class UClass* AAuxActor_KnightHammer_HammerOfGods_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AuxActor_KnightHammer_HammerOfGods_C");

	return Clss;
}


// AuxActor_KnightHammer_HammerOfGods_C AuxActor_KnightHammer_HammerOfGods.Default__AuxActor_KnightHammer_HammerOfGods_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAuxActor_KnightHammer_HammerOfGods_C* AAuxActor_KnightHammer_HammerOfGods_C::GetDefaultObj()
{
	static class AAuxActor_KnightHammer_HammerOfGods_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAuxActor_KnightHammer_HammerOfGods_C*>(AAuxActor_KnightHammer_HammerOfGods_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AuxActor_KnightHammer_HammerOfGods.AuxActor_KnightHammer_HammerOfGods_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAuxActor_KnightHammer_HammerOfGods_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_KnightHammer_HammerOfGods_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_KnightHammer_HammerOfGods.AuxActor_KnightHammer_HammerOfGods_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAuxActor_KnightHammer_HammerOfGods_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_KnightHammer_HammerOfGods_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_KnightHammer_HammerOfGods.AuxActor_KnightHammer_HammerOfGods_C.DigiOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAuxActor_KnightHammer_HammerOfGods_C::DigiOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_KnightHammer_HammerOfGods_C", "DigiOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_KnightHammer_HammerOfGods.AuxActor_KnightHammer_HammerOfGods_C.InterruptDigi
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAuxActor_KnightHammer_HammerOfGods_C::InterruptDigi()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_KnightHammer_HammerOfGods_C", "InterruptDigi");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_KnightHammer_HammerOfGods.AuxActor_KnightHammer_HammerOfGods_C.ExecuteUbergraph_AuxActor_KnightHammer_HammerOfGods
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAuxActor_KnightHammer_HammerOfGods_C::ExecuteUbergraph_AuxActor_KnightHammer_HammerOfGods(int32 EntryPoint, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_KnightHammer_HammerOfGods_C", "ExecuteUbergraph_AuxActor_KnightHammer_HammerOfGods");

	Params::AAuxActor_KnightHammer_HammerOfGods_C_ExecuteUbergraph_AuxActor_KnightHammer_HammerOfGods_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


