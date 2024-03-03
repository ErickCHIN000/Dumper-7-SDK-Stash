#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MultiTask2.MultiTaskBase
// (None)

class UClass* UMultiTaskBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiTaskBase");

	return Clss;
}


// MultiTaskBase MultiTask2.Default__MultiTaskBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMultiTaskBase* UMultiTaskBase::GetDefaultObj()
{
	static class UMultiTaskBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiTaskBase*>(UMultiTaskBase::StaticClass()->DefaultObject);

	return Default;
}


// Function MultiTask2.MultiTaskBase.OnComplete
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMultiTaskBase::OnComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTaskBase", "OnComplete");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MultiTask2.MultiTaskBase.OnCancel
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMultiTaskBase::OnCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTaskBase", "OnCancel");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MultiTask2.ThreadTaskBase
// (None)

class UClass* UThreadTaskBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ThreadTaskBase");

	return Clss;
}


// ThreadTaskBase MultiTask2.Default__ThreadTaskBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UThreadTaskBase* UThreadTaskBase::GetDefaultObj()
{
	static class UThreadTaskBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UThreadTaskBase*>(UThreadTaskBase::StaticClass()->DefaultObject);

	return Default;
}


// Function MultiTask2.ThreadTaskBase.WaitToFinish
// (Native, Public, BlueprintCallable)
// Parameters:

void UThreadTaskBase::WaitToFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreadTaskBase", "WaitToFinish");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MultiTask2.MultiThreadTask
// (None)

class UClass* UMultiThreadTask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiThreadTask");

	return Clss;
}


// MultiThreadTask MultiTask2.Default__MultiThreadTask
// (Public, ClassDefaultObject, ArchetypeObject)

class UMultiThreadTask* UMultiThreadTask::GetDefaultObj()
{
	static class UMultiThreadTask* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiThreadTask*>(UMultiThreadTask::StaticClass()->DefaultObject);

	return Default;
}


// Function MultiTask2.MultiThreadTask.TaskBody
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMultiThreadTask::TaskBody()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiThreadTask", "TaskBody");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MultiTask2.DelaunayTriangulation2DTask
// (None)

class UClass* UDelaunayTriangulation2DTask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DelaunayTriangulation2DTask");

	return Clss;
}


// DelaunayTriangulation2DTask MultiTask2.Default__DelaunayTriangulation2DTask
// (Public, ClassDefaultObject, ArchetypeObject)

class UDelaunayTriangulation2DTask* UDelaunayTriangulation2DTask::GetDefaultObj()
{
	static class UDelaunayTriangulation2DTask* Default = nullptr;

	if (!Default)
		Default = static_cast<UDelaunayTriangulation2DTask*>(UDelaunayTriangulation2DTask::StaticClass()->DefaultObject);

	return Default;
}


// Class MultiTask2.FileToPixelDataTask
// (None)

class UClass* UFileToPixelDataTask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FileToPixelDataTask");

	return Clss;
}


// FileToPixelDataTask MultiTask2.Default__FileToPixelDataTask
// (Public, ClassDefaultObject, ArchetypeObject)

class UFileToPixelDataTask* UFileToPixelDataTask::GetDefaultObj()
{
	static class UFileToPixelDataTask* Default = nullptr;

	if (!Default)
		Default = static_cast<UFileToPixelDataTask*>(UFileToPixelDataTask::StaticClass()->DefaultObject);

	return Default;
}


// Class MultiTask2.GenerateMarchingCubesTask
// (None)

class UClass* UGenerateMarchingCubesTask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenerateMarchingCubesTask");

	return Clss;
}


// GenerateMarchingCubesTask MultiTask2.Default__GenerateMarchingCubesTask
// (Public, ClassDefaultObject, ArchetypeObject)

class UGenerateMarchingCubesTask* UGenerateMarchingCubesTask::GetDefaultObj()
{
	static class UGenerateMarchingCubesTask* Default = nullptr;

	if (!Default)
		Default = static_cast<UGenerateMarchingCubesTask*>(UGenerateMarchingCubesTask::StaticClass()->DefaultObject);

	return Default;
}


// Function MultiTask2.GenerateMarchingCubesTask.ConstructDensityPoint
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FIntVector                  VoxelCoordinates                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMarchingCubesDensityPoint  DensityPoint                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGenerateMarchingCubesTask::ConstructDensityPoint(struct FIntVector& VoxelCoordinates, struct FMarchingCubesDensityPoint* DensityPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenerateMarchingCubesTask", "ConstructDensityPoint");

	Params::UGenerateMarchingCubesTask_ConstructDensityPoint_Params Parms{};

	Parms.VoxelCoordinates = VoxelCoordinates;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DensityPoint != nullptr)
		*DensityPoint = std::move(Parms.DensityPoint);

}


// Class MultiTask2.MultiFrameAsyncTask
// (None)

class UClass* UMultiFrameAsyncTask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiFrameAsyncTask");

	return Clss;
}


// MultiFrameAsyncTask MultiTask2.Default__MultiFrameAsyncTask
// (Public, ClassDefaultObject, ArchetypeObject)

class UMultiFrameAsyncTask* UMultiFrameAsyncTask::GetDefaultObj()
{
	static class UMultiFrameAsyncTask* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiFrameAsyncTask*>(UMultiFrameAsyncTask::StaticClass()->DefaultObject);

	return Default;
}


// Function MultiTask2.MultiFrameAsyncTask.TaskBody
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMultiFrameAsyncTask::TaskBody()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiFrameAsyncTask", "TaskBody");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MultiTask2.MultiFrameLoop1DTask
// (None)

class UClass* UMultiFrameLoop1DTask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiFrameLoop1DTask");

	return Clss;
}


// MultiFrameLoop1DTask MultiTask2.Default__MultiFrameLoop1DTask
// (Public, ClassDefaultObject, ArchetypeObject)

class UMultiFrameLoop1DTask* UMultiFrameLoop1DTask::GetDefaultObj()
{
	static class UMultiFrameLoop1DTask* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiFrameLoop1DTask*>(UMultiFrameLoop1DTask::StaticClass()->DefaultObject);

	return Default;
}


// Function MultiTask2.MultiFrameLoop1DTask.TaskBody
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiFrameLoop1DTask::TaskBody(int32 X)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiFrameLoop1DTask", "TaskBody");

	Params::UMultiFrameLoop1DTask_TaskBody_Params Parms{};

	Parms.X = X;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MultiTask2.MultiFrameLoop2DTask
// (None)

class UClass* UMultiFrameLoop2DTask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiFrameLoop2DTask");

	return Clss;
}


// MultiFrameLoop2DTask MultiTask2.Default__MultiFrameLoop2DTask
// (Public, ClassDefaultObject, ArchetypeObject)

class UMultiFrameLoop2DTask* UMultiFrameLoop2DTask::GetDefaultObj()
{
	static class UMultiFrameLoop2DTask* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiFrameLoop2DTask*>(UMultiFrameLoop2DTask::StaticClass()->DefaultObject);

	return Default;
}


// Function MultiTask2.MultiFrameLoop2DTask.TaskBody
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Y                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiFrameLoop2DTask::TaskBody(int32 X, int32 Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiFrameLoop2DTask", "TaskBody");

	Params::UMultiFrameLoop2DTask_TaskBody_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MultiTask2.MultiFrameLoop3DTask
// (None)

class UClass* UMultiFrameLoop3DTask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiFrameLoop3DTask");

	return Clss;
}


// MultiFrameLoop3DTask MultiTask2.Default__MultiFrameLoop3DTask
// (Public, ClassDefaultObject, ArchetypeObject)

class UMultiFrameLoop3DTask* UMultiFrameLoop3DTask::GetDefaultObj()
{
	static class UMultiFrameLoop3DTask* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiFrameLoop3DTask*>(UMultiFrameLoop3DTask::StaticClass()->DefaultObject);

	return Default;
}


// Function MultiTask2.MultiFrameLoop3DTask.TaskBody
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Y                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Z                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiFrameLoop3DTask::TaskBody(int32 X, int32 Y, int32 Z)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiFrameLoop3DTask", "TaskBody");

	Params::UMultiFrameLoop3DTask_TaskBody_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MultiTask2.MultiFrameTaskLibrary
// (None)

class UClass* UMultiFrameTaskLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiFrameTaskLibrary");

	return Clss;
}


// MultiFrameTaskLibrary MultiTask2.Default__MultiFrameTaskLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMultiFrameTaskLibrary* UMultiFrameTaskLibrary::GetDefaultObj()
{
	static class UMultiFrameTaskLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiFrameTaskLibrary*>(UMultiFrameTaskLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MultiTask2.MultiFrameTaskLibrary.DoLoop3DTask
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMultiTask2BranchesWithBodyOut                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TSubclassOf<class UMultiFrameLoop3DTask>Class                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              X                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Y                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Z                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMultiFrameLoop3DTask*       Task                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              XSize                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              YSize                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ZSize                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              IterationsPerTick                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Delay                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiFrameTaskLibrary::DoLoop3DTask(class UObject* WorldContextObject, enum class EMultiTask2BranchesWithBody* Out, const struct FLatentActionInfo& LatentInfo, TSubclassOf<class UMultiFrameLoop3DTask> Class, int32* X, int32* Y, int32* Z, class UMultiFrameLoop3DTask** Task, int32 XSize, int32 YSize, int32 ZSize, int32 IterationsPerTick, float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiFrameTaskLibrary", "DoLoop3DTask");

	Params::UMultiFrameTaskLibrary_DoLoop3DTask_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.Class = Class;
	Parms.XSize = XSize;
	Parms.YSize = YSize;
	Parms.ZSize = ZSize;
	Parms.IterationsPerTick = IterationsPerTick;
	Parms.Delay = Delay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Out != nullptr)
		*Out = Parms.Out;

	if (X != nullptr)
		*X = Parms.X;

	if (Y != nullptr)
		*Y = Parms.Y;

	if (Z != nullptr)
		*Z = Parms.Z;

	if (Task != nullptr)
		*Task = Parms.Task;

}


// Function MultiTask2.MultiFrameTaskLibrary.DoLoop2DTask
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMultiTask2BranchesWithBodyOut                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TSubclassOf<class UMultiFrameLoop2DTask>Class                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              X                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Y                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMultiFrameLoop2DTask*       Task                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              XSize                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              YSize                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              IterationsPerTick                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Delay                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiFrameTaskLibrary::DoLoop2DTask(class UObject* WorldContextObject, enum class EMultiTask2BranchesWithBody* Out, const struct FLatentActionInfo& LatentInfo, TSubclassOf<class UMultiFrameLoop2DTask> Class, int32* X, int32* Y, class UMultiFrameLoop2DTask** Task, int32 XSize, int32 YSize, int32 IterationsPerTick, float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiFrameTaskLibrary", "DoLoop2DTask");

	Params::UMultiFrameTaskLibrary_DoLoop2DTask_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.Class = Class;
	Parms.XSize = XSize;
	Parms.YSize = YSize;
	Parms.IterationsPerTick = IterationsPerTick;
	Parms.Delay = Delay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Out != nullptr)
		*Out = Parms.Out;

	if (X != nullptr)
		*X = Parms.X;

	if (Y != nullptr)
		*Y = Parms.Y;

	if (Task != nullptr)
		*Task = Parms.Task;

}


