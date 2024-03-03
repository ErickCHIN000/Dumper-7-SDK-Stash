#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemHead_AnubiteWarrior_WithHead-White.BP_ItemHead_AnubiteWarrior_WithHead-White_C
// (Actor)

class UClass* ABP_ItemHead_AnubiteWarrior_WithHeadMinusWhite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemHead_AnubiteWarrior_WithHead-White_C");

	return Clss;
}


// BP_ItemHead_AnubiteWarrior_WithHead-White_C BP_ItemHead_AnubiteWarrior_WithHead-White.Default__BP_ItemHead_AnubiteWarrior_WithHead-White_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemHead_AnubiteWarrior_WithHeadMinusWhite_C* ABP_ItemHead_AnubiteWarrior_WithHeadMinusWhite_C::GetDefaultObj()
{
	static class ABP_ItemHead_AnubiteWarrior_WithHeadMinusWhite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemHead_AnubiteWarrior_WithHeadMinusWhite_C*>(ABP_ItemHead_AnubiteWarrior_WithHeadMinusWhite_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemHead_AnubiteWarrior_WithHead-White.BP_ItemHead_AnubiteWarrior_WithHead-White_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemHead_AnubiteWarrior_WithHeadMinusWhite_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemHead_AnubiteWarrior_WithHead-White_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemHead_AnubiteWarrior_WithHead-White.BP_ItemHead_AnubiteWarrior_WithHead-White_C.ExecuteUbergraph_BP_ItemHead_AnubiteWarrior_WithHead-White
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemHead_AnubiteWarrior_WithHeadMinusWhite_C::ExecuteUbergraph_BP_ItemHead_AnubiteWarrior_WithHeadMinusWhite(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemHead_AnubiteWarrior_WithHead-White_C", "ExecuteUbergraph_BP_ItemHead_AnubiteWarrior_WithHead-White");

	Params::ABP_ItemHead_AnubiteWarrior_WithHeadMinusWhite_C_ExecuteUbergraph_BP_ItemHead_AnubiteWarrior_WithHeadMinusWhite_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


