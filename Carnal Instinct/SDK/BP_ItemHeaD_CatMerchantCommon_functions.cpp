#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemHeaD_CatMerchantCommon.BP_ItemHead_CatMerchantCommon_C
// (Actor)

class UClass* ABP_ItemHead_CatMerchantCommon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemHead_CatMerchantCommon_C");

	return Clss;
}


// BP_ItemHead_CatMerchantCommon_C BP_ItemHeaD_CatMerchantCommon.Default__BP_ItemHead_CatMerchantCommon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemHead_CatMerchantCommon_C* ABP_ItemHead_CatMerchantCommon_C::GetDefaultObj()
{
	static class ABP_ItemHead_CatMerchantCommon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemHead_CatMerchantCommon_C*>(ABP_ItemHead_CatMerchantCommon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemHeaD_CatMerchantCommon.BP_ItemHead_CatMerchantCommon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemHead_CatMerchantCommon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemHead_CatMerchantCommon_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemHeaD_CatMerchantCommon.BP_ItemHead_CatMerchantCommon_C.ExecuteUbergraph_BP_ItemHead_CatMerchantCommon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemHead_CatMerchantCommon_C::ExecuteUbergraph_BP_ItemHead_CatMerchantCommon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemHead_CatMerchantCommon_C", "ExecuteUbergraph_BP_ItemHead_CatMerchantCommon");

	Params::ABP_ItemHead_CatMerchantCommon_C_ExecuteUbergraph_BP_ItemHead_CatMerchantCommon_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


