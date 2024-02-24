#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LoadingBG_BP.LoadingBG_BP_C
// (Actor)

class UClass* ALoadingBG_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadingBG_BP_C");

	return Clss;
}


// LoadingBG_BP_C LoadingBG_BP.Default__LoadingBG_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALoadingBG_BP_C* ALoadingBG_BP_C::GetDefaultObj()
{
	static class ALoadingBG_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALoadingBG_BP_C*>(ALoadingBG_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LoadingBG_BP.LoadingBG_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALoadingBG_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingBG_BP_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingBG_BP.LoadingBG_BP_C.¿¤àé¤ó_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ALoadingBG_BP_C::_______0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingBG_BP_C", "¿¤àé¤ó_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingBG_BP.LoadingBG_BP_C.¿¤àé¤ó_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ALoadingBG_BP_C::_______0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingBG_BP_C", "¿¤àé¤ó_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingBG_BP.LoadingBG_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ALoadingBG_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingBG_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingBG_BP.LoadingBG_BP_C.ExecuteUbergraph_LoadingBG_BP
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddLocalRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ALoadingBG_BP_C::ExecuteUbergraph_LoadingBG_BP(int32 EntryPoint, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingBG_BP_C", "ExecuteUbergraph_LoadingBG_BP");

	Params::ALoadingBG_BP_C_ExecuteUbergraph_LoadingBG_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_AddLocalRotation_SweepHitResult = CallFunc_K2_AddLocalRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