// Function MultiTask2.MultiFrameTaskLibrary.DoLoop1DTask
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMultiTask2BranchesWithBodyOut                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TSubclassOf<class UMultiFrameLoop1DTask>Class                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              X                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMultiFrameLoop1DTask*       Task                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              XSize                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              IterationsPerTick                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Delay                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiFrameTaskLibrary::DoLoop1DTask(class UObject* WorldContextObject, enum class EMultiTask2BranchesWithBody* Out, const struct FLatentActionInfo& LatentInfo, TSubclassOf<class UMultiFrameLoop1DTask> Class, int32* X, class UMultiFrameLoop1DTask** Task, int32 XSize, int32 IterationsPerTick, float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiFrameTaskLibrary", "DoLoop1DTask");

	Params::UMultiFrameTaskLibrary_DoLoop1DTask_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.Class = Class;
	Parms.XSize = XSize;
	Parms.IterationsPerTick = IterationsPerTick;
	Parms.Delay = Delay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Out != nullptr)
		*Out = Parms.Out;

	if (X != nullptr)
		*X = Parms.X;

	if (Task != nullptr)
		*Task = Parms.Task;

}


// Function MultiTask2.MultiFrameTaskLibrary.DoAsyncTask
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMultiTask2BranchesNoCompleteWithBodyOut                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TSubclassOf<class UMultiFrameAsyncTask>Class                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMultiFrameAsyncTask*        Task                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              IterationsPerTick                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Delay                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiFrameTaskLibrary::DoAsyncTask(class UObject* WorldContextObject, enum class EMultiTask2BranchesNoCompleteWithBody* Out, const struct FLatentActionInfo& LatentInfo, TSubclassOf<class UMultiFrameAsyncTask> Class, class UMultiFrameAsyncTask** Task, int32 IterationsPerTick, float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiFrameTaskLibrary", "DoAsyncTask");

	Params::UMultiFrameTaskLibrary_DoAsyncTask_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.Class = Class;
	Parms.IterationsPerTick = IterationsPerTick;
	Parms.Delay = Delay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Out != nullptr)
		*Out = Parms.Out;

	if (Task != nullptr)
		*Task = Parms.Task;

}


// Class MultiTask2.MultiTask2TraceLibrary
// (None)

class UClass* UMultiTask2TraceLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiTask2TraceLibrary");

	return Clss;
}


