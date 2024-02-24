#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_FluxSurface.BPI_FluxSurface_C
// (None)

class UClass* IBPI_FluxSurface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_FluxSurface_C");

	return Clss;
}


// BPI_FluxSurface_C BPI_FluxSurface.Default__BPI_FluxSurface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_FluxSurface_C* IBPI_FluxSurface_C::GetDefaultObj()
{
	static class IBPI_FluxSurface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_FluxSurface_C*>(IBPI_FluxSurface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_FluxSurface.BPI_FluxSurface_C.InitializeAllStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_FluxSurface_C::InitializeAllStates()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxSurface_C", "InitializeAllStates");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_FluxSurface.BPI_FluxSurface_C.ApplyColorProfiles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_FluxSurface_C::ApplyColorProfiles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxSurface_C", "ApplyColorProfiles");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_FluxSurface.BPI_FluxSurface_C.ApplyMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_FluxSurface_C::ApplyMask()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxSurface_C", "ApplyMask");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_FluxSurface.BPI_FluxSurface_C.ApplyPainter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_FluxSurface_C::ApplyPainter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxSurface_C", "ApplyPainter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_FluxSurface.BPI_FluxSurface_C.SetCoastlineState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_FluxCoastlineState_C*   State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_FluxSurface_C::SetCoastlineState(class UPDA_FluxCoastlineState_C* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxSurface_C", "SetCoastlineState");

	Params::IBPI_FluxSurface_C_SetCoastlineState_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_FluxSurface.BPI_FluxSurface_C.SetSimulationState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_FluxSimulationState_C*  State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_FluxSurface_C::SetSimulationState(class UPDA_FluxSimulationState_C* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxSurface_C", "SetSimulationState");

	Params::IBPI_FluxSurface_C_SetSimulationState_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_FluxSurface.BPI_FluxSurface_C.SpawnSplashAtLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_FluxSurface_C::SpawnSplashAtLocation(const struct FVector& Location, int32 Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxSurface_C", "SpawnSplashAtLocation");

	Params::IBPI_FluxSurface_C_SpawnSplashAtLocation_Params Parms{};

	Parms.Location = Location;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_FluxSurface.BPI_FluxSurface_C.SetStateHeightWetMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                    Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_FluxSurface_C::SetStateHeightWetMap(class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxSurface_C", "SetStateHeightWetMap");

	Params::IBPI_FluxSurface_C_SetStateHeightWetMap_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_FluxSurface.BPI_FluxSurface_C.GetVolumeCollision
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPrimitiveComponent*         Volume                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_FluxSurface_C::GetVolumeCollision(class UPrimitiveComponent** Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxSurface_C", "GetVolumeCollision");

	Params::IBPI_FluxSurface_C_GetVolumeCollision_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Volume != nullptr)
		*Volume = Parms.Volume;

}


// Function BPI_FluxSurface.BPI_FluxSurface_C.ApplySurfaceMaterialData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*>Materials                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void IBPI_FluxSurface_C::ApplySurfaceMaterialData(TArray<class UMaterialInstanceDynamic*>& Materials)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxSurface_C", "ApplySurfaceMaterialData");

	Params::IBPI_FluxSurface_C_ApplySurfaceMaterialData_Params Parms{};

	Parms.Materials = Materials;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_FluxSurface.BPI_FluxSurface_C.ApplySurfaceNiagaraData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*           ParticleSystem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               RequiredGround                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RequiredWave                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_FluxSurface_C::ApplySurfaceNiagaraData(class UNiagaraComponent* ParticleSystem, bool RequiredGround, bool RequiredWave)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxSurface_C", "ApplySurfaceNiagaraData");

	Params::IBPI_FluxSurface_C_ApplySurfaceNiagaraData_Params Parms{};

	Parms.ParticleSystem = ParticleSystem;
	Parms.RequiredGround = RequiredGround;
	Parms.RequiredWave = RequiredWave;

	UObject::ProcessEvent(Func, &Parms);

}

}


