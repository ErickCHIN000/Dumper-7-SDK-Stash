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


// Function bp_LightBeam_01.bp_LightBeam_01_C.Set Brightness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewBrightness                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_LightBeam_01_C::Set_Brightness(float NewBrightness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_LightBeam_01_C", "Set Brightness");

	Params::Abp_LightBeam_01_C_Set_Brightness_Params Parms{};

	Parms.NewBrightness = NewBrightness;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_LightBeam_01.bp_LightBeam_01_C.GetRotation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    Rotation                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_LightBeam_01_C::GetRotation(struct FRotator* Rotation, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_LightBeam_01_C", "GetRotation");

	Params::Abp_LightBeam_01_C_GetRotation_Params Parms{};

	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

}


// Function bp_LightBeam_01.bp_LightBeam_01_C.UpdateRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void Abp_LightBeam_01_C::UpdateRotation(const struct FRotator& Rotation, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_LightBeam_01_C", "UpdateRotation");

	Params::Abp_LightBeam_01_C_UpdateRotation_Params Parms{};

	Parms.Rotation = Rotation;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_LightBeam_01.bp_LightBeam_01_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable_1                                           (ConstParm, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRangeFromStream_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_LightBeam_01_C::UserConstructionScript(const struct FTransform& Temp_struct_Variable, const struct FTransform& Temp_struct_Variable_1, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_LightBeam_01_C", "UserConstructionScript");

	Params::Abp_LightBeam_01_C_UserConstructionScript_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue_1 = CallFunc_AddComponent_ReturnValue_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_RandomFloatInRangeFromStream_ReturnValue = CallFunc_RandomFloatInRangeFromStream_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


