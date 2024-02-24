#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class HairStrandsCore.OptimusGroomDataInterface
// (None)

class UClass* UOptimusGroomDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusGroomDataInterface");

	return Clss;
}


// OptimusGroomDataInterface HairStrandsCore.Default__OptimusGroomDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusGroomDataInterface* UOptimusGroomDataInterface::GetDefaultObj()
{
	static class UOptimusGroomDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusGroomDataInterface*>(UOptimusGroomDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.OptimusGroomDataProvider
// (None)

class UClass* UOptimusGroomDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusGroomDataProvider");

	return Clss;
}


// OptimusGroomDataProvider HairStrandsCore.Default__OptimusGroomDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusGroomDataProvider* UOptimusGroomDataProvider::GetDefaultObj()
{
	static class UOptimusGroomDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusGroomDataProvider*>(UOptimusGroomDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.OptimusGroomExecDataInterface
// (None)

class UClass* UOptimusGroomExecDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusGroomExecDataInterface");

	return Clss;
}


// OptimusGroomExecDataInterface HairStrandsCore.Default__OptimusGroomExecDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusGroomExecDataInterface* UOptimusGroomExecDataInterface::GetDefaultObj()
{
	static class UOptimusGroomExecDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusGroomExecDataInterface*>(UOptimusGroomExecDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.OptimusGroomExecDataProvider
// (None)

class UClass* UOptimusGroomExecDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusGroomExecDataProvider");

	return Clss;
}


// OptimusGroomExecDataProvider HairStrandsCore.Default__OptimusGroomExecDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusGroomExecDataProvider* UOptimusGroomExecDataProvider::GetDefaultObj()
{
	static class UOptimusGroomExecDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusGroomExecDataProvider*>(UOptimusGroomExecDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.OptimusGroomGuideDataInterface
// (None)

class UClass* UOptimusGroomGuideDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusGroomGuideDataInterface");

	return Clss;
}


// OptimusGroomGuideDataInterface HairStrandsCore.Default__OptimusGroomGuideDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusGroomGuideDataInterface* UOptimusGroomGuideDataInterface::GetDefaultObj()
{
	static class UOptimusGroomGuideDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusGroomGuideDataInterface*>(UOptimusGroomGuideDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.OptimusGroomGuideDataProvider
// (None)

class UClass* UOptimusGroomGuideDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusGroomGuideDataProvider");

	return Clss;
}


// OptimusGroomGuideDataProvider HairStrandsCore.Default__OptimusGroomGuideDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusGroomGuideDataProvider* UOptimusGroomGuideDataProvider::GetDefaultObj()
{
	static class UOptimusGroomGuideDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusGroomGuideDataProvider*>(UOptimusGroomGuideDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.OptimusGroomWriteDataInterface
// (None)

class UClass* UOptimusGroomWriteDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusGroomWriteDataInterface");

	return Clss;
}


// OptimusGroomWriteDataInterface HairStrandsCore.Default__OptimusGroomWriteDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusGroomWriteDataInterface* UOptimusGroomWriteDataInterface::GetDefaultObj()
{
	static class UOptimusGroomWriteDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusGroomWriteDataInterface*>(UOptimusGroomWriteDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.OptimusGroomWriteDataProvider
// (None)

class UClass* UOptimusGroomWriteDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusGroomWriteDataProvider");

	return Clss;
}


// OptimusGroomWriteDataProvider HairStrandsCore.Default__OptimusGroomWriteDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusGroomWriteDataProvider* UOptimusGroomWriteDataProvider::GetDefaultObj()
{
	static class UOptimusGroomWriteDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusGroomWriteDataProvider*>(UOptimusGroomWriteDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.OptimusGroomComponentSource
// (None)

class UClass* UOptimusGroomComponentSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusGroomComponentSource");

	return Clss;
}


// OptimusGroomComponentSource HairStrandsCore.Default__OptimusGroomComponentSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusGroomComponentSource* UOptimusGroomComponentSource::GetDefaultObj()
{
	static class UOptimusGroomComponentSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusGroomComponentSource*>(UOptimusGroomComponentSource::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomCacheImportOptions
// (None)

class UClass* UGroomCacheImportOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomCacheImportOptions");

	return Clss;
}


// GroomCacheImportOptions HairStrandsCore.Default__GroomCacheImportOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomCacheImportOptions* UGroomCacheImportOptions::GetDefaultObj()
{
	static class UGroomCacheImportOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomCacheImportOptions*>(UGroomCacheImportOptions::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomCacheImportData
// (None)

class UClass* UGroomCacheImportData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomCacheImportData");

	return Clss;
}


// GroomCacheImportData HairStrandsCore.Default__GroomCacheImportData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomCacheImportData* UGroomCacheImportData::GetDefaultObj()
{
	static class UGroomCacheImportData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomCacheImportData*>(UGroomCacheImportData::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomActor
// (Actor)

class UClass* AGroomActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomActor");

	return Clss;
}


// GroomActor HairStrandsCore.Default__GroomActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AGroomActor* AGroomActor::GetDefaultObj()
{
	static class AGroomActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AGroomActor*>(AGroomActor::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomAsset
// (None)

class UClass* UGroomAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomAsset");

	return Clss;
}


// GroomAsset HairStrandsCore.Default__GroomAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomAsset* UGroomAsset::GetDefaultObj()
{
	static class UGroomAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomAsset*>(UGroomAsset::StaticClass()->DefaultObject);

	return Default;
}


// Function HairStrandsCore.GroomAsset.SetRiggedSkeletalMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMesh*               In                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomAsset::SetRiggedSkeletalMesh(class USkeletalMesh* In)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomAsset", "SetRiggedSkeletalMesh");

	Params::UGroomAsset_SetRiggedSkeletalMesh_Params Parms{};

	Parms.In = In;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomAsset.SetHairInterpolationType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EGroomInterpolationType In                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomAsset::SetHairInterpolationType(enum class EGroomInterpolationType In)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomAsset", "SetHairInterpolationType");

	Params::UGroomAsset_SetHairInterpolationType_Params Parms{};

	Parms.In = In;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomAsset.SetHairGroupsRendering
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FHairGroupsRendering>In                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UGroomAsset::SetHairGroupsRendering(TArray<struct FHairGroupsRendering>& In)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomAsset", "SetHairGroupsRendering");

	Params::UGroomAsset_SetHairGroupsRendering_Params Parms{};

	Parms.In = In;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomAsset.SetHairGroupsPhysics
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FHairGroupsPhysics>  In                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UGroomAsset::SetHairGroupsPhysics(TArray<struct FHairGroupsPhysics>& In)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomAsset", "SetHairGroupsPhysics");

	Params::UGroomAsset_SetHairGroupsPhysics_Params Parms{};

	Parms.In = In;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomAsset.SetHairGroupsMeshes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FHairGroupsMeshesSourceDescription>In                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UGroomAsset::SetHairGroupsMeshes(TArray<struct FHairGroupsMeshesSourceDescription>& In)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomAsset", "SetHairGroupsMeshes");

	Params::UGroomAsset_SetHairGroupsMeshes_Params Parms{};

	Parms.In = In;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomAsset.SetHairGroupsMaterials
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FHairGroupsMaterial> In                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UGroomAsset::SetHairGroupsMaterials(TArray<struct FHairGroupsMaterial>& In)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomAsset", "SetHairGroupsMaterials");

	Params::UGroomAsset_SetHairGroupsMaterials_Params Parms{};

	Parms.In = In;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomAsset.SetHairGroupsLOD
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FHairGroupsLOD>      In                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UGroomAsset::SetHairGroupsLOD(TArray<struct FHairGroupsLOD>& In)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomAsset", "SetHairGroupsLOD");

	Params::UGroomAsset_SetHairGroupsLOD_Params Parms{};

	Parms.In = In;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomAsset.SetHairGroupsInterpolation
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FHairGroupsInterpolation>In                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UGroomAsset::SetHairGroupsInterpolation(TArray<struct FHairGroupsInterpolation>& In)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomAsset", "SetHairGroupsInterpolation");

	Params::UGroomAsset_SetHairGroupsInterpolation_Params Parms{};

	Parms.In = In;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomAsset.SetHairGroupsCards
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FHairGroupsCardsSourceDescription>In                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UGroomAsset::SetHairGroupsCards(TArray<struct FHairGroupsCardsSourceDescription>& In)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomAsset", "SetHairGroupsCards");

	Params::UGroomAsset_SetHairGroupsCards_Params Parms{};

	Parms.In = In;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomAsset.SetEnableSimulationCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               In                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomAsset::SetEnableSimulationCache(bool In)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomAsset", "SetEnableSimulationCache");

	Params::UGroomAsset_SetEnableSimulationCache_Params Parms{};

	Parms.In = In;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomAsset.SetEnableGlobalInterpolation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               In                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomAsset::SetEnableGlobalInterpolation(bool In)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomAsset", "SetEnableGlobalInterpolation");

	Params::UGroomAsset_SetEnableGlobalInterpolation_Params Parms{};

	Parms.In = In;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomAsset.SetDeformedGroupSections
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      In                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UGroomAsset::SetDeformedGroupSections(TArray<int32>& In)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomAsset", "SetDeformedGroupSections");

	Params::UGroomAsset_SetDeformedGroupSections_Params Parms{};

	Parms.In = In;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomAsset.GetRiggedSkeletalMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USkeletalMesh*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeletalMesh* UGroomAsset::GetRiggedSkeletalMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomAsset", "GetRiggedSkeletalMesh");

	Params::UGroomAsset_GetRiggedSkeletalMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomAsset.GetHairInterpolationType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EGroomInterpolationType ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGroomInterpolationType UGroomAsset::GetHairInterpolationType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomAsset", "GetHairInterpolationType");

	Params::UGroomAsset_GetHairInterpolationType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomAsset.GetHairGroupsRendering
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FHairGroupsRendering>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FHairGroupsRendering> UGroomAsset::GetHairGroupsRendering()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomAsset", "GetHairGroupsRendering");

	Params::UGroomAsset_GetHairGroupsRendering_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomAsset.GetHairGroupsPhysics
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FHairGroupsPhysics>  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FHairGroupsPhysics> UGroomAsset::GetHairGroupsPhysics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomAsset", "GetHairGroupsPhysics");

	Params::UGroomAsset_GetHairGroupsPhysics_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomAsset.GetHairGroupsMeshes
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FHairGroupsMeshesSourceDescription>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FHairGroupsMeshesSourceDescription> UGroomAsset::GetHairGroupsMeshes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomAsset", "GetHairGroupsMeshes");

	Params::UGroomAsset_GetHairGroupsMeshes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomAsset.GetHairGroupsMaterials
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FHairGroupsMaterial> ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FHairGroupsMaterial> UGroomAsset::GetHairGroupsMaterials()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomAsset", "GetHairGroupsMaterials");

	Params::UGroomAsset_GetHairGroupsMaterials_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomAsset.GetHairGroupsLOD
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FHairGroupsLOD>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FHairGroupsLOD> UGroomAsset::GetHairGroupsLOD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomAsset", "GetHairGroupsLOD");

	Params::UGroomAsset_GetHairGroupsLOD_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomAsset.GetHairGroupsInterpolation
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FHairGroupsInterpolation>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FHairGroupsInterpolation> UGroomAsset::GetHairGroupsInterpolation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomAsset", "GetHairGroupsInterpolation");

	Params::UGroomAsset_GetHairGroupsInterpolation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomAsset.GetHairGroupsCards
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FHairGroupsCardsSourceDescription>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FHairGroupsCardsSourceDescription> UGroomAsset::GetHairGroupsCards()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomAsset", "GetHairGroupsCards");

	Params::UGroomAsset_GetHairGroupsCards_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomAsset.GetEnableSimulationCache
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGroomAsset::GetEnableSimulationCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomAsset", "GetEnableSimulationCache");

	Params::UGroomAsset_GetEnableSimulationCache_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomAsset.GetEnableGlobalInterpolation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGroomAsset::GetEnableGlobalInterpolation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomAsset", "GetEnableGlobalInterpolation");

	Params::UGroomAsset_GetEnableGlobalInterpolation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomAsset.GetDeformedGroupSections
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int32>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<int32> UGroomAsset::GetDeformedGroupSections()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomAsset", "GetDeformedGroupSections");

	Params::UGroomAsset_GetDeformedGroupSections_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class HairStrandsCore.HairCardGenerationSettings
// (None)

class UClass* UHairCardGenerationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HairCardGenerationSettings");

	return Clss;
}


// HairCardGenerationSettings HairStrandsCore.Default__HairCardGenerationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UHairCardGenerationSettings* UHairCardGenerationSettings::GetDefaultObj()
{
	static class UHairCardGenerationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UHairCardGenerationSettings*>(UHairCardGenerationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomAssetImportData
// (None)

class UClass* UGroomAssetImportData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomAssetImportData");

	return Clss;
}


// GroomAssetImportData HairStrandsCore.Default__GroomAssetImportData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomAssetImportData* UGroomAssetImportData::GetDefaultObj()
{
	static class UGroomAssetImportData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomAssetImportData*>(UGroomAssetImportData::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomBindingAsset
// (None)

class UClass* UGroomBindingAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomBindingAsset");

	return Clss;
}


// GroomBindingAsset HairStrandsCore.Default__GroomBindingAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomBindingAsset* UGroomBindingAsset::GetDefaultObj()
{
	static class UGroomBindingAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomBindingAsset*>(UGroomBindingAsset::StaticClass()->DefaultObject);

	return Default;
}


// Function HairStrandsCore.GroomBindingAsset.SetTargetSkeletalMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMesh*               InSkeletalMesh                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomBindingAsset::SetTargetSkeletalMesh(class USkeletalMesh* InSkeletalMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBindingAsset", "SetTargetSkeletalMesh");

	Params::UGroomBindingAsset_SetTargetSkeletalMesh_Params Parms{};

	Parms.InSkeletalMesh = InSkeletalMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomBindingAsset.SetTargetGeometryCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGeometryCache*              InGeometryCache                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomBindingAsset::SetTargetGeometryCache(class UGeometryCache* InGeometryCache)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBindingAsset", "SetTargetGeometryCache");

	Params::UGroomBindingAsset_SetTargetGeometryCache_Params Parms{};

	Parms.InGeometryCache = InGeometryCache;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomBindingAsset.SetSourceSkeletalMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMesh*               InSkeletalMesh                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomBindingAsset::SetSourceSkeletalMesh(class USkeletalMesh* InSkeletalMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBindingAsset", "SetSourceSkeletalMesh");

	Params::UGroomBindingAsset_SetSourceSkeletalMesh_Params Parms{};

	Parms.InSkeletalMesh = InSkeletalMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomBindingAsset.SetSourceGeometryCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGeometryCache*              InGeometryCache                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomBindingAsset::SetSourceGeometryCache(class UGeometryCache* InGeometryCache)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBindingAsset", "SetSourceGeometryCache");

	Params::UGroomBindingAsset_SetSourceGeometryCache_Params Parms{};

	Parms.InGeometryCache = InGeometryCache;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomBindingAsset.SetNumInterpolationPoints
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InNumInterpolationPoints                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomBindingAsset::SetNumInterpolationPoints(int32 InNumInterpolationPoints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBindingAsset", "SetNumInterpolationPoints");

	Params::UGroomBindingAsset_SetNumInterpolationPoints_Params Parms{};

	Parms.InNumInterpolationPoints = InNumInterpolationPoints;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomBindingAsset.SetMatchingSection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InMatchingSection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomBindingAsset::SetMatchingSection(int32 InMatchingSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBindingAsset", "SetMatchingSection");

	Params::UGroomBindingAsset_SetMatchingSection_Params Parms{};

	Parms.InMatchingSection = InMatchingSection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomBindingAsset.SetGroupInfos
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FGoomBindingGroupInfo>InGroupInfos                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UGroomBindingAsset::SetGroupInfos(TArray<struct FGoomBindingGroupInfo>& InGroupInfos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBindingAsset", "SetGroupInfos");

	Params::UGroomBindingAsset_SetGroupInfos_Params Parms{};

	Parms.InGroupInfos = InGroupInfos;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomBindingAsset.SetGroomBindingType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EGroomBindingMeshType   InGroomBindingType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomBindingAsset::SetGroomBindingType(enum class EGroomBindingMeshType InGroomBindingType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBindingAsset", "SetGroomBindingType");

	Params::UGroomBindingAsset_SetGroomBindingType_Params Parms{};

	Parms.InGroomBindingType = InGroomBindingType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomBindingAsset.SetGroom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGroomAsset*                 InGroom                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomBindingAsset::SetGroom(class UGroomAsset* InGroom)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBindingAsset", "SetGroom");

	Params::UGroomBindingAsset_SetGroom_Params Parms{};

	Parms.InGroom = InGroom;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomBindingAsset.GetTargetSkeletalMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USkeletalMesh*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeletalMesh* UGroomBindingAsset::GetTargetSkeletalMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBindingAsset", "GetTargetSkeletalMesh");

	Params::UGroomBindingAsset_GetTargetSkeletalMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomBindingAsset.GetTargetGeometryCache
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGeometryCache*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGeometryCache* UGroomBindingAsset::GetTargetGeometryCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBindingAsset", "GetTargetGeometryCache");

	Params::UGroomBindingAsset_GetTargetGeometryCache_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomBindingAsset.GetSourceSkeletalMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USkeletalMesh*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeletalMesh* UGroomBindingAsset::GetSourceSkeletalMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBindingAsset", "GetSourceSkeletalMesh");

	Params::UGroomBindingAsset_GetSourceSkeletalMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomBindingAsset.GetSourceGeometryCache
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGeometryCache*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGeometryCache* UGroomBindingAsset::GetSourceGeometryCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBindingAsset", "GetSourceGeometryCache");

	Params::UGroomBindingAsset_GetSourceGeometryCache_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomBindingAsset.GetNumInterpolationPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGroomBindingAsset::GetNumInterpolationPoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBindingAsset", "GetNumInterpolationPoints");

	Params::UGroomBindingAsset_GetNumInterpolationPoints_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomBindingAsset.GetMatchingSection
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGroomBindingAsset::GetMatchingSection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBindingAsset", "GetMatchingSection");

	Params::UGroomBindingAsset_GetMatchingSection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomBindingAsset.GetGroupInfos
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FGoomBindingGroupInfo>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FGoomBindingGroupInfo> UGroomBindingAsset::GetGroupInfos()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBindingAsset", "GetGroupInfos");

	Params::UGroomBindingAsset_GetGroupInfos_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomBindingAsset.GetGroomBindingType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EGroomBindingMeshType   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGroomBindingMeshType UGroomBindingAsset::GetGroomBindingType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBindingAsset", "GetGroomBindingType");

	Params::UGroomBindingAsset_GetGroomBindingType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomBindingAsset.GetGroom
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGroomAsset*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGroomAsset* UGroomBindingAsset::GetGroom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBindingAsset", "GetGroom");

	Params::UGroomBindingAsset_GetGroom_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class HairStrandsCore.GroomBindingAssetList
// (None)

class UClass* UGroomBindingAssetList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomBindingAssetList");

	return Clss;
}


// GroomBindingAssetList HairStrandsCore.Default__GroomBindingAssetList
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomBindingAssetList* UGroomBindingAssetList::GetDefaultObj()
{
	static class UGroomBindingAssetList* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomBindingAssetList*>(UGroomBindingAssetList::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomBlueprintLibrary
// (None)

class UClass* UGroomBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomBlueprintLibrary");

	return Clss;
}


// GroomBlueprintLibrary HairStrandsCore.Default__GroomBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomBlueprintLibrary* UGroomBlueprintLibrary::GetDefaultObj()
{
	static class UGroomBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomBlueprintLibrary*>(UGroomBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InDesiredPackagePath                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGroomAsset*                 InGroomAsset                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMesh*               InSkeletalMesh                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InNumInterpolationPoints                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMesh*               InSourceSkeletalMeshForTransfer                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InMatchingSection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGroomBindingAsset*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGroomBindingAsset* UGroomBlueprintLibrary::CreateNewGroomBindingAssetWithPath(const class FString& InDesiredPackagePath, class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32 InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32 InMatchingSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBlueprintLibrary", "CreateNewGroomBindingAssetWithPath");

	Params::UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Params Parms{};

	Parms.InDesiredPackagePath = InDesiredPackagePath;
	Parms.InGroomAsset = InGroomAsset;
	Parms.InSkeletalMesh = InSkeletalMesh;
	Parms.InNumInterpolationPoints = InNumInterpolationPoints;
	Parms.InSourceSkeletalMeshForTransfer = InSourceSkeletalMeshForTransfer;
	Parms.InMatchingSection = InMatchingSection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGroomAsset*                 InGroomAsset                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMesh*               InSkeletalMesh                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InNumInterpolationPoints                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMesh*               InSourceSkeletalMeshForTransfer                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InMatchingSection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGroomBindingAsset*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGroomBindingAsset* UGroomBlueprintLibrary::CreateNewGroomBindingAsset(class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32 InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32 InMatchingSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBlueprintLibrary", "CreateNewGroomBindingAsset");

	Params::UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Params Parms{};

	Parms.InGroomAsset = InGroomAsset;
	Parms.InSkeletalMesh = InSkeletalMesh;
	Parms.InNumInterpolationPoints = InNumInterpolationPoints;
	Parms.InSourceSkeletalMeshForTransfer = InSourceSkeletalMeshForTransfer;
	Parms.InMatchingSection = InMatchingSection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAssetWithPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      DesiredPackagePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGroomAsset*                 GroomAsset                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryCache*              GeometryCache                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumInterpolationPoints                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryCache*              SourceGeometryCacheForTransfer                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MatchingSection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGroomBindingAsset*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGroomBindingAsset* UGroomBlueprintLibrary::CreateNewGeometryCacheGroomBindingAssetWithPath(const class FString& DesiredPackagePath, class UGroomAsset* GroomAsset, class UGeometryCache* GeometryCache, int32 NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32 MatchingSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBlueprintLibrary", "CreateNewGeometryCacheGroomBindingAssetWithPath");

	Params::UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Params Parms{};

	Parms.DesiredPackagePath = DesiredPackagePath;
	Parms.GroomAsset = GroomAsset;
	Parms.GeometryCache = GeometryCache;
	Parms.NumInterpolationPoints = NumInterpolationPoints;
	Parms.SourceGeometryCacheForTransfer = SourceGeometryCacheForTransfer;
	Parms.MatchingSection = MatchingSection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAsset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGroomAsset*                 GroomAsset                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryCache*              GeometryCache                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumInterpolationPoints                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryCache*              SourceGeometryCacheForTransfer                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MatchingSection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGroomBindingAsset*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGroomBindingAsset* UGroomBlueprintLibrary::CreateNewGeometryCacheGroomBindingAsset(class UGroomAsset* GroomAsset, class UGeometryCache* GeometryCache, int32 NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32 MatchingSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBlueprintLibrary", "CreateNewGeometryCacheGroomBindingAsset");

	Params::UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Params Parms{};

	Parms.GroomAsset = GroomAsset;
	Parms.GeometryCache = GeometryCache;
	Parms.NumInterpolationPoints = NumInterpolationPoints;
	Parms.SourceGeometryCacheForTransfer = SourceGeometryCacheForTransfer;
	Parms.MatchingSection = MatchingSection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class HairStrandsCore.GroomCache
// (None)

class UClass* UGroomCache::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomCache");

	return Clss;
}


// GroomCache HairStrandsCore.Default__GroomCache
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomCache* UGroomCache::GetDefaultObj()
{
	static class UGroomCache* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomCache*>(UGroomCache::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UGroomComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomComponent");

	return Clss;
}


// GroomComponent HairStrandsCore.Default__GroomComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomComponent* UGroomComponent::GetDefaultObj()
{
	static class UGroomComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomComponent*>(UGroomComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function HairStrandsCore.GroomComponent.SetPhysicsAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPhysicsAsset*               InPhysicsAsset                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomComponent::SetPhysicsAsset(class UPhysicsAsset* InPhysicsAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomComponent", "SetPhysicsAsset");

	Params::UGroomComponent_SetPhysicsAsset_Params Parms{};

	Parms.InPhysicsAsset = InPhysicsAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomComponent.SetMeshDeformer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMeshDeformer*               InMeshDeformer                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomComponent::SetMeshDeformer(class UMeshDeformer* InMeshDeformer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomComponent", "SetMeshDeformer");

	Params::UGroomComponent_SetMeshDeformer_Params Parms{};

	Parms.InMeshDeformer = InMeshDeformer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomComponent.SetHairLengthScaleEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomComponent::SetHairLengthScaleEnable(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomComponent", "SetHairLengthScaleEnable");

	Params::UGroomComponent_SetHairLengthScaleEnable_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomComponent.SetHairLengthScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomComponent::SetHairLengthScale(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomComponent", "SetHairLengthScale");

	Params::UGroomComponent_SetHairLengthScale_Params Parms{};

	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomComponent.SetGroomAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGroomAsset*                 Asset                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomComponent::SetGroomAsset(class UGroomAsset* Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomComponent", "SetGroomAsset");

	Params::UGroomComponent_SetGroomAsset_Params Parms{};

	Parms.Asset = Asset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomComponent.SetEnableSimulation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInEnableSimulation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomComponent::SetEnableSimulation(bool bInEnableSimulation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomComponent", "SetEnableSimulation");

	Params::UGroomComponent_SetEnableSimulation_Params Parms{};

	Parms.bInEnableSimulation = bInEnableSimulation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomComponent.SetBindingAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGroomBindingAsset*          InBinding                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomComponent::SetBindingAsset(class UGroomBindingAsset* InBinding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomComponent", "SetBindingAsset");

	Params::UGroomComponent_SetBindingAsset_Params Parms{};

	Parms.InBinding = InBinding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomComponent.ResetSimulation
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGroomComponent::ResetSimulation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomComponent", "ResetSimulation");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomComponent.ResetCollisionComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGroomComponent::ResetCollisionComponents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomComponent", "ResetCollisionComponents");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomComponent.GetNiagaraComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              GroupIndex                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraComponent*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraComponent* UGroomComponent::GetNiagaraComponent(int32 GroupIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomComponent", "GetNiagaraComponent");

	Params::UGroomComponent_GetNiagaraComponent_Params Parms{};

	Parms.GroupIndex = GroupIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomComponent.GetIsHairLengthScaleEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGroomComponent::GetIsHairLengthScaleEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomComponent", "GetIsHairLengthScaleEnabled");

	Params::UGroomComponent_GetIsHairLengthScaleEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomComponent.AddCollisionComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomComponent::AddCollisionComponent(class USkeletalMeshComponent* SkeletalMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomComponent", "AddCollisionComponent");

	Params::UGroomComponent_AddCollisionComponent_Params Parms{};

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class HairStrandsCore.GroomCreateBindingOptions
// (None)

class UClass* UGroomCreateBindingOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomCreateBindingOptions");

	return Clss;
}


// GroomCreateBindingOptions HairStrandsCore.Default__GroomCreateBindingOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomCreateBindingOptions* UGroomCreateBindingOptions::GetDefaultObj()
{
	static class UGroomCreateBindingOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomCreateBindingOptions*>(UGroomCreateBindingOptions::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomCreateFollicleMaskOptions
// (None)

class UClass* UGroomCreateFollicleMaskOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomCreateFollicleMaskOptions");

	return Clss;
}


// GroomCreateFollicleMaskOptions HairStrandsCore.Default__GroomCreateFollicleMaskOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomCreateFollicleMaskOptions* UGroomCreateFollicleMaskOptions::GetDefaultObj()
{
	static class UGroomCreateFollicleMaskOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomCreateFollicleMaskOptions*>(UGroomCreateFollicleMaskOptions::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomCreateStrandsTexturesOptions
// (None)

class UClass* UGroomCreateStrandsTexturesOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomCreateStrandsTexturesOptions");

	return Clss;
}


// GroomCreateStrandsTexturesOptions HairStrandsCore.Default__GroomCreateStrandsTexturesOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomCreateStrandsTexturesOptions* UGroomCreateStrandsTexturesOptions::GetDefaultObj()
{
	static class UGroomCreateStrandsTexturesOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomCreateStrandsTexturesOptions*>(UGroomCreateStrandsTexturesOptions::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomImportOptions
// (None)

class UClass* UGroomImportOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomImportOptions");

	return Clss;
}


// GroomImportOptions HairStrandsCore.Default__GroomImportOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomImportOptions* UGroomImportOptions::GetDefaultObj()
{
	static class UGroomImportOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomImportOptions*>(UGroomImportOptions::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomHairGroupsPreview
// (None)

class UClass* UGroomHairGroupsPreview::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomHairGroupsPreview");

	return Clss;
}


// GroomHairGroupsPreview HairStrandsCore.Default__GroomHairGroupsPreview
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomHairGroupsPreview* UGroomHairGroupsPreview::GetDefaultObj()
{
	static class UGroomHairGroupsPreview* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomHairGroupsPreview*>(UGroomHairGroupsPreview::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomPluginSettings
// (None)

class UClass* UGroomPluginSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomPluginSettings");

	return Clss;
}


// GroomPluginSettings HairStrandsCore.Default__GroomPluginSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomPluginSettings* UGroomPluginSettings::GetDefaultObj()
{
	static class UGroomPluginSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomPluginSettings*>(UGroomPluginSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.MovieSceneGroomCacheSection
// (None)

class UClass* UMovieSceneGroomCacheSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneGroomCacheSection");

	return Clss;
}


// MovieSceneGroomCacheSection HairStrandsCore.Default__MovieSceneGroomCacheSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneGroomCacheSection* UMovieSceneGroomCacheSection::GetDefaultObj()
{
	static class UMovieSceneGroomCacheSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneGroomCacheSection*>(UMovieSceneGroomCacheSection::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.MovieSceneGroomCacheTrack
// (None)

class UClass* UMovieSceneGroomCacheTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneGroomCacheTrack");

	return Clss;
}


// MovieSceneGroomCacheTrack HairStrandsCore.Default__MovieSceneGroomCacheTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneGroomCacheTrack* UMovieSceneGroomCacheTrack::GetDefaultObj()
{
	static class UMovieSceneGroomCacheTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneGroomCacheTrack*>(UMovieSceneGroomCacheTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.NiagaraDataInterfaceHairStrands
// (None)

class UClass* UNiagaraDataInterfaceHairStrands::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceHairStrands");

	return Clss;
}


// NiagaraDataInterfaceHairStrands HairStrandsCore.Default__NiagaraDataInterfaceHairStrands
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceHairStrands* UNiagaraDataInterfaceHairStrands::GetDefaultObj()
{
	static class UNiagaraDataInterfaceHairStrands* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceHairStrands*>(UNiagaraDataInterfaceHairStrands::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.NiagaraDataInterfaceVelocityGrid
// (None)

class UClass* UNiagaraDataInterfaceVelocityGrid::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceVelocityGrid");

	return Clss;
}


// NiagaraDataInterfaceVelocityGrid HairStrandsCore.Default__NiagaraDataInterfaceVelocityGrid
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceVelocityGrid* UNiagaraDataInterfaceVelocityGrid::GetDefaultObj()
{
	static class UNiagaraDataInterfaceVelocityGrid* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceVelocityGrid*>(UNiagaraDataInterfaceVelocityGrid::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.NiagaraDataInterfacePressureGrid
// (None)

class UClass* UNiagaraDataInterfacePressureGrid::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfacePressureGrid");

	return Clss;
}


// NiagaraDataInterfacePressureGrid HairStrandsCore.Default__NiagaraDataInterfacePressureGrid
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfacePressureGrid* UNiagaraDataInterfacePressureGrid::GetDefaultObj()
{
	static class UNiagaraDataInterfacePressureGrid* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfacePressureGrid*>(UNiagaraDataInterfacePressureGrid::StaticClass()->DefaultObject);

	return Default;
}

}


