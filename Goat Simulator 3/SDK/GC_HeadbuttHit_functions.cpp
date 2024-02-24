#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_HeadbuttHit.GC_HeadbuttHit_C
// (None)

class UClass* UGC_HeadbuttHit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_HeadbuttHit_C");

	return Clss;
}


// GC_HeadbuttHit_C GC_HeadbuttHit.Default__GC_HeadbuttHit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_HeadbuttHit_C* UGC_HeadbuttHit_C::GetDefaultObj()
{
	static class UGC_HeadbuttHit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_HeadbuttHit_C*>(UGC_HeadbuttHit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_HeadbuttHit.GC_HeadbuttHit_C.OnActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGC_HeadbuttHit_C::OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_OnActive_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_HeadbuttHit_C", "OnActive");

	Params::UGC_HeadbuttHit_C_OnActive_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.CallFunc_OnActive_ReturnValue = CallFunc_OnActive_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