// MultiTask2TraceLibrary MultiTask2.Default__MultiTask2TraceLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMultiTask2TraceLibrary* UMultiTask2TraceLibrary::GetDefaultObj()
{
	static class UMultiTask2TraceLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiTask2TraceLibrary*>(UMultiTask2TraceLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MultiTask2.MultiTask2TraceLibrary.SphereTraceSingleThreadSafe
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETraceTypeQuery         TraceChannel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTraceComplex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorsToIgnore                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FHitResult                  OutHit                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::SphereTraceSingleThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, struct FHitResult* OutHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2TraceLibrary", "SphereTraceSingleThreadSafe");

	Params::UMultiTask2TraceLibrary_SphereTraceSingleThreadSafe_Params Parms{};

	Parms.World = World;
	Parms.Start = Start;
	Parms.End = End;
	Parms.Radius = Radius;
	Parms.TraceChannel = TraceChannel;
	Parms.bTraceComplex = bTraceComplex;
	Parms.ActorsToIgnore = ActorsToIgnore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHit != nullptr)
		*OutHit = std::move(Parms.OutHit);

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2TraceLibrary.SphereTraceSingleForObjectsThreadSafe
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EObjectTypeQuery>ObjectTypes                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bTraceComplex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorsToIgnore                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FHitResult                  OutHit                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::SphereTraceSingleForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, struct FHitResult* OutHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2TraceLibrary", "SphereTraceSingleForObjectsThreadSafe");

	Params::UMultiTask2TraceLibrary_SphereTraceSingleForObjectsThreadSafe_Params Parms{};

	Parms.World = World;
	Parms.Start = Start;
	Parms.End = End;
	Parms.Radius = Radius;
	Parms.ObjectTypes = ObjectTypes;
	Parms.bTraceComplex = bTraceComplex;
	Parms.ActorsToIgnore = ActorsToIgnore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHit != nullptr)
		*OutHit = std::move(Parms.OutHit);

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2TraceLibrary.SphereTraceSingleByProfileThreadSafe
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ProfileName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTraceComplex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorsToIgnore                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FHitResult                  OutHit                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::SphereTraceSingleByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, class FName ProfileName, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, struct FHitResult* OutHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2TraceLibrary", "SphereTraceSingleByProfileThreadSafe");

	Params::UMultiTask2TraceLibrary_SphereTraceSingleByProfileThreadSafe_Params Parms{};

	Parms.World = World;
	Parms.Start = Start;
	Parms.End = End;
	Parms.Radius = Radius;
	Parms.ProfileName = ProfileName;
	Parms.bTraceComplex = bTraceComplex;
	Parms.ActorsToIgnore = ActorsToIgnore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHit != nullptr)
		*OutHit = std::move(Parms.OutHit);

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2TraceLibrary.SphereTraceMultiThreadSafe
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETraceTypeQuery         TraceChannel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTraceComplex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorsToIgnore                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FHitResult>          OutHits                                                          (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::SphereTraceMultiThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, TArray<struct FHitResult>* OutHits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2TraceLibrary", "SphereTraceMultiThreadSafe");

	Params::UMultiTask2TraceLibrary_SphereTraceMultiThreadSafe_Params Parms{};

	Parms.World = World;
	Parms.Start = Start;
	Parms.End = End;
	Parms.Radius = Radius;
	Parms.TraceChannel = TraceChannel;
	Parms.bTraceComplex = bTraceComplex;
	Parms.ActorsToIgnore = ActorsToIgnore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHits != nullptr)
		*OutHits = std::move(Parms.OutHits);

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2TraceLibrary.SphereTraceMultiForObjectsThreadSafe
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EObjectTypeQuery>ObjectTypes                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bTraceComplex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorsToIgnore                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FHitResult>          OutHits                                                          (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::SphereTraceMultiForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, TArray<struct FHitResult>* OutHits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2TraceLibrary", "SphereTraceMultiForObjectsThreadSafe");

	Params::UMultiTask2TraceLibrary_SphereTraceMultiForObjectsThreadSafe_Params Parms{};

	Parms.World = World;
	Parms.Start = Start;
	Parms.End = End;
	Parms.Radius = Radius;
	Parms.ObjectTypes = ObjectTypes;
	Parms.bTraceComplex = bTraceComplex;
	Parms.ActorsToIgnore = ActorsToIgnore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHits != nullptr)
		*OutHits = std::move(Parms.OutHits);

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2TraceLibrary.SphereTraceMultiByProfileThreadSafe
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ProfileName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTraceComplex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorsToIgnore                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FHitResult>          OutHits                                                          (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::SphereTraceMultiByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, class FName ProfileName, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, TArray<struct FHitResult>* OutHits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2TraceLibrary", "SphereTraceMultiByProfileThreadSafe");

	Params::UMultiTask2TraceLibrary_SphereTraceMultiByProfileThreadSafe_Params Parms{};

	Parms.World = World;
	Parms.Start = Start;
	Parms.End = End;
	Parms.Radius = Radius;
	Parms.ProfileName = ProfileName;
	Parms.bTraceComplex = bTraceComplex;
	Parms.ActorsToIgnore = ActorsToIgnore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHits != nullptr)
		*OutHits = std::move(Parms.OutHits);

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2TraceLibrary.LineTraceSingleThreadSafe
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETraceTypeQuery         TraceChannel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTraceComplex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorsToIgnore                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FHitResult                  OutHit                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::LineTraceSingleThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, struct FHitResult* OutHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2TraceLibrary", "LineTraceSingleThreadSafe");

	Params::UMultiTask2TraceLibrary_LineTraceSingleThreadSafe_Params Parms{};

	Parms.World = World;
	Parms.Start = Start;
	Parms.End = End;
	Parms.TraceChannel = TraceChannel;
	Parms.bTraceComplex = bTraceComplex;
	Parms.ActorsToIgnore = ActorsToIgnore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHit != nullptr)
		*OutHit = std::move(Parms.OutHit);

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2TraceLibrary.LineTraceSingleForObjectsThreadSafe
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EObjectTypeQuery>ObjectTypes                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bTraceComplex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorsToIgnore                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FHitResult                  OutHit                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::LineTraceSingleForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, struct FHitResult* OutHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2TraceLibrary", "LineTraceSingleForObjectsThreadSafe");

	Params::UMultiTask2TraceLibrary_LineTraceSingleForObjectsThreadSafe_Params Parms{};

	Parms.World = World;
	Parms.Start = Start;
	Parms.End = End;
	Parms.ObjectTypes = ObjectTypes;
	Parms.bTraceComplex = bTraceComplex;
	Parms.ActorsToIgnore = ActorsToIgnore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHit != nullptr)
		*OutHit = std::move(Parms.OutHit);

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2TraceLibrary.LineTraceSingleByProfileThreadSafe
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ProfileName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTraceComplex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorsToIgnore                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FHitResult                  OutHit                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::LineTraceSingleByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, class FName ProfileName, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, struct FHitResult* OutHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2TraceLibrary", "LineTraceSingleByProfileThreadSafe");

	Params::UMultiTask2TraceLibrary_LineTraceSingleByProfileThreadSafe_Params Parms{};

	Parms.World = World;
	Parms.Start = Start;
	Parms.End = End;
	Parms.ProfileName = ProfileName;
	Parms.bTraceComplex = bTraceComplex;
	Parms.ActorsToIgnore = ActorsToIgnore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHit != nullptr)
		*OutHit = std::move(Parms.OutHit);

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2TraceLibrary.LineTraceMultiThreadSafe
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETraceTypeQuery         TraceChannel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTraceComplex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorsToIgnore                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FHitResult>          OutHits                                                          (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::LineTraceMultiThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, TArray<struct FHitResult>* OutHits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2TraceLibrary", "LineTraceMultiThreadSafe");

	Params::UMultiTask2TraceLibrary_LineTraceMultiThreadSafe_Params Parms{};

	Parms.World = World;
	Parms.Start = Start;
	Parms.End = End;
	Parms.TraceChannel = TraceChannel;
	Parms.bTraceComplex = bTraceComplex;
	Parms.ActorsToIgnore = ActorsToIgnore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHits != nullptr)
		*OutHits = std::move(Parms.OutHits);

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2TraceLibrary.LineTraceMultiForObjectsThreadSafe
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EObjectTypeQuery>ObjectTypes                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bTraceComplex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorsToIgnore                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FHitResult>          OutHits                                                          (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::LineTraceMultiForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, TArray<struct FHitResult>* OutHits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2TraceLibrary", "LineTraceMultiForObjectsThreadSafe");

	Params::UMultiTask2TraceLibrary_LineTraceMultiForObjectsThreadSafe_Params Parms{};

	Parms.World = World;
	Parms.Start = Start;
	Parms.End = End;
	Parms.ObjectTypes = ObjectTypes;
	Parms.bTraceComplex = bTraceComplex;
	Parms.ActorsToIgnore = ActorsToIgnore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHits != nullptr)
		*OutHits = std::move(Parms.OutHits);

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2TraceLibrary.LineTraceMultiByProfileThreadSafe
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ProfileName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTraceComplex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorsToIgnore                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FHitResult>          OutHits                                                          (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::LineTraceMultiByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, class FName ProfileName, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, TArray<struct FHitResult>* OutHits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2TraceLibrary", "LineTraceMultiByProfileThreadSafe");

	Params::UMultiTask2TraceLibrary_LineTraceMultiByProfileThreadSafe_Params Parms{};

	Parms.World = World;
	Parms.Start = Start;
	Parms.End = End;
	Parms.ProfileName = ProfileName;
	Parms.bTraceComplex = bTraceComplex;
	Parms.ActorsToIgnore = ActorsToIgnore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHits != nullptr)
		*OutHits = std::move(Parms.OutHits);

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceSingleThreadSafe
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              HalfHeight                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETraceTypeQuery         TraceChannel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTraceComplex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorsToIgnore                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FHitResult                  OutHit                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::CapsuleTraceSingleThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, struct FHitResult* OutHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2TraceLibrary", "CapsuleTraceSingleThreadSafe");

	Params::UMultiTask2TraceLibrary_CapsuleTraceSingleThreadSafe_Params Parms{};

	Parms.World = World;
	Parms.Start = Start;
	Parms.End = End;
	Parms.Radius = Radius;
	Parms.HalfHeight = HalfHeight;
	Parms.TraceChannel = TraceChannel;
	Parms.bTraceComplex = bTraceComplex;
	Parms.ActorsToIgnore = ActorsToIgnore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHit != nullptr)
		*OutHit = std::move(Parms.OutHit);

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceSingleForObjectsThreadSafe
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              HalfHeight                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EObjectTypeQuery>ObjectTypes                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bTraceComplex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorsToIgnore                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FHitResult                  OutHit                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::CapsuleTraceSingleForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, struct FHitResult* OutHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2TraceLibrary", "CapsuleTraceSingleForObjectsThreadSafe");

	Params::UMultiTask2TraceLibrary_CapsuleTraceSingleForObjectsThreadSafe_Params Parms{};

	Parms.World = World;
	Parms.Start = Start;
	Parms.End = End;
	Parms.Radius = Radius;
	Parms.HalfHeight = HalfHeight;
	Parms.ObjectTypes = ObjectTypes;
	Parms.bTraceComplex = bTraceComplex;
	Parms.ActorsToIgnore = ActorsToIgnore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHit != nullptr)
		*OutHit = std::move(Parms.OutHit);

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceSingleByProfileThreadSafe
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              HalfHeight                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ProfileName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTraceComplex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorsToIgnore                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FHitResult                  OutHit                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::CapsuleTraceSingleByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, class FName ProfileName, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, struct FHitResult* OutHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2TraceLibrary", "CapsuleTraceSingleByProfileThreadSafe");

	Params::UMultiTask2TraceLibrary_CapsuleTraceSingleByProfileThreadSafe_Params Parms{};

	Parms.World = World;
	Parms.Start = Start;
	Parms.End = End;
	Parms.Radius = Radius;
	Parms.HalfHeight = HalfHeight;
	Parms.ProfileName = ProfileName;
	Parms.bTraceComplex = bTraceComplex;
	Parms.ActorsToIgnore = ActorsToIgnore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHit != nullptr)
		*OutHit = std::move(Parms.OutHit);

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceMultiThreadSafe
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              HalfHeight                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETraceTypeQuery         TraceChannel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTraceComplex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorsToIgnore                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FHitResult>          OutHits                                                          (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::CapsuleTraceMultiThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, TArray<struct FHitResult>* OutHits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2TraceLibrary", "CapsuleTraceMultiThreadSafe");

	Params::UMultiTask2TraceLibrary_CapsuleTraceMultiThreadSafe_Params Parms{};

	Parms.World = World;
	Parms.Start = Start;
	Parms.End = End;
	Parms.Radius = Radius;
	Parms.HalfHeight = HalfHeight;
	Parms.TraceChannel = TraceChannel;
	Parms.bTraceComplex = bTraceComplex;
	Parms.ActorsToIgnore = ActorsToIgnore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHits != nullptr)
		*OutHits = std::move(Parms.OutHits);

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceMultiForObjectsThreadSafe
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              HalfHeight                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EObjectTypeQuery>ObjectTypes                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bTraceComplex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorsToIgnore                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FHitResult>          OutHits                                                          (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::CapsuleTraceMultiForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, TArray<struct FHitResult>* OutHits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2TraceLibrary", "CapsuleTraceMultiForObjectsThreadSafe");

	Params::UMultiTask2TraceLibrary_CapsuleTraceMultiForObjectsThreadSafe_Params Parms{};

	Parms.World = World;
	Parms.Start = Start;
	Parms.End = End;
	Parms.Radius = Radius;
	Parms.HalfHeight = HalfHeight;
	Parms.ObjectTypes = ObjectTypes;
	Parms.bTraceComplex = bTraceComplex;
	Parms.ActorsToIgnore = ActorsToIgnore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHits != nullptr)
		*OutHits = std::move(Parms.OutHits);

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceMultiByProfileThreadSafe
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              HalfHeight                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ProfileName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTraceComplex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorsToIgnore                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FHitResult>          OutHits                                                          (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::CapsuleTraceMultiByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, class FName ProfileName, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, TArray<struct FHitResult>* OutHits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2TraceLibrary", "CapsuleTraceMultiByProfileThreadSafe");

	Params::UMultiTask2TraceLibrary_CapsuleTraceMultiByProfileThreadSafe_Params Parms{};

	Parms.World = World;
	Parms.Start = Start;
	Parms.End = End;
	Parms.Radius = Radius;
	Parms.HalfHeight = HalfHeight;
	Parms.ProfileName = ProfileName;
	Parms.bTraceComplex = bTraceComplex;
	Parms.ActorsToIgnore = ActorsToIgnore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHits != nullptr)
		*OutHits = std::move(Parms.OutHits);

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2TraceLibrary.BoxTraceSingleThreadSafe
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HalfSize                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Orientation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// enum class ETraceTypeQuery         TraceChannel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTraceComplex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorsToIgnore                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FHitResult                  OutHit                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::BoxTraceSingleThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, struct FHitResult* OutHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2TraceLibrary", "BoxTraceSingleThreadSafe");

	Params::UMultiTask2TraceLibrary_BoxTraceSingleThreadSafe_Params Parms{};

	Parms.World = World;
	Parms.Start = Start;
	Parms.End = End;
	Parms.HalfSize = HalfSize;
	Parms.Orientation = Orientation;
	Parms.TraceChannel = TraceChannel;
	Parms.bTraceComplex = bTraceComplex;
	Parms.ActorsToIgnore = ActorsToIgnore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHit != nullptr)
		*OutHit = std::move(Parms.OutHit);

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2TraceLibrary.BoxTraceSingleForObjectsThreadSafe
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HalfSize                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Orientation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// TArray<enum class EObjectTypeQuery>ObjectTypes                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bTraceComplex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorsToIgnore                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FHitResult                  OutHit                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::BoxTraceSingleForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, struct FHitResult* OutHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2TraceLibrary", "BoxTraceSingleForObjectsThreadSafe");

	Params::UMultiTask2TraceLibrary_BoxTraceSingleForObjectsThreadSafe_Params Parms{};

	Parms.World = World;
	Parms.Start = Start;
	Parms.End = End;
	Parms.HalfSize = HalfSize;
	Parms.Orientation = Orientation;
	Parms.ObjectTypes = ObjectTypes;
	Parms.bTraceComplex = bTraceComplex;
	Parms.ActorsToIgnore = ActorsToIgnore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHit != nullptr)
		*OutHit = std::move(Parms.OutHit);

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2TraceLibrary.BoxTraceSingleByProfileThreadSafe
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HalfSize                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Orientation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FName                        ProfileName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTraceComplex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorsToIgnore                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FHitResult                  OutHit                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::BoxTraceSingleByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, class FName ProfileName, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, struct FHitResult* OutHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2TraceLibrary", "BoxTraceSingleByProfileThreadSafe");

	Params::UMultiTask2TraceLibrary_BoxTraceSingleByProfileThreadSafe_Params Parms{};

	Parms.World = World;
	Parms.Start = Start;
	Parms.End = End;
	Parms.HalfSize = HalfSize;
	Parms.Orientation = Orientation;
	Parms.ProfileName = ProfileName;
	Parms.bTraceComplex = bTraceComplex;
	Parms.ActorsToIgnore = ActorsToIgnore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHit != nullptr)
		*OutHit = std::move(Parms.OutHit);

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2TraceLibrary.BoxTraceMultiThreadSafe
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HalfSize                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Orientation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// enum class ETraceTypeQuery         TraceChannel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTraceComplex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorsToIgnore                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FHitResult>          OutHits                                                          (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::BoxTraceMultiThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, TArray<struct FHitResult>* OutHits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2TraceLibrary", "BoxTraceMultiThreadSafe");

	Params::UMultiTask2TraceLibrary_BoxTraceMultiThreadSafe_Params Parms{};

	Parms.World = World;
	Parms.Start = Start;
	Parms.End = End;
	Parms.HalfSize = HalfSize;
	Parms.Orientation = Orientation;
	Parms.TraceChannel = TraceChannel;
	Parms.bTraceComplex = bTraceComplex;
	Parms.ActorsToIgnore = ActorsToIgnore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHits != nullptr)
		*OutHits = std::move(Parms.OutHits);

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2TraceLibrary.BoxTraceMultiForObjectsThreadSafe
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HalfSize                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Orientation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// TArray<enum class EObjectTypeQuery>ObjectTypes                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bTraceComplex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorsToIgnore                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FHitResult>          OutHits                                                          (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::BoxTraceMultiForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, TArray<struct FHitResult>* OutHits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2TraceLibrary", "BoxTraceMultiForObjectsThreadSafe");

	Params::UMultiTask2TraceLibrary_BoxTraceMultiForObjectsThreadSafe_Params Parms{};

	Parms.World = World;
	Parms.Start = Start;
	Parms.End = End;
	Parms.HalfSize = HalfSize;
	Parms.Orientation = Orientation;
	Parms.ObjectTypes = ObjectTypes;
	Parms.bTraceComplex = bTraceComplex;
	Parms.ActorsToIgnore = ActorsToIgnore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHits != nullptr)
		*OutHits = std::move(Parms.OutHits);

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2TraceLibrary.BoxTraceMultiByProfileThreadSafe
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HalfSize                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Orientation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FName                        ProfileName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTraceComplex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorsToIgnore                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FHitResult>          OutHits                                                          (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2TraceLibrary::BoxTraceMultiByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, class FName ProfileName, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, TArray<struct FHitResult>* OutHits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2TraceLibrary", "BoxTraceMultiByProfileThreadSafe");

	Params::UMultiTask2TraceLibrary_BoxTraceMultiByProfileThreadSafe_Params Parms{};

	Parms.World = World;
	Parms.Start = Start;
	Parms.End = End;
	Parms.HalfSize = HalfSize;
	Parms.Orientation = Orientation;
	Parms.ProfileName = ProfileName;
	Parms.bTraceComplex = bTraceComplex;
	Parms.ActorsToIgnore = ActorsToIgnore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHits != nullptr)
		*OutHits = std::move(Parms.OutHits);

	return Parms.ReturnValue;

}


