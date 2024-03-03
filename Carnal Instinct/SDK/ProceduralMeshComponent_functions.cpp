#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
// (None)

class UClass* UKismetProceduralMeshLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KismetProceduralMeshLibrary");

	return Clss;
}


// KismetProceduralMeshLibrary ProceduralMeshComponent.Default__KismetProceduralMeshLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UKismetProceduralMeshLibrary* UKismetProceduralMeshLibrary::GetDefaultObj()
{
	static class UKismetProceduralMeshLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UKismetProceduralMeshLibrary*>(UKismetProceduralMeshLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UProceduralMeshComponent*    InProcMesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     PlanePosition                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     PlaneNormal                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCreateOtherHalf                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UProceduralMeshComponent*    OutOtherHalfProcMesh                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EProcMeshSliceCapOption CapOption                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          CapMaterial                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKismetProceduralMeshLibrary::SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, const struct FVector& PlanePosition, const struct FVector& PlaneNormal, bool bCreateOtherHalf, class UProceduralMeshComponent** OutOtherHalfProcMesh, enum class EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "SliceProceduralMesh");

	Params::UKismetProceduralMeshLibrary_SliceProceduralMesh_Params Parms{};

	Parms.InProcMesh = InProcMesh;
	Parms.PlanePosition = PlanePosition;
	Parms.PlaneNormal = PlaneNormal;
	Parms.bCreateOtherHalf = bCreateOtherHalf;
	Parms.CapOption = CapOption;
	Parms.CapMaterial = CapMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOtherHalfProcMesh != nullptr)
		*OutOtherHalfProcMesh = Parms.OutOtherHalfProcMesh;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UStaticMesh*                 InMesh                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LODIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SectionIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Vertices                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      Triangles                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Normals                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UVs                                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent>    Tangents                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UKismetProceduralMeshLibrary::GetSectionFromStaticMesh(class UStaticMesh* InMesh, int32 LODIndex, int32 SectionIndex, TArray<struct FVector>* Vertices, TArray<int32>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "GetSectionFromStaticMesh");

	Params::UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Params Parms{};

	Parms.InMesh = InMesh;
	Parms.LODIndex = LODIndex;
	Parms.SectionIndex = SectionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Vertices != nullptr)
		*Vertices = std::move(Parms.Vertices);

	if (Triangles != nullptr)
		*Triangles = std::move(Parms.Triangles);

	if (Normals != nullptr)
		*Normals = std::move(Parms.Normals);

	if (UVs != nullptr)
		*UVs = std::move(Parms.UVs);

	if (Tangents != nullptr)
		*Tangents = std::move(Parms.Tangents);

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UProceduralMeshComponent*    InProcMesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SectionIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Vertices                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      Triangles                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Normals                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UVs                                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent>    Tangents                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UKismetProceduralMeshLibrary::GetSectionFromProceduralMesh(class UProceduralMeshComponent* InProcMesh, int32 SectionIndex, TArray<struct FVector>* Vertices, TArray<int32>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "GetSectionFromProceduralMesh");

	Params::UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Params Parms{};

	Parms.InProcMesh = InProcMesh;
	Parms.SectionIndex = SectionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Vertices != nullptr)
		*Vertices = std::move(Parms.Vertices);

	if (Triangles != nullptr)
		*Triangles = std::move(Parms.Triangles);

	if (Normals != nullptr)
		*Normals = std::move(Parms.Normals);

	if (UVs != nullptr)
		*UVs = std::move(Parms.UVs);

	if (Tangents != nullptr)
		*Tangents = std::move(Parms.Tangents);

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     BoxRadius                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Vertices                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      Triangles                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Normals                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UVs                                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent>    Tangents                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UKismetProceduralMeshLibrary::GenerateBoxMesh(const struct FVector& BoxRadius, TArray<struct FVector>* Vertices, TArray<int32>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "GenerateBoxMesh");

	Params::UKismetProceduralMeshLibrary_GenerateBoxMesh_Params Parms{};

	Parms.BoxRadius = BoxRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Vertices != nullptr)
		*Vertices = std::move(Parms.Vertices);

	if (Triangles != nullptr)
		*Triangles = std::move(Parms.Triangles);

	if (Normals != nullptr)
		*Normals = std::move(Parms.Normals);

	if (UVs != nullptr)
		*UVs = std::move(Parms.UVs);

	if (Tangents != nullptr)
		*Tangents = std::move(Parms.Tangents);

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              NumX                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumY                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      Triangles                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Vertices                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UVs                                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// float                              GridSpacing                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKismetProceduralMeshLibrary::CreateGridMeshWelded(int32 NumX, int32 NumY, TArray<int32>* Triangles, TArray<struct FVector>* Vertices, TArray<struct FVector2D>* UVs, float GridSpacing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "CreateGridMeshWelded");

	Params::UKismetProceduralMeshLibrary_CreateGridMeshWelded_Params Parms{};

	Parms.NumX = NumX;
	Parms.NumY = NumY;
	Parms.GridSpacing = GridSpacing;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Triangles != nullptr)
		*Triangles = std::move(Parms.Triangles);

	if (Vertices != nullptr)
		*Vertices = std::move(Parms.Vertices);

	if (UVs != nullptr)
		*UVs = std::move(Parms.UVs);

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              NumX                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumY                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWinding                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      Triangles                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UKismetProceduralMeshLibrary::CreateGridMeshTriangles(int32 NumX, int32 NumY, bool bWinding, TArray<int32>* Triangles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "CreateGridMeshTriangles");

	Params::UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Params Parms{};

	Parms.NumX = NumX;
	Parms.NumY = NumY;
	Parms.bWinding = bWinding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Triangles != nullptr)
		*Triangles = std::move(Parms.Triangles);

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              NumX                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumY                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      Triangles                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Vertices                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UVs                                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UV1s                                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// float                              GridSpacing                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKismetProceduralMeshLibrary::CreateGridMeshSplit(int32 NumX, int32 NumY, TArray<int32>* Triangles, TArray<struct FVector>* Vertices, TArray<struct FVector2D>* UVs, TArray<struct FVector2D>* UV1s, float GridSpacing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "CreateGridMeshSplit");

	Params::UKismetProceduralMeshLibrary_CreateGridMeshSplit_Params Parms{};

	Parms.NumX = NumX;
	Parms.NumY = NumY;
	Parms.GridSpacing = GridSpacing;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Triangles != nullptr)
		*Triangles = std::move(Parms.Triangles);

	if (Vertices != nullptr)
		*Vertices = std::move(Parms.Vertices);

	if (UVs != nullptr)
		*UVs = std::move(Parms.UVs);

	if (UV1s != nullptr)
		*UV1s = std::move(Parms.UV1s);

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UStaticMeshComponent*        StaticMeshComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LODIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UProceduralMeshComponent*    ProcMeshComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCreateCollision                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKismetProceduralMeshLibrary::CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent, int32 LODIndex, class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "CopyProceduralMeshFromStaticMeshComponent");

	Params::UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Params Parms{};

	Parms.StaticMeshComponent = StaticMeshComponent;
	Parms.LODIndex = LODIndex;
	Parms.ProcMeshComponent = ProcMeshComponent;
	Parms.bCreateCollision = bCreateCollision;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      Triangles                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Vert0                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Vert1                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Vert2                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Vert3                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKismetProceduralMeshLibrary::ConvertQuadToTriangles(TArray<int32>& Triangles, int32 Vert0, int32 Vert1, int32 Vert2, int32 Vert3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "ConvertQuadToTriangles");

	Params::UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Params Parms{};

	Parms.Triangles = Triangles;
	Parms.Vert0 = Vert0;
	Parms.Vert1 = Vert1;
	Parms.Vert2 = Vert2;
	Parms.Vert3 = Vert3;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVector>             Vertices                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int32>                      Triangles                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UVs                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Normals                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent>    Tangents                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UKismetProceduralMeshLibrary::CalculateTangentsForMesh(TArray<struct FVector>& Vertices, TArray<int32>& Triangles, TArray<struct FVector2D>& UVs, TArray<struct FVector>* Normals, TArray<struct FProcMeshTangent>* Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "CalculateTangentsForMesh");

	Params::UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Params Parms{};

	Parms.Vertices = Vertices;
	Parms.Triangles = Triangles;
	Parms.UVs = UVs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Normals != nullptr)
		*Normals = std::move(Parms.Normals);

	if (Tangents != nullptr)
		*Tangents = std::move(Parms.Tangents);

}


