#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_DynamicSex_ClimaxEnd_Centaur.AN_DynamicSex_ClimaxEnd_Centaur_C
// (None)

class UClass* UAN_DynamicSex_ClimaxEnd_Centaur_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_DynamicSex_ClimaxEnd_Centaur_C");

	return Clss;
}


// AN_DynamicSex_ClimaxEnd_Centaur_C AN_DynamicSex_ClimaxEnd_Centaur.Default__AN_DynamicSex_ClimaxEnd_Centaur_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAN_DynamicSex_ClimaxEnd_Centaur_C* UAN_DynamicSex_ClimaxEnd_Centaur_C::GetDefaultObj()
{
	static class UAN_DynamicSex_ClimaxEnd_Centaur_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAN_DynamicSex_ClimaxEnd_Centaur_C*>(UAN_DynamicSex_ClimaxEnd_Centaur_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AN_DynamicSex_ClimaxEnd_Centaur.AN_DynamicSex_ClimaxEnd_Centaur_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ABP_DynamicSex_Base_Centaur_C*CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAN_DynamicSex_ClimaxEnd_Centaur_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class ABP_DynamicSex_Base_Centaur_C* CallFunc_GetActorOfClass_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_DynamicSex_ClimaxEnd_Centaur_C", "Received_Notify");

	Params::UAN_DynamicSex_ClimaxEnd_Centaur_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


