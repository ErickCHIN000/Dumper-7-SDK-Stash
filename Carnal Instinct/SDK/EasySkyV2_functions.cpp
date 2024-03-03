#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EasySkyV2.EasySkyV2
// (Actor)

class UClass* AEasySkyV2::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EasySkyV2");

	return Clss;
}


// EasySkyV2 EasySkyV2.Default__EasySkyV2
// (Public, ClassDefaultObject, ArchetypeObject)

class AEasySkyV2* AEasySkyV2::GetDefaultObj()
{
	static class AEasySkyV2* Default = nullptr;

	if (!Default)
		Default = static_cast<AEasySkyV2*>(AEasySkyV2::StaticClass()->DefaultObject);

	return Default;
}


// Function EasySkyV2.EasySkyV2.SetVolumetricFogGridPixelSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              VolumetricFogGridPixelSize                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AEasySkyV2::SetVolumetricFogGridPixelSize(int32 VolumetricFogGridPixelSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EasySkyV2", "SetVolumetricFogGridPixelSize");

	Params::AEasySkyV2_SetVolumetricFogGridPixelSize_Params Parms{};

	Parms.VolumetricFogGridPixelSize = VolumetricFogGridPixelSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EasySkyV2.EasySkyV2.SetSourceSoftAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDirectionalLightComponent*  DirectionalLight                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SourceSoftAngle                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AEasySkyV2::SetSourceSoftAngle(class UDirectionalLightComponent* DirectionalLight, float SourceSoftAngle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EasySkyV2", "SetSourceSoftAngle");

	Params::AEasySkyV2_SetSourceSoftAngle_Params Parms{};

	Parms.DirectionalLight = DirectionalLight;
	Parms.SourceSoftAngle = SourceSoftAngle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EasySkyV2.EasySkyV2.SetRenderTargetSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*      RenderTarget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AEasySkyV2::SetRenderTargetSize(class UTextureRenderTarget2D* RenderTarget, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EasySkyV2", "SetRenderTargetSize");

	Params::AEasySkyV2_SetRenderTargetSize_Params Parms{};

	Parms.RenderTarget = RenderTarget;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EasySkyV2.EasySkyV2.SetRealTimeCapture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkyLightComponent*          SkyLightComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Enabled                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AEasySkyV2::SetRealTimeCapture(class USkyLightComponent* SkyLightComponent, bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EasySkyV2", "SetRealTimeCapture");

	Params::AEasySkyV2_SetRealTimeCapture_Params Parms{};

	Parms.SkyLightComponent = SkyLightComponent;
	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EasySkyV2.EasySkyV2.SetConsoleVariable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Property                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AEasySkyV2::SetConsoleVariable(const class FString& Property, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EasySkyV2", "SetConsoleVariable");

	Params::AEasySkyV2_SetConsoleVariable_Params Parms{};

	Parms.Property = Property;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EasySkyV2.EasySkyV2.SetCollectionParameterScalar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialParameterCollectionInstance*CollectionInstance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ParameterName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ParameterValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AEasySkyV2::SetCollectionParameterScalar(class UMaterialParameterCollectionInstance* CollectionInstance, class FName ParameterName, float ParameterValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EasySkyV2", "SetCollectionParameterScalar");

	Params::AEasySkyV2_SetCollectionParameterScalar_Params Parms{};

	Parms.CollectionInstance = CollectionInstance;
	Parms.ParameterName = ParameterName;
	Parms.ParameterValue = ParameterValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EasySkyV2.EasySkyV2.RefreshSceneComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*             SceneComponent                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AEasySkyV2::RefreshSceneComponent(class USceneComponent* SceneComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EasySkyV2", "RefreshSceneComponent");

	Params::AEasySkyV2_RefreshSceneComponent_Params Parms{};

	Parms.SceneComponent = SceneComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EasySkyV2.EasySkyV2.GetViewLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector AEasySkyV2::GetViewLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EasySkyV2", "GetViewLocation");

	Params::AEasySkyV2_GetViewLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EasySkyV2.EasySkyV2.BlueprintEditorTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AEasySkyV2::BlueprintEditorTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EasySkyV2", "BlueprintEditorTick");

	Params::AEasySkyV2_BlueprintEditorTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EasySkyV2.EasySkyV2.AddMaterialFunction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterial*                   Mat                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialFunction*           MaterialFunction                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        FunctionInputName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        FunctionOutputName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AEasySkyV2::AddMaterialFunction(class UMaterial* Mat, class UMaterialFunction* MaterialFunction, class FName FunctionInputName, class FName FunctionOutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EasySkyV2", "AddMaterialFunction");

	Params::AEasySkyV2_AddMaterialFunction_Params Parms{};

	Parms.Mat = Mat;
	Parms.MaterialFunction = MaterialFunction;
	Parms.FunctionInputName = FunctionInputName;
	Parms.FunctionOutputName = FunctionOutputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


