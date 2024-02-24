#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bpn_Soldier_PlayCustomSound.bpn_Soldier_PlayCustomSound_C
// (None)

class UClass* Ubpn_Soldier_PlayCustomSound_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bpn_Soldier_PlayCustomSound_C");

	return Clss;
}


// bpn_Soldier_PlayCustomSound_C bpn_Soldier_PlayCustomSound.Default__bpn_Soldier_PlayCustomSound_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubpn_Soldier_PlayCustomSound_C* Ubpn_Soldier_PlayCustomSound_C::GetDefaultObj()
{
	static class Ubpn_Soldier_PlayCustomSound_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubpn_Soldier_PlayCustomSound_C*>(Ubpn_Soldier_PlayCustomSound_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bpn_Soldier_PlayCustomSound.bpn_Soldier_PlayCustomSound_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool Ubpn_Soldier_PlayCustomSound_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FVector& CallFunc_GetSocketLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bpn_Soldier_PlayCustomSound_C", "Received_Notify");

	Params::Ubpn_Soldier_PlayCustomSound_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


