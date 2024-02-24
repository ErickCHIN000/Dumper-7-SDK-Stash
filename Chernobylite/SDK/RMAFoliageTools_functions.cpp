#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RMAFoliageTools.RMAFoliageToolsFunctionLibrary
// (None)

class UClass* URMAFoliageToolsFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RMAFoliageToolsFunctionLibrary");

	return Clss;
}


// RMAFoliageToolsFunctionLibrary RMAFoliageTools.Default__RMAFoliageToolsFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class URMAFoliageToolsFunctionLibrary* URMAFoliageToolsFunctionLibrary::GetDefaultObj()
{
	static class URMAFoliageToolsFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<URMAFoliageToolsFunctionLibrary*>(URMAFoliageToolsFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function RMAFoliageTools.RMAFoliageToolsFunctionLibrary.GetVersion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName URMAFoliageToolsFunctionLibrary::GetVersion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RMAFoliageToolsFunctionLibrary", "GetVersion");

	Params::URMAFoliageToolsFunctionLibrary_GetVersion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RMAFoliageTools.RMAFoliageToolsFunctionLibrary.GetInstancedFoliageActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AInstancedFoliageActor*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AInstancedFoliageActor* URMAFoliageToolsFunctionLibrary::GetInstancedFoliageActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RMAFoliageToolsFunctionLibrary", "GetInstancedFoliageActor");

	Params::URMAFoliageToolsFunctionLibrary_GetInstancedFoliageActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


