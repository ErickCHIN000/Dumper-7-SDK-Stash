#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkeletalItem_Crossbow.BP_SkeletalItem_Crossbow_C
// (Actor)

class UClass* ABP_SkeletalItem_Crossbow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkeletalItem_Crossbow_C");

	return Clss;
}


// BP_SkeletalItem_Crossbow_C BP_SkeletalItem_Crossbow.Default__BP_SkeletalItem_Crossbow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkeletalItem_Crossbow_C* ABP_SkeletalItem_Crossbow_C::GetDefaultObj()
{
	static class ABP_SkeletalItem_Crossbow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkeletalItem_Crossbow_C*>(ABP_SkeletalItem_Crossbow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkeletalItem_Crossbow.BP_SkeletalItem_Crossbow_C.GetFireTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  FireTransform                                                    (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_Crossbow_C::GetFireTransform(bool* Success, struct FTransform* FireTransform, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Crossbow_C", "GetFireTransform");

	Params::ABP_SkeletalItem_Crossbow_C_GetFireTransform_Params Parms{};

	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (FireTransform != nullptr)
		*FireTransform = std::move(Parms.FireTransform);

}

}


