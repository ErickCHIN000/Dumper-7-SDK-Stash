#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotify_ShowSpawnedProjectile.AnimNotify_ShowSpawnedProjectile_C
// (None)

class UClass* UAnimNotify_ShowSpawnedProjectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_ShowSpawnedProjectile_C");

	return Clss;
}


// AnimNotify_ShowSpawnedProjectile_C AnimNotify_ShowSpawnedProjectile.Default__AnimNotify_ShowSpawnedProjectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotify_ShowSpawnedProjectile_C* UAnimNotify_ShowSpawnedProjectile_C::GetDefaultObj()
{
	static class UAnimNotify_ShowSpawnedProjectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_ShowSpawnedProjectile_C*>(UAnimNotify_ShowSpawnedProjectile_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimNotify_ShowSpawnedProjectile.AnimNotify_ShowSpawnedProjectile_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHCharacter*                K2Node_DynamicCast_AsSHCharacter                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAnimNotify_ShowSpawnedProjectile_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class ASHCharacter* K2Node_DynamicCast_AsSHCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_ShowSpawnedProjectile_C", "Received_Notify");

	Params::UAnimNotify_ShowSpawnedProjectile_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsSHCharacter = K2Node_DynamicCast_AsSHCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


