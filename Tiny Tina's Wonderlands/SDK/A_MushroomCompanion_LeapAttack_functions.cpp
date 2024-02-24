#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass A_MushroomCompanion_LeapAttack.A_MushroomCompanion_LeapAttack_C
// (None)

class UClass* UA_MushroomCompanion_LeapAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("A_MushroomCompanion_LeapAttack_C");

	return Clss;
}


// A_MushroomCompanion_LeapAttack_C A_MushroomCompanion_LeapAttack.Default__A_MushroomCompanion_LeapAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UA_MushroomCompanion_LeapAttack_C* UA_MushroomCompanion_LeapAttack_C::GetDefaultObj()
{
	static class UA_MushroomCompanion_LeapAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UA_MushroomCompanion_LeapAttack_C*>(UA_MushroomCompanion_LeapAttack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function A_MushroomCompanion_LeapAttack.A_MushroomCompanion_LeapAttack_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UA_MushroomCompanion_LeapAttack_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("A_MushroomCompanion_LeapAttack_C", "OnBegin");

	Params::UA_MushroomCompanion_LeapAttack_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function A_MushroomCompanion_LeapAttack.A_MushroomCompanion_LeapAttack_C.Notify_Melee
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UA_MushroomCompanion_LeapAttack_C::Notify_Melee()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("A_MushroomCompanion_LeapAttack_C", "Notify_Melee");



	UObject::ProcessEvent(Func, nullptr);

}


// Function A_MushroomCompanion_LeapAttack.A_MushroomCompanion_LeapAttack_C.ExecuteUbergraph_A_MushroomCompanion_LeapAttack
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UA_MushroomCompanion_LeapAttack_C::ExecuteUbergraph_A_MushroomCompanion_LeapAttack(int32 EntryPoint, const struct FHitResult& Temp_struct_Variable, class AActor* K2Node_Event_Actor, class AActor* CallFunc_K2_GetActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("A_MushroomCompanion_LeapAttack_C", "ExecuteUbergraph_A_MushroomCompanion_LeapAttack");

	Params::UA_MushroomCompanion_LeapAttack_C_ExecuteUbergraph_A_MushroomCompanion_LeapAttack_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.CallFunc_K2_GetActor_ReturnValue = CallFunc_K2_GetActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