// Class MultiTask2.MultiTask2UtilitiesLibrary
// (None)

class UClass* UMultiTask2UtilitiesLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiTask2UtilitiesLibrary");

	return Clss;
}


// MultiTask2UtilitiesLibrary MultiTask2.Default__MultiTask2UtilitiesLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMultiTask2UtilitiesLibrary* UMultiTask2UtilitiesLibrary::GetDefaultObj()
{
	static class UMultiTask2UtilitiesLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiTask2UtilitiesLibrary*>(UMultiTask2UtilitiesLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MultiTask2.MultiTask2UtilitiesLibrary.UpdateNavigationData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*             Component                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiTask2UtilitiesLibrary::UpdateNavigationData(class UActorComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2UtilitiesLibrary", "UpdateNavigationData");

	Params::UMultiTask2UtilitiesLibrary_UpdateNavigationData_Params Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MultiTask2.MultiTask2UtilitiesLibrary.UpdateInstancePhysicsBody
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UHierarchicalInstancedStaticMeshComponent*HISM                                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InstanceIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTeleport                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2UtilitiesLibrary::UpdateInstancePhysicsBody(class UHierarchicalInstancedStaticMeshComponent* HISM, int32 InstanceIndex, bool bTeleport)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2UtilitiesLibrary", "UpdateInstancePhysicsBody");

	Params::UMultiTask2UtilitiesLibrary_UpdateInstancePhysicsBody_Params Parms{};

	Parms.HISM = HISM;
	Parms.InstanceIndex = InstanceIndex;
	Parms.bTeleport = bTeleport;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2UtilitiesLibrary.SetMaximumLoopIterations
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              MaximumLoopIterations                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiTask2UtilitiesLibrary::SetMaximumLoopIterations(int32 MaximumLoopIterations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2UtilitiesLibrary", "SetMaximumLoopIterations");

	Params::UMultiTask2UtilitiesLibrary_SetMaximumLoopIterations_Params Parms{};

	Parms.MaximumLoopIterations = MaximumLoopIterations;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MultiTask2.MultiTask2UtilitiesLibrary.SegmentTriangleIntersection
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     StartPoint                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     EndPoint                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     A                                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     B                                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     C                                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutIntersectPoint                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutTriangleNormal                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2UtilitiesLibrary::SegmentTriangleIntersection(struct FVector& StartPoint, struct FVector& EndPoint, struct FVector& A, struct FVector& B, struct FVector& C, struct FVector* OutIntersectPoint, struct FVector* OutTriangleNormal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2UtilitiesLibrary", "SegmentTriangleIntersection");

	Params::UMultiTask2UtilitiesLibrary_SegmentTriangleIntersection_Params Parms{};

	Parms.StartPoint = StartPoint;
	Parms.EndPoint = EndPoint;
	Parms.A = A;
	Parms.B = B;
	Parms.C = C;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutIntersectPoint != nullptr)
		*OutIntersectPoint = std::move(Parms.OutIntersectPoint);

	if (OutTriangleNormal != nullptr)
		*OutTriangleNormal = std::move(Parms.OutTriangleNormal);

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2UtilitiesLibrary.ResetRunaway
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UMultiTask2UtilitiesLibrary::ResetRunaway()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2UtilitiesLibrary", "ResetRunaway");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MultiTask2.MultiTask2UtilitiesLibrary.RemoveFromRoot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiTask2UtilitiesLibrary::RemoveFromRoot(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2UtilitiesLibrary", "RemoveFromRoot");

	Params::UMultiTask2UtilitiesLibrary_RemoveFromRoot_Params Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MultiTask2.MultiTask2UtilitiesLibrary.MixThreeIntegers
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Integer1                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Integer2                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Integer3                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMultiTask2UtilitiesLibrary::MixThreeIntegers(int32 Integer1, int32 Integer2, int32 Integer3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2UtilitiesLibrary", "MixThreeIntegers");

	Params::UMultiTask2UtilitiesLibrary_MixThreeIntegers_Params Parms{};

	Parms.Integer1 = Integer1;
	Parms.Integer2 = Integer2;
	Parms.Integer3 = Integer3;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2UtilitiesLibrary.IsRunning
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMultiTaskBase*              Task                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2UtilitiesLibrary::IsRunning(class UMultiTaskBase* Task)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2UtilitiesLibrary", "IsRunning");

	Params::UMultiTask2UtilitiesLibrary_IsRunning_Params Parms{};

	Parms.Task = Task;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2UtilitiesLibrary.IsCanceled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMultiTaskBase*              Task                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2UtilitiesLibrary::IsCanceled(class UMultiTaskBase* Task)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2UtilitiesLibrary", "IsCanceled");

	Params::UMultiTask2UtilitiesLibrary_IsCanceled_Params Parms{};

	Parms.Task = Task;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2UtilitiesLibrary.GetTriangleAreaSize
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     A                                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     B                                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     C                                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMultiTask2UtilitiesLibrary::GetTriangleAreaSize(struct FVector& A, struct FVector& B, struct FVector& C)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2UtilitiesLibrary", "GetTriangleAreaSize");

	Params::UMultiTask2UtilitiesLibrary_GetTriangleAreaSize_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.C = C;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2UtilitiesLibrary.GetRandomScale
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Min                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Max                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMultiTask2ScaleType    Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRandomStream               RandomStream                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     Scale                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiTask2UtilitiesLibrary::GetRandomScale(struct FVector& Min, struct FVector& Max, enum class EMultiTask2ScaleType Type, struct FRandomStream& RandomStream, struct FVector* Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2UtilitiesLibrary", "GetRandomScale");

	Params::UMultiTask2UtilitiesLibrary_GetRandomScale_Params Parms{};

	Parms.Min = Min;
	Parms.Max = Max;
	Parms.Type = Type;
	Parms.RandomStream = RandomStream;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Scale != nullptr)
		*Scale = std::move(Parms.Scale);

}


// Function MultiTask2.MultiTask2UtilitiesLibrary.GetRandomPointInTriangle
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     A                                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     B                                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     C                                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRandomStream               RandomStream                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     OutPoint                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiTask2UtilitiesLibrary::GetRandomPointInTriangle(struct FVector& A, struct FVector& B, struct FVector& C, struct FRandomStream& RandomStream, struct FVector* OutPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2UtilitiesLibrary", "GetRandomPointInTriangle");

	Params::UMultiTask2UtilitiesLibrary_GetRandomPointInTriangle_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.C = C;
	Parms.RandomStream = RandomStream;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPoint != nullptr)
		*OutPoint = std::move(Parms.OutPoint);

}


// Function MultiTask2.MultiTask2UtilitiesLibrary.GetContextWorld
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UMultiTask2UtilitiesLibrary::GetContextWorld(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2UtilitiesLibrary", "GetContextWorld");

	Params::UMultiTask2UtilitiesLibrary_GetContextWorld_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2UtilitiesLibrary.Cancel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMultiTaskBase*              Task                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiTask2UtilitiesLibrary::Cancel(class UMultiTaskBase* Task)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2UtilitiesLibrary", "Cancel");

	Params::UMultiTask2UtilitiesLibrary_Cancel_Params Parms{};

	Parms.Task = Task;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MultiTask2.MultiTask2UtilitiesLibrary.AddToRoot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiTask2UtilitiesLibrary::AddToRoot(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2UtilitiesLibrary", "AddToRoot");

	Params::UMultiTask2UtilitiesLibrary_AddToRoot_Params Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MultiTask2.MultiTask2VoxelLibrary
// (None)

class UClass* UMultiTask2VoxelLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiTask2VoxelLibrary");

	return Clss;
}


// MultiTask2VoxelLibrary MultiTask2.Default__MultiTask2VoxelLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMultiTask2VoxelLibrary* UMultiTask2VoxelLibrary::GetDefaultObj()
{
	static class UMultiTask2VoxelLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiTask2VoxelLibrary*>(UMultiTask2VoxelLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MultiTask2.MultiTask2VoxelLibrary.VoxelCoordinatesToLocalLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     VoxelCoordinates                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMarchingCubesSettings      Settings                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiTask2VoxelLibrary::VoxelCoordinatesToLocalLocation(struct FVector& VoxelCoordinates, struct FMarchingCubesSettings& Settings, struct FVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2VoxelLibrary", "VoxelCoordinatesToLocalLocation");

	Params::UMultiTask2VoxelLibrary_VoxelCoordinatesToLocalLocation_Params Parms{};

	Parms.VoxelCoordinates = VoxelCoordinates;
	Parms.Settings = Settings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function MultiTask2.MultiTask2VoxelLibrary.VoxelCoordinatesToLinearIndex
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FIntVector                  VoxelCoordinates                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMarchingCubesSettings      Settings                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMultiTask2VoxelLibrary::VoxelCoordinatesToLinearIndex(struct FIntVector& VoxelCoordinates, struct FMarchingCubesSettings& Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2VoxelLibrary", "VoxelCoordinatesToLinearIndex");

	Params::UMultiTask2VoxelLibrary_VoxelCoordinatesToLinearIndex_Params Parms{};

	Parms.VoxelCoordinates = VoxelCoordinates;
	Parms.Settings = Settings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2VoxelLibrary.LinearIndexToVoxelCoordinates
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              LinearIndex                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMarchingCubesSettings      Settings                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FIntVector                  VoxelCoordinates                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiTask2VoxelLibrary::LinearIndexToVoxelCoordinates(int32& LinearIndex, struct FMarchingCubesSettings& Settings, struct FIntVector* VoxelCoordinates)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2VoxelLibrary", "LinearIndexToVoxelCoordinates");

	Params::UMultiTask2VoxelLibrary_LinearIndexToVoxelCoordinates_Params Parms{};

	Parms.LinearIndex = LinearIndex;
	Parms.Settings = Settings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VoxelCoordinates != nullptr)
		*VoxelCoordinates = std::move(Parms.VoxelCoordinates);

}


// Function MultiTask2.MultiTask2VoxelLibrary.IsInRange
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FIntVector                  VoxelCoordinates                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMarchingCubesSettings      Settings                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2VoxelLibrary::IsInRange(struct FIntVector& VoxelCoordinates, struct FMarchingCubesSettings& Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2VoxelLibrary", "IsInRange");

	Params::UMultiTask2VoxelLibrary_IsInRange_Params Parms{};

	Parms.VoxelCoordinates = VoxelCoordinates;
	Parms.Settings = Settings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2VoxelLibrary.GetVoxelCoordinatesInRadius
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  GeometryTransform                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     BrushLocation                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Radius                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMarchingCubesSettings      Settings                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FIntVector>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMultiTask2VoxelLibrary::GetVoxelCoordinatesInRadius(struct FTransform& GeometryTransform, struct FVector& BrushLocation, struct FVector& Radius, struct FMarchingCubesSettings& Settings, TArray<struct FIntVector>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2VoxelLibrary", "GetVoxelCoordinatesInRadius");

	Params::UMultiTask2VoxelLibrary_GetVoxelCoordinatesInRadius_Params Parms{};

	Parms.GeometryTransform = GeometryTransform;
	Parms.BrushLocation = BrushLocation;
	Parms.Radius = Radius;
	Parms.Settings = Settings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function MultiTask2.MultiTask2VoxelLibrary.GetVoxelCoordinatesAtLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  GeometryTransform                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMarchingCubesSettings      Settings                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FIntVector                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiTask2VoxelLibrary::GetVoxelCoordinatesAtLocation(struct FTransform& GeometryTransform, struct FVector& Location, struct FMarchingCubesSettings& Settings, struct FIntVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2VoxelLibrary", "GetVoxelCoordinatesAtLocation");

	Params::UMultiTask2VoxelLibrary_GetVoxelCoordinatesAtLocation_Params Parms{};

	Parms.GeometryTransform = GeometryTransform;
	Parms.Location = Location;
	Parms.Settings = Settings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function MultiTask2.MultiTask2VoxelLibrary.GetVerticeCount_VoxelData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMarchingCubesData          VoxelData                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMultiTask2VoxelLibrary::GetVerticeCount_VoxelData(struct FMarchingCubesData& VoxelData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2VoxelLibrary", "GetVerticeCount_VoxelData");

	Params::UMultiTask2VoxelLibrary_GetVerticeCount_VoxelData_Params Parms{};

	Parms.VoxelData = VoxelData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2VoxelLibrary.GetVertice_VoxelData
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMarchingCubesData          VoxelData                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              VerticeIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2VoxelLibrary::GetVertice_VoxelData(struct FMarchingCubesData& VoxelData, int32 VerticeIndex, struct FVector* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2VoxelLibrary", "GetVertice_VoxelData");

	Params::UMultiTask2VoxelLibrary_GetVertice_VoxelData_Params Parms{};

	Parms.VoxelData = VoxelData;
	Parms.VerticeIndex = VerticeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = std::move(Parms.OutValue);

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2VoxelLibrary.GetTriangleCount_VoxelData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMarchingCubesData          VoxelData                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMultiTask2VoxelLibrary::GetTriangleCount_VoxelData(struct FMarchingCubesData& VoxelData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2VoxelLibrary", "GetTriangleCount_VoxelData");

	Params::UMultiTask2VoxelLibrary_GetTriangleCount_VoxelData_Params Parms{};

	Parms.VoxelData = VoxelData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2VoxelLibrary.GetTriangle_VoxelData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMarchingCubesData          VoxelData                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              TriangleIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              A                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              B                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              C                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2VoxelLibrary::GetTriangle_VoxelData(struct FMarchingCubesData& VoxelData, int32 TriangleIndex, int32* A, int32* B, int32* C)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2VoxelLibrary", "GetTriangle_VoxelData");

	Params::UMultiTask2VoxelLibrary_GetTriangle_VoxelData_Params Parms{};

	Parms.VoxelData = VoxelData;
	Parms.TriangleIndex = TriangleIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (A != nullptr)
		*A = Parms.A;

	if (B != nullptr)
		*B = Parms.B;

	if (C != nullptr)
		*C = Parms.C;

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2VoxelLibrary.GetRelevantSlots
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FIntVector                  RootSlot                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FIntVector>          ExistingChunks                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FMarchingCubesSettings      Settings                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FIntVector>          NewSlots                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FIntVector>          OldRelevantSlots                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMultiTask2VoxelLibrary::GetRelevantSlots(struct FIntVector& RootSlot, int32 Radius, TArray<struct FIntVector>& ExistingChunks, struct FMarchingCubesSettings& Settings, TArray<struct FIntVector>* NewSlots, TArray<struct FIntVector>* OldRelevantSlots)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2VoxelLibrary", "GetRelevantSlots");

	Params::UMultiTask2VoxelLibrary_GetRelevantSlots_Params Parms{};

	Parms.RootSlot = RootSlot;
	Parms.Radius = Radius;
	Parms.ExistingChunks = ExistingChunks;
	Parms.Settings = Settings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewSlots != nullptr)
		*NewSlots = std::move(Parms.NewSlots);

	if (OldRelevantSlots != nullptr)
		*OldRelevantSlots = std::move(Parms.OldRelevantSlots);

}


// Function MultiTask2.MultiTask2VoxelLibrary.GetNeighbor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FIntVector                  VoxelCoordinates                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FIntVector                  Direction                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMarchingCubesSettings      Settings                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FIntVector                  Neighbor                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTask2VoxelLibrary::GetNeighbor(struct FIntVector& VoxelCoordinates, struct FIntVector& Direction, struct FMarchingCubesSettings& Settings, struct FIntVector* Neighbor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2VoxelLibrary", "GetNeighbor");

	Params::UMultiTask2VoxelLibrary_GetNeighbor_Params Parms{};

	Parms.VoxelCoordinates = VoxelCoordinates;
	Parms.Direction = Direction;
	Parms.Settings = Settings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Neighbor != nullptr)
		*Neighbor = std::move(Parms.Neighbor);

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTask2VoxelLibrary.GetLocationFromChunkSlot
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FIntVector                  ChunkSlot                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMarchingCubesSettings      Settings                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiTask2VoxelLibrary::GetLocationFromChunkSlot(struct FIntVector& ChunkSlot, struct FMarchingCubesSettings& Settings, struct FVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2VoxelLibrary", "GetLocationFromChunkSlot");

	Params::UMultiTask2VoxelLibrary_GetLocationFromChunkSlot_Params Parms{};

	Parms.ChunkSlot = ChunkSlot;
	Parms.Settings = Settings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function MultiTask2.MultiTask2VoxelLibrary.GetChunkSlotFromLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMarchingCubesSettings      Settings                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FIntVector                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiTask2VoxelLibrary::GetChunkSlotFromLocation(struct FVector& Location, struct FMarchingCubesSettings& Settings, struct FIntVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2VoxelLibrary", "GetChunkSlotFromLocation");

	Params::UMultiTask2VoxelLibrary_GetChunkSlotFromLocation_Params Parms{};

	Parms.Location = Location;
	Parms.Settings = Settings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function MultiTask2.MultiTask2VoxelLibrary.DoGenerateMarchingCubesTask
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TSubclassOf<class UGenerateMarchingCubesTask>Class                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FIntVector                  ChunkSlot                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMarchingCubesSettings      Settings                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EMarchingCubesAlgorithm Algorithm                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceManifold                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseSharedPoints                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGenerateMarchingCubesTask*  Task                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMarchingCubesData          VoxelData                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// enum class EMultiTask2Branches     Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETaskExecutionType      ExecutionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMultiTaskThreadPool*        ThreadPool                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiTask2VoxelLibrary::DoGenerateMarchingCubesTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TSubclassOf<class UGenerateMarchingCubesTask> Class, struct FIntVector& ChunkSlot, struct FMarchingCubesSettings& Settings, enum class EMarchingCubesAlgorithm Algorithm, bool bForceManifold, bool bUseSharedPoints, class UGenerateMarchingCubesTask** Task, struct FMarchingCubesData* VoxelData, enum class EMultiTask2Branches* Out, enum class ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2VoxelLibrary", "DoGenerateMarchingCubesTask");

	Params::UMultiTask2VoxelLibrary_DoGenerateMarchingCubesTask_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.Class = Class;
	Parms.ChunkSlot = ChunkSlot;
	Parms.Settings = Settings;
	Parms.Algorithm = Algorithm;
	Parms.bForceManifold = bForceManifold;
	Parms.bUseSharedPoints = bUseSharedPoints;
	Parms.ExecutionType = ExecutionType;
	Parms.ThreadPool = ThreadPool;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Task != nullptr)
		*Task = Parms.Task;

	if (VoxelData != nullptr)
		*VoxelData = std::move(Parms.VoxelData);

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function MultiTask2.MultiTask2VoxelLibrary.DoConvertVoxelDataToMeshDataTask
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TSubclassOf<class UGenerateMarchingCubesTask>Class                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FIntVector                  ChunkSlot                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMarchingCubesSettings      Settings                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EMarchingCubesNormal    NormalType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseFlatShading                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMarchingCubesData          VoxelData                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FMarchingCubesSimplifierSettings>SimplifierSettings                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UGenerateMarchingCubesTask*  Task                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMarchingCubesMeshData>MeshData                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EMultiTask2Branches     Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETaskExecutionType      ExecutionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMultiTaskThreadPool*        ThreadPool                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiTask2VoxelLibrary::DoConvertVoxelDataToMeshDataTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TSubclassOf<class UGenerateMarchingCubesTask> Class, struct FIntVector& ChunkSlot, struct FMarchingCubesSettings& Settings, enum class EMarchingCubesNormal NormalType, bool bUseFlatShading, struct FMarchingCubesData& VoxelData, TArray<struct FMarchingCubesSimplifierSettings>& SimplifierSettings, class UGenerateMarchingCubesTask** Task, TArray<struct FMarchingCubesMeshData>* MeshData, enum class EMultiTask2Branches* Out, enum class ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTask2VoxelLibrary", "DoConvertVoxelDataToMeshDataTask");

	Params::UMultiTask2VoxelLibrary_DoConvertVoxelDataToMeshDataTask_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.Class = Class;
	Parms.ChunkSlot = ChunkSlot;
	Parms.Settings = Settings;
	Parms.NormalType = NormalType;
	Parms.bUseFlatShading = bUseFlatShading;
	Parms.VoxelData = VoxelData;
	Parms.SimplifierSettings = SimplifierSettings;
	Parms.ExecutionType = ExecutionType;
	Parms.ThreadPool = ThreadPool;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Task != nullptr)
		*Task = Parms.Task;

	if (MeshData != nullptr)
		*MeshData = std::move(Parms.MeshData);

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Class MultiTask2.MultiTaskMutex
// (None)

class UClass* UMultiTaskMutex::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiTaskMutex");

	return Clss;
}


// MultiTaskMutex MultiTask2.Default__MultiTaskMutex
// (Public, ClassDefaultObject, ArchetypeObject)

class UMultiTaskMutex* UMultiTaskMutex::GetDefaultObj()
{
	static class UMultiTaskMutex* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiTaskMutex*>(UMultiTaskMutex::StaticClass()->DefaultObject);

	return Default;
}


// Function MultiTask2.MultiTaskMutex.Unlock
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMultiTaskMutex::Unlock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTaskMutex", "Unlock");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MultiTask2.MultiTaskMutex.TryLock
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiTaskMutex::TryLock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTaskMutex", "TryLock");

	Params::UMultiTaskMutex_TryLock_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiTaskMutex.Lock
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMultiTaskMutex::Lock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTaskMutex", "Lock");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MultiTask2.MultiTaskThreadPool
// (None)

class UClass* UMultiTaskThreadPool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiTaskThreadPool");

	return Clss;
}


// MultiTaskThreadPool MultiTask2.Default__MultiTaskThreadPool
// (Public, ClassDefaultObject, ArchetypeObject)

class UMultiTaskThreadPool* UMultiTaskThreadPool::GetDefaultObj()
{
	static class UMultiTaskThreadPool* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiTaskThreadPool*>(UMultiTaskThreadPool::StaticClass()->DefaultObject);

	return Default;
}


// Function MultiTask2.MultiTaskThreadPool.GetThreadsNum
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMultiTaskThreadPool::GetThreadsNum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTaskThreadPool", "GetThreadsNum");

	Params::UMultiTaskThreadPool_GetThreadsNum_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MultiTask2.MultiThreadTaskLibrary
// (None)

class UClass* UMultiThreadTaskLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiThreadTaskLibrary");

	return Clss;
}


// MultiThreadTaskLibrary MultiTask2.Default__MultiThreadTaskLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMultiThreadTaskLibrary* UMultiThreadTaskLibrary::GetDefaultObj()
{
	static class UMultiThreadTaskLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiThreadTaskLibrary*>(UMultiThreadTaskLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MultiTask2.MultiThreadTaskLibrary.Sleep
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              Seconds                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiThreadTaskLibrary::Sleep(float Seconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiThreadTaskLibrary", "Sleep");

	Params::UMultiThreadTaskLibrary_Sleep_Params Parms{};

	Parms.Seconds = Seconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MultiTask2.MultiThreadTaskLibrary.IsInGameThread
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMultiThreadTaskLibrary::IsInGameThread()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiThreadTaskLibrary", "IsInGameThread");

	Params::UMultiThreadTaskLibrary_IsInGameThread_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiThreadTaskLibrary.GetNumberOfCoresIncludingHyperthreads
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMultiThreadTaskLibrary::GetNumberOfCoresIncludingHyperthreads()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiThreadTaskLibrary", "GetNumberOfCoresIncludingHyperthreads");

	Params::UMultiThreadTaskLibrary_GetNumberOfCoresIncludingHyperthreads_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiThreadTaskLibrary.GetNumberOfCores
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMultiThreadTaskLibrary::GetNumberOfCores()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiThreadTaskLibrary", "GetNumberOfCores");

	Params::UMultiThreadTaskLibrary_GetNumberOfCores_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiThreadTaskLibrary.DoUpdateInstances4
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UHierarchicalInstancedStaticMeshComponent*HISM                                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StartIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FTransform>          Transforms                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector4>            CustomData                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Chunks                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWorldSpace                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTeleport                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUpdatePhysicsBodies                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMarkRenderStateDirty                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCreateInternalDataCopies                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMultiTaskBase*              Task                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMultiTask2Branches     Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETaskExecutionType      ExecutionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMultiTaskThreadPool*        ThreadPool                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiThreadTaskLibrary::DoUpdateInstances4(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, int32 StartIndex, TArray<struct FTransform>& Transforms, TArray<struct FVector4>& CustomData, int32 Chunks, bool bWorldSpace, bool bTeleport, bool bUpdatePhysicsBodies, bool bMarkRenderStateDirty, bool bCreateInternalDataCopies, class UMultiTaskBase** Task, enum class EMultiTask2Branches* Out, enum class ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiThreadTaskLibrary", "DoUpdateInstances4");

	Params::UMultiThreadTaskLibrary_DoUpdateInstances4_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.HISM = HISM;
	Parms.StartIndex = StartIndex;
	Parms.Transforms = Transforms;
	Parms.CustomData = CustomData;
	Parms.Chunks = Chunks;
	Parms.bWorldSpace = bWorldSpace;
	Parms.bTeleport = bTeleport;
	Parms.bUpdatePhysicsBodies = bUpdatePhysicsBodies;
	Parms.bMarkRenderStateDirty = bMarkRenderStateDirty;
	Parms.bCreateInternalDataCopies = bCreateInternalDataCopies;
	Parms.ExecutionType = ExecutionType;
	Parms.ThreadPool = ThreadPool;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Task != nullptr)
		*Task = Parms.Task;

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function MultiTask2.MultiThreadTaskLibrary.DoUpdateInstances3
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UHierarchicalInstancedStaticMeshComponent*HISM                                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StartIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FTransform>          Transforms                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector>             CustomData                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Chunks                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWorldSpace                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTeleport                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUpdatePhysicsBodies                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMarkRenderStateDirty                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCreateInternalDataCopies                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMultiTaskBase*              Task                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMultiTask2Branches     Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETaskExecutionType      ExecutionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMultiTaskThreadPool*        ThreadPool                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiThreadTaskLibrary::DoUpdateInstances3(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, int32 StartIndex, TArray<struct FTransform>& Transforms, TArray<struct FVector>& CustomData, int32 Chunks, bool bWorldSpace, bool bTeleport, bool bUpdatePhysicsBodies, bool bMarkRenderStateDirty, bool bCreateInternalDataCopies, class UMultiTaskBase** Task, enum class EMultiTask2Branches* Out, enum class ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiThreadTaskLibrary", "DoUpdateInstances3");

	Params::UMultiThreadTaskLibrary_DoUpdateInstances3_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.HISM = HISM;
	Parms.StartIndex = StartIndex;
	Parms.Transforms = Transforms;
	Parms.CustomData = CustomData;
	Parms.Chunks = Chunks;
	Parms.bWorldSpace = bWorldSpace;
	Parms.bTeleport = bTeleport;
	Parms.bUpdatePhysicsBodies = bUpdatePhysicsBodies;
	Parms.bMarkRenderStateDirty = bMarkRenderStateDirty;
	Parms.bCreateInternalDataCopies = bCreateInternalDataCopies;
	Parms.ExecutionType = ExecutionType;
	Parms.ThreadPool = ThreadPool;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Task != nullptr)
		*Task = Parms.Task;

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function MultiTask2.MultiThreadTaskLibrary.DoUpdateInstances2
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UHierarchicalInstancedStaticMeshComponent*HISM                                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StartIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FTransform>          Transforms                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           CustomData                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Chunks                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWorldSpace                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTeleport                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUpdatePhysicsBodies                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMarkRenderStateDirty                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCreateInternalDataCopies                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMultiTaskBase*              Task                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMultiTask2Branches     Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETaskExecutionType      ExecutionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMultiTaskThreadPool*        ThreadPool                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiThreadTaskLibrary::DoUpdateInstances2(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, int32 StartIndex, TArray<struct FTransform>& Transforms, TArray<struct FVector2D>& CustomData, int32 Chunks, bool bWorldSpace, bool bTeleport, bool bUpdatePhysicsBodies, bool bMarkRenderStateDirty, bool bCreateInternalDataCopies, class UMultiTaskBase** Task, enum class EMultiTask2Branches* Out, enum class ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiThreadTaskLibrary", "DoUpdateInstances2");

	Params::UMultiThreadTaskLibrary_DoUpdateInstances2_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.HISM = HISM;
	Parms.StartIndex = StartIndex;
	Parms.Transforms = Transforms;
	Parms.CustomData = CustomData;
	Parms.Chunks = Chunks;
	Parms.bWorldSpace = bWorldSpace;
	Parms.bTeleport = bTeleport;
	Parms.bUpdatePhysicsBodies = bUpdatePhysicsBodies;
	Parms.bMarkRenderStateDirty = bMarkRenderStateDirty;
	Parms.bCreateInternalDataCopies = bCreateInternalDataCopies;
	Parms.ExecutionType = ExecutionType;
	Parms.ThreadPool = ThreadPool;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Task != nullptr)
		*Task = Parms.Task;

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function MultiTask2.MultiThreadTaskLibrary.DoUpdateInstances
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UHierarchicalInstancedStaticMeshComponent*HISM                                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StartIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FTransform>          Transforms                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<float>                      CustomData                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Chunks                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWorldSpace                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTeleport                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUpdatePhysicsBodies                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMarkRenderStateDirty                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCreateInternalDataCopies                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMultiTaskBase*              Task                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMultiTask2Branches     Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETaskExecutionType      ExecutionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMultiTaskThreadPool*        ThreadPool                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiThreadTaskLibrary::DoUpdateInstances(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, int32 StartIndex, TArray<struct FTransform>& Transforms, TArray<float>& CustomData, int32 Chunks, bool bWorldSpace, bool bTeleport, bool bUpdatePhysicsBodies, bool bMarkRenderStateDirty, bool bCreateInternalDataCopies, class UMultiTaskBase** Task, enum class EMultiTask2Branches* Out, enum class ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiThreadTaskLibrary", "DoUpdateInstances");

	Params::UMultiThreadTaskLibrary_DoUpdateInstances_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.HISM = HISM;
	Parms.StartIndex = StartIndex;
	Parms.Transforms = Transforms;
	Parms.CustomData = CustomData;
	Parms.Chunks = Chunks;
	Parms.bWorldSpace = bWorldSpace;
	Parms.bTeleport = bTeleport;
	Parms.bUpdatePhysicsBodies = bUpdatePhysicsBodies;
	Parms.bMarkRenderStateDirty = bMarkRenderStateDirty;
	Parms.bCreateInternalDataCopies = bCreateInternalDataCopies;
	Parms.ExecutionType = ExecutionType;
	Parms.ThreadPool = ThreadPool;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Task != nullptr)
		*Task = Parms.Task;

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function MultiTask2.MultiThreadTaskLibrary.DoSpawnInstances
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UHierarchicalInstancedStaticMeshComponent*HISM                                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FTransform>          Transforms                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Chunks                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWorldSpace                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCreatePhysicsBodies                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCreateInternalDataCopies                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMultiTaskBase*              Task                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      NewInstances                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EMultiTask2Branches     Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETaskExecutionType      ExecutionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMultiTaskThreadPool*        ThreadPool                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiThreadTaskLibrary::DoSpawnInstances(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, TArray<struct FTransform>& Transforms, int32 Chunks, bool bWorldSpace, bool bCreatePhysicsBodies, bool bCreateInternalDataCopies, class UMultiTaskBase** Task, TArray<int32>* NewInstances, enum class EMultiTask2Branches* Out, enum class ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiThreadTaskLibrary", "DoSpawnInstances");

	Params::UMultiThreadTaskLibrary_DoSpawnInstances_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.HISM = HISM;
	Parms.Transforms = Transforms;
	Parms.Chunks = Chunks;
	Parms.bWorldSpace = bWorldSpace;
	Parms.bCreatePhysicsBodies = bCreatePhysicsBodies;
	Parms.bCreateInternalDataCopies = bCreateInternalDataCopies;
	Parms.ExecutionType = ExecutionType;
	Parms.ThreadPool = ThreadPool;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Task != nullptr)
		*Task = Parms.Task;

	if (NewInstances != nullptr)
		*NewInstances = std::move(Parms.NewInstances);

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function MultiTask2.MultiThreadTaskLibrary.DoSingleThreadTask2
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UMultiThreadTask*            Task                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMultiTask2BranchesWithBodyOut                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETaskExecutionType      ExecutionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMultiTaskThreadPool*        ThreadPool                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiThreadTaskLibrary::DoSingleThreadTask2(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UMultiThreadTask** Task, enum class EMultiTask2BranchesWithBody* Out, enum class ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiThreadTaskLibrary", "DoSingleThreadTask2");

	Params::UMultiThreadTaskLibrary_DoSingleThreadTask2_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.ExecutionType = ExecutionType;
	Parms.ThreadPool = ThreadPool;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Task != nullptr)
		*Task = Parms.Task;

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function MultiTask2.MultiThreadTaskLibrary.DoSingleThreadTask
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TSubclassOf<class UMultiThreadTask>Class                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMultiThreadTask*            Task                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMultiTask2Branches     Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETaskExecutionType      ExecutionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMultiTaskThreadPool*        ThreadPool                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiThreadTaskLibrary::DoSingleThreadTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TSubclassOf<class UMultiThreadTask> Class, class UMultiThreadTask** Task, enum class EMultiTask2Branches* Out, enum class ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiThreadTaskLibrary", "DoSingleThreadTask");

	Params::UMultiThreadTaskLibrary_DoSingleThreadTask_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.Class = Class;
	Parms.ExecutionType = ExecutionType;
	Parms.ThreadPool = ThreadPool;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Task != nullptr)
		*Task = Parms.Task;

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function MultiTask2.MultiThreadTaskLibrary.DoMultiThreadTask
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TSubclassOf<class UMultiThreadTask>Class                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UMultiThreadTask*>    Tasks                                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EMultiTask2BranchesNoCancelOut                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETaskExecutionType      ExecutionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMultiTaskThreadPool*        ThreadPool                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiThreadTaskLibrary::DoMultiThreadTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TSubclassOf<class UMultiThreadTask> Class, int32 Count, TArray<class UMultiThreadTask*>* Tasks, enum class EMultiTask2BranchesNoCancel* Out, enum class ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiThreadTaskLibrary", "DoMultiThreadTask");

	Params::UMultiThreadTaskLibrary_DoMultiThreadTask_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.Class = Class;
	Parms.Count = Count;
	Parms.ExecutionType = ExecutionType;
	Parms.ThreadPool = ThreadPool;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Tasks != nullptr)
		*Tasks = std::move(Parms.Tasks);

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function MultiTask2.MultiThreadTaskLibrary.DoDelaunayTriangulation2D
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           Points                                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UMultiTaskBase*              Task                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMultiTask2Delaunay2DTriangle>Triangles                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EMultiTask2Branches     Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETaskExecutionType      ExecutionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMultiTaskThreadPool*        ThreadPool                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiThreadTaskLibrary::DoDelaunayTriangulation2D(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FVector2D>& Points, class UMultiTaskBase** Task, TArray<struct FMultiTask2Delaunay2DTriangle>* Triangles, enum class EMultiTask2Branches* Out, enum class ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiThreadTaskLibrary", "DoDelaunayTriangulation2D");

	Params::UMultiThreadTaskLibrary_DoDelaunayTriangulation2D_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.Points = Points;
	Parms.ExecutionType = ExecutionType;
	Parms.ThreadPool = ThreadPool;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Task != nullptr)
		*Task = Parms.Task;

	if (Triangles != nullptr)
		*Triangles = std::move(Parms.Triangles);

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function MultiTask2.MultiThreadTaskLibrary.DestroyThreadPoolImmediately
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMultiTaskThreadPool*        ThreadPool                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiThreadTaskLibrary::DestroyThreadPoolImmediately(class UMultiTaskThreadPool* ThreadPool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiThreadTaskLibrary", "DestroyThreadPoolImmediately");

	Params::UMultiThreadTaskLibrary_DestroyThreadPoolImmediately_Params Parms{};

	Parms.ThreadPool = ThreadPool;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MultiTask2.MultiThreadTaskLibrary.CreateThreadPool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumQueuedThreads                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StackSize                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMultiTaskThreadPriorityThreadPriority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMultiTaskThreadPool*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMultiTaskThreadPool* UMultiThreadTaskLibrary::CreateThreadPool(class UObject* WorldContextObject, int32 NumQueuedThreads, int32 StackSize, enum class EMultiTaskThreadPriority ThreadPriority, const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiThreadTaskLibrary", "CreateThreadPool");

	Params::UMultiThreadTaskLibrary_CreateThreadPool_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.NumQueuedThreads = NumQueuedThreads;
	Parms.StackSize = StackSize;
	Parms.ThreadPriority = ThreadPriority;
	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MultiTask2.MultiThreadTaskLibrary.CreateMutex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMultiTaskMutex*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMultiTaskMutex* UMultiThreadTaskLibrary::CreateMutex(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiThreadTaskLibrary", "CreateMutex");

	Params::UMultiThreadTaskLibrary_CreateMutex_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MultiTask2.PixelReaderLibrary
// (None)

class UClass* UPixelReaderLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PixelReaderLibrary");

	return Clss;
}


// PixelReaderLibrary MultiTask2.Default__PixelReaderLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UPixelReaderLibrary* UPixelReaderLibrary::GetDefaultObj()
{
	static class UPixelReaderLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UPixelReaderLibrary*>(UPixelReaderLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MultiTask2.PixelReaderLibrary.SetsRGB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPixelData                  PixelData                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPixelReaderLibrary::SetsRGB(struct FPixelData& PixelData, bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PixelReaderLibrary", "SetsRGB");

	Params::UPixelReaderLibrary_SetsRGB_Params Parms{};

	Parms.PixelData = PixelData;
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MultiTask2.PixelReaderLibrary.SetSize
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPixelData                  PixelData                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Width                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPixelReaderLibrary::SetSize(struct FPixelData& PixelData, int32 Width, int32 Height)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PixelReaderLibrary", "SetSize");

	Params::UPixelReaderLibrary_SetSize_Params Parms{};

	Parms.PixelData = PixelData;
	Parms.Width = Width;
	Parms.Height = Height;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MultiTask2.PixelReaderLibrary.SetPixel
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPixelData                  PixelData                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FIntPoint                   Coordinates                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FColor                      Pixel                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPixelReaderLibrary::SetPixel(struct FPixelData& PixelData, struct FIntPoint& Coordinates, struct FColor& Pixel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PixelReaderLibrary", "SetPixel");

	Params::UPixelReaderLibrary_SetPixel_Params Parms{};

	Parms.PixelData = PixelData;
	Parms.Coordinates = Coordinates;
	Parms.Pixel = Pixel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MultiTask2.PixelReaderLibrary.IsPixelDataValid
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPixelData                  PixelData                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPixelReaderLibrary::IsPixelDataValid(struct FPixelData& PixelData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PixelReaderLibrary", "IsPixelDataValid");

	Params::UPixelReaderLibrary_IsPixelDataValid_Params Parms{};

	Parms.PixelData = PixelData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MultiTask2.PixelReaderLibrary.GetWidth
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPixelData                  PixelData                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPixelReaderLibrary::GetWidth(struct FPixelData& PixelData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PixelReaderLibrary", "GetWidth");

	Params::UPixelReaderLibrary_GetWidth_Params Parms{};

	Parms.PixelData = PixelData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MultiTask2.PixelReaderLibrary.GetPixel
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPixelData                  PixelData                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FIntPoint                   Coordinates                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FColor                      Pixel                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPixelReaderLibrary::GetPixel(struct FPixelData& PixelData, struct FIntPoint& Coordinates, struct FColor* Pixel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PixelReaderLibrary", "GetPixel");

	Params::UPixelReaderLibrary_GetPixel_Params Parms{};

	Parms.PixelData = PixelData;
	Parms.Coordinates = Coordinates;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Pixel != nullptr)
		*Pixel = std::move(Parms.Pixel);

	return Parms.ReturnValue;

}


// Function MultiTask2.PixelReaderLibrary.GetHeight
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPixelData                  PixelData                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPixelReaderLibrary::GetHeight(struct FPixelData& PixelData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PixelReaderLibrary", "GetHeight");

	Params::UPixelReaderLibrary_GetHeight_Params Parms{};

	Parms.PixelData = PixelData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MultiTask2.PixelReaderLibrary.DoReadUrlToPixelDataTask
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EMultiTask2Branches     Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPixelData                  PixelData                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// class UMultiTaskBase*              Task                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETaskExecutionType      ExecutionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMultiTaskThreadPool*        ThreadPool                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPixelReaderLibrary::DoReadUrlToPixelDataTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, enum class EMultiTask2Branches* Out, const class FString& URL, float Timeout, struct FPixelData* PixelData, class UMultiTaskBase** Task, enum class ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PixelReaderLibrary", "DoReadUrlToPixelDataTask");

	Params::UPixelReaderLibrary_DoReadUrlToPixelDataTask_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.URL = URL;
	Parms.Timeout = Timeout;
	Parms.ExecutionType = ExecutionType;
	Parms.ThreadPool = ThreadPool;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Out != nullptr)
		*Out = Parms.Out;

	if (PixelData != nullptr)
		*PixelData = std::move(Parms.PixelData);

	if (Task != nullptr)
		*Task = Parms.Task;

}


// Function MultiTask2.PixelReaderLibrary.DoReadPixelsTask
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EMultiTask2BranchesNoCancelOut                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    Texture                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPixelData                  PixelData                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UPixelReaderLibrary::DoReadPixelsTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, enum class EMultiTask2BranchesNoCancel* Out, class UTexture* Texture, struct FPixelData* PixelData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PixelReaderLibrary", "DoReadPixelsTask");

	Params::UPixelReaderLibrary_DoReadPixelsTask_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.Texture = Texture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Out != nullptr)
		*Out = Parms.Out;

	if (PixelData != nullptr)
		*PixelData = std::move(Parms.PixelData);

}


// Function MultiTask2.PixelReaderLibrary.DoReadFileToPixelDataTask
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EMultiTask2BranchesNoCancelOut                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      File                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPixelData                  PixelData                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// enum class ETaskExecutionType      ExecutionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMultiTaskThreadPool*        ThreadPool                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPixelReaderLibrary::DoReadFileToPixelDataTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, enum class EMultiTask2BranchesNoCancel* Out, const class FString& File, struct FPixelData* PixelData, enum class ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PixelReaderLibrary", "DoReadFileToPixelDataTask");

	Params::UPixelReaderLibrary_DoReadFileToPixelDataTask_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.File = File;
	Parms.ExecutionType = ExecutionType;
	Parms.ThreadPool = ThreadPool;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Out != nullptr)
		*Out = Parms.Out;

	if (PixelData != nullptr)
		*PixelData = std::move(Parms.PixelData);

}


// Function MultiTask2.PixelReaderLibrary.DoPixelDataDitheringTask
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EMultiTask2Branches     Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPixelData                  PixelData                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPixelData                  OutPixelData                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// class UMultiTaskBase*              Task                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETaskExecutionType      ExecutionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMultiTaskThreadPool*        ThreadPool                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPixelReaderLibrary::DoPixelDataDitheringTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, enum class EMultiTask2Branches* Out, struct FPixelData& PixelData, int32 Scale, struct FPixelData* OutPixelData, class UMultiTaskBase** Task, enum class ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PixelReaderLibrary", "DoPixelDataDitheringTask");

	Params::UPixelReaderLibrary_DoPixelDataDitheringTask_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.PixelData = PixelData;
	Parms.Scale = Scale;
	Parms.ExecutionType = ExecutionType;
	Parms.ThreadPool = ThreadPool;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Out != nullptr)
		*Out = Parms.Out;

	if (OutPixelData != nullptr)
		*OutPixelData = std::move(Parms.OutPixelData);

	if (Task != nullptr)
		*Task = Parms.Task;

}


// Function MultiTask2.PixelReaderLibrary.CreateTextureFromPixelData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     Outer                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPixelData                  PixelData                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UPixelReaderLibrary::CreateTextureFromPixelData(class UObject* Outer, struct FPixelData& PixelData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PixelReaderLibrary", "CreateTextureFromPixelData");

	Params::UPixelReaderLibrary_CreateTextureFromPixelData_Params Parms{};

	Parms.Outer = Outer;
	Parms.PixelData = PixelData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MultiTask2.PixelReaderTask
// (None)

class UClass* UPixelReaderTask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PixelReaderTask");

	return Clss;
}


// PixelReaderTask MultiTask2.Default__PixelReaderTask
// (Public, ClassDefaultObject, ArchetypeObject)

class UPixelReaderTask* UPixelReaderTask::GetDefaultObj()
{
	static class UPixelReaderTask* Default = nullptr;

	if (!Default)
		Default = static_cast<UPixelReaderTask*>(UPixelReaderTask::StaticClass()->DefaultObject);

	return Default;
}


// Class MultiTask2.SetDitheringTask
// (None)

class UClass* USetDitheringTask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SetDitheringTask");

	return Clss;
}


// SetDitheringTask MultiTask2.Default__SetDitheringTask
// (Public, ClassDefaultObject, ArchetypeObject)

class USetDitheringTask* USetDitheringTask::GetDefaultObj()
{
	static class USetDitheringTask* Default = nullptr;

	if (!Default)
		Default = static_cast<USetDitheringTask*>(USetDitheringTask::StaticClass()->DefaultObject);

	return Default;
}


// Class MultiTask2.SpawnInstancesTask
// (None)

class UClass* USpawnInstancesTask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnInstancesTask");

	return Clss;
}


// SpawnInstancesTask MultiTask2.Default__SpawnInstancesTask
// (Public, ClassDefaultObject, ArchetypeObject)

class USpawnInstancesTask* USpawnInstancesTask::GetDefaultObj()
{
	static class USpawnInstancesTask* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnInstancesTask*>(USpawnInstancesTask::StaticClass()->DefaultObject);

	return Default;
}


// Class MultiTask2.SyncUtilitiesLibrary
// (None)

class UClass* USyncUtilitiesLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SyncUtilitiesLibrary");

	return Clss;
}


// SyncUtilitiesLibrary MultiTask2.Default__SyncUtilitiesLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USyncUtilitiesLibrary* USyncUtilitiesLibrary::GetDefaultObj()
{
	static class USyncUtilitiesLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USyncUtilitiesLibrary*>(USyncUtilitiesLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerSetThreadSafeInteger
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FThreadSafeInteger          A                                                                (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FThreadSafeInteger          B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USyncUtilitiesLibrary::ThreadSafeIntegerSetThreadSafeInteger(struct FThreadSafeInteger& A, struct FThreadSafeInteger& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SyncUtilitiesLibrary", "ThreadSafeIntegerSetThreadSafeInteger");

	Params::USyncUtilitiesLibrary_ThreadSafeIntegerSetThreadSafeInteger_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerSetInteger
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FThreadSafeInteger          A                                                                (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              B                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USyncUtilitiesLibrary::ThreadSafeIntegerSetInteger(struct FThreadSafeInteger& A, int32 B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SyncUtilitiesLibrary", "ThreadSafeIntegerSetInteger");

	Params::USyncUtilitiesLibrary_ThreadSafeIntegerSetInteger_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerIncrement
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FThreadSafeInteger          ThreadSafeInteger                                                (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USyncUtilitiesLibrary::ThreadSafeIntegerIncrement(struct FThreadSafeInteger& ThreadSafeInteger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SyncUtilitiesLibrary", "ThreadSafeIntegerIncrement");

	Params::USyncUtilitiesLibrary_ThreadSafeIntegerIncrement_Params Parms{};

	Parms.ThreadSafeInteger = ThreadSafeInteger;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerEqualsThreadSafeInteger
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FThreadSafeInteger          A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FThreadSafeInteger          B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USyncUtilitiesLibrary::ThreadSafeIntegerEqualsThreadSafeInteger(struct FThreadSafeInteger& A, struct FThreadSafeInteger& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SyncUtilitiesLibrary", "ThreadSafeIntegerEqualsThreadSafeInteger");

	Params::USyncUtilitiesLibrary_ThreadSafeIntegerEqualsThreadSafeInteger_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerEqualsInt32
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FThreadSafeInteger          A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              B                                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USyncUtilitiesLibrary::ThreadSafeIntegerEqualsInt32(struct FThreadSafeInteger& A, int32& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SyncUtilitiesLibrary", "ThreadSafeIntegerEqualsInt32");

	Params::USyncUtilitiesLibrary_ThreadSafeIntegerEqualsInt32_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerDecrement
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FThreadSafeInteger          ThreadSafeInteger                                                (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USyncUtilitiesLibrary::ThreadSafeIntegerDecrement(struct FThreadSafeInteger& ThreadSafeInteger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SyncUtilitiesLibrary", "ThreadSafeIntegerDecrement");

	Params::USyncUtilitiesLibrary_ThreadSafeIntegerDecrement_Params Parms{};

	Parms.ThreadSafeInteger = ThreadSafeInteger;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeBooleanSetThreadSafeBoolean
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FThreadSafeBoolean          A                                                                (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FThreadSafeBoolean          B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USyncUtilitiesLibrary::ThreadSafeBooleanSetThreadSafeBoolean(struct FThreadSafeBoolean& A, struct FThreadSafeBoolean& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SyncUtilitiesLibrary", "ThreadSafeBooleanSetThreadSafeBoolean");

	Params::USyncUtilitiesLibrary_ThreadSafeBooleanSetThreadSafeBoolean_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeBooleanSetBoolean
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FThreadSafeBoolean          A                                                                (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               B                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USyncUtilitiesLibrary::ThreadSafeBooleanSetBoolean(struct FThreadSafeBoolean& A, bool B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SyncUtilitiesLibrary", "ThreadSafeBooleanSetBoolean");

	Params::USyncUtilitiesLibrary_ThreadSafeBooleanSetBoolean_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeBooleanEqualsThreadSafeBoolean
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FThreadSafeBoolean          A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FThreadSafeBoolean          B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USyncUtilitiesLibrary::ThreadSafeBooleanEqualsThreadSafeBoolean(struct FThreadSafeBoolean& A, struct FThreadSafeBoolean& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SyncUtilitiesLibrary", "ThreadSafeBooleanEqualsThreadSafeBoolean");

	Params::USyncUtilitiesLibrary_ThreadSafeBooleanEqualsThreadSafeBoolean_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeBooleanEqualsBoolean
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FThreadSafeBoolean          A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               B                                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USyncUtilitiesLibrary::ThreadSafeBooleanEqualsBoolean(struct FThreadSafeBoolean& A, bool& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SyncUtilitiesLibrary", "ThreadSafeBooleanEqualsBoolean");

	Params::USyncUtilitiesLibrary_ThreadSafeBooleanEqualsBoolean_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MultiTask2.SyncUtilitiesLibrary.Conv_ThreadSafeIntegerToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FThreadSafeInteger          ThreadSafeInteger                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USyncUtilitiesLibrary::Conv_ThreadSafeIntegerToString(struct FThreadSafeInteger& ThreadSafeInteger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SyncUtilitiesLibrary", "Conv_ThreadSafeIntegerToString");

	Params::USyncUtilitiesLibrary_Conv_ThreadSafeIntegerToString_Params Parms{};

	Parms.ThreadSafeInteger = ThreadSafeInteger;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MultiTask2.SyncUtilitiesLibrary.Conv_ThreadSafeIntegerToInt32
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FThreadSafeInteger          ThreadSafeInteger                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USyncUtilitiesLibrary::Conv_ThreadSafeIntegerToInt32(struct FThreadSafeInteger& ThreadSafeInteger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SyncUtilitiesLibrary", "Conv_ThreadSafeIntegerToInt32");

	Params::USyncUtilitiesLibrary_Conv_ThreadSafeIntegerToInt32_Params Parms{};

	Parms.ThreadSafeInteger = ThreadSafeInteger;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MultiTask2.SyncUtilitiesLibrary.Conv_ThreadSafeBooleanToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FThreadSafeBoolean          ThreadSafeBoolean                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USyncUtilitiesLibrary::Conv_ThreadSafeBooleanToString(struct FThreadSafeBoolean& ThreadSafeBoolean)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SyncUtilitiesLibrary", "Conv_ThreadSafeBooleanToString");

	Params::USyncUtilitiesLibrary_Conv_ThreadSafeBooleanToString_Params Parms{};

	Parms.ThreadSafeBoolean = ThreadSafeBoolean;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MultiTask2.SyncUtilitiesLibrary.Conv_ThreadSafeBooleanToBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FThreadSafeBoolean          ThreadSafeBoolean                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USyncUtilitiesLibrary::Conv_ThreadSafeBooleanToBool(struct FThreadSafeBoolean& ThreadSafeBoolean)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SyncUtilitiesLibrary", "Conv_ThreadSafeBooleanToBool");

	Params::USyncUtilitiesLibrary_Conv_ThreadSafeBooleanToBool_Params Parms{};

	Parms.ThreadSafeBoolean = ThreadSafeBoolean;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MultiTask2.UpdateInstancesTask
// (None)

class UClass* UUpdateInstancesTask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UpdateInstancesTask");

	return Clss;
}


// UpdateInstancesTask MultiTask2.Default__UpdateInstancesTask
// (Public, ClassDefaultObject, ArchetypeObject)

class UUpdateInstancesTask* UUpdateInstancesTask::GetDefaultObj()
{
	static class UUpdateInstancesTask* Default = nullptr;

	if (!Default)
		Default = static_cast<UUpdateInstancesTask*>(UUpdateInstancesTask::StaticClass()->DefaultObject);

	return Default;
}


// Class MultiTask2.UrlToPixelDataTask
// (None)

class UClass* UUrlToPixelDataTask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UrlToPixelDataTask");

	return Clss;
}


// UrlToPixelDataTask MultiTask2.Default__UrlToPixelDataTask
// (Public, ClassDefaultObject, ArchetypeObject)

class UUrlToPixelDataTask* UUrlToPixelDataTask::GetDefaultObj()
{
	static class UUrlToPixelDataTask* Default = nullptr;

	if (!Default)
		Default = static_cast<UUrlToPixelDataTask*>(UUrlToPixelDataTask::StaticClass()->DefaultObject);

	return Default;
}

}


