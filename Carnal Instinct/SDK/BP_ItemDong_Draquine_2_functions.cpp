#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemDong_Draquine_2.BP_ItemDong_Draquine_2_C
// (Actor)

class UClass* ABP_ItemDong_Draquine_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemDong_Draquine_2_C");

	return Clss;
}


// BP_ItemDong_Draquine_2_C BP_ItemDong_Draquine_2.Default__BP_ItemDong_Draquine_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemDong_Draquine_2_C* ABP_ItemDong_Draquine_2_C::GetDefaultObj()
{
	static class ABP_ItemDong_Draquine_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemDong_Draquine_2_C*>(ABP_ItemDong_Draquine_2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemDong_Draquine_2.BP_ItemDong_Draquine_2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemDong_Draquine_2_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemDong_Draquine_2_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemDong_Draquine_2.BP_ItemDong_Draquine_2_C.ExecuteUbergraph_BP_ItemDong_Draquine_2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemDong_Draquine_2_C::ExecuteUbergraph_BP_ItemDong_Draquine_2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemDong_Draquine_2_C", "ExecuteUbergraph_BP_ItemDong_Draquine_2");

	Params::ABP_ItemDong_Draquine_2_C_ExecuteUbergraph_BP_ItemDong_Draquine_2_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

