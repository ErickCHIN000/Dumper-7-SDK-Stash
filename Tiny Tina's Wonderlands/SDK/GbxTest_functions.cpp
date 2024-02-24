#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxTest.AssetTrait
// (None)

class UClass* UAssetTrait::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AssetTrait");

	return Clss;
}


// AssetTrait GbxTest.Default__AssetTrait
// (Public, ClassDefaultObject, ArchetypeObject)

class UAssetTrait* UAssetTrait::GetDefaultObj()
{
	static class UAssetTrait* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssetTrait*>(UAssetTrait::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTest.AssetTraitMaterial
// (None)

class UClass* UAssetTraitMaterial::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AssetTraitMaterial");

	return Clss;
}


// AssetTraitMaterial GbxTest.Default__AssetTraitMaterial
// (Public, ClassDefaultObject, ArchetypeObject)

class UAssetTraitMaterial* UAssetTraitMaterial::GetDefaultObj()
{
	static class UAssetTraitMaterial* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssetTraitMaterial*>(UAssetTraitMaterial::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTest.AssetTraitMesh
// (None)

class UClass* UAssetTraitMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AssetTraitMesh");

	return Clss;
}


// AssetTraitMesh GbxTest.Default__AssetTraitMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UAssetTraitMesh* UAssetTraitMesh::GetDefaultObj()
{
	static class UAssetTraitMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssetTraitMesh*>(UAssetTraitMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTest.AssetTraitParticleSystem
// (None)

class UClass* UAssetTraitParticleSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AssetTraitParticleSystem");

	return Clss;
}


// AssetTraitParticleSystem GbxTest.Default__AssetTraitParticleSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAssetTraitParticleSystem* UAssetTraitParticleSystem::GetDefaultObj()
{
	static class UAssetTraitParticleSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssetTraitParticleSystem*>(UAssetTraitParticleSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTest.AssetTraitSkeletalMesh
// (None)

class UClass* UAssetTraitSkeletalMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AssetTraitSkeletalMesh");

	return Clss;
}


// AssetTraitSkeletalMesh GbxTest.Default__AssetTraitSkeletalMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UAssetTraitSkeletalMesh* UAssetTraitSkeletalMesh::GetDefaultObj()
{
	static class UAssetTraitSkeletalMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssetTraitSkeletalMesh*>(UAssetTraitSkeletalMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTest.AssetTraitStaticMesh
// (None)

class UClass* UAssetTraitStaticMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AssetTraitStaticMesh");

	return Clss;
}


// AssetTraitStaticMesh GbxTest.Default__AssetTraitStaticMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UAssetTraitStaticMesh* UAssetTraitStaticMesh::GetDefaultObj()
{
	static class UAssetTraitStaticMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssetTraitStaticMesh*>(UAssetTraitStaticMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTest.AssetTraitTexture
// (None)

class UClass* UAssetTraitTexture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AssetTraitTexture");

	return Clss;
}


// AssetTraitTexture GbxTest.Default__AssetTraitTexture
// (Public, ClassDefaultObject, ArchetypeObject)

class UAssetTraitTexture* UAssetTraitTexture::GetDefaultObj()
{
	static class UAssetTraitTexture* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssetTraitTexture*>(UAssetTraitTexture::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTest.AutomationMenuHelper
// (None)

class UClass* UAutomationMenuHelper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AutomationMenuHelper");

	return Clss;
}


// AutomationMenuHelper GbxTest.Default__AutomationMenuHelper
// (Public, ClassDefaultObject, ArchetypeObject)

class UAutomationMenuHelper* UAutomationMenuHelper::GetDefaultObj()
{
	static class UAutomationMenuHelper* Default = nullptr;

	if (!Default)
		Default = static_cast<UAutomationMenuHelper*>(UAutomationMenuHelper::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxTest.AutomationMenuHelper.PrevPage
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAutomationMenuHelper::PrevPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationMenuHelper", "PrevPage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.AutomationMenuHelper.PageName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UAutomationMenuHelper::PageName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationMenuHelper", "PageName");

	Params::UAutomationMenuHelper_PageName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.AutomationMenuHelper.NumPages
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAutomationMenuHelper::NumPages()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationMenuHelper", "NumPages");

	Params::UAutomationMenuHelper_NumPages_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.AutomationMenuHelper.NextPage
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAutomationMenuHelper::NextPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationMenuHelper", "NextPage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.AutomationMenuHelper.NextFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EAutomationUIDirection  Direction                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutomationMenuHelper::NextFocus(enum class EAutomationUIDirection Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationMenuHelper", "NextFocus");

	Params::UAutomationMenuHelper_NextFocus_Params Parms{};

	Parms.Direction = Direction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.AutomationMenuHelper.MenuName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UAutomationMenuHelper::MenuName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationMenuHelper", "MenuName");

	Params::UAutomationMenuHelper_MenuName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.AutomationMenuHelper.HasOpenMenu
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAutomationMenuHelper::HasOpenMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationMenuHelper", "HasOpenMenu");

	Params::UAutomationMenuHelper_HasOpenMenu_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.AutomationMenuHelper.FocusName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UAutomationMenuHelper::FocusName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationMenuHelper", "FocusName");

	Params::UAutomationMenuHelper_FocusName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.AutomationMenuHelper.FocusInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FAutomationMenuFocusInfo    ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FAutomationMenuFocusInfo UAutomationMenuHelper::FocusInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationMenuHelper", "FocusInfo");

	Params::UAutomationMenuHelper_FocusInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.AutomationMenuHelper.CurrentDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAutomationMenuHelper::CurrentDepth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationMenuHelper", "CurrentDepth");

	Params::UAutomationMenuHelper_CurrentDepth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.AutomationMenuHelper.CreateAutomationMenuHelper
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AGbxPlayerController*        PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               SimulateAllInputs                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAutomationMenuHelper*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAutomationMenuHelper* UAutomationMenuHelper::CreateAutomationMenuHelper(class AGbxPlayerController* PlayerController, bool SimulateAllInputs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationMenuHelper", "CreateAutomationMenuHelper");

	Params::UAutomationMenuHelper_CreateAutomationMenuHelper_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.SimulateAllInputs = SimulateAllInputs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.AutomationMenuHelper.BackOut
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAutomationMenuHelper::BackOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationMenuHelper", "BackOut");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.AutomationMenuHelper.ActuateFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EAutomationUIAction     Action                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutomationMenuHelper::ActuateFocus(enum class EAutomationUIAction Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationMenuHelper", "ActuateFocus");

	Params::UAutomationMenuHelper_ActuateFocus_Params Parms{};

	Parms.Action = Action;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxTest.AutomationUILibrary
// (None)

class UClass* UAutomationUILibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AutomationUILibrary");

	return Clss;
}


// AutomationUILibrary GbxTest.Default__AutomationUILibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAutomationUILibrary* UAutomationUILibrary::GetDefaultObj()
{
	static class UAutomationUILibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAutomationUILibrary*>(UAutomationUILibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxTest.AutomationUILibrary.ForceDisableTutorials
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ForceDisable                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutomationUILibrary::ForceDisableTutorials(bool ForceDisable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationUILibrary", "ForceDisableTutorials");

	Params::UAutomationUILibrary_ForceDisableTutorials_Params Parms{};

	Parms.ForceDisable = ForceDisable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxTest.GbxTestContentAuditCommandlet
// (None)

class UClass* UGbxTestContentAuditCommandlet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxTestContentAuditCommandlet");

	return Clss;
}


// GbxTestContentAuditCommandlet GbxTest.Default__GbxTestContentAuditCommandlet
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxTestContentAuditCommandlet* UGbxTestContentAuditCommandlet::GetDefaultObj()
{
	static class UGbxTestContentAuditCommandlet* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxTestContentAuditCommandlet*>(UGbxTestContentAuditCommandlet::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTest.GbxTestJiraCommandlet
// (None)

class UClass* UGbxTestJiraCommandlet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxTestJiraCommandlet");

	return Clss;
}


// GbxTestJiraCommandlet GbxTest.Default__GbxTestJiraCommandlet
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxTestJiraCommandlet* UGbxTestJiraCommandlet::GetDefaultObj()
{
	static class UGbxTestJiraCommandlet* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxTestJiraCommandlet*>(UGbxTestJiraCommandlet::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTest.GbxTestContentAuditSettings
// (None)

class UClass* UGbxTestContentAuditSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxTestContentAuditSettings");

	return Clss;
}


// GbxTestContentAuditSettings GbxTest.Default__GbxTestContentAuditSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxTestContentAuditSettings* UGbxTestContentAuditSettings::GetDefaultObj()
{
	static class UGbxTestContentAuditSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxTestContentAuditSettings*>(UGbxTestContentAuditSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTest.GbxTestParticleMaterialAuditCommandlet
// (None)

class UClass* UGbxTestParticleMaterialAuditCommandlet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxTestParticleMaterialAuditCommandlet");

	return Clss;
}


// GbxTestParticleMaterialAuditCommandlet GbxTest.Default__GbxTestParticleMaterialAuditCommandlet
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxTestParticleMaterialAuditCommandlet* UGbxTestParticleMaterialAuditCommandlet::GetDefaultObj()
{
	static class UGbxTestParticleMaterialAuditCommandlet* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxTestParticleMaterialAuditCommandlet*>(UGbxTestParticleMaterialAuditCommandlet::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTest.GbxTestSettings
// (None)

class UClass* UGbxTestSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxTestSettings");

	return Clss;
}


// GbxTestSettings GbxTest.Default__GbxTestSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxTestSettings* UGbxTestSettings::GetDefaultObj()
{
	static class UGbxTestSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxTestSettings*>(UGbxTestSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTest.PerfMapCapture
// (None)

class UClass* UPerfMapCapture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PerfMapCapture");

	return Clss;
}


// PerfMapCapture GbxTest.Default__PerfMapCapture
// (Public, ClassDefaultObject, ArchetypeObject)

class UPerfMapCapture* UPerfMapCapture::GetDefaultObj()
{
	static class UPerfMapCapture* Default = nullptr;

	if (!Default)
		Default = static_cast<UPerfMapCapture*>(UPerfMapCapture::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxTest.PerfMapCapture.SavePerfMapCapturesFromConfiguration
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMapParameters              Configuration                                                    (Parm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UPerfMapCapture::SavePerfMapCapturesFromConfiguration(class UWorld* World, const class FString& Path, const struct FMapParameters& Configuration, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerfMapCapture", "SavePerfMapCapturesFromConfiguration");

	Params::UPerfMapCapture_SavePerfMapCapturesFromConfiguration_Params Parms{};

	Parms.World = World;
	Parms.Path = Path;
	Parms.Configuration = Configuration;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.PerfMapCapture.SavePerfMapCaptures
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Density                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLighting                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSpecular                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Gamma                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Width                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              VolumeX                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              VolumeY                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              VolumeZ                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutputPattern                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPerfMapCapture::SavePerfMapCaptures(class UObject* World, const class FString& Path, float Density, bool bLighting, bool bSpecular, float Gamma, int32 Width, int32 Height, float VolumeX, float VolumeY, float VolumeZ, const class FString& OutputPattern)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerfMapCapture", "SavePerfMapCaptures");

	Params::UPerfMapCapture_SavePerfMapCaptures_Params Parms{};

	Parms.World = World;
	Parms.Path = Path;
	Parms.Density = Density;
	Parms.bLighting = bLighting;
	Parms.bSpecular = bSpecular;
	Parms.Gamma = Gamma;
	Parms.Width = Width;
	Parms.Height = Height;
	Parms.VolumeX = VolumeX;
	Parms.VolumeY = VolumeY;
	Parms.VolumeZ = VolumeZ;
	Parms.OutputPattern = OutputPattern;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxTest.PerformanceSnapshotCollector
// (None)

class UClass* UPerformanceSnapshotCollector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PerformanceSnapshotCollector");

	return Clss;
}


// PerformanceSnapshotCollector GbxTest.Default__PerformanceSnapshotCollector
// (Public, ClassDefaultObject, ArchetypeObject)

class UPerformanceSnapshotCollector* UPerformanceSnapshotCollector::GetDefaultObj()
{
	static class UPerformanceSnapshotCollector* Default = nullptr;

	if (!Default)
		Default = static_cast<UPerformanceSnapshotCollector*>(UPerformanceSnapshotCollector::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxTest.PerformanceSnapshotCollector.ResetSnapshotProviders
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPerformanceSnapshotCollector::ResetSnapshotProviders()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerformanceSnapshotCollector", "ResetSnapshotProviders");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.PerformanceSnapshotCollector.CreatePerformanceSnapshotCollector
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      StatSection                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESnapshotExecOutput     ExecOut                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPerformanceSnapshotCollector*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPerformanceSnapshotCollector* UPerformanceSnapshotCollector::CreatePerformanceSnapshotCollector(const class FString& StatSection, enum class ESnapshotExecOutput* ExecOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerformanceSnapshotCollector", "CreatePerformanceSnapshotCollector");

	Params::UPerformanceSnapshotCollector_CreatePerformanceSnapshotCollector_Params Parms{};

	Parms.StatSection = StatSection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExecOut != nullptr)
		*ExecOut = Parms.ExecOut;

	return Parms.ReturnValue;

}


// Function GbxTest.PerformanceSnapshotCollector.CollectSnapshot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReportContext                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UPerformanceSnapshotCollector::CollectSnapshot(class UObject* WorldContextObject, const class FString& ReportContext, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerformanceSnapshotCollector", "CollectSnapshot");

	Params::UPerformanceSnapshotCollector_CollectSnapshot_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReportContext = ReportContext;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.PerformanceSnapshotCollector.CollectProbeSnapshot
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReportContext                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGbxProbeId                 ProbeId                                                          (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Test                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FGbxProbeExtraData>  ExtraDataArray                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UPerformanceSnapshotCollector::CollectProbeSnapshot(class UObject* WorldContextObject, const class FString& ReportContext, struct FGbxProbeId& ProbeId, const class FString& Test, TArray<struct FGbxProbeExtraData>& ExtraDataArray, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerformanceSnapshotCollector", "CollectProbeSnapshot");

	Params::UPerformanceSnapshotCollector_CollectProbeSnapshot_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReportContext = ReportContext;
	Parms.ProbeId = ProbeId;
	Parms.Test = Test;
	Parms.ExtraDataArray = ExtraDataArray;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxTest.MatcherFunctionality
// (None)

class UClass* UMatcherFunctionality::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MatcherFunctionality");

	return Clss;
}


// MatcherFunctionality GbxTest.Default__MatcherFunctionality
// (Public, ClassDefaultObject, ArchetypeObject)

class UMatcherFunctionality* UMatcherFunctionality::GetDefaultObj()
{
	static class UMatcherFunctionality* Default = nullptr;

	if (!Default)
		Default = static_cast<UMatcherFunctionality*>(UMatcherFunctionality::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxTest.MatcherFunctionality.Size
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMatcherFunctionality::Size()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatcherFunctionality", "Size");

	Params::UMatcherFunctionality_Size_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.MatcherFunctionality.Ready
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMatcherFunctionality::Ready()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatcherFunctionality", "Ready");

	Params::UMatcherFunctionality_Ready_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.MatcherFunctionality.GetSuffix
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMatcherFunctionality::GetSuffix()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatcherFunctionality", "GetSuffix");

	Params::UMatcherFunctionality_GetSuffix_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.MatcherFunctionality.GetPrefix
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMatcherFunctionality::GetPrefix()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatcherFunctionality", "GetPrefix");

	Params::UMatcherFunctionality_GetPrefix_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.MatcherFunctionality.GetPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMatcherFunctionality::GetPosition(int32 Start)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatcherFunctionality", "GetPosition");

	Params::UMatcherFunctionality_GetPosition_Params Parms{};

	Parms.Start = Start;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.MatcherFunctionality.GetMatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMatcherFunctionality::GetMatch(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatcherFunctionality", "GetMatch");

	Params::UMatcherFunctionality_GetMatch_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.MatcherFunctionality.GetLength
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMatcherFunctionality::GetLength()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatcherFunctionality", "GetLength");

	Params::UMatcherFunctionality_GetLength_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.MatcherFunctionality.GetAtIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMatcherFunctionality::GetAtIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatcherFunctionality", "GetAtIndex");

	Params::UMatcherFunctionality_GetAtIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.MatcherFunctionality.Empty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMatcherFunctionality::Empty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatcherFunctionality", "Empty");

	Params::UMatcherFunctionality_Empty_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxTest.RegexFunctionality
// (None)

class UClass* URegexFunctionality::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RegexFunctionality");

	return Clss;
}


// RegexFunctionality GbxTest.Default__RegexFunctionality
// (Public, ClassDefaultObject, ArchetypeObject)

class URegexFunctionality* URegexFunctionality::GetDefaultObj()
{
	static class URegexFunctionality* Default = nullptr;

	if (!Default)
		Default = static_cast<URegexFunctionality*>(URegexFunctionality::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxTest.RegexFunctionality.RegexSearch
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRegex                      Regex                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UMatcherFunctionality*       Matcher                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Input                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URegexFunctionality::RegexSearch(struct FRegex& Regex, class UMatcherFunctionality* Matcher, const class FString& Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RegexFunctionality", "RegexSearch");

	Params::URegexFunctionality_RegexSearch_Params Parms{};

	Parms.Regex = Regex;
	Parms.Matcher = Matcher;
	Parms.Input = Input;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.RegexFunctionality.RegexRepleace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRegex                      Regex                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Input                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Repleacement                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URegexFunctionality::RegexRepleace(struct FRegex& Regex, const class FString& Input, const class FString& Repleacement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RegexFunctionality", "RegexRepleace");

	Params::URegexFunctionality_RegexRepleace_Params Parms{};

	Parms.Regex = Regex;
	Parms.Input = Input;
	Parms.Repleacement = Repleacement;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.RegexFunctionality.RegexMatch2
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRegex                      Regex                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UMatcherFunctionality*       Matcher                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Input                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URegexFunctionality::RegexMatch2(struct FRegex& Regex, class UMatcherFunctionality* Matcher, const class FString& Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RegexFunctionality", "RegexMatch2");

	Params::URegexFunctionality_RegexMatch2_Params Parms{};

	Parms.Regex = Regex;
	Parms.Matcher = Matcher;
	Parms.Input = Input;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.RegexFunctionality.RegexMatch
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRegex                      Regex                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Input                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URegexFunctionality::RegexMatch(struct FRegex& Regex, const class FString& Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RegexFunctionality", "RegexMatch");

	Params::URegexFunctionality_RegexMatch_Params Parms{};

	Parms.Regex = Regex;
	Parms.Input = Input;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.RegexFunctionality.FindAll
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRegex                      Regex                                                            (Parm, NativeAccessSpecifierPublic)
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              Return                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void URegexFunctionality::FindAll(const struct FRegex& Regex, const class FString& String, TArray<class FString>* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RegexFunctionality", "FindAll");

	Params::URegexFunctionality_FindAll_Params Parms{};

	Parms.Regex = Regex;
	Parms.String = String;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Return != nullptr)
		*Return = std::move(Parms.Return);

}


// Function GbxTest.RegexFunctionality.Assign2
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRegex                      Regex                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Pattern                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESyntaxOption           Flags                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URegexFunctionality::Assign2(struct FRegex& Regex, const class FString& Pattern, enum class ESyntaxOption Flags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RegexFunctionality", "Assign2");

	Params::URegexFunctionality_Assign2_Params Parms{};

	Parms.Regex = Regex;
	Parms.Pattern = Pattern;
	Parms.Flags = Flags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.RegexFunctionality.Assign
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRegex                      Regex                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Pattern                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URegexFunctionality::Assign(struct FRegex& Regex, const class FString& Pattern)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RegexFunctionality", "Assign");

	Params::URegexFunctionality_Assign_Params Parms{};

	Parms.Regex = Regex;
	Parms.Pattern = Pattern;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxTest.GbxTestHierarchicalCommands
// (None)

class UClass* UGbxTestHierarchicalCommands::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxTestHierarchicalCommands");

	return Clss;
}


// GbxTestHierarchicalCommands GbxTest.Default__GbxTestHierarchicalCommands
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxTestHierarchicalCommands* UGbxTestHierarchicalCommands::GetDefaultObj()
{
	static class UGbxTestHierarchicalCommands* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxTestHierarchicalCommands*>(UGbxTestHierarchicalCommands::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTest.TestLibrary
// (None)

class UClass* UTestLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestLibrary");

	return Clss;
}


// TestLibrary GbxTest.Default__TestLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UTestLibrary* UTestLibrary::GetDefaultObj()
{
	static class UTestLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UTestLibrary*>(UTestLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxTest.TestLibrary.TakeScreenshot
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      CustomFilename                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   OverrideResolution                                               (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ShowUI                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AddUniqueSuffix                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestLibrary::TakeScreenshot(const class FString& CustomFilename, const struct FVector2D& OverrideResolution, bool ShowUI, bool AddUniqueSuffix)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "TakeScreenshot");

	Params::UTestLibrary_TakeScreenshot_Params Parms{};

	Parms.CustomFilename = CustomFilename;
	Parms.OverrideResolution = OverrideResolution;
	Parms.ShowUI = ShowUI;
	Parms.AddUniqueSuffix = AddUniqueSuffix;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestLibrary.SortStrings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              Values                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               Descending                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UTestLibrary::SortStrings(const TArray<class FString>& Values, bool Descending)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "SortStrings");

	Params::UTestLibrary_SortStrings_Params Parms{};

	Parms.Values = Values;
	Parms.Descending = Descending;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.TestLibrary.SortObjectsByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UObject*>             Values                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               Descending                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UObject*> UTestLibrary::SortObjectsByName(const TArray<class UObject*>& Values, bool Descending)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "SortObjectsByName");

	Params::UTestLibrary_SortObjectsByName_Params Parms{};

	Parms.Values = Values;
	Parms.Descending = Descending;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.TestLibrary.SortIntegers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<int32>                      Values                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               Descending                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<int32> UTestLibrary::SortIntegers(const TArray<int32>& Values, bool Descending)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "SortIntegers");

	Params::UTestLibrary_SortIntegers_Params Parms{};

	Parms.Values = Values;
	Parms.Descending = Descending;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.TestLibrary.SortFloats
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<float>                      Values                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               Descending                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<float> UTestLibrary::SortFloats(const TArray<float>& Values, bool Descending)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "SortFloats");

	Params::UTestLibrary_SortFloats_Params Parms{};

	Parms.Values = Values;
	Parms.Descending = Descending;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.TestLibrary.SimulateInputKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInputEvent             EVENTTYPE                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AmountDepressed                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestLibrary::SimulateInputKey(class APlayerController*& PlayerController, const struct FKey& Key, enum class EInputEvent EVENTTYPE, float AmountDepressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "SimulateInputKey");

	Params::UTestLibrary_SimulateInputKey_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Key = Key;
	Parms.EVENTTYPE = EVENTTYPE;
	Parms.AmountDepressed = AmountDepressed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestLibrary.SimulateInputAxis
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Delta                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InterpTime                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UTestLibrary::SimulateInputAxis(class APlayerController*& PlayerController, const struct FKey& Key, float Delta, float InterpTime, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "SimulateInputAxis");

	Params::UTestLibrary_SimulateInputAxis_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Key = Key;
	Parms.Delta = Delta;
	Parms.InterpTime = InterpTime;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestLibrary.RemoveItemFromCollection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      CollectionName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ObjectName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestLibrary::RemoveItemFromCollection(const class FString& CollectionName, const class FString& ObjectName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "RemoveItemFromCollection");

	Params::UTestLibrary_RemoveItemFromCollection_Params Parms{};

	Parms.CollectionName = CollectionName;
	Parms.ObjectName = ObjectName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestLibrary.RemoveArrayFromCollection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      CollectionName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ObjectNames                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UTestLibrary::RemoveArrayFromCollection(const class FString& CollectionName, TArray<class FString>& ObjectNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "RemoveArrayFromCollection");

	Params::UTestLibrary_RemoveArrayFromCollection_Params Parms{};

	Parms.CollectionName = CollectionName;
	Parms.ObjectNames = ObjectNames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestLibrary.ReadFromIni
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Section                                                          (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              Values                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTestLibrary::ReadFromIni(const class FString& Section, const class FString& Key, TArray<class FString>* Values)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "ReadFromIni");

	Params::UTestLibrary_ReadFromIni_Params Parms{};

	Parms.Section = Section;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Values != nullptr)
		*Values = std::move(Parms.Values);

	return Parms.ReturnValue;

}


// Function GbxTest.TestLibrary.MoveItemCollection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      FromCollection                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ToCollection                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ObjectName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestLibrary::MoveItemCollection(const class FString& FromCollection, const class FString& ToCollection, const class FString& ObjectName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "MoveItemCollection");

	Params::UTestLibrary_MoveItemCollection_Params Parms{};

	Parms.FromCollection = FromCollection;
	Parms.ToCollection = ToCollection;
	Parms.ObjectName = ObjectName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestLibrary.MoveArrayCollection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      FromCollection                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ToCollection                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ObjectNames                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UTestLibrary::MoveArrayCollection(const class FString& FromCollection, const class FString& ToCollection, TArray<class FString>& ObjectNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "MoveArrayCollection");

	Params::UTestLibrary_MoveArrayCollection_Params Parms{};

	Parms.FromCollection = FromCollection;
	Parms.ToCollection = ToCollection;
	Parms.ObjectNames = ObjectNames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestLibrary.LoadBlueprintAsset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Object                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestLibrary::LoadBlueprintAsset(const class FString& Path, class UObject** Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "LoadBlueprintAsset");

	Params::UTestLibrary_LoadBlueprintAsset_Params Parms{};

	Parms.Path = Path;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Object != nullptr)
		*Object = Parms.Object;

}


// Function GbxTest.TestLibrary.LoadAsset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Object                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestLibrary::LoadAsset(const class FString& Path, class UObject** Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "LoadAsset");

	Params::UTestLibrary_LoadAsset_Params Parms{};

	Parms.Path = Path;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Object != nullptr)
		*Object = Parms.Object;

}


// Function GbxTest.TestLibrary.IsEditorSession
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTestLibrary::IsEditorSession()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "IsEditorSession");

	Params::UTestLibrary_IsEditorSession_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.TestLibrary.IsAssetInCollectionEx
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      CollectionName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECollectionType         CollectionType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ObjectName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTestLibrary::IsAssetInCollectionEx(const class FString& CollectionName, enum class ECollectionType CollectionType, const class FString& ObjectName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "IsAssetInCollectionEx");

	Params::UTestLibrary_IsAssetInCollectionEx_Params Parms{};

	Parms.CollectionName = CollectionName;
	Parms.CollectionType = CollectionType;
	Parms.ObjectName = ObjectName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.TestLibrary.IsAssetInCollection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      CollectionName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ObjectName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTestLibrary::IsAssetInCollection(const class FString& CollectionName, const class FString& ObjectName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "IsAssetInCollection");

	Params::UTestLibrary_IsAssetInCollection_Params Parms{};

	Parms.CollectionName = CollectionName;
	Parms.ObjectName = ObjectName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.TestLibrary.GetWorldForActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWorld*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWorld* UTestLibrary::GetWorldForActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "GetWorldForActor");

	Params::UTestLibrary_GetWorldForActor_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.TestLibrary.GetTestDriversFromStrings
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>              Strings                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<TSubclassOf<class AActor>>  TestDrivers                                                      (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class FString                      UndiscoveredItems                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestLibrary::GetTestDriversFromStrings(TArray<class FString>& Strings, TArray<TSubclassOf<class AActor>>* TestDrivers, class FString* UndiscoveredItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "GetTestDriversFromStrings");

	Params::UTestLibrary_GetTestDriversFromStrings_Params Parms{};

	Parms.Strings = Strings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TestDrivers != nullptr)
		*TestDrivers = std::move(Parms.TestDrivers);

	if (UndiscoveredItems != nullptr)
		*UndiscoveredItems = std::move(Parms.UndiscoveredItems);

}


// Function GbxTest.TestLibrary.GetReferencedBlueprintClasses
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      Class                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UClass*>              Classes                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UTestLibrary::GetReferencedBlueprintClasses(class UObject* Object, class UClass* Class, TArray<class UClass*>* Classes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "GetReferencedBlueprintClasses");

	Params::UTestLibrary_GetReferencedBlueprintClasses_Params Parms{};

	Parms.Object = Object;
	Parms.Class = Class;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Classes != nullptr)
		*Classes = std::move(Parms.Classes);

}


// Function GbxTest.TestLibrary.GetObjectTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FObjectTag>          ObjectTags                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UObject*                     Asset                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestLibrary::GetObjectTags(TArray<struct FObjectTag>* ObjectTags, class UObject* Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "GetObjectTags");

	Params::UTestLibrary_GetObjectTags_Params Parms{};

	Parms.Asset = Asset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ObjectTags != nullptr)
		*ObjectTags = std::move(Parms.ObjectTags);

}


// Function GbxTest.TestLibrary.GetAssetPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     Asset                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AssetPath                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestLibrary::GetAssetPath(class UObject* Asset, class FString* AssetPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "GetAssetPath");

	Params::UTestLibrary_GetAssetPath_Params Parms{};

	Parms.Asset = Asset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AssetPath != nullptr)
		*AssetPath = std::move(Parms.AssetPath);

}


// Function GbxTest.TestLibrary.GetAssetName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      AssetPath                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AssetName                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestLibrary::GetAssetName(const class FString& AssetPath, class FString* AssetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "GetAssetName");

	Params::UTestLibrary_GetAssetName_Params Parms{};

	Parms.AssetPath = AssetPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AssetName != nullptr)
		*AssetName = std::move(Parms.AssetName);

}


// Function GbxTest.TestLibrary.FilterDiscoveredAssets
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>              InPathNames                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              InPrettyNames                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              OutPathNames                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              OutPrettyNames                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      AssetNamePrefix                                                  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AssetNamePostfix                                                 (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AssetNameContains                                                (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AssetPathContains                                                (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestLibrary::FilterDiscoveredAssets(TArray<class FString>& InPathNames, TArray<class FString>& InPrettyNames, TArray<class FString>* OutPathNames, TArray<class FString>* OutPrettyNames, const class FString& AssetNamePrefix, const class FString& AssetNamePostfix, const class FString& AssetNameContains, const class FString& AssetPathContains)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "FilterDiscoveredAssets");

	Params::UTestLibrary_FilterDiscoveredAssets_Params Parms{};

	Parms.InPathNames = InPathNames;
	Parms.InPrettyNames = InPrettyNames;
	Parms.AssetNamePrefix = AssetNamePrefix;
	Parms.AssetNamePostfix = AssetNamePostfix;
	Parms.AssetNameContains = AssetNameContains;
	Parms.AssetPathContains = AssetPathContains;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPathNames != nullptr)
		*OutPathNames = std::move(Parms.OutPathNames);

	if (OutPrettyNames != nullptr)
		*OutPrettyNames = std::move(Parms.OutPrettyNames);

}


// Function GbxTest.TestLibrary.DiscoverAssets
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>              PathNames                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              PrettyNames                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              Directories                                                      (Parm, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// TArray<class UClass*>              Classes                                                          (Parm, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// TArray<class UClass*>              ExcludeRecursiveClasses                                          (Parm, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// bool                               bRecursiveDirectories                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRecursiveClasses                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestLibrary::DiscoverAssets(TArray<class FString>* PathNames, TArray<class FString>* PrettyNames, const TArray<class FString>& Directories, const TArray<class UClass*>& Classes, const TArray<class UClass*>& ExcludeRecursiveClasses, bool bRecursiveDirectories, bool bRecursiveClasses)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "DiscoverAssets");

	Params::UTestLibrary_DiscoverAssets_Params Parms{};

	Parms.Directories = Directories;
	Parms.Classes = Classes;
	Parms.ExcludeRecursiveClasses = ExcludeRecursiveClasses;
	Parms.bRecursiveDirectories = bRecursiveDirectories;
	Parms.bRecursiveClasses = bRecursiveClasses;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PathNames != nullptr)
		*PathNames = std::move(Parms.PathNames);

	if (PrettyNames != nullptr)
		*PrettyNames = std::move(Parms.PrettyNames);

}


// Function GbxTest.TestLibrary.CreateLocalCollection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      CollectionName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ParentName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UTestLibrary::CreateLocalCollection(const class FString& CollectionName, const class FString& ParentName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "CreateLocalCollection");

	Params::UTestLibrary_CreateLocalCollection_Params Parms{};

	Parms.CollectionName = CollectionName;
	Parms.ParentName = ParentName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.TestLibrary.ContainsSubPath
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SubPath                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTestLibrary::ContainsSubPath(const class FString& Path, const class FString& SubPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "ContainsSubPath");

	Params::UTestLibrary_ContainsSubPath_Params Parms{};

	Parms.Path = Path;
	Parms.SubPath = SubPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.TestLibrary.ContainsObjectTag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FObjectTag>          ObjectTags                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Category                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bExactCategory                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCaseSensitiveCategory                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bExactName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCaseSensitiveName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTestLibrary::ContainsObjectTag(TArray<struct FObjectTag>& ObjectTags, const class FString& Category, const class FString& Name, bool bExactCategory, bool bCaseSensitiveCategory, bool bExactName, bool bCaseSensitiveName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "ContainsObjectTag");

	Params::UTestLibrary_ContainsObjectTag_Params Parms{};

	Parms.ObjectTags = ObjectTags;
	Parms.Category = Category;
	Parms.Name = Name;
	Parms.bExactCategory = bExactCategory;
	Parms.bCaseSensitiveCategory = bCaseSensitiveCategory;
	Parms.bExactName = bExactName;
	Parms.bCaseSensitiveName = bCaseSensitiveName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.TestLibrary.CollectionExistsEx
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      CollectionName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECollectionType         CollectionType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTestLibrary::CollectionExistsEx(const class FString& CollectionName, enum class ECollectionType CollectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "CollectionExistsEx");

	Params::UTestLibrary_CollectionExistsEx_Params Parms{};

	Parms.CollectionName = CollectionName;
	Parms.CollectionType = CollectionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.TestLibrary.CollectionExists
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      CollectionName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTestLibrary::CollectionExists(const class FString& CollectionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "CollectionExists");

	Params::UTestLibrary_CollectionExists_Params Parms{};

	Parms.CollectionName = CollectionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.TestLibrary.AddItemToCollection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      CollectionName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ObjectName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestLibrary::AddItemToCollection(const class FString& CollectionName, const class FString& ObjectName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "AddItemToCollection");

	Params::UTestLibrary_AddItemToCollection_Params Parms{};

	Parms.CollectionName = CollectionName;
	Parms.ObjectName = ObjectName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestLibrary.AddArrayToCollection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      CollectionName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ObjectNames                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UTestLibrary::AddArrayToCollection(const class FString& CollectionName, TArray<class FString>& ObjectNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrary", "AddArrayToCollection");

	Params::UTestLibrary_AddArrayToCollection_Params Parms{};

	Parms.CollectionName = CollectionName;
	Parms.ObjectNames = ObjectNames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxTest.TestLibraryContent
// (None)

class UClass* UTestLibraryContent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestLibraryContent");

	return Clss;
}


// TestLibraryContent GbxTest.Default__TestLibraryContent
// (Public, ClassDefaultObject, ArchetypeObject)

class UTestLibraryContent* UTestLibraryContent::GetDefaultObj()
{
	static class UTestLibraryContent* Default = nullptr;

	if (!Default)
		Default = static_cast<UTestLibraryContent*>(UTestLibraryContent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxTest.TestLibraryContent.LoadAssetTexture
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ObjectPath                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture* UTestLibraryContent::LoadAssetTexture(const class FString& ObjectPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibraryContent", "LoadAssetTexture");

	Params::UTestLibraryContent_LoadAssetTexture_Params Parms{};

	Parms.ObjectPath = ObjectPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.TestLibraryContent.LoadAssetStaticMesh
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ObjectPath                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMesh*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UStaticMesh* UTestLibraryContent::LoadAssetStaticMesh(const class FString& ObjectPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibraryContent", "LoadAssetStaticMesh");

	Params::UTestLibraryContent_LoadAssetStaticMesh_Params Parms{};

	Parms.ObjectPath = ObjectPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.TestLibraryContent.LoadAssetSkeletalMesh
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ObjectPath                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMesh*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeletalMesh* UTestLibraryContent::LoadAssetSkeletalMesh(const class FString& ObjectPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibraryContent", "LoadAssetSkeletalMesh");

	Params::UTestLibraryContent_LoadAssetSkeletalMesh_Params Parms{};

	Parms.ObjectPath = ObjectPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.TestLibraryContent.LoadAssetParticleSystem
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ObjectPath                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UParticleSystem*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UParticleSystem* UTestLibraryContent::LoadAssetParticleSystem(const class FString& ObjectPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibraryContent", "LoadAssetParticleSystem");

	Params::UTestLibraryContent_LoadAssetParticleSystem_Params Parms{};

	Parms.ObjectPath = ObjectPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.TestLibraryContent.LoadAssetMaterial
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ObjectPath                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterial*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterial* UTestLibraryContent::LoadAssetMaterial(const class FString& ObjectPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibraryContent", "LoadAssetMaterial");

	Params::UTestLibraryContent_LoadAssetMaterial_Params Parms{};

	Parms.ObjectPath = ObjectPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.TestLibraryContent.GetTestInfoTexture
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture*                    Asset                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTestInfoTexture            Info                                                             (Parm, OutParm, NativeAccessSpecifierPublic)

void UTestLibraryContent::GetTestInfoTexture(class UTexture* Asset, struct FTestInfoTexture* Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibraryContent", "GetTestInfoTexture");

	Params::UTestLibraryContent_GetTestInfoTexture_Params Parms{};

	Parms.Asset = Asset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Info != nullptr)
		*Info = std::move(Parms.Info);

}


// Function GbxTest.TestLibraryContent.GetTestInfoStaticMeshLOD
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UStaticMesh*                 Asset                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LODIndex                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTestInfoMeshLOD            Info                                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UTestLibraryContent::GetTestInfoStaticMeshLOD(class UStaticMesh* Asset, int32 LODIndex, struct FTestInfoMeshLOD* Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibraryContent", "GetTestInfoStaticMeshLOD");

	Params::UTestLibraryContent_GetTestInfoStaticMeshLOD_Params Parms{};

	Parms.Asset = Asset;
	Parms.LODIndex = LODIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Info != nullptr)
		*Info = std::move(Parms.Info);

}


// Function GbxTest.TestLibraryContent.GetTestInfoStaticMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UStaticMesh*                 Asset                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTestInfoMeshLODSummary     LODSummary                                                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FTestInfoMesh               Mesh                                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FTestInfoStaticMesh         StaticMesh                                                       (Parm, OutParm, NativeAccessSpecifierPublic)

void UTestLibraryContent::GetTestInfoStaticMesh(class UStaticMesh* Asset, struct FTestInfoMeshLODSummary* LODSummary, struct FTestInfoMesh* Mesh, struct FTestInfoStaticMesh* StaticMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibraryContent", "GetTestInfoStaticMesh");

	Params::UTestLibraryContent_GetTestInfoStaticMesh_Params Parms{};

	Parms.Asset = Asset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LODSummary != nullptr)
		*LODSummary = std::move(Parms.LODSummary);

	if (Mesh != nullptr)
		*Mesh = std::move(Parms.Mesh);

	if (StaticMesh != nullptr)
		*StaticMesh = std::move(Parms.StaticMesh);

}


// Function GbxTest.TestLibraryContent.GetTestInfoSkeletalMeshLOD
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMesh*               Asset                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LODIndex                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTestInfoMeshLOD            Info                                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UTestLibraryContent::GetTestInfoSkeletalMeshLOD(class USkeletalMesh* Asset, int32 LODIndex, struct FTestInfoMeshLOD* Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibraryContent", "GetTestInfoSkeletalMeshLOD");

	Params::UTestLibraryContent_GetTestInfoSkeletalMeshLOD_Params Parms{};

	Parms.Asset = Asset;
	Parms.LODIndex = LODIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Info != nullptr)
		*Info = std::move(Parms.Info);

}


// Function GbxTest.TestLibraryContent.GetTestInfoSkeletalMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMesh*               Asset                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTestInfoMeshLODSummary     LODSummary                                                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FTestInfoMesh               Mesh                                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FTestInfoSkeletalMesh       SkeletalMesh                                                     (Parm, OutParm, NativeAccessSpecifierPublic)

void UTestLibraryContent::GetTestInfoSkeletalMesh(class USkeletalMesh* Asset, struct FTestInfoMeshLODSummary* LODSummary, struct FTestInfoMesh* Mesh, struct FTestInfoSkeletalMesh* SkeletalMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibraryContent", "GetTestInfoSkeletalMesh");

	Params::UTestLibraryContent_GetTestInfoSkeletalMesh_Params Parms{};

	Parms.Asset = Asset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LODSummary != nullptr)
		*LODSummary = std::move(Parms.LODSummary);

	if (Mesh != nullptr)
		*Mesh = std::move(Parms.Mesh);

	if (SkeletalMesh != nullptr)
		*SkeletalMesh = std::move(Parms.SkeletalMesh);

}


// Function GbxTest.TestLibraryContent.GetTestInfoParticleSystem
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UParticleSystem*             Asset                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTestInfoParticleSystem     Info                                                             (Parm, OutParm, NativeAccessSpecifierPublic)

void UTestLibraryContent::GetTestInfoParticleSystem(class UParticleSystem* Asset, struct FTestInfoParticleSystem* Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibraryContent", "GetTestInfoParticleSystem");

	Params::UTestLibraryContent_GetTestInfoParticleSystem_Params Parms{};

	Parms.Asset = Asset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Info != nullptr)
		*Info = std::move(Parms.Info);

}


// Function GbxTest.TestLibraryContent.GetTestInfoParticleEmitter
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UParticleSystem*             Asset                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              EmitterIndex                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTestInfoParticleEmitter    Info                                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UTestLibraryContent::GetTestInfoParticleEmitter(class UParticleSystem* Asset, int32 EmitterIndex, struct FTestInfoParticleEmitter* Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibraryContent", "GetTestInfoParticleEmitter");

	Params::UTestLibraryContent_GetTestInfoParticleEmitter_Params Parms{};

	Parms.Asset = Asset;
	Parms.EmitterIndex = EmitterIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Info != nullptr)
		*Info = std::move(Parms.Info);

}


// Function GbxTest.TestLibraryContent.GetTestInfoMaterial
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMaterial*                   Asset                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTestInfoMaterial           Info                                                             (Parm, OutParm, NativeAccessSpecifierPublic)

void UTestLibraryContent::GetTestInfoMaterial(class UMaterial* Asset, struct FTestInfoMaterial* Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibraryContent", "GetTestInfoMaterial");

	Params::UTestLibraryContent_GetTestInfoMaterial_Params Parms{};

	Parms.Asset = Asset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Info != nullptr)
		*Info = std::move(Parms.Info);

}


// Function GbxTest.TestLibraryContent.GetAllPersistentGameMaps
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>              OutMapNames                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ShortNamesOnly                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestLibraryContent::GetAllPersistentGameMaps(TArray<class FString>* OutMapNames, bool ShortNamesOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibraryContent", "GetAllPersistentGameMaps");

	Params::UTestLibraryContent_GetAllPersistentGameMaps_Params Parms{};

	Parms.ShortNamesOnly = ShortNamesOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMapNames != nullptr)
		*OutMapNames = std::move(Parms.OutMapNames);

}


// Function GbxTest.TestLibraryContent.ContentAuditSingleObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Asset                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UTestLibraryContent::ContentAuditSingleObject(class UObject* Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibraryContent", "ContentAuditSingleObject");

	Params::UTestLibraryContent_ContentAuditSingleObject_Params Parms{};

	Parms.Asset = Asset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxTest.TestLibraryPerformance
// (None)

class UClass* UTestLibraryPerformance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestLibraryPerformance");

	return Clss;
}


// TestLibraryPerformance GbxTest.Default__TestLibraryPerformance
// (Public, ClassDefaultObject, ArchetypeObject)

class UTestLibraryPerformance* UTestLibraryPerformance::GetDefaultObj()
{
	static class UTestLibraryPerformance* Default = nullptr;

	if (!Default)
		Default = static_cast<UTestLibraryPerformance*>(UTestLibraryPerformance::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxTest.TestLibraryPerformance.WaitForFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumFrames                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UTestLibraryPerformance::WaitForFrames(class UObject* WorldContextObject, int32 NumFrames, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibraryPerformance", "WaitForFrames");

	Params::UTestLibraryPerformance_WaitForFrames_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.NumFrames = NumFrames;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestLibraryPerformance.GenerateLevelGrid
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVector>             GridLocations                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class APawn*                       Pawn                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              GridSize                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWalkableOnly                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestLibraryPerformance::GenerateLevelGrid(TArray<struct FVector>* GridLocations, class APawn* Pawn, float GridSize, bool bWalkableOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibraryPerformance", "GenerateLevelGrid");

	Params::UTestLibraryPerformance_GenerateLevelGrid_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.GridSize = GridSize;
	Parms.bWalkableOnly = bWalkableOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (GridLocations != nullptr)
		*GridLocations = std::move(Parms.GridLocations);

}


// Class GbxTest.TestLibrarySimulation
// (None)

class UClass* UTestLibrarySimulation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestLibrarySimulation");

	return Clss;
}


// TestLibrarySimulation GbxTest.Default__TestLibrarySimulation
// (Public, ClassDefaultObject, ArchetypeObject)

class UTestLibrarySimulation* UTestLibrarySimulation::GetDefaultObj()
{
	static class UTestLibrarySimulation* Default = nullptr;

	if (!Default)
		Default = static_cast<UTestLibrarySimulation*>(UTestLibrarySimulation::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxTest.TestLibrarySimulation.TestIntInRangeFromPlayMap
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Min                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Max                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETestIssueType          IssueType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueCategory                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueMessage                                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestLibrarySimulation::TestIntInRangeFromPlayMap(int32& Value, int32 Min, int32 Max, enum class ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrarySimulation", "TestIntInRangeFromPlayMap");

	Params::UTestLibrarySimulation_TestIntInRangeFromPlayMap_Params Parms{};

	Parms.Value = Value;
	Parms.Min = Min;
	Parms.Max = Max;
	Parms.IssueType = IssueType;
	Parms.IssueCategory = IssueCategory;
	Parms.IssueMessage = IssueMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestLibrarySimulation.TestIntCompareFromPlayMap
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Other                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECompare                Comparison                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETestIssueType          IssueType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueCategory                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueMessage                                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestLibrarySimulation::TestIntCompareFromPlayMap(int32& Value, int32 Other, enum class ECompare Comparison, enum class ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrarySimulation", "TestIntCompareFromPlayMap");

	Params::UTestLibrarySimulation_TestIntCompareFromPlayMap_Params Parms{};

	Parms.Value = Value;
	Parms.Other = Other;
	Parms.Comparison = Comparison;
	Parms.IssueType = IssueType;
	Parms.IssueCategory = IssueCategory;
	Parms.IssueMessage = IssueMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestLibrarySimulation.TestFloatInRangeFromPlayMap
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Min                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Max                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETestIssueType          IssueType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueCategory                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueMessage                                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestLibrarySimulation::TestFloatInRangeFromPlayMap(float& Value, float Min, float Max, enum class ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrarySimulation", "TestFloatInRangeFromPlayMap");

	Params::UTestLibrarySimulation_TestFloatInRangeFromPlayMap_Params Parms{};

	Parms.Value = Value;
	Parms.Min = Min;
	Parms.Max = Max;
	Parms.IssueType = IssueType;
	Parms.IssueCategory = IssueCategory;
	Parms.IssueMessage = IssueMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestLibrarySimulation.TestFloatCompareFromPlayMap
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Other                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECompare                Comparison                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETestIssueType          IssueType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueCategory                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueMessage                                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Tolerance                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestLibrarySimulation::TestFloatCompareFromPlayMap(float& Value, float Other, enum class ECompare Comparison, enum class ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage, float Tolerance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrarySimulation", "TestFloatCompareFromPlayMap");

	Params::UTestLibrarySimulation_TestFloatCompareFromPlayMap_Params Parms{};

	Parms.Value = Value;
	Parms.Other = Other;
	Parms.Comparison = Comparison;
	Parms.IssueType = IssueType;
	Parms.IssueCategory = IssueCategory;
	Parms.IssueMessage = IssueMessage;
	Parms.Tolerance = Tolerance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestLibrarySimulation.TestBoolIsTrueFromPlayMap
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETestIssueType          IssueType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueCategory                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueMessage                                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestLibrarySimulation::TestBoolIsTrueFromPlayMap(bool& Value, enum class ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrarySimulation", "TestBoolIsTrueFromPlayMap");

	Params::UTestLibrarySimulation_TestBoolIsTrueFromPlayMap_Params Parms{};

	Parms.Value = Value;
	Parms.IssueType = IssueType;
	Parms.IssueCategory = IssueCategory;
	Parms.IssueMessage = IssueMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestLibrarySimulation.TestBoolIsFalseFromPlayMap
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETestIssueType          IssueType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueCategory                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueMessage                                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestLibrarySimulation::TestBoolIsFalseFromPlayMap(bool& Value, enum class ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrarySimulation", "TestBoolIsFalseFromPlayMap");

	Params::UTestLibrarySimulation_TestBoolIsFalseFromPlayMap_Params Parms{};

	Parms.Value = Value;
	Parms.IssueType = IssueType;
	Parms.IssueCategory = IssueCategory;
	Parms.IssueMessage = IssueMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestLibrarySimulation.StopPlayTest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UTestLibrarySimulation::StopPlayTest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrarySimulation", "StopPlayTest");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestLibrarySimulation.SimulatePlayerInput
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           PlayerController                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FGbxTestInputAction> InputDescription                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// float                              PreDelay                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PostDelay                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UTestLibrarySimulation::SimulatePlayerInput(class UObject* WorldContextObject, class APlayerController*& PlayerController, TArray<struct FGbxTestInputAction>& InputDescription, float PreDelay, float PostDelay, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrarySimulation", "SimulatePlayerInput");

	Params::UTestLibrarySimulation_SimulatePlayerInput_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.InputDescription = InputDescription;
	Parms.PreDelay = PreDelay;
	Parms.PostDelay = PostDelay;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestLibrarySimulation.SetReportContext
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FGbxProbeId>         AssetContexts                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UTestLibrarySimulation::SetReportContext(class UObject* WorldContextObject, TArray<struct FGbxProbeId>& AssetContexts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrarySimulation", "SetReportContext");

	Params::UTestLibrarySimulation_SetReportContext_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AssetContexts = AssetContexts;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestLibrarySimulation.SetReceiveBackgroundInput
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AllowBackgroundInput                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTestLibrarySimulation::SetReceiveBackgroundInput(class APlayerController*& PlayerController, bool AllowBackgroundInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrarySimulation", "SetReceiveBackgroundInput");

	Params::UTestLibrarySimulation_SetReceiveBackgroundInput_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.AllowBackgroundInput = AllowBackgroundInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.TestLibrarySimulation.ResetTestTimeout
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UTestLibrarySimulation::ResetTestTimeout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrarySimulation", "ResetTestTimeout");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestLibrarySimulation.ReportResultFromPlayMap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bSucceeded                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueCategory                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueMessage                                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGbxProbeId                 AssetContext                                                     (Parm, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETestIssueType          FailedIssueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestLibrarySimulation::ReportResultFromPlayMap(bool bSucceeded, const class FString& IssueCategory, const class FString& IssueMessage, const struct FGbxProbeId& AssetContext, enum class ETestIssueType FailedIssueType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrarySimulation", "ReportResultFromPlayMap");

	Params::UTestLibrarySimulation_ReportResultFromPlayMap_Params Parms{};

	Parms.bSucceeded = bSucceeded;
	Parms.IssueCategory = IssueCategory;
	Parms.IssueMessage = IssueMessage;
	Parms.AssetContext = AssetContext;
	Parms.FailedIssueType = FailedIssueType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestLibrarySimulation.ReportIssueFromPlayMap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class ETestIssueType          IssueType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueCategory                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueMessage                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestLibrarySimulation::ReportIssueFromPlayMap(enum class ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrarySimulation", "ReportIssueFromPlayMap");

	Params::UTestLibrarySimulation_ReportIssueFromPlayMap_Params Parms{};

	Parms.IssueType = IssueType;
	Parms.IssueCategory = IssueCategory;
	Parms.IssueMessage = IssueMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestLibrarySimulation.PushWorldContext
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestLibrarySimulation::PushWorldContext(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrarySimulation", "PushWorldContext");

	Params::UTestLibrarySimulation_PushWorldContext_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestLibrarySimulation.PushAssetContext
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGbxProbeId                 ID                                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestLibrarySimulation::PushAssetContext(const struct FGbxProbeId& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrarySimulation", "PushAssetContext");

	Params::UTestLibrarySimulation_PushAssetContext_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestLibrarySimulation.PopWorldContext
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UTestLibrarySimulation::PopWorldContext()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrarySimulation", "PopWorldContext");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestLibrarySimulation.PopAssetContext
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGbxProbeId                 ID                                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestLibrarySimulation::PopAssetContext(const struct FGbxProbeId& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrarySimulation", "PopAssetContext");

	Params::UTestLibrarySimulation_PopAssetContext_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestLibrarySimulation.IsPlayMapRunning
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTestLibrarySimulation::IsPlayMapRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrarySimulation", "IsPlayMapRunning");

	Params::UTestLibrarySimulation_IsPlayMapRunning_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.TestLibrarySimulation.IsHLQNoClipEnabled
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTestLibrarySimulation::IsHLQNoClipEnabled(class APlayerController*& PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrarySimulation", "IsHLQNoClipEnabled");

	Params::UTestLibrarySimulation_IsHLQNoClipEnabled_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.TestLibrarySimulation.IsGodEnabled
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTestLibrarySimulation::IsGodEnabled(class APlayerController*& PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrarySimulation", "IsGodEnabled");

	Params::UTestLibrarySimulation_IsGodEnabled_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.TestLibrarySimulation.IsGhostEnabled
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTestLibrarySimulation::IsGhostEnabled(class APlayerController*& PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrarySimulation", "IsGhostEnabled");

	Params::UTestLibrarySimulation_IsGhostEnabled_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.TestLibrarySimulation.IsDemiGodEnabled
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTestLibrarySimulation::IsDemiGodEnabled(class APlayerController*& PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrarySimulation", "IsDemiGodEnabled");

	Params::UTestLibrarySimulation_IsDemiGodEnabled_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.TestLibrarySimulation.GetPolicyForPlayMap
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTestPolicySimulation*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTestPolicySimulation* UTestLibrarySimulation::GetPolicyForPlayMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrarySimulation", "GetPolicyForPlayMap");

	Params::UTestLibrarySimulation_GetPolicyForPlayMap_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTest.TestLibrarySimulation.CanReceiveBackgroundInput
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTestLibrarySimulation::CanReceiveBackgroundInput(class APlayerController*& PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestLibrarySimulation", "CanReceiveBackgroundInput");

	Params::UTestLibrarySimulation_CanReceiveBackgroundInput_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxTest.GbxTestPlanCommandlet
// (None)

class UClass* UGbxTestPlanCommandlet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxTestPlanCommandlet");

	return Clss;
}


// GbxTestPlanCommandlet GbxTest.Default__GbxTestPlanCommandlet
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxTestPlanCommandlet* UGbxTestPlanCommandlet::GetDefaultObj()
{
	static class UGbxTestPlanCommandlet* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxTestPlanCommandlet*>(UGbxTestPlanCommandlet::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTest.TestPolicy
// (None)

class UClass* UTestPolicy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestPolicy");

	return Clss;
}


// TestPolicy GbxTest.Default__TestPolicy
// (Public, ClassDefaultObject, ArchetypeObject)

class UTestPolicy* UTestPolicy::GetDefaultObj()
{
	static class UTestPolicy* Default = nullptr;

	if (!Default)
		Default = static_cast<UTestPolicy*>(UTestPolicy::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxTest.TestPolicy.TestIntInRange
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Min                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Max                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETestIssueType          IssueType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueCategory                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueMessage                                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestPolicy::TestIntInRange(int32& Value, int32 Min, int32 Max, enum class ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestPolicy", "TestIntInRange");

	Params::UTestPolicy_TestIntInRange_Params Parms{};

	Parms.Value = Value;
	Parms.Min = Min;
	Parms.Max = Max;
	Parms.IssueType = IssueType;
	Parms.IssueCategory = IssueCategory;
	Parms.IssueMessage = IssueMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestPolicy.TestIntCompare
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Other                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECompare                Comparison                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETestIssueType          IssueType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueCategory                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueMessage                                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestPolicy::TestIntCompare(int32& Value, int32 Other, enum class ECompare Comparison, enum class ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestPolicy", "TestIntCompare");

	Params::UTestPolicy_TestIntCompare_Params Parms{};

	Parms.Value = Value;
	Parms.Other = Other;
	Parms.Comparison = Comparison;
	Parms.IssueType = IssueType;
	Parms.IssueCategory = IssueCategory;
	Parms.IssueMessage = IssueMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestPolicy.TestFloatInRange
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Min                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Max                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETestIssueType          IssueType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueCategory                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueMessage                                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestPolicy::TestFloatInRange(float& Value, float Min, float Max, enum class ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestPolicy", "TestFloatInRange");

	Params::UTestPolicy_TestFloatInRange_Params Parms{};

	Parms.Value = Value;
	Parms.Min = Min;
	Parms.Max = Max;
	Parms.IssueType = IssueType;
	Parms.IssueCategory = IssueCategory;
	Parms.IssueMessage = IssueMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestPolicy.TestFloatCompare
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Other                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECompare                Comparison                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETestIssueType          IssueType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueCategory                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueMessage                                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Tolerance                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestPolicy::TestFloatCompare(float& Value, float Other, enum class ECompare Comparison, enum class ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage, float Tolerance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestPolicy", "TestFloatCompare");

	Params::UTestPolicy_TestFloatCompare_Params Parms{};

	Parms.Value = Value;
	Parms.Other = Other;
	Parms.Comparison = Comparison;
	Parms.IssueType = IssueType;
	Parms.IssueCategory = IssueCategory;
	Parms.IssueMessage = IssueMessage;
	Parms.Tolerance = Tolerance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestPolicy.TestBoolIsTrue
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETestIssueType          IssueType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueCategory                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueMessage                                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestPolicy::TestBoolIsTrue(bool& Value, enum class ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestPolicy", "TestBoolIsTrue");

	Params::UTestPolicy_TestBoolIsTrue_Params Parms{};

	Parms.Value = Value;
	Parms.IssueType = IssueType;
	Parms.IssueCategory = IssueCategory;
	Parms.IssueMessage = IssueMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestPolicy.TestBoolIsFalse
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETestIssueType          IssueType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueCategory                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueMessage                                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestPolicy::TestBoolIsFalse(bool& Value, enum class ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestPolicy", "TestBoolIsFalse");

	Params::UTestPolicy_TestBoolIsFalse_Params Parms{};

	Parms.Value = Value;
	Parms.IssueType = IssueType;
	Parms.IssueCategory = IssueCategory;
	Parms.IssueMessage = IssueMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestPolicy.TestAssetTraits
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Asset                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestPolicy::TestAssetTraits(class UObject* Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestPolicy", "TestAssetTraits");

	Params::UTestPolicy_TestAssetTraits_Params Parms{};

	Parms.Asset = Asset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestPolicy.TestAssetAudit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Asset                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestPolicy::TestAssetAudit(class UObject* Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestPolicy", "TestAssetAudit");

	Params::UTestPolicy_TestAssetAudit_Params Parms{};

	Parms.Asset = Asset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestPolicy.SetReportContext
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FGbxProbeId>         AssetContexts                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UTestPolicy::SetReportContext(class UObject* WorldContextObject, TArray<struct FGbxProbeId>& AssetContexts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestPolicy", "SetReportContext");

	Params::UTestPolicy_SetReportContext_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AssetContexts = AssetContexts;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestPolicy.ReportResult
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bSucceeded                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueCategory                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueMessage                                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGbxProbeId                 AssetContext                                                     (Parm, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETestIssueType          FailedIssueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestPolicy::ReportResult(bool bSucceeded, const class FString& IssueCategory, const class FString& IssueMessage, const struct FGbxProbeId& AssetContext, enum class ETestIssueType FailedIssueType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestPolicy", "ReportResult");

	Params::UTestPolicy_ReportResult_Params Parms{};

	Parms.bSucceeded = bSucceeded;
	Parms.IssueCategory = IssueCategory;
	Parms.IssueMessage = IssueMessage;
	Parms.AssetContext = AssetContext;
	Parms.FailedIssueType = FailedIssueType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestPolicy.ReportIssue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETestIssueType          IssueType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueCategory                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IssueMessage                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestPolicy::ReportIssue(enum class ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestPolicy", "ReportIssue");

	Params::UTestPolicy_ReportIssue_Params Parms{};

	Parms.IssueType = IssueType;
	Parms.IssueCategory = IssueCategory;
	Parms.IssueMessage = IssueMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestPolicy.PushAssetContext
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGbxProbeId                 ID                                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestPolicy::PushAssetContext(const struct FGbxProbeId& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestPolicy", "PushAssetContext");

	Params::UTestPolicy_PushAssetContext_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestPolicy.PopAssetContext
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGbxProbeId                 ID                                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestPolicy::PopAssetContext(const struct FGbxProbeId& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestPolicy", "PopAssetContext");

	Params::UTestPolicy_PopAssetContext_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestPolicy.OnRunTestCommand
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class FString                      TestCommand                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestPolicy::OnRunTestCommand(const class FString& TestCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestPolicy", "OnRunTestCommand");

	Params::UTestPolicy_OnRunTestCommand_Params Parms{};

	Parms.TestCommand = TestCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestPolicy.OnGetTestCommands
// (Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// TArray<class FString>              TestCommands                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              PrettyNames                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UTestPolicy::OnGetTestCommands(TArray<class FString>* TestCommands, TArray<class FString>* PrettyNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestPolicy", "OnGetTestCommands");

	Params::UTestPolicy_OnGetTestCommands_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TestCommands != nullptr)
		*TestCommands = std::move(Parms.TestCommands);

	if (PrettyNames != nullptr)
		*PrettyNames = std::move(Parms.PrettyNames);

}


// Function GbxTest.TestPolicy.ClearSavedTestCommand
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UTestPolicy::ClearSavedTestCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestPolicy", "ClearSavedTestCommand");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxTest.TestPolicyContent
// (None)

class UClass* UTestPolicyContent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestPolicyContent");

	return Clss;
}


// TestPolicyContent GbxTest.Default__TestPolicyContent
// (Public, ClassDefaultObject, ArchetypeObject)

class UTestPolicyContent* UTestPolicyContent::GetDefaultObj()
{
	static class UTestPolicyContent* Default = nullptr;

	if (!Default)
		Default = static_cast<UTestPolicyContent*>(UTestPolicyContent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxTest.TestPolicyContent.OnValidForImport
// (Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// class UObject*                     ImportObject                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestPolicyContent::OnValidForImport(class UObject* ImportObject, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestPolicyContent", "OnValidForImport");

	Params::UTestPolicyContent_OnValidForImport_Params Parms{};

	Parms.ImportObject = ImportObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Class GbxTest.TestPolicySimulation
// (None)

class UClass* UTestPolicySimulation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestPolicySimulation");

	return Clss;
}


// TestPolicySimulation GbxTest.Default__TestPolicySimulation
// (Public, ClassDefaultObject, ArchetypeObject)

class UTestPolicySimulation* UTestPolicySimulation::GetDefaultObj()
{
	static class UTestPolicySimulation* Default = nullptr;

	if (!Default)
		Default = static_cast<UTestPolicySimulation*>(UTestPolicySimulation::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxTest.TestPolicySimulation.StopPlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UTestPolicySimulation::StopPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestPolicySimulation", "StopPlay");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestPolicySimulation.RunTestDrivers
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<TSubclassOf<class AActor>>  TestDrivers                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeLimit                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestPolicySimulation::RunTestDrivers(TArray<TSubclassOf<class AActor>>& TestDrivers, float Timeout, float TimeLimit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestPolicySimulation", "RunTestDrivers");

	Params::UTestPolicySimulation_RunTestDrivers_Params Parms{};

	Parms.TestDrivers = TestDrivers;
	Parms.Timeout = Timeout;
	Parms.TimeLimit = TimeLimit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestPolicySimulation.PlayTestMap
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      MapName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TSubclassOf<class AActor>>  TestDrivers                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeLimit                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLoadMapOnce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLoadMapIfNotLoaded                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestPolicySimulation::PlayTestMap(const class FString& MapName, TArray<TSubclassOf<class AActor>>& TestDrivers, float Timeout, float TimeLimit, bool bLoadMapOnce, bool bLoadMapIfNotLoaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestPolicySimulation", "PlayTestMap");

	Params::UTestPolicySimulation_PlayTestMap_Params Parms{};

	Parms.MapName = MapName;
	Parms.TestDrivers = TestDrivers;
	Parms.Timeout = Timeout;
	Parms.TimeLimit = TimeLimit;
	Parms.bLoadMapOnce = bLoadMapOnce;
	Parms.bLoadMapIfNotLoaded = bLoadMapIfNotLoaded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestPolicySimulation.PlayMap
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      MapName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TSubclassOf<class AActor>>  TestDrivers                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeLimit                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestPolicySimulation::PlayMap(const class FString& MapName, TArray<TSubclassOf<class AActor>>& TestDrivers, float Timeout, float TimeLimit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestPolicySimulation", "PlayMap");

	Params::UTestPolicySimulation_PlayMap_Params Parms{};

	Parms.MapName = MapName;
	Parms.TestDrivers = TestDrivers;
	Parms.Timeout = Timeout;
	Parms.TimeLimit = TimeLimit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestPolicySimulation.OnMapTraveled
// (Event, Public, BlueprintEvent)
// Parameters:
// class UWorld*                      NewWorld                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestPolicySimulation::OnMapTraveled(class UWorld* NewWorld)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestPolicySimulation", "OnMapTraveled");

	Params::UTestPolicySimulation_OnMapTraveled_Params Parms{};

	Parms.NewWorld = NewWorld;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxTest.TestPolicySimulation.IntendToMapTravel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               WillMapTravel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestPolicySimulation::IntendToMapTravel(bool WillMapTravel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestPolicySimulation", "IntendToMapTravel");

	Params::UTestPolicySimulation_IntendToMapTravel_Params Parms{};

	Parms.WillMapTravel = WillMapTravel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTest.TestPolicySimulation.AddTestDriver
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class AActor>          TestDriver                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTestPolicySimulation::AddTestDriver(TSubclassOf<class AActor> TestDriver)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestPolicySimulation", "AddTestDriver");

	Params::UTestPolicySimulation_AddTestDriver_Params Parms{};

	Parms.TestDriver = TestDriver;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


