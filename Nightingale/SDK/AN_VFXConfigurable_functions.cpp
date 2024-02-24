#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_VFXConfigurable.AN_VFXConfigurable_C
// (None)

class UClass* UAN_VFXConfigurable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_VFXConfigurable_C");

	return Clss;
}


// AN_VFXConfigurable_C AN_VFXConfigurable.Default__AN_VFXConfigurable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAN_VFXConfigurable_C* UAN_VFXConfigurable_C::GetDefaultObj()
{
	static class UAN_VFXConfigurable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAN_VFXConfigurable_C*>(UAN_VFXConfigurable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AN_VFXConfigurable.AN_VFXConfigurable_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NVFX_SpawnConfigurableVFX_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_NVFX_SpawnConfigurableVFX_SpawnedSystem                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

bool UAN_VFXConfigurable_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, bool CallFunc_NVFX_SpawnConfigurableVFX_ReturnValue, class UNiagaraComponent* CallFunc_NVFX_SpawnConfigurableVFX_SpawnedSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_VFXConfigurable_C", "Received_Notify");

	Params::UAN_VFXConfigurable_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;
	Parms.CallFunc_NVFX_SpawnConfigurableVFX_ReturnValue = CallFunc_NVFX_SpawnConfigurableVFX_ReturnValue;
	Parms.CallFunc_NVFX_SpawnConfigurableVFX_SpawnedSystem = CallFunc_NVFX_SpawnConfigurableVFX_SpawnedSystem;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


