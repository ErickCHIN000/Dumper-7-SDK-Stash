#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_inq_cagebed.bp_inq_cagebed_C
// (Actor)

class UClass* Abp_inq_cagebed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_inq_cagebed_C");

	return Clss;
}


// bp_inq_cagebed_C bp_inq_cagebed.Default__bp_inq_cagebed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_inq_cagebed_C* Abp_inq_cagebed_C::GetDefaultObj()
{
	static class Abp_inq_cagebed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_inq_cagebed_C*>(Abp_inq_cagebed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_inq_cagebed.bp_inq_cagebed_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Abp_inq_cagebed_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_inq_cagebed_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_inq_cagebed.bp_inq_cagebed_C.Hide Bed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_inq_cagebed_C::Hide_Bed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_inq_cagebed_C", "Hide Bed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_inq_cagebed.bp_inq_cagebed_C.Show Bed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_inq_cagebed_C::Show_Bed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_inq_cagebed_C", "Show Bed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_inq_cagebed.bp_inq_cagebed_C.Game Load
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_inq_cagebed_C::Game_Load()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_inq_cagebed_C", "Game Load");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_inq_cagebed.bp_inq_cagebed_C.ExecuteUbergraph_bp_inq_cagebed
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_inq_cagebed_C::ExecuteUbergraph_bp_inq_cagebed(int32 EntryPoint, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_inq_cagebed_C", "ExecuteUbergraph_bp_inq_cagebed");

	Params::Abp_inq_cagebed_C_ExecuteUbergraph_bp_inq_cagebed_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


