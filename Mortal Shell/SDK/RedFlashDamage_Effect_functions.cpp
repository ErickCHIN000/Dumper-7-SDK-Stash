#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RedFlashDamage_Effect.RedFlashDamage_Effect_C
// (Actor)

class UClass* ARedFlashDamage_Effect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RedFlashDamage_Effect_C");

	return Clss;
}


// RedFlashDamage_Effect_C RedFlashDamage_Effect.Default__RedFlashDamage_Effect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARedFlashDamage_Effect_C* ARedFlashDamage_Effect_C::GetDefaultObj()
{
	static class ARedFlashDamage_Effect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARedFlashDamage_Effect_C*>(ARedFlashDamage_Effect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RedFlashDamage_Effect.RedFlashDamage_Effect_C.Flash__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ARedFlashDamage_Effect_C::Flash__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedFlashDamage_Effect_C", "Flash__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RedFlashDamage_Effect.RedFlashDamage_Effect_C.Flash__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ARedFlashDamage_Effect_C::Flash__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedFlashDamage_Effect_C", "Flash__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RedFlashDamage_Effect.RedFlashDamage_Effect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ARedFlashDamage_Effect_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedFlashDamage_Effect_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RedFlashDamage_Effect.RedFlashDamage_Effect_C.ExecuteUbergraph_RedFlashDamage_Effect
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARedFlashDamage_Effect_C::ExecuteUbergraph_RedFlashDamage_Effect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedFlashDamage_Effect_C", "ExecuteUbergraph_RedFlashDamage_Effect");

	Params::ARedFlashDamage_Effect_C_ExecuteUbergraph_RedFlashDamage_Effect_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


