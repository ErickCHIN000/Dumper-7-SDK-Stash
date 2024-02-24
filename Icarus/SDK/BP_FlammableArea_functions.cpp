#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FlammableArea.BP_FlammableArea_C
// (Actor)

class UClass* ABP_FlammableArea_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FlammableArea_C");

	return Clss;
}


// BP_FlammableArea_C BP_FlammableArea.Default__BP_FlammableArea_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FlammableArea_C* ABP_FlammableArea_C::GetDefaultObj()
{
	static class ABP_FlammableArea_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FlammableArea_C*>(ABP_FlammableArea_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FlammableArea.BP_FlammableArea_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_FlammableArea_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableArea_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FlammableArea.BP_FlammableArea_C.CleanupVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FlammableArea_C::CleanupVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableArea_C", "CleanupVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FlammableArea.BP_FlammableArea_C.ExecuteUbergraph_BP_FlammableArea
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// TArray<class AActor*>              CallFunc_SphereOverlapActors_OutActors                           (ReferenceParm)
// bool                               CallFunc_SphereOverlapActors_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFlammableTargetIgnite      CallFunc_MakeFlammableTargetIgniteFromActor_ReturnValue          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UFlammableInstance*          CallFunc_TryIgniteFlammableTarget_OutInstance                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryIgniteFlammableTarget_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FlammableArea_C::ExecuteUbergraph_BP_FlammableArea(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsServer_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class AActor*>& Temp_object_Variable, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FFlammableTargetIgnite& CallFunc_MakeFlammableTargetIgniteFromActor_ReturnValue, class UFlammableInstance* CallFunc_TryIgniteFlammableTarget_OutInstance, bool CallFunc_TryIgniteFlammableTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableArea_C", "ExecuteUbergraph_BP_FlammableArea");

	Params::ABP_FlammableArea_C_ExecuteUbergraph_BP_FlammableArea_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_SphereOverlapActors_OutActors = CallFunc_SphereOverlapActors_OutActors;
	Parms.CallFunc_SphereOverlapActors_ReturnValue = CallFunc_SphereOverlapActors_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_MakeFlammableTargetIgniteFromActor_ReturnValue = CallFunc_MakeFlammableTargetIgniteFromActor_ReturnValue;
	Parms.CallFunc_TryIgniteFlammableTarget_OutInstance = CallFunc_TryIgniteFlammableTarget_OutInstance;
	Parms.CallFunc_TryIgniteFlammableTarget_ReturnValue = CallFunc_TryIgniteFlammableTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


