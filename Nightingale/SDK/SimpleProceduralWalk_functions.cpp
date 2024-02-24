#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SimpleProceduralWalk.SimpleProceduralWalkInterface
// (None)

class UClass* ISimpleProceduralWalkInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimpleProceduralWalkInterface");

	return Clss;
}


// SimpleProceduralWalkInterface SimpleProceduralWalk.Default__SimpleProceduralWalkInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ISimpleProceduralWalkInterface* ISimpleProceduralWalkInterface::GetDefaultObj()
{
	static class ISimpleProceduralWalkInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ISimpleProceduralWalkInterface*>(ISimpleProceduralWalkInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function SimpleProceduralWalk.SimpleProceduralWalkInterface.OnGroupUp
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              GroupIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     AverageFeetLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ISimpleProceduralWalkInterface::OnGroupUp(int32 GroupIndex, const struct FVector& AverageFeetLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SimpleProceduralWalkInterface", "OnGroupUp");

	Params::ISimpleProceduralWalkInterface_OnGroupUp_Params Parms{};

	Parms.GroupIndex = GroupIndex;
	Parms.AverageFeetLocation = AverageFeetLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleProceduralWalk.SimpleProceduralWalkInterface.OnGroupDown
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              GroupIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     AverageFeetLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ISimpleProceduralWalkInterface::OnGroupDown(int32 GroupIndex, const struct FVector& AverageFeetLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SimpleProceduralWalkInterface", "OnGroupDown");

	Params::ISimpleProceduralWalkInterface_OnGroupDown_Params Parms{};

	Parms.GroupIndex = GroupIndex;
	Parms.AverageFeetLocation = AverageFeetLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleProceduralWalk.SimpleProceduralWalkInterface.OnFootUp
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LegIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TipBone                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     FootLocation                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ISimpleProceduralWalkInterface::OnFootUp(int32 LegIndex, class FName TipBone, const struct FVector& FootLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SimpleProceduralWalkInterface", "OnFootUp");

	Params::ISimpleProceduralWalkInterface_OnFootUp_Params Parms{};

	Parms.LegIndex = LegIndex;
	Parms.TipBone = TipBone;
	Parms.FootLocation = FootLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleProceduralWalk.SimpleProceduralWalkInterface.OnFootDown
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LegIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TipBone                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     FootLocation                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ISimpleProceduralWalkInterface::OnFootDown(int32 LegIndex, class FName TipBone, const struct FVector& FootLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SimpleProceduralWalkInterface", "OnFootDown");

	Params::ISimpleProceduralWalkInterface_OnFootDown_Params Parms{};

	Parms.LegIndex = LegIndex;
	Parms.TipBone = TipBone;
	Parms.FootLocation = FootLocation;

	UObject::ProcessEvent(Func, &Parms);

}

}


