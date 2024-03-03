#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemDong_Human.BP_ItemDong_Human_C
// (Actor)

class UClass* ABP_ItemDong_Human_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemDong_Human_C");

	return Clss;
}


// BP_ItemDong_Human_C BP_ItemDong_Human.Default__BP_ItemDong_Human_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemDong_Human_C* ABP_ItemDong_Human_C::GetDefaultObj()
{
	static class ABP_ItemDong_Human_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemDong_Human_C*>(ABP_ItemDong_Human_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemDong_Human.BP_ItemDong_Human_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemDong_Human_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemDong_Human_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemDong_Human.BP_ItemDong_Human_C.ExecuteUbergraph_BP_ItemDong_Human
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemDong_Human_C::ExecuteUbergraph_BP_ItemDong_Human(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemDong_Human_C", "ExecuteUbergraph_BP_ItemDong_Human");

	Params::ABP_ItemDong_Human_C_ExecuteUbergraph_BP_ItemDong_Human_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


