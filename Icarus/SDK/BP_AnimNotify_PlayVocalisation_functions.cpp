#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AnimNotify_PlayVocalisation.BP_AnimNotify_PlayVocalisation_C
// (None)

class UClass* UBP_AnimNotify_PlayVocalisation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AnimNotify_PlayVocalisation_C");

	return Clss;
}


// BP_AnimNotify_PlayVocalisation_C BP_AnimNotify_PlayVocalisation.Default__BP_AnimNotify_PlayVocalisation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AnimNotify_PlayVocalisation_C* UBP_AnimNotify_PlayVocalisation_C::GetDefaultObj()
{
	static class UBP_AnimNotify_PlayVocalisation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AnimNotify_PlayVocalisation_C*>(UBP_AnimNotify_PlayVocalisation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AnimNotify_PlayVocalisation.BP_AnimNotify_PlayVocalisation_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVocalisationComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVocalisationPlayResult CallFunc_TryPlayVocalisation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_AnimNotify_PlayVocalisation_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class UVocalisationComponent* CallFunc_GetComponentByClass_ReturnValue, enum class EVocalisationPlayResult CallFunc_TryPlayVocalisation_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AnimNotify_PlayVocalisation_C", "Received_Notify");

	Params::UBP_AnimNotify_PlayVocalisation_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_TryPlayVocalisation_ReturnValue = CallFunc_TryPlayVocalisation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


