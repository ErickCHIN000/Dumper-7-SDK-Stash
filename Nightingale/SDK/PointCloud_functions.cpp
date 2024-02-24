#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PointCloud.PointCloud
// (None)

class UClass* UPointCloud::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PointCloud");

	return Clss;
}


// PointCloud PointCloud.Default__PointCloud
// (Public, ClassDefaultObject, ArchetypeObject)

class UPointCloud* UPointCloud::GetDefaultObj()
{
	static class UPointCloud* Default = nullptr;

	if (!Default)
		Default = static_cast<UPointCloud*>(UPointCloud::StaticClass()->DefaultObject);

	return Default;
}


// Function PointCloud.PointCloud.StopLogging
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPointCloud::StopLogging()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloud", "StopLogging");

	Params::UPointCloud_StopLogging_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloud.StartLogging
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InFilename                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPointCloud::StartLogging(const class FString& InFilename)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloud", "StartLogging");

	Params::UPointCloud_StartLogging_Params Parms{};

	Parms.InFilename = InFilename;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloud.SaveToDisk
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPointCloud::SaveToDisk(const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloud", "SaveToDisk");

	Params::UPointCloud_SaveToDisk_Params Parms{};

	Parms.Filename = Filename;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloud.ReplacePoints
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBox                        ReimportBounds                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPointCloud::ReplacePoints(const class FString& Filename, struct FBox& ReimportBounds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloud", "ReplacePoints");

	Params::UPointCloud_ReplacePoints_Params Parms{};

	Parms.Filename = Filename;
	Parms.ReimportBounds = ReimportBounds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloud.Reimport
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBox                        ReimportBounds                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPointCloud::Reimport(struct FBox& ReimportBounds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloud", "Reimport");

	Params::UPointCloud_Reimport_Params Parms{};

	Parms.ReimportBounds = ReimportBounds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloud.MakeView
// (Native, Public, BlueprintCallable)
// Parameters:
// class UPointCloudView*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPointCloudView* UPointCloud::MakeView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloud", "MakeView");

	Params::UPointCloud_MakeView_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloud.LoggingEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPointCloud::LoggingEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloud", "LoggingEnabled");

	Params::UPointCloud_LoggingEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloud.LoadFromPoints
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPointCloudPoint>    InPoints                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPointCloud::LoadFromPoints(TArray<struct FPointCloudPoint>& InPoints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloud", "LoadFromPoints");

	Params::UPointCloud_LoadFromPoints_Params Parms{};

	Parms.InPoints = InPoints;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloud.HasMetaDataAttribute
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPointCloud::HasMetaDataAttribute(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloud", "HasMetaDataAttribute");

	Params::UPointCloud_HasMetaDataAttribute_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloud.HasDefaultAttribute
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPointCloud::HasDefaultAttribute(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloud", "HasDefaultAttribute");

	Params::UPointCloud_HasDefaultAttribute_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloud.GetMetadataAttributes
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSet<class FString>                ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TSet<class FString> UPointCloud::GetMetadataAttributes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloud", "GetMetadataAttributes");

	Params::UPointCloud_GetMetadataAttributes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloud.GetLoadedFiles
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UPointCloud::GetLoadedFiles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloud", "GetLoadedFiles");

	Params::UPointCloud_GetLoadedFiles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloud.GetDefaultAttributes
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UPointCloud::GetDefaultAttributes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloud", "GetDefaultAttributes");

	Params::UPointCloud_GetDefaultAttributes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloud.GetCount
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPointCloud::GetCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloud", "GetCount");

	Params::UPointCloud_GetCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloud.GetBounds
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FBox UPointCloud::GetBounds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloud", "GetBounds");

	Params::UPointCloud_GetBounds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PointCloud.PointCloudImpl
// (None)

class UClass* UPointCloudImpl::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PointCloudImpl");

	return Clss;
}


// PointCloudImpl PointCloud.Default__PointCloudImpl
// (Public, ClassDefaultObject, ArchetypeObject)

class UPointCloudImpl* UPointCloudImpl::GetDefaultObj()
{
	static class UPointCloudImpl* Default = nullptr;

	if (!Default)
		Default = static_cast<UPointCloudImpl*>(UPointCloudImpl::StaticClass()->DefaultObject);

	return Default;
}


// Class PointCloud.SliceAndDiceCommandlet
// (None)

class UClass* USliceAndDiceCommandlet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SliceAndDiceCommandlet");

	return Clss;
}


// SliceAndDiceCommandlet PointCloud.Default__SliceAndDiceCommandlet
// (Public, ClassDefaultObject, ArchetypeObject)

class USliceAndDiceCommandlet* USliceAndDiceCommandlet::GetDefaultObj()
{
	static class USliceAndDiceCommandlet* Default = nullptr;

	if (!Default)
		Default = static_cast<USliceAndDiceCommandlet*>(USliceAndDiceCommandlet::StaticClass()->DefaultObject);

	return Default;
}


// Class PointCloud.SliceAndDiceManagedActors
// (None)

class UClass* USliceAndDiceManagedActors::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SliceAndDiceManagedActors");

	return Clss;
}


// SliceAndDiceManagedActors PointCloud.Default__SliceAndDiceManagedActors
// (Public, ClassDefaultObject, ArchetypeObject)

class USliceAndDiceManagedActors* USliceAndDiceManagedActors::GetDefaultObj()
{
	static class USliceAndDiceManagedActors* Default = nullptr;

	if (!Default)
		Default = static_cast<USliceAndDiceManagedActors*>(USliceAndDiceManagedActors::StaticClass()->DefaultObject);

	return Default;
}


// Class PointCloud.SliceAndDiceMapping
// (None)

class UClass* USliceAndDiceMapping::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SliceAndDiceMapping");

	return Clss;
}


// SliceAndDiceMapping PointCloud.Default__SliceAndDiceMapping
// (Public, ClassDefaultObject, ArchetypeObject)

class USliceAndDiceMapping* USliceAndDiceMapping::GetDefaultObj()
{
	static class USliceAndDiceMapping* Default = nullptr;

	if (!Default)
		Default = static_cast<USliceAndDiceMapping*>(USliceAndDiceMapping::StaticClass()->DefaultObject);

	return Default;
}


// Function PointCloud.SliceAndDiceMapping.ClearManagedActors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bClearDisabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USliceAndDiceMapping::ClearManagedActors(bool bClearDisabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliceAndDiceMapping", "ClearManagedActors");

	Params::USliceAndDiceMapping_ClearManagedActors_Params Parms{};

	Parms.bClearDisabled = bClearDisabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PointCloud.SliceAndDiceManager
// (Actor)

class UClass* ASliceAndDiceManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SliceAndDiceManager");

	return Clss;
}


// SliceAndDiceManager PointCloud.Default__SliceAndDiceManager
// (Public, ClassDefaultObject, ArchetypeObject)

class ASliceAndDiceManager* ASliceAndDiceManager::GetDefaultObj()
{
	static class ASliceAndDiceManager* Default = nullptr;

	if (!Default)
		Default = static_cast<ASliceAndDiceManager*>(ASliceAndDiceManager::StaticClass()->DefaultObject);

	return Default;
}


// Function PointCloud.SliceAndDiceManager.SetLogging
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInLoggingEnabled                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InLogPath                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASliceAndDiceManager::SetLogging(bool bInLoggingEnabled, const class FString& InLogPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliceAndDiceManager", "SetLogging");

	Params::ASliceAndDiceManager_SetLogging_Params Parms{};

	Parms.bInLoggingEnabled = bInLoggingEnabled;
	Parms.InLogPath = InLogPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PointCloud.SliceAndDiceManager.RunRulesOnMappings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class USliceAndDiceMapping*>SelectedMappings                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ASliceAndDiceManager::RunRulesOnMappings(TArray<class USliceAndDiceMapping*>& SelectedMappings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliceAndDiceManager", "RunRulesOnMappings");

	Params::ASliceAndDiceManager_RunRulesOnMappings_Params Parms{};

	Parms.SelectedMappings = SelectedMappings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.SliceAndDiceManager.RunRules
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ASliceAndDiceManager::RunRules()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliceAndDiceManager", "RunRules");

	Params::ASliceAndDiceManager_RunRules_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.SliceAndDiceManager.RunReportOnMappings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class USliceAndDiceMapping*>SelectedMappings                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EPointCloudReportLevel  Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ASliceAndDiceManager::RunReportOnMappings(TArray<class USliceAndDiceMapping*>& SelectedMappings, enum class EPointCloudReportLevel Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliceAndDiceManager", "RunReportOnMappings");

	Params::ASliceAndDiceManager_RunReportOnMappings_Params Parms{};

	Parms.SelectedMappings = SelectedMappings;
	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.SliceAndDiceManager.RunReport
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EPointCloudReportLevel  Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ASliceAndDiceManager::RunReport(enum class EPointCloudReportLevel Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliceAndDiceManager", "RunReport");

	Params::ASliceAndDiceManager_RunReport_Params Parms{};

	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.SliceAndDiceManager.RemoveMapping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USliceAndDiceMapping*        InMapping                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeleteManagedActors                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ASliceAndDiceManager::RemoveMapping(class USliceAndDiceMapping* InMapping, bool bDeleteManagedActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliceAndDiceManager", "RemoveMapping");

	Params::ASliceAndDiceManager_RemoveMapping_Params Parms{};

	Parms.InMapping = InMapping;
	Parms.bDeleteManagedActors = bDeleteManagedActors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.SliceAndDiceManager.ReloadPointCloudsOnMappings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class USliceAndDiceMapping*>SelectedMappings                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ASliceAndDiceManager::ReloadPointCloudsOnMappings(TArray<class USliceAndDiceMapping*>& SelectedMappings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliceAndDiceManager", "ReloadPointCloudsOnMappings");

	Params::ASliceAndDiceManager_ReloadPointCloudsOnMappings_Params Parms{};

	Parms.SelectedMappings = SelectedMappings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.SliceAndDiceManager.ReloadAllPointClouds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ASliceAndDiceManager::ReloadAllPointClouds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliceAndDiceManager", "ReloadAllPointClouds");

	Params::ASliceAndDiceManager_ReloadAllPointClouds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.SliceAndDiceManager.NumMappings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ASliceAndDiceManager::NumMappings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliceAndDiceManager", "NumMappings");

	Params::ASliceAndDiceManager_NumMappings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.SliceAndDiceManager.MoveMappings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class USliceAndDiceMapping*>InMapping                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ASliceAndDiceManager*        InTargetManager                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ASliceAndDiceManager::MoveMappings(TArray<class USliceAndDiceMapping*>& InMapping, class ASliceAndDiceManager* InTargetManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliceAndDiceManager", "MoveMappings");

	Params::ASliceAndDiceManager_MoveMappings_Params Parms{};

	Parms.InMapping = InMapping;
	Parms.InTargetManager = InTargetManager;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.SliceAndDiceManager.MoveMapping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USliceAndDiceMapping*        InMapping                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ASliceAndDiceManager*        InTargetManager                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ASliceAndDiceManager::MoveMapping(class USliceAndDiceMapping* InMapping, class ASliceAndDiceManager* InTargetManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliceAndDiceManager", "MoveMapping");

	Params::ASliceAndDiceManager_MoveMapping_Params Parms{};

	Parms.InMapping = InMapping;
	Parms.InTargetManager = InTargetManager;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.SliceAndDiceManager.GetSliceAndDiceManagersInLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULevel*                      InLevel                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class ASliceAndDiceManager*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class ASliceAndDiceManager*> ASliceAndDiceManager::GetSliceAndDiceManagersInLevel(class ULevel* InLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliceAndDiceManager", "GetSliceAndDiceManagersInLevel");

	Params::ASliceAndDiceManager_GetSliceAndDiceManagersInLevel_Params Parms{};

	Parms.InLevel = InLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.SliceAndDiceManager.GetSliceAndDiceManagers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      InWorld                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class ASliceAndDiceManager*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class ASliceAndDiceManager*> ASliceAndDiceManager::GetSliceAndDiceManagers(class UWorld* InWorld)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliceAndDiceManager", "GetSliceAndDiceManagers");

	Params::ASliceAndDiceManager_GetSliceAndDiceManagers_Params Parms{};

	Parms.InWorld = InWorld;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.SliceAndDiceManager.FindOrAddMapping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPointCloud*                 InPointCloud                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPointCloudSliceAndDiceRuleSet*InRuleSet                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USliceAndDiceMapping*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USliceAndDiceMapping* ASliceAndDiceManager::FindOrAddMapping(class UPointCloud* InPointCloud, class UPointCloudSliceAndDiceRuleSet* InRuleSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliceAndDiceManager", "FindOrAddMapping");

	Params::ASliceAndDiceManager_FindOrAddMapping_Params Parms{};

	Parms.InPointCloud = InPointCloud;
	Parms.InRuleSet = InRuleSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.SliceAndDiceManager.FindMapping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPointCloud*                 InPointCloud                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPointCloudSliceAndDiceRuleSet*InRuleSet                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USliceAndDiceMapping*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USliceAndDiceMapping* ASliceAndDiceManager::FindMapping(class UPointCloud* InPointCloud, class UPointCloudSliceAndDiceRuleSet* InRuleSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliceAndDiceManager", "FindMapping");

	Params::ASliceAndDiceManager_FindMapping_Params Parms{};

	Parms.InPointCloud = InPointCloud;
	Parms.InRuleSet = InRuleSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.SliceAndDiceManager.DeleteManagedActorsFromMappings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class USliceAndDiceMapping*>InMappings                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bCleanDisabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ASliceAndDiceManager::DeleteManagedActorsFromMappings(TArray<class USliceAndDiceMapping*>& InMappings, bool bCleanDisabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliceAndDiceManager", "DeleteManagedActorsFromMappings");

	Params::ASliceAndDiceManager_DeleteManagedActorsFromMappings_Params Parms{};

	Parms.InMappings = InMappings;
	Parms.bCleanDisabled = bCleanDisabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.SliceAndDiceManager.DeleteManagedActorsFromMapping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USliceAndDiceMapping*        InMapping                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCleanDisabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ASliceAndDiceManager::DeleteManagedActorsFromMapping(class USliceAndDiceMapping* InMapping, bool bCleanDisabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliceAndDiceManager", "DeleteManagedActorsFromMapping");

	Params::ASliceAndDiceManager_DeleteManagedActorsFromMapping_Params Parms{};

	Parms.InMapping = InMapping;
	Parms.bCleanDisabled = bCleanDisabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.SliceAndDiceManager.DeleteAllManagedActors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bCleanDisabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ASliceAndDiceManager::DeleteAllManagedActors(bool bCleanDisabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliceAndDiceManager", "DeleteAllManagedActors");

	Params::ASliceAndDiceManager_DeleteAllManagedActors_Params Parms{};

	Parms.bCleanDisabled = bCleanDisabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.SliceAndDiceManager.CreateSliceAndDiceManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      InWorld                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ASliceAndDiceManager*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ASliceAndDiceManager* ASliceAndDiceManager::CreateSliceAndDiceManager(class UWorld* InWorld)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliceAndDiceManager", "CreateSliceAndDiceManager");

	Params::ASliceAndDiceManager_CreateSliceAndDiceManager_Params Parms{};

	Parms.InWorld = InWorld;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.SliceAndDiceManager.AddNewMapping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USliceAndDiceMapping*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USliceAndDiceMapping* ASliceAndDiceManager::AddNewMapping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliceAndDiceManager", "AddNewMapping");

	Params::ASliceAndDiceManager_AddNewMapping_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PointCloud.PointCloudRule
// (None)

class UClass* UPointCloudRule::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PointCloudRule");

	return Clss;
}


// PointCloudRule PointCloud.Default__PointCloudRule
// (Public, ClassDefaultObject, ArchetypeObject)

class UPointCloudRule* UPointCloudRule::GetDefaultObj()
{
	static class UPointCloudRule* Default = nullptr;

	if (!Default)
		Default = static_cast<UPointCloudRule*>(UPointCloudRule::StaticClass()->DefaultObject);

	return Default;
}


// Class PointCloud.PointCloudSliceAndDiceRuleSet
// (None)

class UClass* UPointCloudSliceAndDiceRuleSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PointCloudSliceAndDiceRuleSet");

	return Clss;
}


// PointCloudSliceAndDiceRuleSet PointCloud.Default__PointCloudSliceAndDiceRuleSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UPointCloudSliceAndDiceRuleSet* UPointCloudSliceAndDiceRuleSet::GetDefaultObj()
{
	static class UPointCloudSliceAndDiceRuleSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UPointCloudSliceAndDiceRuleSet*>(UPointCloudSliceAndDiceRuleSet::StaticClass()->DefaultObject);

	return Default;
}


// Function PointCloud.PointCloudSliceAndDiceRuleSet.SwapRules
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPointCloudRule*             InRuleParent                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InRuleSlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPointCloudRule*             InTargetParent                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InTargetSlotIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPointCloudSliceAndDiceRuleSet::SwapRules(class UPointCloudRule* InRuleParent, int32 InRuleSlotIndex, class UPointCloudRule* InTargetParent, int32 InTargetSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudSliceAndDiceRuleSet", "SwapRules");

	Params::UPointCloudSliceAndDiceRuleSet_SwapRules_Params Parms{};

	Parms.InRuleParent = InRuleParent;
	Parms.InRuleSlotIndex = InRuleSlotIndex;
	Parms.InTargetParent = InTargetParent;
	Parms.InTargetSlotIndex = InTargetSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloudSliceAndDiceRuleSet.RemoveRule
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPointCloudRule*             InParent                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InSlotIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPointCloudRule*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPointCloudRule* UPointCloudSliceAndDiceRuleSet::RemoveRule(class UPointCloudRule* InParent, int32 InSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudSliceAndDiceRuleSet", "RemoveRule");

	Params::UPointCloudSliceAndDiceRuleSet_RemoveRule_Params Parms{};

	Parms.InParent = InParent;
	Parms.InSlotIndex = InSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloudSliceAndDiceRuleSet.MoveRule
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPointCloudRule*             InRuleParent                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InRuleSlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPointCloudRule*             InTargetParent                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InTargetSlotIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPointCloudSliceAndDiceRuleSet::MoveRule(class UPointCloudRule* InRuleParent, int32 InRuleSlotIndex, class UPointCloudRule* InTargetParent, int32 InTargetSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudSliceAndDiceRuleSet", "MoveRule");

	Params::UPointCloudSliceAndDiceRuleSet_MoveRule_Params Parms{};

	Parms.InRuleParent = InRuleParent;
	Parms.InRuleSlotIndex = InRuleSlotIndex;
	Parms.InTargetParent = InTargetParent;
	Parms.InTargetSlotIndex = InTargetSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloudSliceAndDiceRuleSet.GetRules
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UPointCloudRule*>     ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class UPointCloudRule*> UPointCloudSliceAndDiceRuleSet::GetRules()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudSliceAndDiceRuleSet", "GetRules");

	Params::UPointCloudSliceAndDiceRuleSet_GetRules_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloudSliceAndDiceRuleSet.CreateRule
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      RuleName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPointCloudRule*             ParentRule                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SlotIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPointCloudRule*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPointCloudRule* UPointCloudSliceAndDiceRuleSet::CreateRule(const class FString& RuleName, class UPointCloudRule* ParentRule, int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudSliceAndDiceRuleSet", "CreateRule");

	Params::UPointCloudSliceAndDiceRuleSet_CreateRule_Params Parms{};

	Parms.RuleName = RuleName;
	Parms.ParentRule = ParentRule;
	Parms.SlotIndex = SlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloudSliceAndDiceRuleSet.CopyRule
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPointCloudRule*             InRule                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPointCloudRule*             InTargetParent                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InTargetSlotIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPointCloudSliceAndDiceRuleSet::CopyRule(class UPointCloudRule* InRule, class UPointCloudRule* InTargetParent, int32 InTargetSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudSliceAndDiceRuleSet", "CopyRule");

	Params::UPointCloudSliceAndDiceRuleSet_CopyRule_Params Parms{};

	Parms.InRule = InRule;
	Parms.InTargetParent = InTargetParent;
	Parms.InTargetSlotIndex = InTargetSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloudSliceAndDiceRuleSet.AddRule
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPointCloudRule*             InRule                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPointCloudRule*             InParent                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InSlotIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPointCloudSliceAndDiceRuleSet::AddRule(class UPointCloudRule* InRule, class UPointCloudRule* InParent, int32 InSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudSliceAndDiceRuleSet", "AddRule");

	Params::UPointCloudSliceAndDiceRuleSet_AddRule_Params Parms{};

	Parms.InRule = InRule;
	Parms.InParent = InParent;
	Parms.InSlotIndex = InSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PointCloud.PointCloudRuleSlot
// (None)

class UClass* UPointCloudRuleSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PointCloudRuleSlot");

	return Clss;
}


// PointCloudRuleSlot PointCloud.Default__PointCloudRuleSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UPointCloudRuleSlot* UPointCloudRuleSlot::GetDefaultObj()
{
	static class UPointCloudRuleSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UPointCloudRuleSlot*>(UPointCloudRuleSlot::StaticClass()->DefaultObject);

	return Default;
}


// Class PointCloud.PointCloudView
// (None)

class UClass* UPointCloudView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PointCloudView");

	return Clss;
}


// PointCloudView PointCloud.Default__PointCloudView
// (Public, ClassDefaultObject, ArchetypeObject)

class UPointCloudView* UPointCloudView::GetDefaultObj()
{
	static class UPointCloudView* Default = nullptr;

	if (!Default)
		Default = static_cast<UPointCloudView*>(UPointCloudView::StaticClass()->DefaultObject);

	return Default;
}


// Function PointCloud.PointCloudView.MakeChildView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPointCloudView*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPointCloudView* UPointCloudView::MakeChildView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudView", "MakeChildView");

	Params::UPointCloudView_MakeChildView_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloudView.GetUniqueMetadataValuesAndCounts
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, int32>         ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FString, int32> UPointCloudView::GetUniqueMetadataValuesAndCounts(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudView", "GetUniqueMetadataValuesAndCounts");

	Params::UPointCloudView_GetUniqueMetadataValuesAndCounts_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloudView.GetUniqueMetadataValues
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UPointCloudView::GetUniqueMetadataValues(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudView", "GetUniqueMetadataValues");

	Params::UPointCloudView_GetUniqueMetadataValues_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloudView.GetTransformsAndIds
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FTransform>          OutTransforms                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      OutIds                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPointCloudView::GetTransformsAndIds(TArray<struct FTransform>* OutTransforms, TArray<int32>* OutIds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudView", "GetTransformsAndIds");

	Params::UPointCloudView_GetTransformsAndIds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutTransforms != nullptr)
		*OutTransforms = std::move(Parms.OutTransforms);

	if (OutIds != nullptr)
		*OutIds = std::move(Parms.OutIds);

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloudView.GetTransforms
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FTransform>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FTransform> UPointCloudView::GetTransforms()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudView", "GetTransforms");

	Params::UPointCloudView_GetTransforms_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloudView.GetResultsBoundingBox
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FBox UPointCloudView::GetResultsBoundingBox()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudView", "GetResultsBoundingBox");

	Params::UPointCloudView_GetResultsBoundingBox_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloudView.GetPointCloud
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPointCloud*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPointCloud* UPointCloudView::GetPointCloud()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudView", "GetPointCloud");

	Params::UPointCloudView_GetPointCloud_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloudView.GetMetadataValuesArrayAsInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<int32> UPointCloudView::GetMetadataValuesArrayAsInt(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudView", "GetMetadataValuesArrayAsInt");

	Params::UPointCloudView_GetMetadataValuesArrayAsInt_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloudView.GetMetadataValuesArrayAsFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<float> UPointCloudView::GetMetadataValuesArrayAsFloat(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudView", "GetMetadataValuesArrayAsFloat");

	Params::UPointCloudView_GetMetadataValuesArrayAsFloat_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloudView.GetMetadataValues
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<int32, class FString>         ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<int32, class FString> UPointCloudView::GetMetadataValues(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudView", "GetMetadataValues");

	Params::UPointCloudView_GetMetadataValues_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloudView.GetMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              POINTID                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, class FString> ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FString, class FString> UPointCloudView::GetMetadata(int32 POINTID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudView", "GetMetadata");

	Params::UPointCloudView_GetMetadata_Params Parms{};

	Parms.POINTID = POINTID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloudView.GetIndexes
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<int32>                      OutIds                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPointCloudView::GetIndexes(TArray<int32>* OutIds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudView", "GetIndexes");

	Params::UPointCloudView_GetIndexes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutIds != nullptr)
		*OutIds = std::move(Parms.OutIds);

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloudView.GetHash
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPointCloudView::GetHash()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudView", "GetHash");

	Params::UPointCloudView_GetHash_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloudView.GetCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPointCloudView::GetCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudView", "GetCount");

	Params::UPointCloudView_GetCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PointCloud.PointCloudView.FilterOnTile
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBox                        QueryGridBounds                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int32                              InNumTilesX                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InNumTilesY                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InNumTilesZ                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InTileX                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InTileY                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InTileZ                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInvertSelection                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFilterMode             Mode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPointCloudView::FilterOnTile(struct FBox& QueryGridBounds, int32 InNumTilesX, int32 InNumTilesY, int32 InNumTilesZ, int32 InTileX, int32 InTileY, int32 InTileZ, bool bInvertSelection, enum class EFilterMode Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudView", "FilterOnTile");

	Params::UPointCloudView_FilterOnTile_Params Parms{};

	Parms.QueryGridBounds = QueryGridBounds;
	Parms.InNumTilesX = InNumTilesX;
	Parms.InNumTilesY = InNumTilesY;
	Parms.InNumTilesZ = InNumTilesZ;
	Parms.InTileX = InTileX;
	Parms.InTileY = InTileY;
	Parms.InTileZ = InTileZ;
	Parms.bInvertSelection = bInvertSelection;
	Parms.Mode = Mode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PointCloud.PointCloudView.FilterOnRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              StartIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              EndIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFilterMode             Mode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPointCloudView::FilterOnRange(int32 StartIndex, int32 EndIndex, enum class EFilterMode Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudView", "FilterOnRange");

	Params::UPointCloudView_FilterOnRange_Params Parms{};

	Parms.StartIndex = StartIndex;
	Parms.EndIndex = EndIndex;
	Parms.Mode = Mode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PointCloud.PointCloudView.FilterOnPointExpression
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Expression                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFilterMode             Mode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPointCloudView::FilterOnPointExpression(const class FString& Expression, enum class EFilterMode Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudView", "FilterOnPointExpression");

	Params::UPointCloudView_FilterOnPointExpression_Params Parms{};

	Parms.Expression = Expression;
	Parms.Mode = Mode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PointCloud.PointCloudView.FilterOnOrientedBoundingBox
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  InOBB                                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInvertSelection                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFilterMode             Mode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPointCloudView::FilterOnOrientedBoundingBox(struct FTransform& InOBB, bool bInvertSelection, enum class EFilterMode Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudView", "FilterOnOrientedBoundingBox");

	Params::UPointCloudView_FilterOnOrientedBoundingBox_Params Parms{};

	Parms.InOBB = InOBB;
	Parms.bInvertSelection = bInvertSelection;
	Parms.Mode = Mode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PointCloud.PointCloudView.FilterOnMetadataPattern
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      MetaData                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Pattern                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFilterMode             Mode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPointCloudView::FilterOnMetadataPattern(const class FString& MetaData, const class FString& Pattern, enum class EFilterMode Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudView", "FilterOnMetadataPattern");

	Params::UPointCloudView_FilterOnMetadataPattern_Params Parms{};

	Parms.MetaData = MetaData;
	Parms.Pattern = Pattern;
	Parms.Mode = Mode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PointCloud.PointCloudView.FilterOnMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      MetaData                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFilterMode             Mode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPointCloudView::FilterOnMetadata(const class FString& MetaData, const class FString& Value, enum class EFilterMode Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudView", "FilterOnMetadata");

	Params::UPointCloudView_FilterOnMetadata_Params Parms{};

	Parms.MetaData = MetaData;
	Parms.Value = Value;
	Parms.Mode = Mode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PointCloud.PointCloudView.FilterOnIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFilterMode             Mode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPointCloudView::FilterOnIndex(int32 Index, enum class EFilterMode Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudView", "FilterOnIndex");

	Params::UPointCloudView_FilterOnIndex_Params Parms{};

	Parms.Index = Index;
	Parms.Mode = Mode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PointCloud.PointCloudView.FilterOnBoundingSphere
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Center                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFilterMode             Mode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPointCloudView::FilterOnBoundingSphere(struct FVector& Center, float Radius, enum class EFilterMode Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudView", "FilterOnBoundingSphere");

	Params::UPointCloudView_FilterOnBoundingSphere_Params Parms{};

	Parms.Center = Center;
	Parms.Radius = Radius;
	Parms.Mode = Mode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PointCloud.PointCloudView.FilterOnBoundingBox
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBox                        BoundingBox                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bInvertSelection                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFilterMode             Mode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPointCloudView::FilterOnBoundingBox(struct FBox& BoundingBox, bool bInvertSelection, enum class EFilterMode Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudView", "FilterOnBoundingBox");

	Params::UPointCloudView_FilterOnBoundingBox_Params Parms{};

	Parms.BoundingBox = BoundingBox;
	Parms.bInvertSelection = bInvertSelection;
	Parms.Mode = Mode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PointCloud.PointCloudView.CountResultsInBox
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                        Box                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPointCloudView::CountResultsInBox(struct FBox& Box)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointCloudView", "CountResultsInBox");

	Params::UPointCloudView_CountResultsInBox_Params Parms{};

	Parms.Box = Box;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PointCloud.Spline
// (Actor)

class UClass* ASpline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Spline");

	return Clss;
}


// Spline PointCloud.Default__Spline
// (Public, ClassDefaultObject, ArchetypeObject)

class ASpline* ASpline::GetDefaultObj()
{
	static class ASpline* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpline*>(ASpline::StaticClass()->DefaultObject);

	return Default;
}


// Class PointCloud.WaterIslandShores
// (Actor)

class UClass* AWaterIslandShores::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterIslandShores");

	return Clss;
}


// WaterIslandShores PointCloud.Default__WaterIslandShores
// (Public, ClassDefaultObject, ArchetypeObject)

class AWaterIslandShores* AWaterIslandShores::GetDefaultObj()
{
	static class AWaterIslandShores* Default = nullptr;

	if (!Default)
		Default = static_cast<AWaterIslandShores*>(AWaterIslandShores::StaticClass()->DefaultObject);

	return Default;
}

}


