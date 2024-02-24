#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bpn_SetHiddenComponent.bpn_SetHiddenComponent_C
// (None)

class UClass* Ubpn_SetHiddenComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bpn_SetHiddenComponent_C");

	return Clss;
}


// bpn_SetHiddenComponent_C bpn_SetHiddenComponent.Default__bpn_SetHiddenComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubpn_SetHiddenComponent_C* Ubpn_SetHiddenComponent_C::GetDefaultObj()
{
	static class Ubpn_SetHiddenComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubpn_SetHiddenComponent_C*>(Ubpn_SetHiddenComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bpn_SetHiddenComponent.bpn_SetHiddenComponent_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool Ubpn_SetHiddenComponent_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bpn_SetHiddenComponent_C", "Received_Notify");

	Params::Ubpn_SetHiddenComponent_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


