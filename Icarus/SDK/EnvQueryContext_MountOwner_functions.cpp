#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnvQueryContext_MountOwner.EnvQueryContext_MountOwner_C
// (None)

class UClass* UEnvQueryContext_MountOwner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryContext_MountOwner_C");

	return Clss;
}


// EnvQueryContext_MountOwner_C EnvQueryContext_MountOwner.Default__EnvQueryContext_MountOwner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnvQueryContext_MountOwner_C* UEnvQueryContext_MountOwner_C::GetDefaultObj()
{
	static class UEnvQueryContext_MountOwner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryContext_MountOwner_C*>(UEnvQueryContext_MountOwner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EnvQueryContext_MountOwner.EnvQueryContext_MountOwner_C.ProvideSingleActor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      QuerierActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ResultingActor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusCharacter*            K2Node_DynamicCast_AsIcarus_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetMountParent_ParentActor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMountParent_Success                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEnvQueryContext_MountOwner_C::ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetMountParent_ParentActor, bool CallFunc_GetMountParent_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryContext_MountOwner_C", "ProvideSingleActor");

	Params::UEnvQueryContext_MountOwner_C_ProvideSingleActor_Params Parms{};

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;
	Parms.K2Node_DynamicCast_AsIcarus_Character = K2Node_DynamicCast_AsIcarus_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMountParent_ParentActor = CallFunc_GetMountParent_ParentActor;
	Parms.CallFunc_GetMountParent_Success = CallFunc_GetMountParent_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingActor != nullptr)
		*ResultingActor = Parms.ResultingActor;

}

}


