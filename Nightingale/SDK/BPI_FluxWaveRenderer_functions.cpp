#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_FluxWaveRenderer.BPI_FluxWaveRenderer_C
// (None)

class UClass* IBPI_FluxWaveRenderer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_FluxWaveRenderer_C");

	return Clss;
}


// BPI_FluxWaveRenderer_C BPI_FluxWaveRenderer.Default__BPI_FluxWaveRenderer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_FluxWaveRenderer_C* IBPI_FluxWaveRenderer_C::GetDefaultObj()
{
	static class IBPI_FluxWaveRenderer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_FluxWaveRenderer_C*>(IBPI_FluxWaveRenderer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_FluxWaveRenderer.BPI_FluxWaveRenderer_C.SetWaveProfile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_FluxWaveProfile_C*      Profile                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_FluxWaveRenderer_C::SetWaveProfile(class UPDA_FluxWaveProfile_C* Profile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxWaveRenderer_C", "SetWaveProfile");

	Params::IBPI_FluxWaveRenderer_C_SetWaveProfile_Params Parms{};

	Parms.Profile = Profile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_FluxWaveRenderer.BPI_FluxWaveRenderer_C.SetWaveTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_FluxWaveRenderer_C::SetWaveTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxWaveRenderer_C", "SetWaveTexture");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_FluxWaveRenderer.BPI_FluxWaveRenderer_C.GetWaveTextureMaterials
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*>MaterialInstances                                                (Parm, OutParm)

void IBPI_FluxWaveRenderer_C::GetWaveTextureMaterials(TArray<class UMaterialInstanceDynamic*>* MaterialInstances)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxWaveRenderer_C", "GetWaveTextureMaterials");

	Params::IBPI_FluxWaveRenderer_C_GetWaveTextureMaterials_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MaterialInstances != nullptr)
		*MaterialInstances = std::move(Parms.MaterialInstances);

}


// Function BPI_FluxWaveRenderer.BPI_FluxWaveRenderer_C.SetWaveTextureAndArea
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*      Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Area                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_FluxWaveRenderer_C::SetWaveTextureAndArea(class UTextureRenderTarget2D* Texture, const struct FLinearColor& Area)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxWaveRenderer_C", "SetWaveTextureAndArea");

	Params::IBPI_FluxWaveRenderer_C_SetWaveTextureAndArea_Params Parms{};

	Parms.Texture = Texture;
	Parms.Area = Area;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_FluxWaveRenderer.BPI_FluxWaveRenderer_C.CanRenderWave
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanRender                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_FluxWaveRenderer_C::CanRenderWave(bool* CanRender)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxWaveRenderer_C", "CanRenderWave");

	Params::IBPI_FluxWaveRenderer_C_CanRenderWave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanRender != nullptr)
		*CanRender = Parms.CanRender;

}

}


