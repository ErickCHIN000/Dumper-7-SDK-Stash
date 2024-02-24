#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ARand_MushroomCompanion_MeleeRunMix.ARand_MushroomCompanion_MeleeRunMix_C
// (None)

class UClass* UARand_MushroomCompanion_MeleeRunMix_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARand_MushroomCompanion_MeleeRunMix_C");

	return Clss;
}


// ARand_MushroomCompanion_MeleeRunMix_C ARand_MushroomCompanion_MeleeRunMix.Default__ARand_MushroomCompanion_MeleeRunMix_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UARand_MushroomCompanion_MeleeRunMix_C* UARand_MushroomCompanion_MeleeRunMix_C::GetDefaultObj()
{
	static class UARand_MushroomCompanion_MeleeRunMix_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UARand_MushroomCompanion_MeleeRunMix_C*>(UARand_MushroomCompanion_MeleeRunMix_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ARand_MushroomCompanion_MeleeRunMix.ARand_MushroomCompanion_MeleeRunMix_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UARand_MushroomCompanion_MeleeRunMix_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARand_MushroomCompanion_MeleeRunMix_C", "OnBegin");

	Params::UARand_MushroomCompanion_MeleeRunMix_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ARand_MushroomCompanion_MeleeRunMix.ARand_MushroomCompanion_MeleeRunMix_C.Notify_Melee
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UARand_MushroomCompanion_MeleeRunMix_C::Notify_Melee()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARand_MushroomCompanion_MeleeRunMix_C", "Notify_Melee");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ARand_MushroomCompanion_MeleeRunMix.ARand_MushroomCompanion_MeleeRunMix_C.ExecuteUbergraph_ARand_MushroomCompanion_MeleeRunMix
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UARand_MushroomCompanion_MeleeRunMix_C::ExecuteUbergraph_ARand_MushroomCompanion_MeleeRunMix(int32 EntryPoint, const struct FHitResult& Temp_struct_Variable, class AActor* K2Node_Event_Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARand_MushroomCompanion_MeleeRunMix_C", "ExecuteUbergraph_ARand_MushroomCompanion_MeleeRunMix");

	Params::UARand_MushroomCompanion_MeleeRunMix_C_ExecuteUbergraph_ARand_MushroomCompanion_MeleeRunMix_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;

	UObject::ProcessEvent(Func, &Parms);

}

}


