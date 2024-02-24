#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DragonIKPlugin.DragonIK_Library
// (None)

class UClass* UDragonIK_Library::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DragonIK_Library");

	return Clss;
}


// DragonIK_Library DragonIKPlugin.Default__DragonIK_Library
// (Public, ClassDefaultObject, ArchetypeObject)

class UDragonIK_Library* UDragonIK_Library::GetDefaultObj()
{
	static class UDragonIK_Library* Default = nullptr;

	if (!Default)
		Default = static_cast<UDragonIK_Library*>(UDragonIK_Library::StaticClass()->DefaultObject);

	return Default;
}


// Function DragonIKPlugin.DragonIK_Library.QuatLookXatLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  LookAtFromTransform                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     LookAtTarget                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UDragonIK_Library::QuatLookXatLocation(struct FTransform& LookAtFromTransform, struct FVector& LookAtTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonIK_Library", "QuatLookXatLocation");

	Params::UDragonIK_Library_QuatLookXatLocation_Params Parms{};

	Parms.LookAtFromTransform = LookAtFromTransform;
	Parms.LookAtTarget = LookAtTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DragonIKPlugin.DragonIK_Library.LookAtVector_V2
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Source_Location                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LookAt                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     UpDirection                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UDragonIK_Library::LookAtVector_V2(const struct FVector& Source_Location, const struct FVector& LookAt, const struct FVector& UpDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonIK_Library", "LookAtVector_V2");

	Params::UDragonIK_Library_LookAtVector_V2_Params Parms{};

	Parms.Source_Location = Source_Location;
	Parms.LookAt = LookAt;
	Parms.UpDirection = UpDirection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DragonIKPlugin.DragonIK_Library.LookAtRotation_V3
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Source                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     UpVector                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UDragonIK_Library::LookAtRotation_V3(const struct FVector& Source, const struct FVector& Target, const struct FVector& UpVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonIK_Library", "LookAtRotation_V3");

	Params::UDragonIK_Library_LookAtRotation_V3_Params Parms{};

	Parms.Source = Source;
	Parms.Target = Target;
	Parms.UpVector = UpVector;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DragonIKPlugin.DragonIK_Library.CustomLookRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     LookAt                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     UpDirection                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UDragonIK_Library::CustomLookRotation(const struct FVector& LookAt, const struct FVector& UpDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonIK_Library", "CustomLookRotation");

	Params::UDragonIK_Library_CustomLookRotation_Params Parms{};

	Parms.LookAt = LookAt;
	Parms.UpDirection = UpDirection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


