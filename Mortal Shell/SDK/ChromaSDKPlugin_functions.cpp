#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject
// (None)

class UClass* UChromaSDKPluginAnimation1DObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChromaSDKPluginAnimation1DObject");

	return Clss;
}


// ChromaSDKPluginAnimation1DObject ChromaSDKPlugin.Default__ChromaSDKPluginAnimation1DObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UChromaSDKPluginAnimation1DObject* UChromaSDKPluginAnimation1DObject::GetDefaultObj()
{
	static class UChromaSDKPluginAnimation1DObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UChromaSDKPluginAnimation1DObject*>(UChromaSDKPluginAnimation1DObject::StaticClass()->DefaultObject);

	return Default;
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Unload
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UChromaSDKPluginAnimation1DObject::Unload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginAnimation1DObject", "Unload");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.IsLoaded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChromaSDKPluginAnimation1DObject::IsLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginAnimation1DObject", "IsLoaded");

	Params::UChromaSDKPluginAnimation1DObject_IsLoaded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject
// (None)

class UClass* UChromaSDKPluginAnimation2DObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChromaSDKPluginAnimation2DObject");

	return Clss;
}


// ChromaSDKPluginAnimation2DObject ChromaSDKPlugin.Default__ChromaSDKPluginAnimation2DObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UChromaSDKPluginAnimation2DObject* UChromaSDKPluginAnimation2DObject::GetDefaultObj()
{
	static class UChromaSDKPluginAnimation2DObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UChromaSDKPluginAnimation2DObject*>(UChromaSDKPluginAnimation2DObject::StaticClass()->DefaultObject);

	return Default;
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Unload
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UChromaSDKPluginAnimation2DObject::Unload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginAnimation2DObject", "Unload");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.IsLoaded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChromaSDKPluginAnimation2DObject::IsLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginAnimation2DObject", "IsLoaded");

	Params::UChromaSDKPluginAnimation2DObject_IsLoaded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ChromaSDKPlugin.ChromaSDKPluginBPLibrary
// (None)

class UClass* UChromaSDKPluginBPLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChromaSDKPluginBPLibrary");

	return Clss;
}


