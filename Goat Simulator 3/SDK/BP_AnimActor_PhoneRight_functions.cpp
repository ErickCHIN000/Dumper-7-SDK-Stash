#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AnimActor_PhoneRight.BP_AnimActor_PhoneRight_C
// (Actor)

class UClass* ABP_AnimActor_PhoneRight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AnimActor_PhoneRight_C");

	return Clss;
}


// BP_AnimActor_PhoneRight_C BP_AnimActor_PhoneRight.Default__BP_AnimActor_PhoneRight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AnimActor_PhoneRight_C* ABP_AnimActor_PhoneRight_C::GetDefaultObj()
{
	static class ABP_AnimActor_PhoneRight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AnimActor_PhoneRight_C*>(ABP_AnimActor_PhoneRight_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AnimActor_PhoneRight.BP_AnimActor_PhoneRight_C.NotifyWasTriggered
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NotifyTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_AnimActor_PhoneRight_C::NotifyWasTriggered(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AnimActor_PhoneRight_C", "NotifyWasTriggered");

	Params::ABP_AnimActor_PhoneRight_C_NotifyWasTriggered_Params Parms{};

	Parms.NotifyTag = NotifyTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AnimActor_PhoneRight.BP_AnimActor_PhoneRight_C.ExecuteUbergraph_BP_AnimActor_PhoneRight
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_NotifyTag                                           (NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsLoaded_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundCue*                   CallFunc_GetLoadedAsset_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AnimActor_PhoneRight_C::ExecuteUbergraph_BP_AnimActor_PhoneRight(int32 EntryPoint, const struct FGameplayTag& K2Node_Event_NotifyTag, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_GetIsLoaded_ReturnValue, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AnimActor_PhoneRight_C", "ExecuteUbergraph_BP_AnimActor_PhoneRight");

	Params::ABP_AnimActor_PhoneRight_C_ExecuteUbergraph_BP_AnimActor_PhoneRight_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NotifyTag = K2Node_Event_NotifyTag;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetIsLoaded_ReturnValue = CallFunc_GetIsLoaded_ReturnValue;
	Parms.CallFunc_GetLoadedAsset_ReturnValue = CallFunc_GetLoadedAsset_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


