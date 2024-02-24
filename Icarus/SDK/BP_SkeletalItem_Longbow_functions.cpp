#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkeletalItem_Longbow.BP_SkeletalItem_Longbow_C
// (Actor)

class UClass* ABP_SkeletalItem_Longbow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkeletalItem_Longbow_C");

	return Clss;
}


// BP_SkeletalItem_Longbow_C BP_SkeletalItem_Longbow.Default__BP_SkeletalItem_Longbow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkeletalItem_Longbow_C* ABP_SkeletalItem_Longbow_C::GetDefaultObj()
{
	static class ABP_SkeletalItem_Longbow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkeletalItem_Longbow_C*>(ABP_SkeletalItem_Longbow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkeletalItem_Longbow.BP_SkeletalItem_Longbow_C.GetFireTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  FireTransform                                                    (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_Longbow_C::GetFireTransform(bool* Success, struct FTransform* FireTransform, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Longbow_C", "GetFireTransform");

	Params::ABP_SkeletalItem_Longbow_C_GetFireTransform_Params Parms{};

	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (FireTransform != nullptr)
		*FireTransform = std::move(Parms.FireTransform);

}

}


