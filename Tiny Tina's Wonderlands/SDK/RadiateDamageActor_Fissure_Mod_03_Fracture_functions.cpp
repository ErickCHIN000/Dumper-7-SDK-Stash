#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RadiateDamageActor_Fissure_Mod_03_Fracture.RadiateDamageActor_Fissure_Mod_03_Fracture_C
// (Actor)

class UClass* ARadiateDamageActor_Fissure_Mod_03_Fracture_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadiateDamageActor_Fissure_Mod_03_Fracture_C");

	return Clss;
}


// RadiateDamageActor_Fissure_Mod_03_Fracture_C RadiateDamageActor_Fissure_Mod_03_Fracture.Default__RadiateDamageActor_Fissure_Mod_03_Fracture_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARadiateDamageActor_Fissure_Mod_03_Fracture_C* ARadiateDamageActor_Fissure_Mod_03_Fracture_C::GetDefaultObj()
{
	static class ARadiateDamageActor_Fissure_Mod_03_Fracture_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARadiateDamageActor_Fissure_Mod_03_Fracture_C*>(ARadiateDamageActor_Fissure_Mod_03_Fracture_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RadiateDamageActor_Fissure_Mod_03_Fracture.RadiateDamageActor_Fissure_Mod_03_Fracture_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ARadiateDamageActor_Fissure_Mod_03_Fracture_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadiateDamageActor_Fissure_Mod_03_Fracture_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadiateDamageActor_Fissure_Mod_03_Fracture.RadiateDamageActor_Fissure_Mod_03_Fracture_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ARadiateDamageActor_Fissure_Mod_03_Fracture_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadiateDamageActor_Fissure_Mod_03_Fracture_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadiateDamageActor_Fissure_Mod_03_Fracture.RadiateDamageActor_Fissure_Mod_03_Fracture_C.ExecuteUbergraph_RadiateDamageActor_Fissure_Mod_03_Fracture
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ARadiateDamageActor_Fissure_Mod_03_Fracture_C::ExecuteUbergraph_RadiateDamageActor_Fissure_Mod_03_Fracture(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadiateDamageActor_Fissure_Mod_03_Fracture_C", "ExecuteUbergraph_RadiateDamageActor_Fissure_Mod_03_Fracture");

	Params::ARadiateDamageActor_Fissure_Mod_03_Fracture_C_ExecuteUbergraph_RadiateDamageActor_Fissure_Mod_03_Fracture_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