// ChromaSDKPluginBPLibrary ChromaSDKPlugin.Default__ChromaSDKPluginBPLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UChromaSDKPluginBPLibrary* UChromaSDKPluginBPLibrary::GetDefaultObj()
{
	static class UChromaSDKPluginBPLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UChromaSDKPluginBPLibrary*>(UChromaSDKPluginBPLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.UnloadAnimationName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::UnloadAnimationName(const class FString& AnimationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "UnloadAnimationName");

	Params::UChromaSDKPluginBPLibrary_UnloadAnimationName_Params Parms{};

	Parms.AnimationName = AnimationName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.UnloadAnimation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::UnloadAnimation(int32 AnimationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "UnloadAnimation");

	Params::UChromaSDKPluginBPLibrary_UnloadAnimation_Params Parms{};

	Parms.AnimationId = AnimationId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimStartFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumberOfFrames                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::TrimStartFramesName(const class FString& AnimationName, int32 NumberOfFrames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "TrimStartFramesName");

	Params::UChromaSDKPluginBPLibrary_TrimStartFramesName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.NumberOfFrames = NumberOfFrames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimStartFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumberOfFrames                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::TrimStartFrames(int32 AnimationId, int32 NumberOfFrames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "TrimStartFrames");

	Params::UChromaSDKPluginBPLibrary_TrimStartFrames_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.NumberOfFrames = NumberOfFrames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimFrameName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::TrimFrameName(const class FString& AnimationName, int32 FrameId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "TrimFrameName");

	Params::UChromaSDKPluginBPLibrary_TrimFrameName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.FrameId = FrameId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::TrimFrame(int32 AnimationId, int32 FrameId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "TrimFrame");

	Params::UChromaSDKPluginBPLibrary_TrimFrame_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.FrameId = FrameId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimEndFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LastFrameId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::TrimEndFramesName(const class FString& AnimationName, int32 LastFrameId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "TrimEndFramesName");

	Params::UChromaSDKPluginBPLibrary_TrimEndFramesName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.LastFrameId = LastFrameId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimEndFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LastFrameId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::TrimEndFrames(int32 AnimationId, int32 LastFrameId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "TrimEndFrames");

	Params::UChromaSDKPluginBPLibrary_TrimEndFrames_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.LastFrameId = LastFrameId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ToLinearColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              ColorParam                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UChromaSDKPluginBPLibrary::ToLinearColor(int32 ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "ToLinearColor");

	Params::UChromaSDKPluginBPLibrary_ToLinearColor_Params Parms{};

	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ToBGR
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChromaSDKPluginBPLibrary::ToBGR(struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "ToBGR");

	Params::UChromaSDKPluginBPLibrary_ToBGR_Params Parms{};

	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFramesOffsetName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SourceAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SubtractNonZeroTargetAllKeysAllFramesOffsetName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SubtractNonZeroTargetAllKeysAllFramesOffsetName");

	Params::UChromaSDKPluginBPLibrary_SubtractNonZeroTargetAllKeysAllFramesOffsetName_Params Parms{};

	Parms.SourceAnimationName = SourceAnimationName;
	Parms.TargetAnimationName = TargetAnimationName;
	Parms.Offset = Offset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFramesOffset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              SourceAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SubtractNonZeroTargetAllKeysAllFramesOffset(int32 SourceAnimationId, int32 TargetAnimationId, int32 Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SubtractNonZeroTargetAllKeysAllFramesOffset");

	Params::UChromaSDKPluginBPLibrary_SubtractNonZeroTargetAllKeysAllFramesOffset_Params Parms{};

	Parms.SourceAnimationId = SourceAnimationId;
	Parms.TargetAnimationId = TargetAnimationId;
	Parms.Offset = Offset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SourceAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SubtractNonZeroTargetAllKeysAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SubtractNonZeroTargetAllKeysAllFramesName");

	Params::UChromaSDKPluginBPLibrary_SubtractNonZeroTargetAllKeysAllFramesName_Params Parms{};

	Parms.SourceAnimationName = SourceAnimationName;
	Parms.TargetAnimationName = TargetAnimationName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              SourceAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SubtractNonZeroTargetAllKeysAllFrames(int32 SourceAnimationId, int32 TargetAnimationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SubtractNonZeroTargetAllKeysAllFrames");

	Params::UChromaSDKPluginBPLibrary_SubtractNonZeroTargetAllKeysAllFrames_Params Parms{};

	Parms.SourceAnimationId = SourceAnimationId;
	Parms.TargetAnimationId = TargetAnimationId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SourceAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SubtractNonZeroAllKeysName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 FrameId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SubtractNonZeroAllKeysName");

	Params::UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeysName_Params Parms{};

	Parms.SourceAnimationName = SourceAnimationName;
	Parms.TargetAnimationName = TargetAnimationName;
	Parms.FrameId = FrameId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFramesOffsetName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SourceAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SubtractNonZeroAllKeysAllFramesOffsetName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SubtractNonZeroAllKeysAllFramesOffsetName");

	Params::UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeysAllFramesOffsetName_Params Parms{};

	Parms.SourceAnimationName = SourceAnimationName;
	Parms.TargetAnimationName = TargetAnimationName;
	Parms.Offset = Offset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFramesOffset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              SourceAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SubtractNonZeroAllKeysAllFramesOffset(int32 SourceAnimationId, int32 TargetAnimationId, int32 Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SubtractNonZeroAllKeysAllFramesOffset");

	Params::UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeysAllFramesOffset_Params Parms{};

	Parms.SourceAnimationId = SourceAnimationId;
	Parms.TargetAnimationId = TargetAnimationId;
	Parms.Offset = Offset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SourceAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SubtractNonZeroAllKeysAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SubtractNonZeroAllKeysAllFramesName");

	Params::UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeysAllFramesName_Params Parms{};

	Parms.SourceAnimationName = SourceAnimationName;
	Parms.TargetAnimationName = TargetAnimationName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              SourceAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SubtractNonZeroAllKeysAllFrames(int32 SourceAnimationId, int32 TargetAnimationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SubtractNonZeroAllKeysAllFrames");

	Params::UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeysAllFrames_Params Parms{};

	Parms.SourceAnimationId = SourceAnimationId;
	Parms.TargetAnimationId = TargetAnimationId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeys
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              SourceAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SubtractNonZeroAllKeys(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SubtractNonZeroAllKeys");

	Params::UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeys_Params Parms{};

	Parms.SourceAnimationId = SourceAnimationId;
	Parms.TargetAnimationId = TargetAnimationId;
	Parms.FrameId = FrameId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimationType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EChromaSDKDeviceEnum    Device                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::StopAnimationType(enum class EChromaSDKDeviceEnum Device)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "StopAnimationType");

	Params::UChromaSDKPluginBPLibrary_StopAnimationType_Params Parms{};

	Parms.Device = Device;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimations
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              AnimationNames                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::StopAnimations(TArray<class FString>& AnimationNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "StopAnimations");

	Params::UChromaSDKPluginBPLibrary_StopAnimations_Params Parms{};

	Parms.AnimationNames = AnimationNames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimationComposite
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::StopAnimationComposite(const class FString& AnimationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "StopAnimationComposite");

	Params::UChromaSDKPluginBPLibrary_StopAnimationComposite_Params Parms{};

	Parms.AnimationName = AnimationName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::StopAnimation(const class FString& AnimationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "StopAnimation");

	Params::UChromaSDKPluginBPLibrary_StopAnimation_Params Parms{};

	Parms.AnimationName = AnimationName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAll
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UChromaSDKPluginBPLibrary::StopAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "StopAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetMouseLedColor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// enum class EChromaSDKMouseLed      Led                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FChromaSDKColors>    Colors                                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SetMouseLedColor(enum class EChromaSDKMouseLed Led, struct FLinearColor& ColorParam, TArray<struct FChromaSDKColors>& Colors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SetMouseLedColor");

	Params::UChromaSDKPluginBPLibrary_SetMouseLedColor_Params Parms{};

	Parms.Led = Led;
	Parms.ColorParam = ColorParam;
	Parms.Colors = Colors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColorName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EChromaSDKKeyboardKey>Keys                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SetKeysNonZeroColorName(const class FString& AnimationName, int32 FrameIndex, TArray<enum class EChromaSDKKeyboardKey>& Keys, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SetKeysNonZeroColorName");

	Params::UChromaSDKPluginBPLibrary_SetKeysNonZeroColorName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.FrameIndex = FrameIndex;
	Parms.Keys = Keys;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColorAllFramesName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EChromaSDKKeyboardKey>Keys                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SetKeysNonZeroColorAllFramesName(const class FString& AnimationName, TArray<enum class EChromaSDKKeyboardKey>& Keys, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SetKeysNonZeroColorAllFramesName");

	Params::UChromaSDKPluginBPLibrary_SetKeysNonZeroColorAllFramesName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.Keys = Keys;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColorAllFrames
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EChromaSDKKeyboardKey>Keys                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SetKeysNonZeroColorAllFrames(int32 AnimationId, TArray<enum class EChromaSDKKeyboardKey>& Keys, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SetKeysNonZeroColorAllFrames");

	Params::UChromaSDKPluginBPLibrary_SetKeysNonZeroColorAllFrames_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.Keys = Keys;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EChromaSDKKeyboardKey>Keys                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SetKeysNonZeroColor(int32 AnimationId, int32 FrameIndex, TArray<enum class EChromaSDKKeyboardKey>& Keys, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SetKeysNonZeroColor");

	Params::UChromaSDKPluginBPLibrary_SetKeysNonZeroColor_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.FrameIndex = FrameIndex;
	Parms.Keys = Keys;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorRGBName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EChromaSDKKeyboardKey>Keys                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SetKeysColorRGBName(const class FString& AnimationName, int32 FrameIndex, TArray<enum class EChromaSDKKeyboardKey>& Keys, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SetKeysColorRGBName");

	Params::UChromaSDKPluginBPLibrary_SetKeysColorRGBName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.FrameIndex = FrameIndex;
	Parms.Keys = Keys;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorRGB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EChromaSDKKeyboardKey>Keys                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SetKeysColorRGB(int32 AnimationId, int32 FrameIndex, TArray<enum class EChromaSDKKeyboardKey>& Keys, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SetKeysColorRGB");

	Params::UChromaSDKPluginBPLibrary_SetKeysColorRGB_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.FrameIndex = FrameIndex;
	Parms.Keys = Keys;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EChromaSDKKeyboardKey>Keys                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SetKeysColorName(const class FString& AnimationName, int32 FrameIndex, TArray<enum class EChromaSDKKeyboardKey>& Keys, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SetKeysColorName");

	Params::UChromaSDKPluginBPLibrary_SetKeysColorName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.FrameIndex = FrameIndex;
	Parms.Keys = Keys;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFramesRGBName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EChromaSDKKeyboardKey>Keys                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SetKeysColorAllFramesRGBName(const class FString& AnimationName, TArray<enum class EChromaSDKKeyboardKey>& Keys, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SetKeysColorAllFramesRGBName");

	Params::UChromaSDKPluginBPLibrary_SetKeysColorAllFramesRGBName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.Keys = Keys;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFramesRGB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EChromaSDKKeyboardKey>Keys                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SetKeysColorAllFramesRGB(int32 AnimationId, TArray<enum class EChromaSDKKeyboardKey>& Keys, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SetKeysColorAllFramesRGB");

	Params::UChromaSDKPluginBPLibrary_SetKeysColorAllFramesRGB_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.Keys = Keys;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFramesName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EChromaSDKKeyboardKey>Keys                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SetKeysColorAllFramesName(const class FString& AnimationName, TArray<enum class EChromaSDKKeyboardKey>& Keys, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SetKeysColorAllFramesName");

	Params::UChromaSDKPluginBPLibrary_SetKeysColorAllFramesName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.Keys = Keys;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFrames
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EChromaSDKKeyboardKey>Keys                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SetKeysColorAllFrames(int32 AnimationId, TArray<enum class EChromaSDKKeyboardKey>& Keys, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SetKeysColorAllFrames");

	Params::UChromaSDKPluginBPLibrary_SetKeysColorAllFrames_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.Keys = Keys;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EChromaSDKKeyboardKey>Keys                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SetKeysColor(int32 AnimationId, int32 FrameIndex, TArray<enum class EChromaSDKKeyboardKey>& Keys, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SetKeysColor");

	Params::UChromaSDKPluginBPLibrary_SetKeysColor_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.FrameIndex = FrameIndex;
	Parms.Keys = Keys;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColorName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EChromaSDKKeyboardKey   Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SetKeyNonZeroColorName(const class FString& AnimationName, int32 FrameIndex, enum class EChromaSDKKeyboardKey Key, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SetKeyNonZeroColorName");

	Params::UChromaSDKPluginBPLibrary_SetKeyNonZeroColorName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.FrameIndex = FrameIndex;
	Parms.Key = Key;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColorAllFramesName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EChromaSDKKeyboardKey   Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SetKeyNonZeroColorAllFramesName(const class FString& AnimationName, enum class EChromaSDKKeyboardKey Key, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SetKeyNonZeroColorAllFramesName");

	Params::UChromaSDKPluginBPLibrary_SetKeyNonZeroColorAllFramesName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.Key = Key;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColorAllFrames
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EChromaSDKKeyboardKey   Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SetKeyNonZeroColorAllFrames(int32 AnimationId, enum class EChromaSDKKeyboardKey Key, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SetKeyNonZeroColorAllFrames");

	Params::UChromaSDKPluginBPLibrary_SetKeyNonZeroColorAllFrames_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.Key = Key;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EChromaSDKKeyboardKey   Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SetKeyNonZeroColor(int32 AnimationId, int32 FrameIndex, enum class EChromaSDKKeyboardKey Key, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SetKeyNonZeroColor");

	Params::UChromaSDKPluginBPLibrary_SetKeyNonZeroColor_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.FrameIndex = FrameIndex;
	Parms.Key = Key;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EChromaSDKKeyboardKey   Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SetKeyColorName(const class FString& AnimationName, int32 FrameIndex, enum class EChromaSDKKeyboardKey Key, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SetKeyColorName");

	Params::UChromaSDKPluginBPLibrary_SetKeyColorName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.FrameIndex = FrameIndex;
	Parms.Key = Key;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorAllFramesName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EChromaSDKKeyboardKey   Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SetKeyColorAllFramesName(const class FString& AnimationName, enum class EChromaSDKKeyboardKey Key, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SetKeyColorAllFramesName");

	Params::UChromaSDKPluginBPLibrary_SetKeyColorAllFramesName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.Key = Key;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorAllFrames
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EChromaSDKKeyboardKey   Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SetKeyColorAllFrames(int32 AnimationId, enum class EChromaSDKKeyboardKey Key, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SetKeyColorAllFrames");

	Params::UChromaSDKPluginBPLibrary_SetKeyColorAllFrames_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.Key = Key;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EChromaSDKKeyboardKey   Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SetKeyColor(int32 AnimationId, int32 FrameIndex, enum class EChromaSDKKeyboardKey Key, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SetKeyColor");

	Params::UChromaSDKPluginBPLibrary_SetKeyColor_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.FrameIndex = FrameIndex;
	Parms.Key = Key;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyboardKeyColor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// enum class EChromaSDKKeyboardKey   Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FChromaSDKColors>    Colors                                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SetKeyboardKeyColor(enum class EChromaSDKKeyboardKey Key, struct FLinearColor& ColorParam, TArray<struct FChromaSDKColors>& Colors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SetKeyboardKeyColor");

	Params::UChromaSDKPluginBPLibrary_SetKeyboardKeyColor_Params Parms{};

	Parms.Key = Key;
	Parms.ColorParam = ColorParam;
	Parms.Colors = Colors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetChromaCustomFlagName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Flag                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SetChromaCustomFlagName(const class FString& AnimationName, bool Flag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SetChromaCustomFlagName");

	Params::UChromaSDKPluginBPLibrary_SetChromaCustomFlagName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.Flag = Flag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetChromaCustomColorAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::SetChromaCustomColorAllFramesName(const class FString& AnimationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "SetChromaCustomColorAllFramesName");

	Params::UChromaSDKPluginBPLibrary_SetChromaCustomColorAllFramesName_Params Parms{};

	Parms.AnimationName = AnimationName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReverseAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::ReverseAllFramesName(const class FString& AnimationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "ReverseAllFramesName");

	Params::UChromaSDKPluginBPLibrary_ReverseAllFramesName_Params Parms{};

	Parms.AnimationName = AnimationName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReverseAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::ReverseAllFrames(int32 AnimationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "ReverseAllFrames");

	Params::UChromaSDKPluginBPLibrary_ReverseAllFrames_Params Parms{};

	Parms.AnimationId = AnimationId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReduceFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              N                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::ReduceFramesName(const class FString& AnimationName, int32 N)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "ReduceFramesName");

	Params::UChromaSDKPluginBPLibrary_ReduceFramesName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.N = N;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReduceFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              N                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::ReduceFrames(int32 AnimationId, int32 N)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "ReduceFrames");

	Params::UChromaSDKPluginBPLibrary_ReduceFrames_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.N = N;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PreviewFrameName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::PreviewFrameName(const class FString& AnimationName, int32 FrameId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "PreviewFrameName");

	Params::UChromaSDKPluginBPLibrary_PreviewFrameName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.FrameId = FrameId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PreviewFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChromaSDKPluginBPLibrary::PreviewFrame(int32 AnimationId, int32 FrameId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "PreviewFrame");

	Params::UChromaSDKPluginBPLibrary_PreviewFrame_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.FrameId = FrameId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimations
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              AnimationNames                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Loop                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::PlayAnimations(TArray<class FString>& AnimationNames, bool Loop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "PlayAnimations");

	Params::UChromaSDKPluginBPLibrary_PlayAnimations_Params Parms{};

	Parms.AnimationNames = AnimationNames;
	Parms.Loop = Loop;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimationName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Loop                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::PlayAnimationName(const class FString& AnimationName, bool Loop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "PlayAnimationName");

	Params::UChromaSDKPluginBPLibrary_PlayAnimationName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.Loop = Loop;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimationComposite
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Loop                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::PlayAnimationComposite(const class FString& AnimationName, bool Loop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "PlayAnimationComposite");

	Params::UChromaSDKPluginBPLibrary_PlayAnimationComposite_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.Loop = Loop;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Loop                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::PlayAnimation(const class FString& AnimationName, bool Loop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "PlayAnimation");

	Params::UChromaSDKPluginBPLibrary_PlayAnimation_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.Loop = Loop;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OverrideFrameDurationName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::OverrideFrameDurationName(const class FString& AnimationName, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "OverrideFrameDurationName");

	Params::UChromaSDKPluginBPLibrary_OverrideFrameDurationName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColorsName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::OffsetNonZeroColorsName(const class FString& AnimationName, int32 FrameId, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "OffsetNonZeroColorsName");

	Params::UChromaSDKPluginBPLibrary_OffsetNonZeroColorsName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.FrameId = FrameId;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColorsAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::OffsetNonZeroColorsAllFramesName(const class FString& AnimationName, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "OffsetNonZeroColorsAllFramesName");

	Params::UChromaSDKPluginBPLibrary_OffsetNonZeroColorsAllFramesName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColorsAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::OffsetNonZeroColorsAllFrames(int32 AnimationId, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "OffsetNonZeroColorsAllFrames");

	Params::UChromaSDKPluginBPLibrary_OffsetNonZeroColorsAllFrames_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColors
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::OffsetNonZeroColors(int32 AnimationId, int32 FrameId, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "OffsetNonZeroColors");

	Params::UChromaSDKPluginBPLibrary_OffsetNonZeroColors_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.FrameId = FrameId;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColorsName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::OffsetColorsName(const class FString& AnimationName, int32 FrameId, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "OffsetColorsName");

	Params::UChromaSDKPluginBPLibrary_OffsetColorsName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.FrameId = FrameId;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColorsAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::OffsetColorsAllFramesName(const class FString& AnimationName, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "OffsetColorsAllFramesName");

	Params::UChromaSDKPluginBPLibrary_OffsetColorsAllFramesName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColorsAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::OffsetColorsAllFrames(int32 AnimationId, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "OffsetColorsAllFrames");

	Params::UChromaSDKPluginBPLibrary_OffsetColorsAllFrames_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColors
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::OffsetColors(int32 AnimationId, int32 FrameId, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "OffsetColors");

	Params::UChromaSDKPluginBPLibrary_OffsetColors_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.FrameId = FrameId;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyTargetColorLerpAllFramesName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam1                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam2                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::MultiplyTargetColorLerpAllFramesName(const class FString& AnimationName, struct FLinearColor& ColorParam1, struct FLinearColor& ColorParam2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "MultiplyTargetColorLerpAllFramesName");

	Params::UChromaSDKPluginBPLibrary_MultiplyTargetColorLerpAllFramesName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.ColorParam1 = ColorParam1;
	Parms.ColorParam2 = ColorParam2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyTargetColorLerpAllFrames
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam1                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam2                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::MultiplyTargetColorLerpAllFrames(int32 AnimationId, struct FLinearColor& ColorParam1, struct FLinearColor& ColorParam2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "MultiplyTargetColorLerpAllFrames");

	Params::UChromaSDKPluginBPLibrary_MultiplyTargetColorLerpAllFrames_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.ColorParam1 = ColorParam1;
	Parms.ColorParam2 = ColorParam2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyNonZeroTargetColorLerpAllFramesName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam1                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam2                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::MultiplyNonZeroTargetColorLerpAllFramesName(const class FString& AnimationName, struct FLinearColor& ColorParam1, struct FLinearColor& ColorParam2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "MultiplyNonZeroTargetColorLerpAllFramesName");

	Params::UChromaSDKPluginBPLibrary_MultiplyNonZeroTargetColorLerpAllFramesName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.ColorParam1 = ColorParam1;
	Parms.ColorParam2 = ColorParam2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyNonZeroTargetColorLerpAllFrames
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam1                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam2                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::MultiplyNonZeroTargetColorLerpAllFrames(int32 AnimationId, struct FLinearColor& ColorParam1, struct FLinearColor& ColorParam2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "MultiplyNonZeroTargetColorLerpAllFrames");

	Params::UChromaSDKPluginBPLibrary_MultiplyNonZeroTargetColorLerpAllFrames_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.ColorParam1 = ColorParam1;
	Parms.ColorParam2 = ColorParam2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityRGBName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::MultiplyIntensityRGBName(const class FString& AnimationName, int32 FrameId, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "MultiplyIntensityRGBName");

	Params::UChromaSDKPluginBPLibrary_MultiplyIntensityRGBName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.FrameId = FrameId;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityRGB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::MultiplyIntensityRGB(int32 AnimationId, int32 FrameId, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "MultiplyIntensityRGB");

	Params::UChromaSDKPluginBPLibrary_MultiplyIntensityRGB_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.FrameId = FrameId;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Intensity                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::MultiplyIntensityName(const class FString& AnimationName, int32 FrameId, float Intensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "MultiplyIntensityName");

	Params::UChromaSDKPluginBPLibrary_MultiplyIntensityName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.FrameId = FrameId;
	Parms.Intensity = Intensity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColorName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::MultiplyIntensityColorName(const class FString& AnimationName, int32 FrameId, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "MultiplyIntensityColorName");

	Params::UChromaSDKPluginBPLibrary_MultiplyIntensityColorName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.FrameId = FrameId;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColorAllFramesName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::MultiplyIntensityColorAllFramesName(const class FString& AnimationName, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "MultiplyIntensityColorAllFramesName");

	Params::UChromaSDKPluginBPLibrary_MultiplyIntensityColorAllFramesName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColorAllFrames
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::MultiplyIntensityColorAllFrames(int32 AnimationId, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "MultiplyIntensityColorAllFrames");

	Params::UChromaSDKPluginBPLibrary_MultiplyIntensityColorAllFrames_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::MultiplyIntensityColor(int32 AnimationId, int32 FrameId, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "MultiplyIntensityColor");

	Params::UChromaSDKPluginBPLibrary_MultiplyIntensityColor_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.FrameId = FrameId;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFramesRGBName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RedIntensity                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              GreenIntensity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              blueIntensity                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::MultiplyIntensityAllFramesRGBName(const class FString& AnimationName, float RedIntensity, float GreenIntensity, float blueIntensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "MultiplyIntensityAllFramesRGBName");

	Params::UChromaSDKPluginBPLibrary_MultiplyIntensityAllFramesRGBName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.RedIntensity = RedIntensity;
	Parms.GreenIntensity = GreenIntensity;
	Parms.blueIntensity = blueIntensity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFramesRGB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RedIntensity                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              GreenIntensity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              blueIntensity                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::MultiplyIntensityAllFramesRGB(int32 AnimationId, float RedIntensity, float GreenIntensity, float blueIntensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "MultiplyIntensityAllFramesRGB");

	Params::UChromaSDKPluginBPLibrary_MultiplyIntensityAllFramesRGB_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.RedIntensity = RedIntensity;
	Parms.GreenIntensity = GreenIntensity;
	Parms.blueIntensity = blueIntensity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Intensity                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::MultiplyIntensityAllFramesName(const class FString& AnimationName, float Intensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "MultiplyIntensityAllFramesName");

	Params::UChromaSDKPluginBPLibrary_MultiplyIntensityAllFramesName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.Intensity = Intensity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Intensity                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::MultiplyIntensityAllFrames(int32 AnimationId, float Intensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "MultiplyIntensityAllFrames");

	Params::UChromaSDKPluginBPLibrary_MultiplyIntensityAllFrames_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.Intensity = Intensity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Intensity                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::MultiplyIntensity(int32 AnimationId, int32 FrameId, float Intensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "MultiplyIntensity");

	Params::UChromaSDKPluginBPLibrary_MultiplyIntensity_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.FrameId = FrameId;
	Parms.Intensity = Intensity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyColorLerpAllFramesName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam1                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam2                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::MultiplyColorLerpAllFramesName(const class FString& AnimationName, struct FLinearColor& ColorParam1, struct FLinearColor& ColorParam2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "MultiplyColorLerpAllFramesName");

	Params::UChromaSDKPluginBPLibrary_MultiplyColorLerpAllFramesName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.ColorParam1 = ColorParam1;
	Parms.ColorParam2 = ColorParam2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyColorLerpAllFrames
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam1                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam2                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::MultiplyColorLerpAllFrames(int32 AnimationId, struct FLinearColor& ColorParam1, struct FLinearColor& ColorParam2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "MultiplyColorLerpAllFrames");

	Params::UChromaSDKPluginBPLibrary_MultiplyColorLerpAllFrames_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.ColorParam1 = ColorParam1;
	Parms.ColorParam2 = ColorParam2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRGBName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameCount                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::MakeBlankFramesRGBName(const class FString& AnimationName, int32 FrameCount, float Duration, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "MakeBlankFramesRGBName");

	Params::UChromaSDKPluginBPLibrary_MakeBlankFramesRGBName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.FrameCount = FrameCount;
	Parms.Duration = Duration;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRGB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameCount                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::MakeBlankFramesRGB(int32 AnimationId, int32 FrameCount, float Duration, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "MakeBlankFramesRGB");

	Params::UChromaSDKPluginBPLibrary_MakeBlankFramesRGB_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.FrameCount = FrameCount;
	Parms.Duration = Duration;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandomName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameCount                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::MakeBlankFramesRandomName(const class FString& AnimationName, int32 FrameCount, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "MakeBlankFramesRandomName");

	Params::UChromaSDKPluginBPLibrary_MakeBlankFramesRandomName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.FrameCount = FrameCount;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandomBlackAndWhiteName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameCount                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::MakeBlankFramesRandomBlackAndWhiteName(const class FString& AnimationName, int32 FrameCount, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "MakeBlankFramesRandomBlackAndWhiteName");

	Params::UChromaSDKPluginBPLibrary_MakeBlankFramesRandomBlackAndWhiteName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.FrameCount = FrameCount;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandomBlackAndWhite
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameCount                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::MakeBlankFramesRandomBlackAndWhite(int32 AnimationId, int32 FrameCount, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "MakeBlankFramesRandomBlackAndWhite");

	Params::UChromaSDKPluginBPLibrary_MakeBlankFramesRandomBlackAndWhite_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.FrameCount = FrameCount;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandom
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameCount                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::MakeBlankFramesRandom(int32 AnimationId, int32 FrameCount, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "MakeBlankFramesRandom");

	Params::UChromaSDKPluginBPLibrary_MakeBlankFramesRandom_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.FrameCount = FrameCount;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameCount                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::MakeBlankFramesName(const class FString& AnimationName, int32 FrameCount, float Duration, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "MakeBlankFramesName");

	Params::UChromaSDKPluginBPLibrary_MakeBlankFramesName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.FrameCount = FrameCount;
	Parms.Duration = Duration;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFrames
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameCount                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::MakeBlankFrames(int32 AnimationId, int32 FrameCount, float Duration, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "MakeBlankFrames");

	Params::UChromaSDKPluginBPLibrary_MakeBlankFrames_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.FrameCount = FrameCount;
	Parms.Duration = Duration;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LoadAnimationName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::LoadAnimationName(const class FString& AnimationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "LoadAnimationName");

	Params::UChromaSDKPluginBPLibrary_LoadAnimationName_Params Parms{};

	Parms.AnimationName = AnimationName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LoadAnimation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::LoadAnimation(int32 AnimationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "LoadAnimation");

	Params::UChromaSDKPluginBPLibrary_LoadAnimation_Params Parms{};

	Parms.AnimationId = AnimationId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LerpColorBGR
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              From                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              To                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              T                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChromaSDKPluginBPLibrary::LerpColorBGR(int32 From, int32 To, float T)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "LerpColorBGR");

	Params::UChromaSDKPluginBPLibrary_LerpColorBGR_Params Parms{};

	Parms.From = From;
	Parms.To = To;
	Parms.T = T;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LerpColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                ColorParam1                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam2                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              T                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UChromaSDKPluginBPLibrary::LerpColor(const struct FLinearColor& ColorParam1, const struct FLinearColor& ColorParam2, float T)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "LerpColor");

	Params::UChromaSDKPluginBPLibrary_LerpColor_Params Parms{};

	Parms.ColorParam1 = ColorParam1;
	Parms.ColorParam2 = ColorParam2;
	Parms.T = T;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.Lerp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Amt                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UChromaSDKPluginBPLibrary::Lerp(float Start, float End, float Amt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "Lerp");

	Params::UChromaSDKPluginBPLibrary_Lerp_Params Parms{};

	Parms.Start = Start;
	Parms.End = End;
	Parms.Amt = Amt;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsPlatformWindows
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChromaSDKPluginBPLibrary::IsPlatformWindows()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "IsPlatformWindows");

	Params::UChromaSDKPluginBPLibrary_IsPlatformWindows_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsInitialized
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChromaSDKPluginBPLibrary::IsInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "IsInitialized");

	Params::UChromaSDKPluginBPLibrary_IsInitialized_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsAnimationTypePlaying
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EChromaSDKDeviceEnum    Device                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChromaSDKPluginBPLibrary::IsAnimationTypePlaying(enum class EChromaSDKDeviceEnum Device)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "IsAnimationTypePlaying");

	Params::UChromaSDKPluginBPLibrary_IsAnimationTypePlaying_Params Parms{};

	Parms.Device = Device;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsAnimationPlaying
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChromaSDKPluginBPLibrary::IsAnimationPlaying(const class FString& AnimationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "IsAnimationPlaying");

	Params::UChromaSDKPluginBPLibrary_IsAnimationPlaying_Params Parms{};

	Parms.AnimationName = AnimationName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InvertColorsAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::InvertColorsAllFramesName(const class FString& AnimationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "InvertColorsAllFramesName");

	Params::UChromaSDKPluginBPLibrary_InvertColorsAllFramesName_Params Parms{};

	Parms.AnimationName = AnimationName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InvertColorsAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::InvertColorsAllFrames(int32 AnimationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "InvertColorsAllFrames");

	Params::UChromaSDKPluginBPLibrary_InvertColorsAllFrames_Params Parms{};

	Parms.AnimationId = AnimationId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertFrameName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SourceFrame                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetFrame                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::InsertFrameName(const class FString& AnimationName, int32 SourceFrame, int32 TargetFrame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "InsertFrameName");

	Params::UChromaSDKPluginBPLibrary_InsertFrameName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.SourceFrame = SourceFrame;
	Parms.TargetFrame = TargetFrame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SourceFrame                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetFrame                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::InsertFrame(int32 AnimationId, int32 SourceFrame, int32 TargetFrame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "InsertFrame");

	Params::UChromaSDKPluginBPLibrary_InsertFrame_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.SourceFrame = SourceFrame;
	Parms.TargetFrame = TargetFrame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertDelayName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Delay                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::InsertDelayName(const class FString& AnimationName, int32 FrameId, int32 Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "InsertDelayName");

	Params::UChromaSDKPluginBPLibrary_InsertDelayName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.FrameId = FrameId;
	Parms.Delay = Delay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertDelay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Delay                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::InsertDelay(int32 AnimationId, int32 FrameId, int32 Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "InsertDelay");

	Params::UChromaSDKPluginBPLibrary_InsertDelay_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.FrameId = FrameId;
	Parms.Delay = Delay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetRGB
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UChromaSDKPluginBPLibrary::GetRGB(int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "GetRGB");

	Params::UChromaSDKPluginBPLibrary_GetRGB_Params Parms{};

	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetPlayingAnimationId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChromaSDKPluginBPLibrary::GetPlayingAnimationId(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "GetPlayingAnimationId");

	Params::UChromaSDKPluginBPLibrary_GetPlayingAnimationId_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetPlayingAnimationCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChromaSDKPluginBPLibrary::GetPlayingAnimationCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "GetPlayingAnimationCount");

	Params::UChromaSDKPluginBPLibrary_GetPlayingAnimationCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMouseLedColor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// enum class EChromaSDKMouseLed      Led                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FChromaSDKColors>    Colors                                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UChromaSDKPluginBPLibrary::GetMouseLedColor(enum class EChromaSDKMouseLed Led, TArray<struct FChromaSDKColors>& Colors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "GetMouseLedColor");

	Params::UChromaSDKPluginBPLibrary_GetMouseLedColor_Params Parms{};

	Parms.Led = Led;
	Parms.Colors = Colors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxRow
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EChromaSDKDevice2DEnum  Device                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChromaSDKPluginBPLibrary::GetMaxRow(enum class EChromaSDKDevice2DEnum Device)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "GetMaxRow");

	Params::UChromaSDKPluginBPLibrary_GetMaxRow_Params Parms{};

	Parms.Device = Device;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxLeds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EChromaSDKDevice1DEnum  Device                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChromaSDKPluginBPLibrary::GetMaxLeds(enum class EChromaSDKDevice1DEnum Device)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "GetMaxLeds");

	Params::UChromaSDKPluginBPLibrary_GetMaxLeds_Params Parms{};

	Parms.Device = Device;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxColumn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EChromaSDKDevice2DEnum  Device                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChromaSDKPluginBPLibrary::GetMaxColumn(enum class EChromaSDKDevice2DEnum Device)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "GetMaxColumn");

	Params::UChromaSDKPluginBPLibrary_GetMaxColumn_Params Parms{};

	Parms.Device = Device;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyColorName
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EChromaSDKKeyboardKey   Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UChromaSDKPluginBPLibrary::GetKeyColorName(const class FString& AnimationName, int32 FrameIndex, enum class EChromaSDKKeyboardKey Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "GetKeyColorName");

	Params::UChromaSDKPluginBPLibrary_GetKeyColorName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.FrameIndex = FrameIndex;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EChromaSDKKeyboardKey   Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UChromaSDKPluginBPLibrary::GetKeyColor(int32 AnimationId, int32 FrameIndex, enum class EChromaSDKKeyboardKey Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "GetKeyColor");

	Params::UChromaSDKPluginBPLibrary_GetKeyColor_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.FrameIndex = FrameIndex;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyboardRazerKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EChromaSDKKeyboardKey   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EChromaSDKKeyboardKey UChromaSDKPluginBPLibrary::GetKeyboardRazerKey(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "GetKeyboardRazerKey");

	Params::UChromaSDKPluginBPLibrary_GetKeyboardRazerKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyboardKeyColor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// enum class EChromaSDKKeyboardKey   Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FChromaSDKColors>    Colors                                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UChromaSDKPluginBPLibrary::GetKeyboardKeyColor(enum class EChromaSDKKeyboardKey Key, TArray<struct FChromaSDKColors>& Colors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "GetKeyboardKeyColor");

	Params::UChromaSDKPluginBPLibrary_GetKeyboardKeyColor_Params Parms{};

	Parms.Key = Key;
	Parms.Colors = Colors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetFrameCountName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChromaSDKPluginBPLibrary::GetFrameCountName(const class FString& AnimationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "GetFrameCountName");

	Params::UChromaSDKPluginBPLibrary_GetFrameCountName_Params Parms{};

	Parms.AnimationName = AnimationName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetFrameCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChromaSDKPluginBPLibrary::GetFrameCount(int32 AnimationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "GetFrameCount");

	Params::UChromaSDKPluginBPLibrary_GetFrameCount_Params Parms{};

	Parms.AnimationId = AnimationId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UChromaSDKPluginBPLibrary::GetAnimationName(int32 AnimationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "GetAnimationName");

	Params::UChromaSDKPluginBPLibrary_GetAnimationName_Params Parms{};

	Parms.AnimationId = AnimationId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationIdByIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChromaSDKPluginBPLibrary::GetAnimationIdByIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "GetAnimationIdByIndex");

	Params::UChromaSDKPluginBPLibrary_GetAnimationIdByIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChromaSDKPluginBPLibrary::GetAnimationId(const class FString& AnimationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "GetAnimationId");

	Params::UChromaSDKPluginBPLibrary_GetAnimationId_Params Parms{};

	Parms.AnimationName = AnimationName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChromaSDKPluginBPLibrary::GetAnimationCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "GetAnimationCount");

	Params::UChromaSDKPluginBPLibrary_GetAnimationCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChromaSDKPluginBPLibrary::GetAnimation(const class FString& AnimationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "GetAnimation");

	Params::UChromaSDKPluginBPLibrary_GetAnimation_Params Parms{};

	Parms.AnimationName = AnimationName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorRGBName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillZeroColorRGBName(const class FString& AnimationName, int32 FrameId, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillZeroColorRGBName");

	Params::UChromaSDKPluginBPLibrary_FillZeroColorRGBName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.FrameId = FrameId;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorRGB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillZeroColorRGB(int32 AnimationId, int32 FrameId, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillZeroColorRGB");

	Params::UChromaSDKPluginBPLibrary_FillZeroColorRGB_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.FrameId = FrameId;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillZeroColorName(const class FString& AnimationName, int32 FrameId, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillZeroColorName");

	Params::UChromaSDKPluginBPLibrary_FillZeroColorName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.FrameId = FrameId;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFramesRGBName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillZeroColorAllFramesRGBName(const class FString& AnimationName, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillZeroColorAllFramesRGBName");

	Params::UChromaSDKPluginBPLibrary_FillZeroColorAllFramesRGBName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFramesRGB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillZeroColorAllFramesRGB(int32 AnimationId, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillZeroColorAllFramesRGB");

	Params::UChromaSDKPluginBPLibrary_FillZeroColorAllFramesRGB_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFramesName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillZeroColorAllFramesName(const class FString& AnimationName, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillZeroColorAllFramesName");

	Params::UChromaSDKPluginBPLibrary_FillZeroColorAllFramesName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFrames
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillZeroColorAllFrames(int32 AnimationId, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillZeroColorAllFrames");

	Params::UChromaSDKPluginBPLibrary_FillZeroColorAllFrames_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillZeroColor(int32 AnimationId, int32 FrameId, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillZeroColor");

	Params::UChromaSDKPluginBPLibrary_FillZeroColor_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.FrameId = FrameId;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdRGBColorsAllFramesRGBName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RedThreshold                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GreenThreshold                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blueThreshold                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillThresholdRGBColorsAllFramesRGBName(const class FString& AnimationName, int32 RedThreshold, int32 GreenThreshold, int32 blueThreshold, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillThresholdRGBColorsAllFramesRGBName");

	Params::UChromaSDKPluginBPLibrary_FillThresholdRGBColorsAllFramesRGBName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.RedThreshold = RedThreshold;
	Parms.GreenThreshold = GreenThreshold;
	Parms.blueThreshold = blueThreshold;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdRGBColorsAllFramesRGB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RedThreshold                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GreenThreshold                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blueThreshold                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillThresholdRGBColorsAllFramesRGB(int32 AnimationId, int32 RedThreshold, int32 GreenThreshold, int32 blueThreshold, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillThresholdRGBColorsAllFramesRGB");

	Params::UChromaSDKPluginBPLibrary_FillThresholdRGBColorsAllFramesRGB_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.RedThreshold = RedThreshold;
	Parms.GreenThreshold = GreenThreshold;
	Parms.blueThreshold = blueThreshold;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsRGBName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Threshold                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillThresholdColorsRGBName(const class FString& AnimationName, int32 FrameId, int32 Threshold, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillThresholdColorsRGBName");

	Params::UChromaSDKPluginBPLibrary_FillThresholdColorsRGBName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.FrameId = FrameId;
	Parms.Threshold = Threshold;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsRGB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Threshold                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillThresholdColorsRGB(int32 AnimationId, int32 FrameId, int32 Threshold, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillThresholdColorsRGB");

	Params::UChromaSDKPluginBPLibrary_FillThresholdColorsRGB_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.FrameId = FrameId;
	Parms.Threshold = Threshold;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsMinMaxAllFramesRGBName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MinThreshold                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MinRed                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MinGreen                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MinBlue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxThreshold                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxRed                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxGreen                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxBlue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillThresholdColorsMinMaxAllFramesRGBName(const class FString& AnimationName, int32 MinThreshold, int32 MinRed, int32 MinGreen, int32 MinBlue, int32 MaxThreshold, int32 MaxRed, int32 MaxGreen, int32 MaxBlue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillThresholdColorsMinMaxAllFramesRGBName");

	Params::UChromaSDKPluginBPLibrary_FillThresholdColorsMinMaxAllFramesRGBName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.MinThreshold = MinThreshold;
	Parms.MinRed = MinRed;
	Parms.MinGreen = MinGreen;
	Parms.MinBlue = MinBlue;
	Parms.MaxThreshold = MaxThreshold;
	Parms.MaxRed = MaxRed;
	Parms.MaxGreen = MaxGreen;
	Parms.MaxBlue = MaxBlue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsMinMaxAllFramesRGB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MinThreshold                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MinRed                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MinGreen                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MinBlue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxThreshold                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxRed                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxGreen                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxBlue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillThresholdColorsMinMaxAllFramesRGB(int32 AnimationId, int32 MinThreshold, int32 MinRed, int32 MinGreen, int32 MinBlue, int32 MaxThreshold, int32 MaxRed, int32 MaxGreen, int32 MaxBlue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillThresholdColorsMinMaxAllFramesRGB");

	Params::UChromaSDKPluginBPLibrary_FillThresholdColorsMinMaxAllFramesRGB_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.MinThreshold = MinThreshold;
	Parms.MinRed = MinRed;
	Parms.MinGreen = MinGreen;
	Parms.MinBlue = MinBlue;
	Parms.MaxThreshold = MaxThreshold;
	Parms.MaxRed = MaxRed;
	Parms.MaxGreen = MaxGreen;
	Parms.MaxBlue = MaxBlue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFramesRGBName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Threshold                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillThresholdColorsAllFramesRGBName(const class FString& AnimationName, int32 Threshold, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillThresholdColorsAllFramesRGBName");

	Params::UChromaSDKPluginBPLibrary_FillThresholdColorsAllFramesRGBName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.Threshold = Threshold;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFramesRGB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Threshold                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillThresholdColorsAllFramesRGB(int32 AnimationId, int32 Threshold, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillThresholdColorsAllFramesRGB");

	Params::UChromaSDKPluginBPLibrary_FillThresholdColorsAllFramesRGB_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.Threshold = Threshold;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFramesName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Threshold                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillThresholdColorsAllFramesName(const class FString& AnimationName, int32 Threshold, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillThresholdColorsAllFramesName");

	Params::UChromaSDKPluginBPLibrary_FillThresholdColorsAllFramesName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.Threshold = Threshold;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFrames
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Threshold                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillThresholdColorsAllFrames(int32 AnimationId, int32 Threshold, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillThresholdColorsAllFrames");

	Params::UChromaSDKPluginBPLibrary_FillThresholdColorsAllFrames_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.Threshold = Threshold;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillRandomColorsName(const class FString& AnimationName, int32 FrameId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillRandomColorsName");

	Params::UChromaSDKPluginBPLibrary_FillRandomColorsName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.FrameId = FrameId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhiteName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillRandomColorsBlackAndWhiteName(const class FString& AnimationName, int32 FrameId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillRandomColorsBlackAndWhiteName");

	Params::UChromaSDKPluginBPLibrary_FillRandomColorsBlackAndWhiteName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.FrameId = FrameId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhiteAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillRandomColorsBlackAndWhiteAllFramesName(const class FString& AnimationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillRandomColorsBlackAndWhiteAllFramesName");

	Params::UChromaSDKPluginBPLibrary_FillRandomColorsBlackAndWhiteAllFramesName_Params Parms{};

	Parms.AnimationName = AnimationName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhiteAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillRandomColorsBlackAndWhiteAllFrames(int32 AnimationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillRandomColorsBlackAndWhiteAllFrames");

	Params::UChromaSDKPluginBPLibrary_FillRandomColorsBlackAndWhiteAllFrames_Params Parms{};

	Parms.AnimationId = AnimationId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhite
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillRandomColorsBlackAndWhite(int32 AnimationId, int32 FrameId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillRandomColorsBlackAndWhite");

	Params::UChromaSDKPluginBPLibrary_FillRandomColorsBlackAndWhite_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.FrameId = FrameId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillRandomColorsAllFramesName(const class FString& AnimationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillRandomColorsAllFramesName");

	Params::UChromaSDKPluginBPLibrary_FillRandomColorsAllFramesName_Params Parms{};

	Parms.AnimationName = AnimationName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillRandomColorsAllFrames(int32 AnimationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillRandomColorsAllFrames");

	Params::UChromaSDKPluginBPLibrary_FillRandomColorsAllFrames_Params Parms{};

	Parms.AnimationId = AnimationId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColors
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillRandomColors(int32 AnimationId, int32 FrameId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillRandomColors");

	Params::UChromaSDKPluginBPLibrary_FillRandomColors_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.FrameId = FrameId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorRGBName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillNonZeroColorRGBName(const class FString& AnimationName, int32 FrameId, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillNonZeroColorRGBName");

	Params::UChromaSDKPluginBPLibrary_FillNonZeroColorRGBName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.FrameId = FrameId;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorRGB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillNonZeroColorRGB(int32 AnimationId, int32 FrameId, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillNonZeroColorRGB");

	Params::UChromaSDKPluginBPLibrary_FillNonZeroColorRGB_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.FrameId = FrameId;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillNonZeroColorName(const class FString& AnimationName, int32 FrameId, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillNonZeroColorName");

	Params::UChromaSDKPluginBPLibrary_FillNonZeroColorName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.FrameId = FrameId;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFramesRGBName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillNonZeroColorAllFramesRGBName(const class FString& AnimationName, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillNonZeroColorAllFramesRGBName");

	Params::UChromaSDKPluginBPLibrary_FillNonZeroColorAllFramesRGBName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFramesRGB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillNonZeroColorAllFramesRGB(int32 AnimationId, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillNonZeroColorAllFramesRGB");

	Params::UChromaSDKPluginBPLibrary_FillNonZeroColorAllFramesRGB_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFramesName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillNonZeroColorAllFramesName(const class FString& AnimationName, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillNonZeroColorAllFramesName");

	Params::UChromaSDKPluginBPLibrary_FillNonZeroColorAllFramesName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFrames
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillNonZeroColorAllFrames(int32 AnimationId, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillNonZeroColorAllFrames");

	Params::UChromaSDKPluginBPLibrary_FillNonZeroColorAllFrames_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillNonZeroColor(int32 AnimationId, int32 FrameId, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillNonZeroColor");

	Params::UChromaSDKPluginBPLibrary_FillNonZeroColor_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.FrameId = FrameId;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorRGBName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillColorRGBName(const class FString& AnimationName, int32 FrameId, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillColorRGBName");

	Params::UChromaSDKPluginBPLibrary_FillColorRGBName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.FrameId = FrameId;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorRGB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillColorRGB(int32 AnimationId, int32 FrameId, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillColorRGB");

	Params::UChromaSDKPluginBPLibrary_FillColorRGB_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.FrameId = FrameId;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillColorName(const class FString& AnimationName, int32 FrameId, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillColorName");

	Params::UChromaSDKPluginBPLibrary_FillColorName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.FrameId = FrameId;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFramesRGBName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillColorAllFramesRGBName(const class FString& AnimationName, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillColorAllFramesRGBName");

	Params::UChromaSDKPluginBPLibrary_FillColorAllFramesRGBName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFramesRGB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Red                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Green                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              blue                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillColorAllFramesRGB(int32 AnimationId, int32 Red, int32 Green, int32 blue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillColorAllFramesRGB");

	Params::UChromaSDKPluginBPLibrary_FillColorAllFramesRGB_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.Red = Red;
	Parms.Green = Green;
	Parms.blue = blue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFramesName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillColorAllFramesName(const class FString& AnimationName, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillColorAllFramesName");

	Params::UChromaSDKPluginBPLibrary_FillColorAllFramesName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFrames
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillColorAllFrames(int32 AnimationId, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillColorAllFrames");

	Params::UChromaSDKPluginBPLibrary_FillColorAllFrames_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FillColor(int32 AnimationId, int32 FrameId, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FillColor");

	Params::UChromaSDKPluginBPLibrary_FillColor_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.FrameId = FrameId;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeStartFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Fade                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FadeStartFramesName(const class FString& AnimationName, int32 Fade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FadeStartFramesName");

	Params::UChromaSDKPluginBPLibrary_FadeStartFramesName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.Fade = Fade;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeStartFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Fade                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FadeStartFrames(int32 AnimationId, int32 Fade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FadeStartFrames");

	Params::UChromaSDKPluginBPLibrary_FadeStartFrames_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.Fade = Fade;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeEndFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Fade                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FadeEndFramesName(const class FString& AnimationName, int32 Fade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FadeEndFramesName");

	Params::UChromaSDKPluginBPLibrary_FadeEndFramesName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.Fade = Fade;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeEndFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Fade                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::FadeEndFrames(int32 AnimationId, int32 Fade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "FadeEndFrames");

	Params::UChromaSDKPluginBPLibrary_FadeEndFrames_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.Fade = Fade;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateMirrorFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::DuplicateMirrorFramesName(const class FString& AnimationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "DuplicateMirrorFramesName");

	Params::UChromaSDKPluginBPLibrary_DuplicateMirrorFramesName_Params Parms{};

	Parms.AnimationName = AnimationName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateMirrorFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::DuplicateMirrorFrames(int32 AnimationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "DuplicateMirrorFrames");

	Params::UChromaSDKPluginBPLibrary_DuplicateMirrorFrames_Params Parms{};

	Parms.AnimationId = AnimationId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::DuplicateFramesName(const class FString& AnimationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "DuplicateFramesName");

	Params::UChromaSDKPluginBPLibrary_DuplicateFramesName_Params Parms{};

	Parms.AnimationName = AnimationName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::DuplicateFrames(int32 AnimationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "DuplicateFrames");

	Params::UChromaSDKPluginBPLibrary_DuplicateFrames_Params Parms{};

	Parms.AnimationId = AnimationId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFirstFrameName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameCount                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::DuplicateFirstFrameName(const class FString& AnimationName, int32 FrameCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "DuplicateFirstFrameName");

	Params::UChromaSDKPluginBPLibrary_DuplicateFirstFrameName_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.FrameCount = FrameCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFirstFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameCount                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::DuplicateFirstFrame(int32 AnimationId, int32 FrameCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "DuplicateFirstFrame");

	Params::UChromaSDKPluginBPLibrary_DuplicateFirstFrame_Params Parms{};

	Parms.AnimationId = AnimationId;
	Parms.FrameCount = FrameCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColorsBlackAndWhite2D
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EChromaSDKDevice2DEnum  Device                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FChromaSDKColors>    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<struct FChromaSDKColors> UChromaSDKPluginBPLibrary::CreateRandomColorsBlackAndWhite2D(enum class EChromaSDKDevice2DEnum Device)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CreateRandomColorsBlackAndWhite2D");

	Params::UChromaSDKPluginBPLibrary_CreateRandomColorsBlackAndWhite2D_Params Parms{};

	Parms.Device = Device;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColorsBlackAndWhite1D
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EChromaSDKDevice1DEnum  Device                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<struct FLinearColor> UChromaSDKPluginBPLibrary::CreateRandomColorsBlackAndWhite1D(enum class EChromaSDKDevice1DEnum Device)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CreateRandomColorsBlackAndWhite1D");

	Params::UChromaSDKPluginBPLibrary_CreateRandomColorsBlackAndWhite1D_Params Parms{};

	Parms.Device = Device;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors2D
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EChromaSDKDevice2DEnum  Device                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FChromaSDKColors>    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<struct FChromaSDKColors> UChromaSDKPluginBPLibrary::CreateRandomColors2D(enum class EChromaSDKDevice2DEnum Device)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CreateRandomColors2D");

	Params::UChromaSDKPluginBPLibrary_CreateRandomColors2D_Params Parms{};

	Parms.Device = Device;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors1D
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EChromaSDKDevice1DEnum  Device                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<struct FLinearColor> UChromaSDKPluginBPLibrary::CreateRandomColors1D(enum class EChromaSDKDevice1DEnum Device)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CreateRandomColors1D");

	Params::UChromaSDKPluginBPLibrary_CreateRandomColors1D_Params Parms{};

	Parms.Device = Device;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors2D
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EChromaSDKDevice2DEnum  Device                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FChromaSDKColors>    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<struct FChromaSDKColors> UChromaSDKPluginBPLibrary::CreateColors2D(enum class EChromaSDKDevice2DEnum Device)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CreateColors2D");

	Params::UChromaSDKPluginBPLibrary_CreateColors2D_Params Parms{};

	Parms.Device = Device;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors1D
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EChromaSDKDevice1DEnum  Device                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<struct FLinearColor> UChromaSDKPluginBPLibrary::CreateColors1D(enum class EChromaSDKDevice1DEnum Device)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CreateColors1D");

	Params::UChromaSDKPluginBPLibrary_CreateColors1D_Params Parms{};

	Parms.Device = Device;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SourceAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyNonZeroTargetAllKeysName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 FrameId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyNonZeroTargetAllKeysName");

	Params::UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeysName_Params Parms{};

	Parms.SourceAnimationName = SourceAnimationName;
	Parms.TargetAnimationName = TargetAnimationName;
	Parms.FrameId = FrameId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFramesOffsetName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SourceAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyNonZeroTargetAllKeysAllFramesOffsetName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyNonZeroTargetAllKeysAllFramesOffsetName");

	Params::UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeysAllFramesOffsetName_Params Parms{};

	Parms.SourceAnimationName = SourceAnimationName;
	Parms.TargetAnimationName = TargetAnimationName;
	Parms.Offset = Offset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFramesOffset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              SourceAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyNonZeroTargetAllKeysAllFramesOffset(int32 SourceAnimationId, int32 TargetAnimationId, int32 Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyNonZeroTargetAllKeysAllFramesOffset");

	Params::UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeysAllFramesOffset_Params Parms{};

	Parms.SourceAnimationId = SourceAnimationId;
	Parms.TargetAnimationId = TargetAnimationId;
	Parms.Offset = Offset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SourceAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyNonZeroTargetAllKeysAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyNonZeroTargetAllKeysAllFramesName");

	Params::UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeysAllFramesName_Params Parms{};

	Parms.SourceAnimationName = SourceAnimationName;
	Parms.TargetAnimationName = TargetAnimationName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              SourceAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyNonZeroTargetAllKeysAllFrames(int32 SourceAnimationId, int32 TargetAnimationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyNonZeroTargetAllKeysAllFrames");

	Params::UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeysAllFrames_Params Parms{};

	Parms.SourceAnimationId = SourceAnimationId;
	Parms.TargetAnimationId = TargetAnimationId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeys
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              SourceAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyNonZeroTargetAllKeys(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyNonZeroTargetAllKeys");

	Params::UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeys_Params Parms{};

	Parms.SourceAnimationId = SourceAnimationId;
	Parms.TargetAnimationId = TargetAnimationId;
	Parms.FrameId = FrameId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      SourceAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EChromaSDKKeyboardKey>Keys                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyNonZeroKeysColorName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 FrameIndex, TArray<enum class EChromaSDKKeyboardKey>& Keys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyNonZeroKeysColorName");

	Params::UChromaSDKPluginBPLibrary_CopyNonZeroKeysColorName_Params Parms{};

	Parms.SourceAnimationName = SourceAnimationName;
	Parms.TargetAnimationName = TargetAnimationName;
	Parms.FrameIndex = FrameIndex;
	Parms.Keys = Keys;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorAllFramesName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      SourceAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EChromaSDKKeyboardKey>Keys                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyNonZeroKeysColorAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, TArray<enum class EChromaSDKKeyboardKey>& Keys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyNonZeroKeysColorAllFramesName");

	Params::UChromaSDKPluginBPLibrary_CopyNonZeroKeysColorAllFramesName_Params Parms{};

	Parms.SourceAnimationName = SourceAnimationName;
	Parms.TargetAnimationName = TargetAnimationName;
	Parms.Keys = Keys;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorAllFrames
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              SourceAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EChromaSDKKeyboardKey>Keys                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyNonZeroKeysColorAllFrames(int32 SourceAnimationId, int32 TargetAnimationId, TArray<enum class EChromaSDKKeyboardKey>& Keys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyNonZeroKeysColorAllFrames");

	Params::UChromaSDKPluginBPLibrary_CopyNonZeroKeysColorAllFrames_Params Parms{};

	Parms.SourceAnimationId = SourceAnimationId;
	Parms.TargetAnimationId = TargetAnimationId;
	Parms.Keys = Keys;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              SourceAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EChromaSDKKeyboardKey>Keys                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyNonZeroKeysColor(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameIndex, TArray<enum class EChromaSDKKeyboardKey>& Keys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyNonZeroKeysColor");

	Params::UChromaSDKPluginBPLibrary_CopyNonZeroKeysColor_Params Parms{};

	Parms.SourceAnimationId = SourceAnimationId;
	Parms.TargetAnimationId = TargetAnimationId;
	Parms.FrameIndex = FrameIndex;
	Parms.Keys = Keys;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeyColorName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SourceAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EChromaSDKKeyboardKey   Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyNonZeroKeyColorName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 FrameIndex, enum class EChromaSDKKeyboardKey Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyNonZeroKeyColorName");

	Params::UChromaSDKPluginBPLibrary_CopyNonZeroKeyColorName_Params Parms{};

	Parms.SourceAnimationName = SourceAnimationName;
	Parms.TargetAnimationName = TargetAnimationName;
	Parms.FrameIndex = FrameIndex;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeyColor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              SourceAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EChromaSDKKeyboardKey   Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyNonZeroKeyColor(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameIndex, enum class EChromaSDKKeyboardKey Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyNonZeroKeyColor");

	Params::UChromaSDKPluginBPLibrary_CopyNonZeroKeyColor_Params Parms{};

	Parms.SourceAnimationId = SourceAnimationId;
	Parms.TargetAnimationId = TargetAnimationId;
	Parms.FrameIndex = FrameIndex;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysOffsetName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SourceAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyNonZeroAllKeysOffsetName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 FrameId, int32 Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyNonZeroAllKeysOffsetName");

	Params::UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysOffsetName_Params Parms{};

	Parms.SourceAnimationName = SourceAnimationName;
	Parms.TargetAnimationName = TargetAnimationName;
	Parms.FrameId = FrameId;
	Parms.Offset = Offset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysOffset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              SourceAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyNonZeroAllKeysOffset(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameId, int32 Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyNonZeroAllKeysOffset");

	Params::UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysOffset_Params Parms{};

	Parms.SourceAnimationId = SourceAnimationId;
	Parms.TargetAnimationId = TargetAnimationId;
	Parms.FrameId = FrameId;
	Parms.Offset = Offset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SourceAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyNonZeroAllKeysName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 FrameId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyNonZeroAllKeysName");

	Params::UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysName_Params Parms{};

	Parms.SourceAnimationName = SourceAnimationName;
	Parms.TargetAnimationName = TargetAnimationName;
	Parms.FrameId = FrameId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFramesOffsetName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SourceAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyNonZeroAllKeysAllFramesOffsetName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyNonZeroAllKeysAllFramesOffsetName");

	Params::UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysAllFramesOffsetName_Params Parms{};

	Parms.SourceAnimationName = SourceAnimationName;
	Parms.TargetAnimationName = TargetAnimationName;
	Parms.Offset = Offset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFramesOffset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              SourceAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyNonZeroAllKeysAllFramesOffset(int32 SourceAnimationId, int32 TargetAnimationId, int32 Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyNonZeroAllKeysAllFramesOffset");

	Params::UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysAllFramesOffset_Params Parms{};

	Parms.SourceAnimationId = SourceAnimationId;
	Parms.TargetAnimationId = TargetAnimationId;
	Parms.Offset = Offset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SourceAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyNonZeroAllKeysAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyNonZeroAllKeysAllFramesName");

	Params::UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysAllFramesName_Params Parms{};

	Parms.SourceAnimationName = SourceAnimationName;
	Parms.TargetAnimationName = TargetAnimationName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              SourceAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyNonZeroAllKeysAllFrames(int32 SourceAnimationId, int32 TargetAnimationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyNonZeroAllKeysAllFrames");

	Params::UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysAllFrames_Params Parms{};

	Parms.SourceAnimationId = SourceAnimationId;
	Parms.TargetAnimationId = TargetAnimationId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeys
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              SourceAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyNonZeroAllKeys(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyNonZeroAllKeys");

	Params::UChromaSDKPluginBPLibrary_CopyNonZeroAllKeys_Params Parms{};

	Parms.SourceAnimationId = SourceAnimationId;
	Parms.TargetAnimationId = TargetAnimationId;
	Parms.FrameId = FrameId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      SourceAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EChromaSDKKeyboardKey>Keys                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyKeysColorName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 FrameIndex, TArray<enum class EChromaSDKKeyboardKey>& Keys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyKeysColorName");

	Params::UChromaSDKPluginBPLibrary_CopyKeysColorName_Params Parms{};

	Parms.SourceAnimationName = SourceAnimationName;
	Parms.TargetAnimationName = TargetAnimationName;
	Parms.FrameIndex = FrameIndex;
	Parms.Keys = Keys;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorAllFramesName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      SourceAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EChromaSDKKeyboardKey>Keys                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyKeysColorAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, TArray<enum class EChromaSDKKeyboardKey>& Keys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyKeysColorAllFramesName");

	Params::UChromaSDKPluginBPLibrary_CopyKeysColorAllFramesName_Params Parms{};

	Parms.SourceAnimationName = SourceAnimationName;
	Parms.TargetAnimationName = TargetAnimationName;
	Parms.Keys = Keys;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorAllFrames
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              SourceAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EChromaSDKKeyboardKey>Keys                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyKeysColorAllFrames(int32 SourceAnimationId, int32 TargetAnimationId, TArray<enum class EChromaSDKKeyboardKey>& Keys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyKeysColorAllFrames");

	Params::UChromaSDKPluginBPLibrary_CopyKeysColorAllFrames_Params Parms{};

	Parms.SourceAnimationId = SourceAnimationId;
	Parms.TargetAnimationId = TargetAnimationId;
	Parms.Keys = Keys;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              SourceAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EChromaSDKKeyboardKey>Keys                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyKeysColor(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameIndex, TArray<enum class EChromaSDKKeyboardKey>& Keys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyKeysColor");

	Params::UChromaSDKPluginBPLibrary_CopyKeysColor_Params Parms{};

	Parms.SourceAnimationId = SourceAnimationId;
	Parms.TargetAnimationId = TargetAnimationId;
	Parms.FrameIndex = FrameIndex;
	Parms.Keys = Keys;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeyColorName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SourceAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EChromaSDKKeyboardKey   Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyKeyColorName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 FrameIndex, enum class EChromaSDKKeyboardKey Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyKeyColorName");

	Params::UChromaSDKPluginBPLibrary_CopyKeyColorName_Params Parms{};

	Parms.SourceAnimationName = SourceAnimationName;
	Parms.TargetAnimationName = TargetAnimationName;
	Parms.FrameIndex = FrameIndex;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeyColor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              SourceAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EChromaSDKKeyboardKey   Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyKeyColor(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameIndex, enum class EChromaSDKKeyboardKey Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyKeyColor");

	Params::UChromaSDKPluginBPLibrary_CopyKeyColor_Params Parms{};

	Parms.SourceAnimationId = SourceAnimationId;
	Parms.TargetAnimationId = TargetAnimationId;
	Parms.FrameIndex = FrameIndex;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAnimationName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SourceAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyAnimationName(const class FString& SourceAnimationName, const class FString& TargetAnimationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyAnimationName");

	Params::UChromaSDKPluginBPLibrary_CopyAnimationName_Params Parms{};

	Parms.SourceAnimationName = SourceAnimationName;
	Parms.TargetAnimationName = TargetAnimationName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAnimation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              SourceAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyAnimation(int32 SourceAnimationId, const class FString& TargetAnimationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyAnimation");

	Params::UChromaSDKPluginBPLibrary_CopyAnimation_Params Parms{};

	Parms.SourceAnimationId = SourceAnimationId;
	Parms.TargetAnimationName = TargetAnimationName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeysName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SourceAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyAllKeysName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 FrameId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyAllKeysName");

	Params::UChromaSDKPluginBPLibrary_CopyAllKeysName_Params Parms{};

	Parms.SourceAnimationName = SourceAnimationName;
	Parms.TargetAnimationName = TargetAnimationName;
	Parms.FrameId = FrameId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeysAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SourceAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyAllKeysAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyAllKeysAllFramesName");

	Params::UChromaSDKPluginBPLibrary_CopyAllKeysAllFramesName_Params Parms{};

	Parms.SourceAnimationName = SourceAnimationName;
	Parms.TargetAnimationName = TargetAnimationName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeysAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              SourceAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyAllKeysAllFrames(int32 SourceAnimationId, int32 TargetAnimationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyAllKeysAllFrames");

	Params::UChromaSDKPluginBPLibrary_CopyAllKeysAllFrames_Params Parms{};

	Parms.SourceAnimationId = SourceAnimationId;
	Parms.TargetAnimationId = TargetAnimationId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeys
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              SourceAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CopyAllKeys(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CopyAllKeys");

	Params::UChromaSDKPluginBPLibrary_CopyAllKeys_Params Parms{};

	Parms.SourceAnimationId = SourceAnimationId;
	Parms.TargetAnimationId = TargetAnimationId;
	Parms.FrameId = FrameId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CloseAnimationName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AnimationName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CloseAnimationName(const class FString& AnimationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CloseAnimationName");

	Params::UChromaSDKPluginBPLibrary_CloseAnimationName_Params Parms{};

	Parms.AnimationName = AnimationName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CloseAnimation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AnimationId                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::CloseAnimation(int32 AnimationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "CloseAnimation");

	Params::UChromaSDKPluginBPLibrary_CloseAnimation_Params Parms{};

	Parms.AnimationId = AnimationId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ClearAnimationType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EChromaSDKDeviceEnum    Device                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::ClearAnimationType(enum class EChromaSDKDeviceEnum Device)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "ClearAnimationType");

	Params::UChromaSDKPluginBPLibrary_ClearAnimationType_Params Parms{};

	Parms.Device = Device;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ClearAll
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UChromaSDKPluginBPLibrary::ClearAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "ClearAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKUnInit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChromaSDKPluginBPLibrary::ChromaSDKUnInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "ChromaSDKUnInit");

	Params::UChromaSDKPluginBPLibrary_ChromaSDKUnInit_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKSetEffect
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChromaSDKGuid              EffectId                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChromaSDKPluginBPLibrary::ChromaSDKSetEffect(struct FChromaSDKGuid& EffectId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "ChromaSDKSetEffect");

	Params::UChromaSDKPluginBPLibrary_ChromaSDKSetEffect_Params Parms{};

	Parms.EffectId = EffectId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKInit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChromaSDKPluginBPLibrary::ChromaSDKInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "ChromaSDKInit");

	Params::UChromaSDKPluginBPLibrary_ChromaSDKInit_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKDeleteEffect
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChromaSDKGuid              EffectId                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChromaSDKPluginBPLibrary::ChromaSDKDeleteEffect(struct FChromaSDKGuid& EffectId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "ChromaSDKDeleteEffect");

	Params::UChromaSDKPluginBPLibrary_ChromaSDKDeleteEffect_Params Parms{};

	Parms.EffectId = EffectId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectStatic
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// enum class EChromaSDKDeviceEnum    Device                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorParam                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FChromaSDKEffectResult      ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FChromaSDKEffectResult UChromaSDKPluginBPLibrary::ChromaSDKCreateEffectStatic(enum class EChromaSDKDeviceEnum Device, struct FLinearColor& ColorParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "ChromaSDKCreateEffectStatic");

	Params::UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectStatic_Params Parms{};

	Parms.Device = Device;
	Parms.ColorParam = ColorParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectNone
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EChromaSDKDeviceEnum    Device                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FChromaSDKEffectResult      ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FChromaSDKEffectResult UChromaSDKPluginBPLibrary::ChromaSDKCreateEffectNone(enum class EChromaSDKDeviceEnum Device)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "ChromaSDKCreateEffectNone");

	Params::UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectNone_Params Parms{};

	Parms.Device = Device;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectKeyboardCustom2D
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FChromaSDKColors>    Colors                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FChromaSDKEffectResult      ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FChromaSDKEffectResult UChromaSDKPluginBPLibrary::ChromaSDKCreateEffectKeyboardCustom2D(TArray<struct FChromaSDKColors>& Colors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "ChromaSDKCreateEffectKeyboardCustom2D");

	Params::UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectKeyboardCustom2D_Params Parms{};

	Parms.Colors = Colors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom2D
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EChromaSDKDevice2DEnum  Device                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FChromaSDKColors>    Colors                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FChromaSDKEffectResult      ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FChromaSDKEffectResult UChromaSDKPluginBPLibrary::ChromaSDKCreateEffectCustom2D(enum class EChromaSDKDevice2DEnum Device, TArray<struct FChromaSDKColors>& Colors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "ChromaSDKCreateEffectCustom2D");

	Params::UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectCustom2D_Params Parms{};

	Parms.Device = Device;
	Parms.Colors = Colors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom1D
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EChromaSDKDevice1DEnum  Device                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>        Colors                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FChromaSDKEffectResult      ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FChromaSDKEffectResult UChromaSDKPluginBPLibrary::ChromaSDKCreateEffectCustom1D(enum class EChromaSDKDevice1DEnum Device, TArray<struct FLinearColor>& Colors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "ChromaSDKCreateEffectCustom1D");

	Params::UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectCustom1D_Params Parms{};

	Parms.Device = Device;
	Parms.Colors = Colors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AppendAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SourceAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::AppendAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "AppendAllFramesName");

	Params::UChromaSDKPluginBPLibrary_AppendAllFramesName_Params Parms{};

	Parms.SourceAnimationName = SourceAnimationName;
	Parms.TargetAnimationName = TargetAnimationName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AppendAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              SourceAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::AppendAllFrames(int32 SourceAnimationId, int32 TargetAnimationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "AppendAllFrames");

	Params::UChromaSDKPluginBPLibrary_AppendAllFrames_Params Parms{};

	Parms.SourceAnimationId = SourceAnimationId;
	Parms.TargetAnimationId = TargetAnimationId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFramesOffsetName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SourceAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::AddNonZeroTargetAllKeysAllFramesOffsetName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "AddNonZeroTargetAllKeysAllFramesOffsetName");

	Params::UChromaSDKPluginBPLibrary_AddNonZeroTargetAllKeysAllFramesOffsetName_Params Parms{};

	Parms.SourceAnimationName = SourceAnimationName;
	Parms.TargetAnimationName = TargetAnimationName;
	Parms.Offset = Offset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFramesOffset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              SourceAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::AddNonZeroTargetAllKeysAllFramesOffset(int32 SourceAnimationId, int32 TargetAnimationId, int32 Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "AddNonZeroTargetAllKeysAllFramesOffset");

	Params::UChromaSDKPluginBPLibrary_AddNonZeroTargetAllKeysAllFramesOffset_Params Parms{};

	Parms.SourceAnimationId = SourceAnimationId;
	Parms.TargetAnimationId = TargetAnimationId;
	Parms.Offset = Offset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SourceAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::AddNonZeroTargetAllKeysAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "AddNonZeroTargetAllKeysAllFramesName");

	Params::UChromaSDKPluginBPLibrary_AddNonZeroTargetAllKeysAllFramesName_Params Parms{};

	Parms.SourceAnimationName = SourceAnimationName;
	Parms.TargetAnimationName = TargetAnimationName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              SourceAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::AddNonZeroTargetAllKeysAllFrames(int32 SourceAnimationId, int32 TargetAnimationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "AddNonZeroTargetAllKeysAllFrames");

	Params::UChromaSDKPluginBPLibrary_AddNonZeroTargetAllKeysAllFrames_Params Parms{};

	Parms.SourceAnimationId = SourceAnimationId;
	Parms.TargetAnimationId = TargetAnimationId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SourceAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::AddNonZeroAllKeysName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 FrameId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "AddNonZeroAllKeysName");

	Params::UChromaSDKPluginBPLibrary_AddNonZeroAllKeysName_Params Parms{};

	Parms.SourceAnimationName = SourceAnimationName;
	Parms.TargetAnimationName = TargetAnimationName;
	Parms.FrameId = FrameId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFramesOffsetName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SourceAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::AddNonZeroAllKeysAllFramesOffsetName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "AddNonZeroAllKeysAllFramesOffsetName");

	Params::UChromaSDKPluginBPLibrary_AddNonZeroAllKeysAllFramesOffsetName_Params Parms{};

	Parms.SourceAnimationName = SourceAnimationName;
	Parms.TargetAnimationName = TargetAnimationName;
	Parms.Offset = Offset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFramesOffset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              SourceAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::AddNonZeroAllKeysAllFramesOffset(int32 SourceAnimationId, int32 TargetAnimationId, int32 Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "AddNonZeroAllKeysAllFramesOffset");

	Params::UChromaSDKPluginBPLibrary_AddNonZeroAllKeysAllFramesOffset_Params Parms{};

	Parms.SourceAnimationId = SourceAnimationId;
	Parms.TargetAnimationId = TargetAnimationId;
	Parms.Offset = Offset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SourceAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetAnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::AddNonZeroAllKeysAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "AddNonZeroAllKeysAllFramesName");

	Params::UChromaSDKPluginBPLibrary_AddNonZeroAllKeysAllFramesName_Params Parms{};

	Parms.SourceAnimationName = SourceAnimationName;
	Parms.TargetAnimationName = TargetAnimationName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              SourceAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::AddNonZeroAllKeysAllFrames(int32 SourceAnimationId, int32 TargetAnimationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "AddNonZeroAllKeysAllFrames");

	Params::UChromaSDKPluginBPLibrary_AddNonZeroAllKeysAllFrames_Params Parms{};

	Parms.SourceAnimationId = SourceAnimationId;
	Parms.TargetAnimationId = TargetAnimationId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeys
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              SourceAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetAnimationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::AddNonZeroAllKeys(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromaSDKPluginBPLibrary", "AddNonZeroAllKeys");

	Params::UChromaSDKPluginBPLibrary_AddNonZeroAllKeys_Params Parms{};

	Parms.SourceAnimationId = SourceAnimationId;
	Parms.TargetAnimationId = TargetAnimationId;
	Parms.FrameId = FrameId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


