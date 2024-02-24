#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AuxActor_RangerBow.AuxActor_RangerBow_C
// (Actor)

class UClass* AAuxActor_RangerBow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AuxActor_RangerBow_C");

	return Clss;
}


// AuxActor_RangerBow_C AuxActor_RangerBow.Default__AuxActor_RangerBow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAuxActor_RangerBow_C* AAuxActor_RangerBow_C::GetDefaultObj()
{
	static class AAuxActor_RangerBow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAuxActor_RangerBow_C*>(AAuxActor_RangerBow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AuxActor_RangerBow.AuxActor_RangerBow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAuxActor_RangerBow_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_RangerBow_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_RangerBow.AuxActor_RangerBow_C.DigiOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAuxActor_RangerBow_C::DigiOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_RangerBow_C", "DigiOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_RangerBow.AuxActor_RangerBow_C.PlayAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAuxActor_RangerBow_C::PlayAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_RangerBow_C", "PlayAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_RangerBow.AuxActor_RangerBow_C.InterruptDigi
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAuxActor_RangerBow_C::InterruptDigi()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_RangerBow_C", "InterruptDigi");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_RangerBow.AuxActor_RangerBow_C.ExecuteUbergraph_AuxActor_RangerBow
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAuxActor_RangerBow_C::ExecuteUbergraph_AuxActor_RangerBow(int32 EntryPoint, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_RangerBow_C", "ExecuteUbergraph_AuxActor_RangerBow");

	Params::AAuxActor_RangerBow_C_ExecuteUbergraph_AuxActor_RangerBow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


