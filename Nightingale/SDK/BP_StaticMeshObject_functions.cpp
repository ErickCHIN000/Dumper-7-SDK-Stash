#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StaticMeshObject.BP_StaticMeshObject_C
// (None)

class UClass* UBP_StaticMeshObject_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StaticMeshObject_C");

	return Clss;
}


// BP_StaticMeshObject_C BP_StaticMeshObject.Default__BP_StaticMeshObject_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StaticMeshObject_C* UBP_StaticMeshObject_C::GetDefaultObj()
{
	static class UBP_StaticMeshObject_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StaticMeshObject_C*>(UBP_StaticMeshObject_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StaticMeshObject.BP_StaticMeshObject_C.GetMeshWorldExtents
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMeshMinAndMax_MinLocal                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMeshMinAndMax_MaxLocal                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMeshMinAndMax_MinWorld                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMeshMinAndMax_MaxWorld                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UBP_StaticMeshObject_C::GetMeshWorldExtents(const struct FVector& CallFunc_GetMeshMinAndMax_MinLocal, const struct FVector& CallFunc_GetMeshMinAndMax_MaxLocal, const struct FVector& CallFunc_GetMeshMinAndMax_MinWorld, const struct FVector& CallFunc_GetMeshMinAndMax_MaxWorld, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMeshObject_C", "GetMeshWorldExtents");

	Params::UBP_StaticMeshObject_C_GetMeshWorldExtents_Params Parms{};

	Parms.CallFunc_GetMeshMinAndMax_MinLocal = CallFunc_GetMeshMinAndMax_MinLocal;
	Parms.CallFunc_GetMeshMinAndMax_MaxLocal = CallFunc_GetMeshMinAndMax_MaxLocal;
	Parms.CallFunc_GetMeshMinAndMax_MinWorld = CallFunc_GetMeshMinAndMax_MinWorld;
	Parms.CallFunc_GetMeshMinAndMax_MaxWorld = CallFunc_GetMeshMinAndMax_MaxWorld;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StaticMeshObject.BP_StaticMeshObject_C.GetMeshTransform
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform                  WorldTransform                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMeshOrigin_LocalLocation                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMeshOrigin_WorldLocation                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_GetStaticMesh_StaticMesh                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StaticMeshObject_C::GetMeshTransform(struct FTransform* WorldTransform, const struct FVector& CallFunc_GetMeshOrigin_LocalLocation, const struct FVector& CallFunc_GetMeshOrigin_WorldLocation, class UStaticMeshComponent* CallFunc_GetStaticMesh_StaticMesh, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMeshObject_C", "GetMeshTransform");

	Params::UBP_StaticMeshObject_C_GetMeshTransform_Params Parms{};

	Parms.CallFunc_GetMeshOrigin_LocalLocation = CallFunc_GetMeshOrigin_LocalLocation;
	Parms.CallFunc_GetMeshOrigin_WorldLocation = CallFunc_GetMeshOrigin_WorldLocation;
	Parms.CallFunc_GetStaticMesh_StaticMesh = CallFunc_GetStaticMesh_StaticMesh;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (WorldTransform != nullptr)
		*WorldTransform = std::move(Parms.WorldTransform);

}


// Function BP_StaticMeshObject.BP_StaticMeshObject_C.GetMeshMinAndMax
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     MinLocal                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     MaxLocal                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     MinWorld                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     MaxWorld                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMeshMinAndMax_MinWorld                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMeshMinAndMax_MaxWorld                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocalBounds_Min                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocalBounds_Max                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StaticMeshObject_C::GetMeshMinAndMax(struct FVector* MinLocal, struct FVector* MaxLocal, struct FVector* MinWorld, struct FVector* MaxWorld, const struct FVector& CallFunc_GetMeshMinAndMax_MinWorld, const struct FVector& CallFunc_GetMeshMinAndMax_MaxWorld, const struct FVector& CallFunc_GetLocalBounds_Min, const struct FVector& CallFunc_GetLocalBounds_Max)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMeshObject_C", "GetMeshMinAndMax");

	Params::UBP_StaticMeshObject_C_GetMeshMinAndMax_Params Parms{};

	Parms.CallFunc_GetMeshMinAndMax_MinWorld = CallFunc_GetMeshMinAndMax_MinWorld;
	Parms.CallFunc_GetMeshMinAndMax_MaxWorld = CallFunc_GetMeshMinAndMax_MaxWorld;
	Parms.CallFunc_GetLocalBounds_Min = CallFunc_GetLocalBounds_Min;
	Parms.CallFunc_GetLocalBounds_Max = CallFunc_GetLocalBounds_Max;

	UObject::ProcessEvent(Func, &Parms);

	if (MinLocal != nullptr)
		*MinLocal = std::move(Parms.MinLocal);

	if (MaxLocal != nullptr)
		*MaxLocal = std::move(Parms.MaxLocal);

	if (MinWorld != nullptr)
		*MinWorld = std::move(Parms.MinWorld);

	if (MaxWorld != nullptr)
		*MaxWorld = std::move(Parms.MaxWorld);

}


// Function BP_StaticMeshObject.BP_StaticMeshObject_C.TEMP_HasTag
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        Tag                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasTag                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_GetStaticMesh_StaticMesh                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ComponentHasTag_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StaticMeshObject_C::TEMP_HasTag(class FName& Tag, bool* HasTag, class UStaticMeshComponent* CallFunc_GetStaticMesh_StaticMesh, bool CallFunc_ComponentHasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMeshObject_C", "TEMP_HasTag");

	Params::UBP_StaticMeshObject_C_TEMP_HasTag_Params Parms{};

	Parms.Tag = Tag;
	Parms.CallFunc_GetStaticMesh_StaticMesh = CallFunc_GetStaticMesh_StaticMesh;
	Parms.CallFunc_ComponentHasTag_ReturnValue = CallFunc_ComponentHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasTag != nullptr)
		*HasTag = Parms.HasTag;

}


// Function BP_StaticMeshObject.BP_StaticMeshObject_C.GetStaticMesh
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UStaticMeshComponent*        StaticMesh                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_StaticMeshObject_C::GetStaticMesh(class UStaticMeshComponent** StaticMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMeshObject_C", "GetStaticMesh");

	Params::UBP_StaticMeshObject_C_GetStaticMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (StaticMesh != nullptr)
		*StaticMesh = Parms.StaticMesh;

}


// Function BP_StaticMeshObject.BP_StaticMeshObject_C.GetMeshOrigin
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     LocalLocation                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     WorldLocation                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_GetStaticMesh_StaticMesh                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMeshOrigin_LocalLocation                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMeshOrigin_WorldLocation                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StaticMeshObject_C::GetMeshOrigin(struct FVector* LocalLocation, struct FVector* WorldLocation, class UStaticMeshComponent* CallFunc_GetStaticMesh_StaticMesh, const struct FVector& CallFunc_GetMeshOrigin_LocalLocation, const struct FVector& CallFunc_GetMeshOrigin_WorldLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMeshObject_C", "GetMeshOrigin");

	Params::UBP_StaticMeshObject_C_GetMeshOrigin_Params Parms{};

	Parms.CallFunc_GetStaticMesh_StaticMesh = CallFunc_GetStaticMesh_StaticMesh;
	Parms.CallFunc_GetMeshOrigin_LocalLocation = CallFunc_GetMeshOrigin_LocalLocation;
	Parms.CallFunc_GetMeshOrigin_WorldLocation = CallFunc_GetMeshOrigin_WorldLocation;

	UObject::ProcessEvent(Func, &Parms);

	if (LocalLocation != nullptr)
		*LocalLocation = std::move(Parms.LocalLocation);

	if (WorldLocation != nullptr)
		*WorldLocation = std::move(Parms.WorldLocation);

}


// Function BP_StaticMeshObject.BP_StaticMeshObject_C.GetMeshBounds
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_GetStaticMesh_StaticMesh                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMeshBounds_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UBP_StaticMeshObject_C::GetMeshBounds(class UStaticMeshComponent* CallFunc_GetStaticMesh_StaticMesh, const struct FVector& CallFunc_GetMeshBounds_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMeshObject_C", "GetMeshBounds");

	Params::UBP_StaticMeshObject_C_GetMeshBounds_Params Parms{};

	Parms.CallFunc_GetStaticMesh_StaticMesh = CallFunc_GetStaticMesh_StaticMesh;
	Parms.CallFunc_GetMeshBounds_ReturnValue = CallFunc_GetMeshBounds_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


