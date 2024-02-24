#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TackleBox.BP_TackleBox_C
// (Actor)

class UClass* ABP_TackleBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TackleBox_C");

	return Clss;
}


// BP_TackleBox_C BP_TackleBox.Default__BP_TackleBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TackleBox_C* ABP_TackleBox_C::GetDefaultObj()
{
	static class ABP_TackleBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TackleBox_C*>(ABP_TackleBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_TackleBox.BP_TackleBox_C.OnBecomeInteractedWith
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TackleBox_C::OnBecomeInteractedWith()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TackleBox_C", "OnBecomeInteractedWith");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TackleBox.BP_TackleBox_C.OnNoLongerInteractedWith
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TackleBox_C::OnNoLongerInteractedWith()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TackleBox_C", "OnNoLongerInteractedWith");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TackleBox.BP_TackleBox_C.ExecuteUbergraph_BP_TackleBox
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TackleBox_C::ExecuteUbergraph_BP_TackleBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TackleBox_C", "ExecuteUbergraph_BP_TackleBox");

	Params::ABP_TackleBox_C_ExecuteUbergraph_BP_TackleBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


