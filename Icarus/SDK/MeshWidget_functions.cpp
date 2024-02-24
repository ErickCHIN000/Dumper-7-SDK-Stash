#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MeshWidget.MeshWidget
// (None)

class UClass* UMeshWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshWidget");

	return Clss;
}


// MeshWidget MeshWidget.Default__MeshWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshWidget* UMeshWidget::GetDefaultObj()
{
	static class UMeshWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshWidget*>(UMeshWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshWidget.MeshWidget.UpdatePerInstanceBuffer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              MeshId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector4>            Data                                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMeshWidget::UpdatePerInstanceBuffer(int32 MeshId, const TArray<struct FVector4>& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshWidget", "UpdatePerInstanceBuffer");

	Params::UMeshWidget_UpdatePerInstanceBuffer_Params Parms{};

	Parms.MeshId = MeshId;
	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshWidget.MeshWidget.UpdateMeshInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              MeshId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InstanceId                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMeshInstanceData           NewData                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UMeshWidget::UpdateMeshInstance(int32 MeshId, int32 InstanceId, const struct FMeshInstanceData& NewData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshWidget", "UpdateMeshInstance");

	Params::UMeshWidget_UpdateMeshInstance_Params Parms{};

	Parms.MeshId = MeshId;
	Parms.InstanceId = InstanceId;
	Parms.NewData = NewData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshWidget.MeshWidget.GetCachedAllottedGeometry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry                   ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FGeometry UMeshWidget::GetCachedAllottedGeometry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshWidget", "GetCachedAllottedGeometry");

	Params::UMeshWidget_GetCachedAllottedGeometry_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshWidget.MeshWidget.EnableInstancing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              MeshId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InstanceCount                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMeshWidget::EnableInstancing(int32 MeshId, int32 InstanceCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshWidget", "EnableInstancing");

	Params::UMeshWidget_EnableInstancing_Params Parms{};

	Parms.MeshId = MeshId;
	Parms.InstanceCount = InstanceCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshWidget.MeshWidget.ConvertToMaterialInstanceDynamic
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              MeshId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UMeshWidget::ConvertToMaterialInstanceDynamic(int32 MeshId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshWidget", "ConvertToMaterialInstanceDynamic");

	Params::UMeshWidget_ConvertToMaterialInstanceDynamic_Params Parms{};

	Parms.MeshId = MeshId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshWidget.MeshWidget.ClearRuns
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumRuns                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMeshWidget::ClearRuns(int32 NumRuns)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshWidget", "ClearRuns");

	Params::UMeshWidget_ClearRuns_Params Parms{};

	Parms.NumRuns = NumRuns;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshWidget.MeshWidget.AddRenderRun
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InMeshIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InInstanceOffset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InNumInstances                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMeshWidget::AddRenderRun(int32 InMeshIndex, int32 InInstanceOffset, int32 InNumInstances)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshWidget", "AddRenderRun");

	Params::UMeshWidget_AddRenderRun_Params Parms{};

	Parms.InMeshIndex = InMeshIndex;
	Parms.InInstanceOffset = InInstanceOffset;
	Parms.InNumInstances = InNumInstances;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshWidget.MeshWidget.AddMeshWithInstancing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USlateVectorArtData*         InMeshData                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InstanceCount                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMeshWidget::AddMeshWithInstancing(class USlateVectorArtData* InMeshData, int32 InstanceCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshWidget", "AddMeshWithInstancing");

	Params::UMeshWidget_AddMeshWithInstancing_Params Parms{};

	Parms.InMeshData = InMeshData;
	Parms.InstanceCount = InstanceCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshWidget.MeshWidget.AddMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USlateVectorArtData*         InMeshData                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMeshWidget::AddMesh(class USlateVectorArtData* InMeshData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshWidget", "AddMesh");

	Params::UMeshWidget_AddMesh_Params Parms{};

	Parms.InMeshData = InMeshData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


