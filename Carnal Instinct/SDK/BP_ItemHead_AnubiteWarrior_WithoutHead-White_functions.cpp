#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemHead_AnubiteWarrior_WithoutHead-White.BP_ItemHead_AnubiteWarrior_WithoutHead-White_C
// (Actor)

class UClass* ABP_ItemHead_AnubiteWarrior_WithoutHeadMinusWhite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemHead_AnubiteWarrior_WithoutHead-White_C");

	return Clss;
}


// BP_ItemHead_AnubiteWarrior_WithoutHead-White_C BP_ItemHead_AnubiteWarrior_WithoutHead-White.Default__BP_ItemHead_AnubiteWarrior_WithoutHead-White_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemHead_AnubiteWarrior_WithoutHeadMinusWhite_C* ABP_ItemHead_AnubiteWarrior_WithoutHeadMinusWhite_C::GetDefaultObj()
{
	static class ABP_ItemHead_AnubiteWarrior_WithoutHeadMinusWhite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemHead_AnubiteWarrior_WithoutHeadMinusWhite_C*>(ABP_ItemHead_AnubiteWarrior_WithoutHeadMinusWhite_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemHead_AnubiteWarrior_WithoutHead-White.BP_ItemHead_AnubiteWarrior_WithoutHead-White_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemHead_AnubiteWarrior_WithoutHeadMinusWhite_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemHead_AnubiteWarrior_WithoutHead-White_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemHead_AnubiteWarrior_WithoutHead-White.BP_ItemHead_AnubiteWarrior_WithoutHead-White_C.ExecuteUbergraph_BP_ItemHead_AnubiteWarrior_WithoutHead-White
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemHead_AnubiteWarrior_WithoutHeadMinusWhite_C::ExecuteUbergraph_BP_ItemHead_AnubiteWarrior_WithoutHeadMinusWhite(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemHead_AnubiteWarrior_WithoutHead-White_C", "ExecuteUbergraph_BP_ItemHead_AnubiteWarrior_WithoutHead-White");

	Params::ABP_ItemHead_AnubiteWarrior_WithoutHeadMinusWhite_C_ExecuteUbergraph_BP_ItemHead_AnubiteWarrior_WithoutHeadMinusWhite_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


