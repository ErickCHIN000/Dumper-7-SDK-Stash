#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MysteriousLetter.BP_MysteriousLetter_C
// (Actor)

class UClass* ABP_MysteriousLetter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MysteriousLetter_C");

	return Clss;
}


// BP_MysteriousLetter_C BP_MysteriousLetter.Default__BP_MysteriousLetter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MysteriousLetter_C* ABP_MysteriousLetter_C::GetDefaultObj()
{
	static class ABP_MysteriousLetter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MysteriousLetter_C*>(ABP_MysteriousLetter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MysteriousLetter.BP_MysteriousLetter_C.Remove Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MysteriousLetter_C::Remove_Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MysteriousLetter_C", "Remove Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MysteriousLetter.BP_MysteriousLetter_C.ExecuteUbergraph_BP_MysteriousLetter
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MysteriousLetter_C::ExecuteUbergraph_BP_MysteriousLetter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MysteriousLetter_C", "ExecuteUbergraph_BP_MysteriousLetter");

	Params::ABP_MysteriousLetter_C_ExecuteUbergraph_BP_MysteriousLetter_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


