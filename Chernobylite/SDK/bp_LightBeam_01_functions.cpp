#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_LightBeam_01.bp_LightBeam_01_C
// (Actor)

class UClass* Abp_LightBeam_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_LightBeam_01_C");

	return Clss;
}


// bp_LightBeam_01_C bp_LightBeam_01.Default__bp_LightBeam_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_LightBeam_01_C* Abp_LightBeam_01_C::GetDefaultObj()
{
	static class Abp_LightBeam_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_LightBeam_01_C*>(Abp_LightBeam_01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_LightBeam_01.bp_LightBeam_01_C.SetBrightness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewBrightness                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_LightBeam_01_C::SetBrightness(float NewBrightness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_LightBeam_01_C", "SetBrightness");

	Params::Abp_LightBeam_01_C_SetBrightness_Params Parms{};

	Parms.NewBrightness = NewBrightness;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_LightBeam_01.bp_LightBeam_01_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRangeFromStream_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_LightBeam_01_C::UserConstructionScript(const struct FTransform& Temp_struct_Variable, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_LightBeam_01_C", "UserConstructionScript");

	Params::Abp_LightBeam_01_C_UserConstructionScript_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_RandomFloatInRangeFromStream_ReturnValue = CallFunc_RandomFloatInRangeFromStream_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


