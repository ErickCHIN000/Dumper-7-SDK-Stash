#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CohtmlPlugin.CohtmlAssetReferencer
// (None)

class UClass* UCohtmlAssetReferencer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CohtmlAssetReferencer");

	return Clss;
}


// CohtmlAssetReferencer CohtmlPlugin.Default__CohtmlAssetReferencer
// (Public, ClassDefaultObject, ArchetypeObject)

class UCohtmlAssetReferencer* UCohtmlAssetReferencer::GetDefaultObj()
{
	static class UCohtmlAssetReferencer* Default = nullptr;

	if (!Default)
		Default = static_cast<UCohtmlAssetReferencer*>(UCohtmlAssetReferencer::StaticClass()->DefaultObject);

	return Default;
}


// Class CohtmlPlugin.CohtmlAtlasContainedTextures
// (None)

class UClass* UCohtmlAtlasContainedTextures::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CohtmlAtlasContainedTextures");

	return Clss;
}


// CohtmlAtlasContainedTextures CohtmlPlugin.Default__CohtmlAtlasContainedTextures
// (Public, ClassDefaultObject, ArchetypeObject)

class UCohtmlAtlasContainedTextures* UCohtmlAtlasContainedTextures::GetDefaultObj()
{
	static class UCohtmlAtlasContainedTextures* Default = nullptr;

	if (!Default)
		Default = static_cast<UCohtmlAtlasContainedTextures*>(UCohtmlAtlasContainedTextures::StaticClass()->DefaultObject);

	return Default;
}


// Class CohtmlPlugin.CohtmlTextureAtlasDetails
// (None)

class UClass* UCohtmlTextureAtlasDetails::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CohtmlTextureAtlasDetails");

	return Clss;
}


// CohtmlTextureAtlasDetails CohtmlPlugin.Default__CohtmlTextureAtlasDetails
// (Public, ClassDefaultObject, ArchetypeObject)

class UCohtmlTextureAtlasDetails* UCohtmlTextureAtlasDetails::GetDefaultObj()
{
	static class UCohtmlTextureAtlasDetails* Default = nullptr;

	if (!Default)
		Default = static_cast<UCohtmlTextureAtlasDetails*>(UCohtmlTextureAtlasDetails::StaticClass()->DefaultObject);

	return Default;
}


// Class CohtmlPlugin.CohtmlAudioWrapper
// (None)

class UClass* UCohtmlAudioWrapper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CohtmlAudioWrapper");

	return Clss;
}


// CohtmlAudioWrapper CohtmlPlugin.Default__CohtmlAudioWrapper
// (Public, ClassDefaultObject, ArchetypeObject)

class UCohtmlAudioWrapper* UCohtmlAudioWrapper::GetDefaultObj()
{
	static class UCohtmlAudioWrapper* Default = nullptr;

	if (!Default)
		Default = static_cast<UCohtmlAudioWrapper*>(UCohtmlAudioWrapper::StaticClass()->DefaultObject);

	return Default;
}


// Class CohtmlPlugin.CohtmlBaseComponent
// (None)

class UClass* UCohtmlBaseComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CohtmlBaseComponent");

	return Clss;
}


