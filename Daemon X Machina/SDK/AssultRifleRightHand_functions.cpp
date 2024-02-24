#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AssultRifleRightHand.AssultRifleRightHand_C
// (Actor)

class UClass* AAssultRifleRightHand_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AssultRifleRightHand_C");

	return Clss;
}


// AssultRifleRightHand_C AssultRifleRightHand.Default__AssultRifleRightHand_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAssultRifleRightHand_C* AAssultRifleRightHand_C::GetDefaultObj()
{
	static class AAssultRifleRightHand_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAssultRifleRightHand_C*>(AAssultRifleRightHand_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AssultRifleRightHand.AssultRifleRightHand_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAssultRifleRightHand_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssultRifleRightHand_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AssultRifleRightHand.AssultRifleRightHand_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAssultRifleRightHand_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssultRifleRightHand_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AssultRifleRightHand.AssultRifleRightHand_C.ExecuteUbergraph_AssultRifleRightHand
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAssultRifleRightHand_C::ExecuteUbergraph_AssultRifleRightHand(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssultRifleRightHand_C", "ExecuteUbergraph_AssultRifleRightHand");

	Params::AAssultRifleRightHand_C_ExecuteUbergraph_AssultRifleRightHand_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


