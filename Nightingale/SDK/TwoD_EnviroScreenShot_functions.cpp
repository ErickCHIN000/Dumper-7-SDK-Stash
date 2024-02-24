#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TwoD_EnviroScreenShot.TwoD_EnviroScreenShot_C
// (Actor)

class UClass* ATwoD_EnviroScreenShot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwoD_EnviroScreenShot_C");

	return Clss;
}


// TwoD_EnviroScreenShot_C TwoD_EnviroScreenShot.Default__TwoD_EnviroScreenShot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATwoD_EnviroScreenShot_C* ATwoD_EnviroScreenShot_C::GetDefaultObj()
{
	static class ATwoD_EnviroScreenShot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATwoD_EnviroScreenShot_C*>(ATwoD_EnviroScreenShot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TwoD_EnviroScreenShot.TwoD_EnviroScreenShot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATwoD_EnviroScreenShot_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwoD_EnviroScreenShot_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TwoD_EnviroScreenShot.TwoD_EnviroScreenShot_C.ExecuteUbergraph_TwoD_EnviroScreenShot
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATwoD_EnviroScreenShot_C::ExecuteUbergraph_TwoD_EnviroScreenShot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwoD_EnviroScreenShot_C", "ExecuteUbergraph_TwoD_EnviroScreenShot");

	Params::ATwoD_EnviroScreenShot_C_ExecuteUbergraph_TwoD_EnviroScreenShot_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


