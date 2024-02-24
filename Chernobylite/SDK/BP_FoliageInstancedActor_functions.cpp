#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FoliageInstancedActor.BP_FoliageInstancedActor_C
// (Actor)

class UClass* ABP_FoliageInstancedActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FoliageInstancedActor_C");

	return Clss;
}


// BP_FoliageInstancedActor_C BP_FoliageInstancedActor.Default__BP_FoliageInstancedActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FoliageInstancedActor_C* ABP_FoliageInstancedActor_C::GetDefaultObj()
{
	static class ABP_FoliageInstancedActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FoliageInstancedActor_C*>(ABP_FoliageInstancedActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FoliageInstancedActor.BP_FoliageInstancedActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_FoliageInstancedActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FoliageInstancedActor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FoliageInstancedActor.BP_FoliageInstancedActor_C.ConvertToBlueprints
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DestroyActorOnComplete                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      FoliageClass                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FoliageInstancedActor_C::ConvertToBlueprints(bool DestroyActorOnComplete, class UClass* FoliageClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FoliageInstancedActor_C", "ConvertToBlueprints");

	Params::ABP_FoliageInstancedActor_C_ConvertToBlueprints_Params Parms{};

	Parms.DestroyActorOnComplete = DestroyActorOnComplete;
	Parms.FoliageClass = FoliageClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FoliageInstancedActor.BP_FoliageInstancedActor_C.ExecuteUbergraph_BP_FoliageInstancedActor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_DestroyActorOnComplete                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_FoliageClass                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveInstance_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetInstanceTransform_OutInstanceTransform               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetInstanceTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInstanceCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInstanceCount_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FoliageInstancedActor_C::ExecuteUbergraph_BP_FoliageInstancedActor(int32 EntryPoint, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, bool K2Node_CustomEvent_DestroyActorOnComplete, class UClass* K2Node_CustomEvent_FoliageClass, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_RemoveInstance_ReturnValue, const struct FTransform& CallFunc_GetInstanceTransform_OutInstanceTransform, bool CallFunc_GetInstanceTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_GetInstanceCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetInstanceCount_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FoliageInstancedActor_C", "ExecuteUbergraph_BP_FoliageInstancedActor");

	Params::ABP_FoliageInstancedActor_C_ExecuteUbergraph_BP_FoliageInstancedActor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_CustomEvent_DestroyActorOnComplete = K2Node_CustomEvent_DestroyActorOnComplete;
	Parms.K2Node_CustomEvent_FoliageClass = K2Node_CustomEvent_FoliageClass;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_RemoveInstance_ReturnValue = CallFunc_RemoveInstance_ReturnValue;
	Parms.CallFunc_GetInstanceTransform_OutInstanceTransform = CallFunc_GetInstanceTransform_OutInstanceTransform;
	Parms.CallFunc_GetInstanceTransform_ReturnValue = CallFunc_GetInstanceTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetInstanceCount_ReturnValue = CallFunc_GetInstanceCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetInstanceCount_ReturnValue_1 = CallFunc_GetInstanceCount_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


