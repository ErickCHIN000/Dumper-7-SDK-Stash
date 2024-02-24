#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TrapFloorSpawner.TrapFloorSpawner_C
// (Actor)

class UClass* ATrapFloorSpawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrapFloorSpawner_C");

	return Clss;
}


// TrapFloorSpawner_C TrapFloorSpawner.Default__TrapFloorSpawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrapFloorSpawner_C* ATrapFloorSpawner_C::GetDefaultObj()
{
	static class ATrapFloorSpawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrapFloorSpawner_C*>(ATrapFloorSpawner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TrapFloorSpawner.TrapFloorSpawner_C.MulticastFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATrapFloorSpawner_C::MulticastFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrapFloorSpawner_C", "MulticastFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TrapFloorSpawner.TrapFloorSpawner_C.CreateTrapFloor
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATrapFloorSpawner_C::CreateTrapFloor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrapFloorSpawner_C", "CreateTrapFloor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TrapFloorSpawner.TrapFloorSpawner_C.ExecuteUbergraph_TrapFloorSpawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_SphereTraceMultiForObjects_OutHits                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SphereTraceMultiForObjects_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATrapFloorSpawner_C::ExecuteUbergraph_TrapFloorSpawner(int32 EntryPoint, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrapFloorSpawner_C", "ExecuteUbergraph_TrapFloorSpawner");

	Params::ATrapFloorSpawner_C_ExecuteUbergraph_TrapFloorSpawner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SphereTraceMultiForObjects_OutHits = CallFunc_SphereTraceMultiForObjects_OutHits;
	Parms.CallFunc_SphereTraceMultiForObjects_ReturnValue = CallFunc_SphereTraceMultiForObjects_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