// Class ProceduralMeshComponent.ProceduralMeshComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UProceduralMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralMeshComponent");

	return Clss;
}


// ProceduralMeshComponent ProceduralMeshComponent.Default__ProceduralMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralMeshComponent* UProceduralMeshComponent::GetDefaultObj()
{
	static class UProceduralMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralMeshComponent*>(UProceduralMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Vertices                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Normals                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UV0                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UV1                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UV2                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UV3                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>        VertexColors                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent>    Tangents                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UProceduralMeshComponent::UpdateMeshSection_LinearColor(int32 SectionIndex, TArray<struct FVector>& Vertices, TArray<struct FVector>& Normals, TArray<struct FVector2D>& UV0, TArray<struct FVector2D>& UV1, TArray<struct FVector2D>& UV2, TArray<struct FVector2D>& UV3, TArray<struct FLinearColor>& VertexColors, TArray<struct FProcMeshTangent>& Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "UpdateMeshSection_LinearColor");

	Params::UProceduralMeshComponent_UpdateMeshSection_LinearColor_Params Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.Vertices = Vertices;
	Parms.Normals = Normals;
	Parms.UV0 = UV0;
	Parms.UV1 = UV1;
	Parms.UV2 = UV2;
	Parms.UV3 = UV3;
	Parms.VertexColors = VertexColors;
	Parms.Tangents = Tangents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Vertices                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Normals                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UV0                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FColor>              VertexColors                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent>    Tangents                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UProceduralMeshComponent::UpdateMeshSection(int32 SectionIndex, TArray<struct FVector>& Vertices, TArray<struct FVector>& Normals, TArray<struct FVector2D>& UV0, TArray<struct FColor>& VertexColors, TArray<struct FProcMeshTangent>& Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "UpdateMeshSection");

	Params::UProceduralMeshComponent_UpdateMeshSection_Params Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.Vertices = Vertices;
	Parms.Normals = Normals;
	Parms.UV0 = UV0;
	Parms.VertexColors = VertexColors;
	Parms.Tangents = Tangents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewVisibility                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralMeshComponent::SetMeshSectionVisible(int32 SectionIndex, bool bNewVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "SetMeshSectionVisible");

	Params::UProceduralMeshComponent_SetMeshSectionVisible_Params Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.bNewVisibility = bNewVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SectionIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UProceduralMeshComponent::IsMeshSectionVisible(int32 SectionIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "IsMeshSectionVisible");

	Params::UProceduralMeshComponent_IsMeshSectionVisible_Params Parms{};

	Parms.SectionIndex = SectionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UProceduralMeshComponent::GetNumSections()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "GetNumSections");

	Params::UProceduralMeshComponent_GetNumSections_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Vertices                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int32>                      Triangles                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Normals                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UV0                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UV1                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UV2                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UV3                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>        VertexColors                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent>    Tangents                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bCreateCollision                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralMeshComponent::CreateMeshSection_LinearColor(int32 SectionIndex, TArray<struct FVector>& Vertices, TArray<int32>& Triangles, TArray<struct FVector>& Normals, TArray<struct FVector2D>& UV0, TArray<struct FVector2D>& UV1, TArray<struct FVector2D>& UV2, TArray<struct FVector2D>& UV3, TArray<struct FLinearColor>& VertexColors, TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "CreateMeshSection_LinearColor");

	Params::UProceduralMeshComponent_CreateMeshSection_LinearColor_Params Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.Vertices = Vertices;
	Parms.Triangles = Triangles;
	Parms.Normals = Normals;
	Parms.UV0 = UV0;
	Parms.UV1 = UV1;
	Parms.UV2 = UV2;
	Parms.UV3 = UV3;
	Parms.VertexColors = VertexColors;
	Parms.Tangents = Tangents;
	Parms.bCreateCollision = bCreateCollision;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Vertices                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int32>                      Triangles                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Normals                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UV0                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FColor>              VertexColors                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent>    Tangents                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bCreateCollision                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralMeshComponent::CreateMeshSection(int32 SectionIndex, TArray<struct FVector>& Vertices, TArray<int32>& Triangles, TArray<struct FVector>& Normals, TArray<struct FVector2D>& UV0, TArray<struct FColor>& VertexColors, TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "CreateMeshSection");

	Params::UProceduralMeshComponent_CreateMeshSection_Params Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.Vertices = Vertices;
	Parms.Triangles = Triangles;
	Parms.Normals = Normals;
	Parms.UV0 = UV0;
	Parms.VertexColors = VertexColors;
	Parms.Tangents = Tangents;
	Parms.bCreateCollision = bCreateCollision;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralMeshComponent::ClearMeshSection(int32 SectionIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "ClearMeshSection");

	Params::UProceduralMeshComponent_ClearMeshSection_Params Parms{};

	Parms.SectionIndex = SectionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UProceduralMeshComponent::ClearCollisionConvexMeshes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "ClearCollisionConvexMeshes");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UProceduralMeshComponent::ClearAllMeshSections()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "ClearAllMeshSections");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FVector>             ConvexVerts                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UProceduralMeshComponent::AddCollisionConvexMesh(const TArray<struct FVector>& ConvexVerts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "AddCollisionConvexMesh");

	Params::UProceduralMeshComponent_AddCollisionConvexMesh_Params Parms{};

	Parms.ConvexVerts = ConvexVerts;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


