#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_ch_attachment_magazin_ak47_double.ba_ch_attachment_magazin_ak47_double_C
// (Actor)

class UClass* Aba_ch_attachment_magazin_ak47_double_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_ch_attachment_magazin_ak47_double_C");

	return Clss;
}


// ba_ch_attachment_magazin_ak47_double_C ba_ch_attachment_magazin_ak47_double.Default__ba_ch_attachment_magazin_ak47_double_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_ch_attachment_magazin_ak47_double_C* Aba_ch_attachment_magazin_ak47_double_C::GetDefaultObj()
{
	static class Aba_ch_attachment_magazin_ak47_double_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_ch_attachment_magazin_ak47_double_C*>(Aba_ch_attachment_magazin_ak47_double_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_ch_attachment_magazin_ak47_double.ba_ch_attachment_magazin_ak47_double_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Aba_ch_attachment_magazin_ak47_double_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_attachment_magazin_ak47_double_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_attachment_magazin_ak47_double.ba_ch_attachment_magazin_ak47_double_C.ExecuteUbergraph_ba_ch_attachment_magazin_ak47_double
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_ch_attachment_magazin_ak47_double_C::ExecuteUbergraph_ba_ch_attachment_magazin_ak47_double(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_attachment_magazin_ak47_double_C", "ExecuteUbergraph_ba_ch_attachment_magazin_ak47_double");

	Params::Aba_ch_attachment_magazin_ak47_double_C_ExecuteUbergraph_ba_ch_attachment_magazin_ak47_double_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