// CohtmlBaseComponent CohtmlPlugin.Default__CohtmlBaseComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCohtmlBaseComponent* UCohtmlBaseComponent::GetDefaultObj()
{
	static class UCohtmlBaseComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCohtmlBaseComponent*>(UCohtmlBaseComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CohtmlPlugin.CohtmlBaseComponent.UpdateWholeDataModelFromStruct
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UStructProperty*             Struct                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlBaseComponent::UpdateWholeDataModelFromStruct(class UStructProperty* Struct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBaseComponent", "UpdateWholeDataModelFromStruct");

	Params::UCohtmlBaseComponent_UpdateWholeDataModelFromStruct_Params Parms{};

	Parms.Struct = Struct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBaseComponent.UpdateWholeDataModelFromObject
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UObject*                     Model                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlBaseComponent::UpdateWholeDataModelFromObject(class UObject* Model)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBaseComponent", "UpdateWholeDataModelFromObject");

	Params::UCohtmlBaseComponent_UpdateWholeDataModelFromObject_Params Parms{};

	Parms.Model = Model;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBaseComponent.TriggerJSEvent
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCohtmlJSEvent*              EventData                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlBaseComponent::TriggerJSEvent(const class FString& Name, class UCohtmlJSEvent* EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBaseComponent", "TriggerJSEvent");

	Params::UCohtmlBaseComponent_TriggerJSEvent_Params Parms{};

	Parms.Name = Name;
	Parms.EventData = EventData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBaseComponent.SynchronizeModels
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:

void UCohtmlBaseComponent::SynchronizeModels()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBaseComponent", "SynchronizeModels");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBaseComponent.ShowPaintRects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Show                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlBaseComponent::ShowPaintRects(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBaseComponent", "ShowPaintRects");

	Params::UCohtmlBaseComponent_ShowPaintRects_Params Parms{};

	Parms.Show = Show;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBaseComponent.SetSoundAttenuation
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSoundAttenuationSettings   Settings                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCohtmlBaseComponent::SetSoundAttenuation(struct FSoundAttenuationSettings& Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBaseComponent", "SetSoundAttenuation");

	Params::UCohtmlBaseComponent_SetSoundAttenuation_Params Parms{};

	Parms.Settings = Settings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBaseComponent.Resize
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              Width                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlBaseComponent::Resize(int32 Width, int32 Height)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBaseComponent", "Resize");

	Params::UCohtmlBaseComponent_Resize_Params Parms{};

	Parms.Width = Width;
	Parms.Height = Height;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBaseComponent.RemovePreloadedTextureFromPath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AssetPath                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCohtmlBaseComponent::RemovePreloadedTextureFromPath(const class FString& AssetPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBaseComponent", "RemovePreloadedTextureFromPath");

	Params::UCohtmlBaseComponent_RemovePreloadedTextureFromPath_Params Parms{};

	Parms.AssetPath = AssetPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CohtmlPlugin.CohtmlBaseComponent.RemovePreloadedTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCohtmlBaseComponent::RemovePreloadedTexture(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBaseComponent", "RemovePreloadedTexture");

	Params::UCohtmlBaseComponent_RemovePreloadedTexture_Params Parms{};

	Parms.Texture = Texture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CohtmlPlugin.CohtmlBaseComponent.RemoveDataModelFromStruct
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UStructProperty*             Struct                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlBaseComponent::RemoveDataModelFromStruct(class UStructProperty* Struct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBaseComponent", "RemoveDataModelFromStruct");

	Params::UCohtmlBaseComponent_RemoveDataModelFromStruct_Params Parms{};

	Parms.Struct = Struct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBaseComponent.RemoveDataModelFromObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Model                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlBaseComponent::RemoveDataModelFromObject(class UObject* Model)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBaseComponent", "RemoveDataModelFromObject");

	Params::UCohtmlBaseComponent_RemoveDataModelFromObject_Params Parms{};

	Parms.Model = Model;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBaseComponent.RemoveAllPreloadedTextures
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCohtmlBaseComponent::RemoveAllPreloadedTextures()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBaseComponent", "RemoveAllPreloadedTextures");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBaseComponent.reload
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCohtmlBaseComponent::Reload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBaseComponent", "reload");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBaseComponent.PreloadTextureSync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AssetPath                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlBaseComponent::PreloadTextureSync(const class FString& AssetPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBaseComponent", "PreloadTextureSync");

	Params::UCohtmlBaseComponent_PreloadTextureSync_Params Parms{};

	Parms.AssetPath = AssetPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBaseComponent.PreloadTextureAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AssetPath                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlBaseComponent::PreloadTextureAsync(const class FString& AssetPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBaseComponent", "PreloadTextureAsync");

	Params::UCohtmlBaseComponent_PreloadTextureAsync_Params Parms{};

	Parms.AssetPath = AssetPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBaseComponent.Load
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlBaseComponent::Load(const class FString& Path)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBaseComponent", "Load");

	Params::UCohtmlBaseComponent_Load_Params Parms{};

	Parms.Path = Path;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBaseComponent.IsReadyToCreateView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCohtmlBaseComponent::IsReadyToCreateView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBaseComponent", "IsReadyToCreateView");

	Params::UCohtmlBaseComponent_IsReadyToCreateView_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CohtmlPlugin.CohtmlBaseComponent.IsReadyForBindings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCohtmlBaseComponent::IsReadyForBindings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBaseComponent", "IsReadyForBindings");

	Params::UCohtmlBaseComponent_IsReadyForBindings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CohtmlPlugin.CohtmlBaseComponent.HasRequestedView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCohtmlBaseComponent::HasRequestedView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBaseComponent", "HasRequestedView");

	Params::UCohtmlBaseComponent_HasRequestedView_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CohtmlPlugin.CohtmlBaseComponent.EndDebugFrameSave
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCohtmlBaseComponent::EndDebugFrameSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBaseComponent", "EndDebugFrameSave");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBaseComponent.EnableRendering
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlBaseComponent::EnableRendering(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBaseComponent", "EnableRendering");

	Params::UCohtmlBaseComponent_EnableRendering_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBaseComponent.EnableDelayedUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlBaseComponent::EnableDelayedUpdate(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBaseComponent", "EnableDelayedUpdate");

	Params::UCohtmlBaseComponent_EnableDelayedUpdate_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBaseComponent.DebugSaveNextFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCohtmlBaseComponent::DebugSaveNextFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBaseComponent", "DebugSaveNextFrame");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBaseComponent.CreateJSEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCohtmlJSEvent*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCohtmlJSEvent* UCohtmlBaseComponent::CreateJSEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBaseComponent", "CreateJSEvent");

	Params::UCohtmlBaseComponent_CreateJSEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CohtmlPlugin.CohtmlBaseComponent.CreateDataModelFromStruct
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStructProperty*             Arg                                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlBaseComponent::CreateDataModelFromStruct(const class FString& Name, class UStructProperty* Arg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBaseComponent", "CreateDataModelFromStruct");

	Params::UCohtmlBaseComponent_CreateDataModelFromStruct_Params Parms{};

	Parms.Name = Name;
	Parms.Arg = Arg;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBaseComponent.CreateDataModelFromObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Model                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlBaseComponent::CreateDataModelFromObject(const class FString& Name, class UObject* Model)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBaseComponent", "CreateDataModelFromObject");

	Params::UCohtmlBaseComponent_CreateDataModelFromObject_Params Parms{};

	Parms.Name = Name;
	Parms.Model = Model;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBaseComponent.BeginDebugFrameSave
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCohtmlBaseComponent::BeginDebugFrameSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBaseComponent", "BeginDebugFrameSave");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBaseComponent.AddPreloadedTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlBaseComponent::AddPreloadedTexture(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBaseComponent", "AddPreloadedTexture");

	Params::UCohtmlBaseComponent_AddPreloadedTexture_Params Parms{};

	Parms.Texture = Texture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CohtmlPlugin.CohtmlBlueprintFunctionLibrary
// (None)

class UClass* UCohtmlBlueprintFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CohtmlBlueprintFunctionLibrary");

	return Clss;
}


// CohtmlBlueprintFunctionLibrary CohtmlPlugin.Default__CohtmlBlueprintFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UCohtmlBlueprintFunctionLibrary* UCohtmlBlueprintFunctionLibrary::GetDefaultObj()
{
	static class UCohtmlBlueprintFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UCohtmlBlueprintFunctionLibrary*>(UCohtmlBlueprintFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.TriggerJSEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCohtmlBaseComponent*        Component                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCohtmlJSEvent*              JSEvent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlBlueprintFunctionLibrary::TriggerJSEvent(class UCohtmlBaseComponent* Component, const class FString& EventName, class UCohtmlJSEvent* JSEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBlueprintFunctionLibrary", "TriggerJSEvent");

	Params::UCohtmlBlueprintFunctionLibrary_TriggerJSEvent_Params Parms{};

	Parms.Component = Component;
	Parms.EventName = EventName;
	Parms.JSEvent = JSEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.CreateJSEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCohtmlJSEvent*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCohtmlJSEvent* UCohtmlBlueprintFunctionLibrary::CreateJSEvent(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBlueprintFunctionLibrary", "CreateJSEvent");

	Params::UCohtmlBlueprintFunctionLibrary_CreateJSEvent_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddStructArg
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCohtmlJSEvent*              JSEvent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStructProperty*             Arg                                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlBlueprintFunctionLibrary::AddStructArg(class UCohtmlJSEvent* JSEvent, class UStructProperty* Arg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBlueprintFunctionLibrary", "AddStructArg");

	Params::UCohtmlBlueprintFunctionLibrary_AddStructArg_Params Parms{};

	Parms.JSEvent = JSEvent;
	Parms.Arg = Arg;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCohtmlJSEvent*              JSEvent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Arg                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlBlueprintFunctionLibrary::AddString(class UCohtmlJSEvent* JSEvent, const class FString& Arg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBlueprintFunctionLibrary", "AddString");

	Params::UCohtmlBlueprintFunctionLibrary_AddString_Params Parms{};

	Parms.JSEvent = JSEvent;
	Parms.Arg = Arg;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCohtmlJSEvent*              JSEvent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Arg                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlBlueprintFunctionLibrary::AddObject(class UCohtmlJSEvent* JSEvent, class UObject* Arg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBlueprintFunctionLibrary", "AddObject");

	Params::UCohtmlBlueprintFunctionLibrary_AddObject_Params Parms{};

	Parms.JSEvent = JSEvent;
	Parms.Arg = Arg;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddInt32
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCohtmlJSEvent*              JSEvent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Arg                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlBlueprintFunctionLibrary::AddInt32(class UCohtmlJSEvent* JSEvent, int32 Arg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBlueprintFunctionLibrary", "AddInt32");

	Params::UCohtmlBlueprintFunctionLibrary_AddInt32_Params Parms{};

	Parms.JSEvent = JSEvent;
	Parms.Arg = Arg;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddFloat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCohtmlJSEvent*              JSEvent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Arg                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlBlueprintFunctionLibrary::AddFloat(class UCohtmlJSEvent* JSEvent, float Arg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBlueprintFunctionLibrary", "AddFloat");

	Params::UCohtmlBlueprintFunctionLibrary_AddFloat_Params Parms{};

	Parms.JSEvent = JSEvent;
	Parms.Arg = Arg;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddByte
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCohtmlJSEvent*              JSEvent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Arg                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlBlueprintFunctionLibrary::AddByte(class UCohtmlJSEvent* JSEvent, uint8 Arg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBlueprintFunctionLibrary", "AddByte");

	Params::UCohtmlBlueprintFunctionLibrary_AddByte_Params Parms{};

	Parms.JSEvent = JSEvent;
	Parms.Arg = Arg;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddBool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCohtmlJSEvent*              JSEvent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Arg                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlBlueprintFunctionLibrary::AddBool(class UCohtmlJSEvent* JSEvent, bool Arg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBlueprintFunctionLibrary", "AddBool");

	Params::UCohtmlBlueprintFunctionLibrary_AddBool_Params Parms{};

	Parms.JSEvent = JSEvent;
	Parms.Arg = Arg;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddArrayOfStructs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UCohtmlJSEvent*              JSEvent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      Arg                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UCohtmlBlueprintFunctionLibrary::AddArrayOfStructs(class UCohtmlJSEvent* JSEvent, TArray<int32>& Arg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBlueprintFunctionLibrary", "AddArrayOfStructs");

	Params::UCohtmlBlueprintFunctionLibrary_AddArrayOfStructs_Params Parms{};

	Parms.JSEvent = JSEvent;
	Parms.Arg = Arg;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UCohtmlJSEvent*              JSEvent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      Arg                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ArrayType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlBlueprintFunctionLibrary::AddArray(class UCohtmlJSEvent* JSEvent, TArray<int32>& Arg, int32 ArrayType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlBlueprintFunctionLibrary", "AddArray");

	Params::UCohtmlBlueprintFunctionLibrary_AddArray_Params Parms{};

	Parms.JSEvent = JSEvent;
	Parms.Arg = Arg;
	Parms.ArrayType = ArrayType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CohtmlPlugin.CohtmlComponent
// (None)

class UClass* UCohtmlComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CohtmlComponent");

	return Clss;
}


// CohtmlComponent CohtmlPlugin.Default__CohtmlComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCohtmlComponent* UCohtmlComponent::GetDefaultObj()
{
	static class UCohtmlComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCohtmlComponent*>(UCohtmlComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class CohtmlPlugin.CohtmlEventHelpers
// (None)

class UClass* UCohtmlEventHelpers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CohtmlEventHelpers");

	return Clss;
}


// CohtmlEventHelpers CohtmlPlugin.Default__CohtmlEventHelpers
// (Public, ClassDefaultObject, ArchetypeObject)

class UCohtmlEventHelpers* UCohtmlEventHelpers::GetDefaultObj()
{
	static class UCohtmlEventHelpers* Default = nullptr;

	if (!Default)
		Default = static_cast<UCohtmlEventHelpers*>(UCohtmlEventHelpers::StaticClass()->DefaultObject);

	return Default;
}


// Class CohtmlPlugin.CohtmlGameHUD
// (Actor)

class UClass* ACohtmlGameHUD::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CohtmlGameHUD");

	return Clss;
}


// CohtmlGameHUD CohtmlPlugin.Default__CohtmlGameHUD
// (Public, ClassDefaultObject, ArchetypeObject)

class ACohtmlGameHUD* ACohtmlGameHUD::GetDefaultObj()
{
	static class ACohtmlGameHUD* Default = nullptr;

	if (!Default)
		Default = static_cast<ACohtmlGameHUD*>(ACohtmlGameHUD::StaticClass()->DefaultObject);

	return Default;
}


// Function CohtmlPlugin.CohtmlGameHUD.SetupView
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PageUrl                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnableComplexCSSSupport                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDelayedUpdate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseWideColorTextures                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACohtmlGameHUD::SetupView(const class FString& PageUrl, bool bEnableComplexCSSSupport, bool bDelayedUpdate, bool bUseWideColorTextures)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlGameHUD", "SetupView");

	Params::ACohtmlGameHUD_SetupView_Params Parms{};

	Parms.PageUrl = PageUrl;
	Parms.bEnableComplexCSSSupport = bEnableComplexCSSSupport;
	Parms.bDelayedUpdate = bDelayedUpdate;
	Parms.bUseWideColorTextures = bUseWideColorTextures;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CohtmlPlugin.CohtmlHUD
// (None)

class UClass* UCohtmlHUD::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CohtmlHUD");

	return Clss;
}


// CohtmlHUD CohtmlPlugin.Default__CohtmlHUD
// (Public, ClassDefaultObject, ArchetypeObject)

class UCohtmlHUD* UCohtmlHUD::GetDefaultObj()
{
	static class UCohtmlHUD* Default = nullptr;

	if (!Default)
		Default = static_cast<UCohtmlHUD*>(UCohtmlHUD::StaticClass()->DefaultObject);

	return Default;
}


// Class CohtmlPlugin.CohtmlInputActor
// (Actor)

class UClass* ACohtmlInputActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CohtmlInputActor");

	return Clss;
}


// CohtmlInputActor CohtmlPlugin.Default__CohtmlInputActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ACohtmlInputActor* ACohtmlInputActor::GetDefaultObj()
{
	static class ACohtmlInputActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ACohtmlInputActor*>(ACohtmlInputActor::StaticClass()->DefaultObject);

	return Default;
}


// Function CohtmlPlugin.CohtmlInputActor.ToggleCohtmlInputFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ACohtmlInputActor::ToggleCohtmlInputFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlInputActor", "ToggleCohtmlInputFocus");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlInputActor.SetLineTraceMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECohtmlInputWidgetLineTraceModeMode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACohtmlInputActor::SetLineTraceMode(enum class ECohtmlInputWidgetLineTraceMode Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlInputActor", "SetLineTraceMode");

	Params::ACohtmlInputActor_SetLineTraceMode_Params Parms{};

	Parms.Mode = Mode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlInputActor.SetInputPropagationBehaviour
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECohtmlInputPropagationBehaviourPropagation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACohtmlInputActor::SetInputPropagationBehaviour(enum class ECohtmlInputPropagationBehaviour Propagation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlInputActor", "SetInputPropagationBehaviour");

	Params::ACohtmlInputActor_SetInputPropagationBehaviour_Params Parms{};

	Parms.Propagation = Propagation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlInputActor.SetCohtmlViewFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCohtmlBaseComponent*        NewFocusedView                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACohtmlInputActor::SetCohtmlViewFocus(class UCohtmlBaseComponent* NewFocusedView)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlInputActor", "SetCohtmlViewFocus");

	Params::ACohtmlInputActor_SetCohtmlViewFocus_Params Parms{};

	Parms.NewFocusedView = NewFocusedView;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlInputActor.SetCohtmlInputFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               FocusUI                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACohtmlInputActor::SetCohtmlInputFocus(bool FocusUI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlInputActor", "SetCohtmlInputFocus");

	Params::ACohtmlInputActor_SetCohtmlInputFocus_Params Parms{};

	Parms.FocusUI = FocusUI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlInputActor.IsCohtmlFocused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ACohtmlInputActor::IsCohtmlFocused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlInputActor", "IsCohtmlFocused");

	Params::ACohtmlInputActor_IsCohtmlFocused_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CohtmlPlugin.CohtmlInputActor.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECollisionChannel       CollisionChannel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETextureAddress         AddressMode                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECohtmlInputWidgetRaycastQualityRaycastQuality                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UVChannel                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACohtmlInputActor::Initialize(enum class ECollisionChannel CollisionChannel, enum class ETextureAddress AddressMode, enum class ECohtmlInputWidgetRaycastQuality RaycastQuality, int32 UVChannel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlInputActor", "Initialize");

	Params::ACohtmlInputActor_Initialize_Params Parms{};

	Parms.CollisionChannel = CollisionChannel;
	Parms.AddressMode = AddressMode;
	Parms.RaycastQuality = RaycastQuality;
	Parms.UVChannel = UVChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlInputActor.GetInputPropagationBehaviour
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECohtmlInputPropagationBehaviourReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECohtmlInputPropagationBehaviour ACohtmlInputActor::GetInputPropagationBehaviour()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlInputActor", "GetInputPropagationBehaviour");

	Params::ACohtmlInputActor_GetInputPropagationBehaviour_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CohtmlPlugin.CohtmlInputActor.AlwaysAcceptMouseInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAccept                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACohtmlInputActor::AlwaysAcceptMouseInput(bool bAccept)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlInputActor", "AlwaysAcceptMouseInput");

	Params::ACohtmlInputActor_AlwaysAcceptMouseInput_Params Parms{};

	Parms.bAccept = bAccept;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CohtmlPlugin.CohtmlJSEvent
// (None)

class UClass* UCohtmlJSEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CohtmlJSEvent");

	return Clss;
}


// CohtmlJSEvent CohtmlPlugin.Default__CohtmlJSEvent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCohtmlJSEvent* UCohtmlJSEvent::GetDefaultObj()
{
	static class UCohtmlJSEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCohtmlJSEvent*>(UCohtmlJSEvent::StaticClass()->DefaultObject);

	return Default;
}


// Function CohtmlPlugin.CohtmlJSEvent.AddText
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCohtmlJSEvent::AddText(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlJSEvent", "AddText");

	Params::UCohtmlJSEvent_AddText_Params Parms{};

	Parms.Text = Text;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlJSEvent.AddStructArg
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UStructProperty*             Arg                                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlJSEvent::AddStructArg(class UStructProperty* Arg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlJSEvent", "AddStructArg");

	Params::UCohtmlJSEvent_AddStructArg_Params Parms{};

	Parms.Arg = Arg;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlJSEvent.AddString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Str                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlJSEvent::AddString(const class FString& Str)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlJSEvent", "AddString");

	Params::UCohtmlJSEvent_AddString_Params Parms{};

	Parms.Str = Str;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlJSEvent.AddObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlJSEvent::AddObject(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlJSEvent", "AddObject");

	Params::UCohtmlJSEvent_AddObject_Params Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlJSEvent.AddName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlJSEvent::AddName(class FName& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlJSEvent", "AddName");

	Params::UCohtmlJSEvent_AddName_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlJSEvent.AddInt32
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Integer                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlJSEvent::AddInt32(int32 Integer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlJSEvent", "AddInt32");

	Params::UCohtmlJSEvent_AddInt32_Params Parms{};

	Parms.Integer = Integer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlJSEvent.AddFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Fl                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlJSEvent::AddFloat(float Fl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlJSEvent", "AddFloat");

	Params::UCohtmlJSEvent_AddFloat_Params Parms{};

	Parms.Fl = Fl;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlJSEvent.AddByte
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// uint8                              byte                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlJSEvent::AddByte(uint8 byte)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlJSEvent", "AddByte");

	Params::UCohtmlJSEvent_AddByte_Params Parms{};

	Parms.byte = byte;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlJSEvent.AddBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               B                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlJSEvent::AddBool(bool B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlJSEvent", "AddBool");

	Params::UCohtmlJSEvent_AddBool_Params Parms{};

	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlJSEvent.AddArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      Array                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UCohtmlJSEvent::AddArray(TArray<int32>& Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlJSEvent", "AddArray");

	Params::UCohtmlJSEvent_AddArray_Params Parms{};

	Parms.Array = Array;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CohtmlPlugin.CohtmlSettings
// (None)

class UClass* UCohtmlSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CohtmlSettings");

	return Clss;
}


// CohtmlSettings CohtmlPlugin.Default__CohtmlSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UCohtmlSettings* UCohtmlSettings::GetDefaultObj()
{
	static class UCohtmlSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UCohtmlSettings*>(UCohtmlSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class CohtmlPlugin.CohtmlSystem
// (Actor)

class UClass* ACohtmlSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CohtmlSystem");

	return Clss;
}


// CohtmlSystem CohtmlPlugin.Default__CohtmlSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class ACohtmlSystem* ACohtmlSystem::GetDefaultObj()
{
	static class ACohtmlSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<ACohtmlSystem*>(ACohtmlSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class CohtmlPlugin.CohtmlWidget
// (None)

class UClass* UCohtmlWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CohtmlWidget");

	return Clss;
}


// CohtmlWidget CohtmlPlugin.Default__CohtmlWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UCohtmlWidget* UCohtmlWidget::GetDefaultObj()
{
	static class UCohtmlWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UCohtmlWidget*>(UCohtmlWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function CohtmlPlugin.CohtmlWidget.UpdateWholeDataModelFromStruct
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UStructProperty*             Struct                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlWidget::UpdateWholeDataModelFromStruct(class UStructProperty* Struct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlWidget", "UpdateWholeDataModelFromStruct");

	Params::UCohtmlWidget_UpdateWholeDataModelFromStruct_Params Parms{};

	Parms.Struct = Struct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlWidget.UpdateWholeDataModelFromObject
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UObject*                     Model                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlWidget::UpdateWholeDataModelFromObject(class UObject* Model)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlWidget", "UpdateWholeDataModelFromObject");

	Params::UCohtmlWidget_UpdateWholeDataModelFromObject_Params Parms{};

	Parms.Model = Model;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlWidget.TriggerJSEvent
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCohtmlJSEvent*              EventData                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlWidget::TriggerJSEvent(const class FString& Name, class UCohtmlJSEvent* EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlWidget", "TriggerJSEvent");

	Params::UCohtmlWidget_TriggerJSEvent_Params Parms{};

	Parms.Name = Name;
	Parms.EventData = EventData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlWidget.SynchronizeModels
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:

void UCohtmlWidget::SynchronizeModels()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlWidget", "SynchronizeModels");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlWidget.ShowPaintRects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Show                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlWidget::ShowPaintRects(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlWidget", "ShowPaintRects");

	Params::UCohtmlWidget_ShowPaintRects_Params Parms{};

	Parms.Show = Show;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlWidget.SetSoundAttenuation
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSoundAttenuationSettings   Settings                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCohtmlWidget::SetSoundAttenuation(struct FSoundAttenuationSettings& Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlWidget", "SetSoundAttenuation");

	Params::UCohtmlWidget_SetSoundAttenuation_Params Parms{};

	Parms.Settings = Settings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlWidget.SetInputPropagationBehaviour
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECohtmlInputPropagationBehaviourPropagation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlWidget::SetInputPropagationBehaviour(enum class ECohtmlInputPropagationBehaviour Propagation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlWidget", "SetInputPropagationBehaviour");

	Params::UCohtmlWidget_SetInputPropagationBehaviour_Params Parms{};

	Parms.Propagation = Propagation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlWidget.RemovePreloadedTextureFromPath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AssetPath                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCohtmlWidget::RemovePreloadedTextureFromPath(const class FString& AssetPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlWidget", "RemovePreloadedTextureFromPath");

	Params::UCohtmlWidget_RemovePreloadedTextureFromPath_Params Parms{};

	Parms.AssetPath = AssetPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CohtmlPlugin.CohtmlWidget.RemovePreloadedTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCohtmlWidget::RemovePreloadedTexture(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlWidget", "RemovePreloadedTexture");

	Params::UCohtmlWidget_RemovePreloadedTexture_Params Parms{};

	Parms.Texture = Texture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CohtmlPlugin.CohtmlWidget.RemoveDataModelFromStruct
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UStructProperty*             Struct                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlWidget::RemoveDataModelFromStruct(class UStructProperty* Struct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlWidget", "RemoveDataModelFromStruct");

	Params::UCohtmlWidget_RemoveDataModelFromStruct_Params Parms{};

	Parms.Struct = Struct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlWidget.RemoveDataModelFromObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Model                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlWidget::RemoveDataModelFromObject(class UObject* Model)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlWidget", "RemoveDataModelFromObject");

	Params::UCohtmlWidget_RemoveDataModelFromObject_Params Parms{};

	Parms.Model = Model;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlWidget.RemoveAllPreloadedTextures
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCohtmlWidget::RemoveAllPreloadedTextures()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlWidget", "RemoveAllPreloadedTextures");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlWidget.reload
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCohtmlWidget::Reload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlWidget", "reload");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlWidget.PreloadTextureSync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AssetPath                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlWidget::PreloadTextureSync(const class FString& AssetPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlWidget", "PreloadTextureSync");

	Params::UCohtmlWidget_PreloadTextureSync_Params Parms{};

	Parms.AssetPath = AssetPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlWidget.PreloadTextureAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AssetPath                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlWidget::PreloadTextureAsync(const class FString& AssetPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlWidget", "PreloadTextureAsync");

	Params::UCohtmlWidget_PreloadTextureAsync_Params Parms{};

	Parms.AssetPath = AssetPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlWidget.Load
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlWidget::Load(const class FString& Path)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlWidget", "Load");

	Params::UCohtmlWidget_Load_Params Parms{};

	Parms.Path = Path;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlWidget.IsReadyToCreateView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCohtmlWidget::IsReadyToCreateView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlWidget", "IsReadyToCreateView");

	Params::UCohtmlWidget_IsReadyToCreateView_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CohtmlPlugin.CohtmlWidget.IsReadyForBindings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCohtmlWidget::IsReadyForBindings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlWidget", "IsReadyForBindings");

	Params::UCohtmlWidget_IsReadyForBindings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CohtmlPlugin.CohtmlWidget.HasRequestedView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCohtmlWidget::HasRequestedView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlWidget", "HasRequestedView");

	Params::UCohtmlWidget_HasRequestedView_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CohtmlPlugin.CohtmlWidget.GetRenderTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTextureRenderTarget2D*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTextureRenderTarget2D* UCohtmlWidget::GetRenderTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlWidget", "GetRenderTexture");

	Params::UCohtmlWidget_GetRenderTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CohtmlPlugin.CohtmlWidget.GetInputPropagationBehaviour
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECohtmlInputPropagationBehaviourReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECohtmlInputPropagationBehaviour UCohtmlWidget::GetInputPropagationBehaviour()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlWidget", "GetInputPropagationBehaviour");

	Params::UCohtmlWidget_GetInputPropagationBehaviour_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CohtmlPlugin.CohtmlWidget.CreateJSEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCohtmlJSEvent*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCohtmlJSEvent* UCohtmlWidget::CreateJSEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlWidget", "CreateJSEvent");

	Params::UCohtmlWidget_CreateJSEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CohtmlPlugin.CohtmlWidget.CreateDataModelFromStruct
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStructProperty*             Struct                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlWidget::CreateDataModelFromStruct(const class FString& Name, class UStructProperty* Struct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlWidget", "CreateDataModelFromStruct");

	Params::UCohtmlWidget_CreateDataModelFromStruct_Params Parms{};

	Parms.Name = Name;
	Parms.Struct = Struct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlWidget.CreateDataModelFromObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Model                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlWidget::CreateDataModelFromObject(const class FString& Name, class UObject* Model)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlWidget", "CreateDataModelFromObject");

	Params::UCohtmlWidget_CreateDataModelFromObject_Params Parms{};

	Parms.Name = Name;
	Parms.Model = Model;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CohtmlPlugin.CohtmlWidget.AddPreloadedTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCohtmlWidget::AddPreloadedTexture(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CohtmlWidget", "AddPreloadedTexture");

	Params::UCohtmlWidget_AddPreloadedTexture_Params Parms{};

	Parms.Texture = Texture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CohtmlPlugin.HummingbirdBaseComponent
// (None)

class UClass* UHummingbirdBaseComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HummingbirdBaseComponent");

	return Clss;
}


// HummingbirdBaseComponent CohtmlPlugin.Default__HummingbirdBaseComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHummingbirdBaseComponent* UHummingbirdBaseComponent::GetDefaultObj()
{
	static class UHummingbirdBaseComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHummingbirdBaseComponent*>(UHummingbirdBaseComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class CohtmlPlugin.HummingbirdComponent
// (None)

class UClass* UHummingbirdComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HummingbirdComponent");

	return Clss;
}


// HummingbirdComponent CohtmlPlugin.Default__HummingbirdComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHummingbirdComponent* UHummingbirdComponent::GetDefaultObj()
{
	static class UHummingbirdComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHummingbirdComponent*>(UHummingbirdComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class CohtmlPlugin.HummingbirdGameHUD
// (Actor)

class UClass* AHummingbirdGameHUD::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HummingbirdGameHUD");

	return Clss;
}


// HummingbirdGameHUD CohtmlPlugin.Default__HummingbirdGameHUD
// (Public, ClassDefaultObject, ArchetypeObject)

class AHummingbirdGameHUD* AHummingbirdGameHUD::GetDefaultObj()
{
	static class AHummingbirdGameHUD* Default = nullptr;

	if (!Default)
		Default = static_cast<AHummingbirdGameHUD*>(AHummingbirdGameHUD::StaticClass()->DefaultObject);

	return Default;
}


// Class CohtmlPlugin.HummingbirdHUD
// (None)

class UClass* UHummingbirdHUD::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HummingbirdHUD");

	return Clss;
}


// HummingbirdHUD CohtmlPlugin.Default__HummingbirdHUD
// (Public, ClassDefaultObject, ArchetypeObject)

class UHummingbirdHUD* UHummingbirdHUD::GetDefaultObj()
{
	static class UHummingbirdHUD* Default = nullptr;

	if (!Default)
		Default = static_cast<UHummingbirdHUD*>(UHummingbirdHUD::StaticClass()->DefaultObject);

	return Default;
}


// Class CohtmlPlugin.HummingbirdInputActor
// (Actor)

class UClass* AHummingbirdInputActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HummingbirdInputActor");

	return Clss;
}


// HummingbirdInputActor CohtmlPlugin.Default__HummingbirdInputActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AHummingbirdInputActor* AHummingbirdInputActor::GetDefaultObj()
{
	static class AHummingbirdInputActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AHummingbirdInputActor*>(AHummingbirdInputActor::StaticClass()->DefaultObject);

	return Default;
}


// Class CohtmlPlugin.HummingbirdSystem
// (Actor)

class UClass* AHummingbirdSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HummingbirdSystem");

	return Clss;
}


// HummingbirdSystem CohtmlPlugin.Default__HummingbirdSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class AHummingbirdSystem* AHummingbirdSystem::GetDefaultObj()
{
	static class AHummingbirdSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<AHummingbirdSystem*>(AHummingbirdSystem::StaticClass()->DefaultObject);

	return Default;
}

}


