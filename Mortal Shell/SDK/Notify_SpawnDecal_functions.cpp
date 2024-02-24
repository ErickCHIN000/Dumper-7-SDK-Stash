#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Notify_SpawnDecal.Notify_SpawnDecal_C
// (None)

class UClass* UNotify_SpawnDecal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Notify_SpawnDecal_C");

	return Clss;
}


// Notify_SpawnDecal_C Notify_SpawnDecal.Default__Notify_SpawnDecal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNotify_SpawnDecal_C* UNotify_SpawnDecal_C::GetDefaultObj()
{
	static class UNotify_SpawnDecal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNotify_SpawnDecal_C*>(UNotify_SpawnDecal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Notify_SpawnDecal.Notify_SpawnDecal_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDecalComponent*             CallFunc_SpawnDecalAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UNotify_SpawnDecal_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notify_SpawnDecal_C", "Received_Notify");

	Params::UNotify_SpawnDecal_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SpawnDecalAtLocation_ReturnValue = CallFunc_SpawnDecalAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


