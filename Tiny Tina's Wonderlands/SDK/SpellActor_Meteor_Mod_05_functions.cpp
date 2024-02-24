#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpellActor_Meteor_Mod_05.SpellActor_Meteor_Mod_05_C
// (Actor)

class UClass* ASpellActor_Meteor_Mod_05_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpellActor_Meteor_Mod_05_C");

	return Clss;
}


// SpellActor_Meteor_Mod_05_C SpellActor_Meteor_Mod_05.Default__SpellActor_Meteor_Mod_05_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASpellActor_Meteor_Mod_05_C* ASpellActor_Meteor_Mod_05_C::GetDefaultObj()
{
	static class ASpellActor_Meteor_Mod_05_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpellActor_Meteor_Mod_05_C*>(ASpellActor_Meteor_Mod_05_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpellActor_Meteor_Mod_05.SpellActor_Meteor_Mod_05_C.OnRep_bEnableSingularity
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_Meteor_Mod_05_C::OnRep_bEnableSingularity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Meteor_Mod_05_C", "OnRep_bEnableSingularity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Meteor_Mod_05.SpellActor_Meteor_Mod_05_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_Meteor_Mod_05_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Meteor_Mod_05_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Meteor_Mod_05.SpellActor_Meteor_Mod_05_C.ContinueMeteorSpawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_Meteor_Mod_05_C::ContinueMeteorSpawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Meteor_Mod_05_C", "ContinueMeteorSpawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Meteor_Mod_05.SpellActor_Meteor_Mod_05_C.BeginCleanup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_Meteor_Mod_05_C::BeginCleanup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Meteor_Mod_05_C", "BeginCleanup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Meteor_Mod_05.SpellActor_Meteor_Mod_05_C.Mod05Cleanup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_Meteor_Mod_05_C::Mod05Cleanup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Meteor_Mod_05_C", "Mod05Cleanup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Meteor_Mod_05.SpellActor_Meteor_Mod_05_C.TrySpawnMeteor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_Meteor_Mod_05_C::TrySpawnMeteor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Meteor_Mod_05_C", "TrySpawnMeteor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Meteor_Mod_05.SpellActor_Meteor_Mod_05_C.TrySpawnPortal
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_Meteor_Mod_05_C::TrySpawnPortal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Meteor_Mod_05_C", "TrySpawnPortal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Meteor_Mod_05.SpellActor_Meteor_Mod_05_C.DoSingularity
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_Meteor_Mod_05_C::DoSingularity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Meteor_Mod_05_C", "DoSingularity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Meteor_Mod_05.SpellActor_Meteor_Mod_05_C.ExecuteUbergraph_SpellActor_Meteor_Mod_05
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FSingularityInitializationInfoK2Node_MakeStruct_SingularityInitializationInfo                  (None)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue1                        (NoDestructor)
// class USingularityComponent*       CallFunc_CreateSingularity_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpellActor_Meteor_Mod_05_C::ExecuteUbergraph_SpellActor_Meteor_Mod_05(int32 EntryPoint, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FSingularityInitializationInfo& K2Node_MakeStruct_SingularityInitializationInfo, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, class USingularityComponent* CallFunc_CreateSingularity_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Meteor_Mod_05_C", "ExecuteUbergraph_SpellActor_Meteor_Mod_05");

	Params::ASpellActor_Meteor_Mod_05_C_ExecuteUbergraph_SpellActor_Meteor_Mod_05_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_MakeStruct_SingularityInitializationInfo = K2Node_MakeStruct_SingularityInitializationInfo;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue1 = CallFunc_K2_SetTimerDelegate_ReturnValue1;
	Parms.CallFunc_CreateSingularity_ReturnValue = CallFunc_CreateSingularity_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


