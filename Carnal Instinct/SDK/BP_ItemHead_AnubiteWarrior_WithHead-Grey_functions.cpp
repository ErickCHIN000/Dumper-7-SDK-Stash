#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemHead_AnubiteWarrior_WithHead-Grey.BP_ItemHead_AnubiteWarrior_WithHead-Grey_C
// (Actor)

class UClass* ABP_ItemHead_AnubiteWarrior_WithHeadMinusGrey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemHead_AnubiteWarrior_WithHead-Grey_C");

	return Clss;
}


// BP_ItemHead_AnubiteWarrior_WithHead-Grey_C BP_ItemHead_AnubiteWarrior_WithHead-Grey.Default__BP_ItemHead_AnubiteWarrior_WithHead-Grey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemHead_AnubiteWarrior_WithHeadMinusGrey_C* ABP_ItemHead_AnubiteWarrior_WithHeadMinusGrey_C::GetDefaultObj()
{
	static class ABP_ItemHead_AnubiteWarrior_WithHeadMinusGrey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemHead_AnubiteWarrior_WithHeadMinusGrey_C*>(ABP_ItemHead_AnubiteWarrior_WithHeadMinusGrey_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemHead_AnubiteWarrior_WithHead-Grey.BP_ItemHead_AnubiteWarrior_WithHead-Grey_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemHead_AnubiteWarrior_WithHeadMinusGrey_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemHead_AnubiteWarrior_WithHead-Grey_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemHead_AnubiteWarrior_WithHead-Grey.BP_ItemHead_AnubiteWarrior_WithHead-Grey_C.ExecuteUbergraph_BP_ItemHead_AnubiteWarrior_WithHead-Grey
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemHead_AnubiteWarrior_WithHeadMinusGrey_C::ExecuteUbergraph_BP_ItemHead_AnubiteWarrior_WithHeadMinusGrey(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemHead_AnubiteWarrior_WithHead-Grey_C", "ExecuteUbergraph_BP_ItemHead_AnubiteWarrior_WithHead-Grey");

	Params::ABP_ItemHead_AnubiteWarrior_WithHeadMinusGrey_C_ExecuteUbergraph_BP_ItemHead_AnubiteWarrior_WithHeadMinusGrey_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


