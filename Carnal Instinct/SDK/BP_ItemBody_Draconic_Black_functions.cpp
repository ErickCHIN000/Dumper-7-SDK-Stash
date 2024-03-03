#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemBody_Draconic_Black.BP_ItemBody_Draconic_Black_C
// (Actor)

class UClass* ABP_ItemBody_Draconic_Black_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemBody_Draconic_Black_C");

	return Clss;
}


// BP_ItemBody_Draconic_Black_C BP_ItemBody_Draconic_Black.Default__BP_ItemBody_Draconic_Black_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemBody_Draconic_Black_C* ABP_ItemBody_Draconic_Black_C::GetDefaultObj()
{
	static class ABP_ItemBody_Draconic_Black_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemBody_Draconic_Black_C*>(ABP_ItemBody_Draconic_Black_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemBody_Draconic_Black.BP_ItemBody_Draconic_Black_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemBody_Draconic_Black_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemBody_Draconic_Black_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemBody_Draconic_Black.BP_ItemBody_Draconic_Black_C.ExecuteUbergraph_BP_ItemBody_Draconic_Black
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemBody_Draconic_Black_C::ExecuteUbergraph_BP_ItemBody_Draconic_Black(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemBody_Draconic_Black_C", "ExecuteUbergraph_BP_ItemBody_Draconic_Black");

	Params::ABP_ItemBody_Draconic_Black_C_ExecuteUbergraph_BP_ItemBody_Draconic_Black_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


