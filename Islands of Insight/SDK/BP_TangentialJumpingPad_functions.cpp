#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TangentialJumpingPad.BP_TangentialJumpingPad_C
// (Actor)

class UClass* ABP_TangentialJumpingPad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TangentialJumpingPad_C");

	return Clss;
}


// BP_TangentialJumpingPad_C BP_TangentialJumpingPad.Default__BP_TangentialJumpingPad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TangentialJumpingPad_C* ABP_TangentialJumpingPad_C::GetDefaultObj()
{
	static class ABP_TangentialJumpingPad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TangentialJumpingPad_C*>(ABP_TangentialJumpingPad_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_TangentialJumpingPad.BP_TangentialJumpingPad_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TangentialJumpingPad_C::UserConstructionScript(float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TangentialJumpingPad_C", "UserConstructionScript");

	Params::ABP_TangentialJumpingPad_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TangentialJumpingPad.BP_TangentialJumpingPad_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_TangentialJumpingPad_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TangentialJumpingPad_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TangentialJumpingPad.BP_TangentialJumpingPad_C.ExecuteUbergraph_BP_TangentialJumpingPad
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TangentialJumpingPad_C::ExecuteUbergraph_BP_TangentialJumpingPad(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TangentialJumpingPad_C", "ExecuteUbergraph_BP_TangentialJumpingPad");

	Params::ABP_TangentialJumpingPad_C_ExecuteUbergraph_BP_TangentialJumpingPad_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


