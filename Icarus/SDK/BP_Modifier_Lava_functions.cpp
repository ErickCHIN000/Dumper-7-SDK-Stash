#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Modifier_Lava.BP_Modifier_Lava_C
// (None)

class UClass* UBP_Modifier_Lava_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Modifier_Lava_C");

	return Clss;
}


// BP_Modifier_Lava_C BP_Modifier_Lava.Default__BP_Modifier_Lava_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Modifier_Lava_C* UBP_Modifier_Lava_C::GetDefaultObj()
{
	static class UBP_Modifier_Lava_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Modifier_Lava_C*>(UBP_Modifier_Lava_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Modifier_Lava.BP_Modifier_Lava_C.ModifierApplied
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ModifierApplied_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFlammableTargetIgnite      CallFunc_MakeFlammableTargetIgniteFromActor_ReturnValue          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UFlammableInstance*          CallFunc_TryIgniteFlammableTarget_OutInstance                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryIgniteFlammableTarget_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_Modifier_Lava_C::ModifierApplied(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_ModifierApplied_ReturnValue, const struct FFlammableTargetIgnite& CallFunc_MakeFlammableTargetIgniteFromActor_ReturnValue, class UFlammableInstance* CallFunc_TryIgniteFlammableTarget_OutInstance, bool CallFunc_TryIgniteFlammableTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Modifier_Lava_C", "ModifierApplied");

	Params::UBP_Modifier_Lava_C_ModifierApplied_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_ModifierApplied_ReturnValue = CallFunc_ModifierApplied_ReturnValue;
	Parms.CallFunc_MakeFlammableTargetIgniteFromActor_ReturnValue = CallFunc_MakeFlammableTargetIgniteFromActor_ReturnValue;
	Parms.CallFunc_TryIgniteFlammableTarget_OutInstance = CallFunc_TryIgniteFlammableTarget_OutInstance;
	Parms.CallFunc_TryIgniteFlammableTarget_ReturnValue = CallFunc_TryIgniteFlammableTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


