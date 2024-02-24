#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkeletalItem_Wood_Bow.BP_SkeletalItem_Wood_Bow_C
// (Actor)

class UClass* ABP_SkeletalItem_Wood_Bow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkeletalItem_Wood_Bow_C");

	return Clss;
}


// BP_SkeletalItem_Wood_Bow_C BP_SkeletalItem_Wood_Bow.Default__BP_SkeletalItem_Wood_Bow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkeletalItem_Wood_Bow_C* ABP_SkeletalItem_Wood_Bow_C::GetDefaultObj()
{
	static class ABP_SkeletalItem_Wood_Bow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkeletalItem_Wood_Bow_C*>(ABP_SkeletalItem_Wood_Bow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkeletalItem_Wood_Bow.BP_SkeletalItem_Wood_Bow_C.GetFireTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  FireTransform                                                    (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_Wood_Bow_C::GetFireTransform(bool* Success, struct FTransform* FireTransform, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Wood_Bow_C", "GetFireTransform");

	Params::ABP_SkeletalItem_Wood_Bow_C_GetFireTransform_Params Parms{};

	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (FireTransform != nullptr)
		*FireTransform = std::move(Parms.FireTransform);

}


// Function BP_SkeletalItem_Wood_Bow.BP_SkeletalItem_Wood_Bow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Wood_Bow_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Wood_Bow_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Wood_Bow.BP_SkeletalItem_Wood_Bow_C.ExecuteUbergraph_BP_SkeletalItem_Wood_Bow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkeletalItem_Wood_Bow_C::ExecuteUbergraph_BP_SkeletalItem_Wood_Bow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Wood_Bow_C", "ExecuteUbergraph_BP_SkeletalItem_Wood_Bow");

	Params::ABP_SkeletalItem_Wood_Bow_C_ExecuteUbergraph_BP_SkeletalItem_Wood_Bow_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


