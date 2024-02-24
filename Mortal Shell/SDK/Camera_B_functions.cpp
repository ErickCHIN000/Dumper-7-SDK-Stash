#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Camera_B.Camera_B_C
// (Actor)

class UClass* ACamera_B_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Camera_B_C");

	return Clss;
}


// Camera_B_C Camera_B.Default__Camera_B_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACamera_B_C* ACamera_B_C::GetDefaultObj()
{
	static class ACamera_B_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACamera_B_C*>(ACamera_B_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Camera_B.Camera_B_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACamera_B_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camera_B_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Camera_B.Camera_B_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACamera_B_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camera_B_C", "ReceiveTick");

	Params::ACamera_B_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Camera_B.Camera_B_C.ExecuteUbergraph_Camera_B
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACamera_B_C::ExecuteUbergraph_Camera_B(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camera_B_C", "ExecuteUbergraph_Camera_B");

	Params::ACamera_B_C_ExecuteUbergraph_Camera_B_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


