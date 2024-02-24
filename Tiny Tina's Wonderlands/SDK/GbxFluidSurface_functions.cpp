#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxFluidSurface.FluidSurface
// (Actor)

class UClass* AFluidSurface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FluidSurface");

	return Clss;
}


// FluidSurface GbxFluidSurface.Default__FluidSurface
// (Public, ClassDefaultObject, ArchetypeObject)

class AFluidSurface* AFluidSurface::GetDefaultObj()
{
	static class AFluidSurface* Default = nullptr;

	if (!Default)
		Default = static_cast<AFluidSurface*>(AFluidSurface::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxFluidSurface.FluidSurface.PerturbSurface
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Position                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Force                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFluidSurface::PerturbSurface(struct FVector& Position, float Radius, float Force)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FluidSurface", "PerturbSurface");

	Params::AFluidSurface_PerturbSurface_Params Parms{};

	Parms.Position = Position;
	Parms.Radius = Radius;
	Parms.Force = Force;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


