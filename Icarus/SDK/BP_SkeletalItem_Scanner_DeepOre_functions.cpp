#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkeletalItem_Scanner_DeepOre.BP_SkeletalItem_Scanner_DeepOre_C
// (Actor)

class UClass* ABP_SkeletalItem_Scanner_DeepOre_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkeletalItem_Scanner_DeepOre_C");

	return Clss;
}


// BP_SkeletalItem_Scanner_DeepOre_C BP_SkeletalItem_Scanner_DeepOre.Default__BP_SkeletalItem_Scanner_DeepOre_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkeletalItem_Scanner_DeepOre_C* ABP_SkeletalItem_Scanner_DeepOre_C::GetDefaultObj()
{
	static class ABP_SkeletalItem_Scanner_DeepOre_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkeletalItem_Scanner_DeepOre_C*>(ABP_SkeletalItem_Scanner_DeepOre_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkeletalItem_Scanner_DeepOre.BP_SkeletalItem_Scanner_DeepOre_C.GetScreenWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidgetComponent* ABP_SkeletalItem_Scanner_DeepOre_C::GetScreenWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Scanner_DeepOre_C", "GetScreenWidget");

	Params::ABP_SkeletalItem_Scanner_DeepOre_C_GetScreenWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SkeletalItem_Scanner_DeepOre.BP_SkeletalItem_Scanner_DeepOre_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Scanner_DeepOre_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Scanner_DeepOre_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Scanner_DeepOre.BP_SkeletalItem_Scanner_DeepOre_C.ExecuteUbergraph_BP_SkeletalItem_Scanner_DeepOre
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkeletalItem_Scanner_DeepOre_C::ExecuteUbergraph_BP_SkeletalItem_Scanner_DeepOre(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Scanner_DeepOre_C", "ExecuteUbergraph_BP_SkeletalItem_Scanner_DeepOre");

	Params::ABP_SkeletalItem_Scanner_DeepOre_C_ExecuteUbergraph_BP_SkeletalItem_Scanner_DeepOre_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


